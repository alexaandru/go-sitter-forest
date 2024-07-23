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
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 82
#define SYMBOL_COUNT 189
#define ALIAS_COUNT 0
#define TOKEN_COUNT 126
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
  sym_warning_keyword = 122,
  sym_error_keyword = 123,
  sym_ldwarning_keyword = 124,
  sym_lderror_keyword = 125,
  sym_ca65 = 126,
  sym_string = 127,
  sym_inst = 128,
  sym_impl_addr_inst = 129,
  sym_acc_addr_inst = 130,
  sym_imm_addr_inst = 131,
  sym_abs_addr_inst = 132,
  sym_zp_addr_inst = 133,
  sym_abs_x_addr_inst = 134,
  sym_abs_y_addr_inst = 135,
  sym_zp_x_addr_inst = 136,
  sym_zp_y_addr_inst = 137,
  sym_ind_addr_inst = 138,
  sym_ind_x_addr_inst = 139,
  sym_ind_y_addr_inst = 140,
  sym_rel_addr_inst = 141,
  sym_operand_8 = 142,
  sym_bin_8 = 143,
  sym_hex_8 = 144,
  sym_operand_16 = 145,
  sym_bin_16 = 146,
  sym_hex_16 = 147,
  sym_expression = 148,
  sym_unary_pos_exp = 149,
  sym_unary_neg_exp = 150,
  sym_unary_not_exp = 151,
  sym_unary_lobyte_exp = 152,
  sym_unary_hibyte_exp = 153,
  sym_unary_bankbyte_exp = 154,
  sym_mult_exp = 155,
  sym_div_exp = 156,
  sym_mod_exp = 157,
  sym_bit_and_exp = 158,
  sym_bit_xor_exp = 159,
  sym_shift_l_exp = 160,
  sym_shift_r_exp = 161,
  sym_add_exp = 162,
  sym_sub_exp = 163,
  sym_bit_or_exp = 164,
  sym_eq_cmp = 165,
  sym_neq_cmp = 166,
  sym_lt_cmp = 167,
  sym_gt_cmp = 168,
  sym_lte_cmp = 169,
  sym_gte_cmp = 170,
  sym_bool_and_exp = 171,
  sym_bool_xor_exp = 172,
  sym_bool_or_exp = 173,
  sym_bool_not_exp = 174,
  sym_ctrl_cmd = 175,
  sym_addr_ctrl_cmd = 176,
  sym_align_ctrl_cmd = 177,
  sym_asciiz_ctrl_cmd = 178,
  sym_assert_ctrl_cmd = 179,
  sym_autoimport_ctrl_cmd = 180,
  sym_bankbytes_ctrl_cmd = 181,
  sym_byte_ctrl_cmd = 182,
  sym_plus_symbol = 183,
  sym_sub_symbol = 184,
  aux_sym_ca65_repeat1 = 185,
  aux_sym_addr_ctrl_cmd_repeat1 = 186,
  aux_sym_asciiz_ctrl_cmd_repeat1 = 187,
  aux_sym_bankbytes_ctrl_cmd_repeat1 = 188,
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
  [56] = 27,
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
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'L') ADVANCE(162);
      if (lookahead == '^') ADVANCE(470);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(119);
      if (lookahead == '|') ADVANCE(482);
      if (lookahead == '~') ADVANCE(462);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(181);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(188);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
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
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '8') ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
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
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(99);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
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
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(487);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(473);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(474);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(466);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(469);
      END_STATE();
    case 90:
      if (lookahead == 'H') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 93:
      if (lookahead == 'K') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(477);
      if (lookahead == 'R') ADVANCE(479);
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
      if (lookahead == 'R') ADVANCE(490);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(489);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(481);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(476);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(492);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(461);
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
          lookahead == 'a') ADVANCE(328);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(330);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(505);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(507);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(425);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(425);
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
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(508);
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
          lookahead == 'a') ADVANCE(328);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(330);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(366);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(147);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 151:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 152:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(298);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(302);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(312);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(320);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 162:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 168:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 169:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 176:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(290);
      END_STATE();
    case 177:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(152);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 179:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 180:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 182:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 191:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 192:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 193:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 194:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 195:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(280);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 203:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 204:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      END_STATE();
    case 205:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      END_STATE();
    case 206:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
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
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
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
          lookahead == '1') ADVANCE(124);
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
          lookahead == '1') ADVANCE(124);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_dec_8);
      if (lookahead == '5') ADVANCE(399);
      if (lookahead == 'h') ADVANCE(425);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
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
      ACCEPT_TOKEN(sym_warning_keyword);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_error_keyword);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_ldwarning_keyword);
      END_STATE();
    case 508:
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
  [82] = {.lex_state = 1},
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
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 257},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
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
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 257},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 9},
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
    [sym_warning_keyword] = ACTIONS(1),
    [sym_error_keyword] = ACTIONS(1),
    [sym_ldwarning_keyword] = ACTIONS(1),
    [sym_lderror_keyword] = ACTIONS(1),
  },
  [1] = {
    [sym_ca65] = STATE(148),
    [sym_inst] = STATE(43),
    [sym_impl_addr_inst] = STATE(62),
    [sym_acc_addr_inst] = STATE(62),
    [sym_imm_addr_inst] = STATE(62),
    [sym_abs_addr_inst] = STATE(62),
    [sym_zp_addr_inst] = STATE(62),
    [sym_abs_x_addr_inst] = STATE(62),
    [sym_abs_y_addr_inst] = STATE(62),
    [sym_zp_x_addr_inst] = STATE(62),
    [sym_zp_y_addr_inst] = STATE(62),
    [sym_ind_addr_inst] = STATE(62),
    [sym_ind_x_addr_inst] = STATE(62),
    [sym_ind_y_addr_inst] = STATE(62),
    [sym_rel_addr_inst] = STATE(62),
    [sym_ctrl_cmd] = STATE(43),
    [sym_addr_ctrl_cmd] = STATE(64),
    [sym_align_ctrl_cmd] = STATE(64),
    [sym_asciiz_ctrl_cmd] = STATE(64),
    [sym_assert_ctrl_cmd] = STATE(64),
    [sym_autoimport_ctrl_cmd] = STATE(64),
    [sym_bankbytes_ctrl_cmd] = STATE(64),
    [sym_byte_ctrl_cmd] = STATE(64),
    [aux_sym_ca65_repeat1] = STATE(43),
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
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [sym_adc_opcode] = ACTIONS(55),
    [sym_and_opcode] = ACTIONS(55),
    [sym_asl_opcode] = ACTIONS(55),
    [sym_bcc_opcode] = ACTIONS(55),
    [sym_bcs_opcode] = ACTIONS(55),
    [sym_beq_opcode] = ACTIONS(55),
    [sym_bit_opcode] = ACTIONS(55),
    [sym_bmi_opcode] = ACTIONS(55),
    [sym_bne_opcode] = ACTIONS(55),
    [sym_bpl_opcode] = ACTIONS(55),
    [sym_brk_opcode] = ACTIONS(55),
    [sym_bvc_opcode] = ACTIONS(55),
    [sym_bvs_opcode] = ACTIONS(55),
    [sym_clc_opcode] = ACTIONS(55),
    [sym_cld_opcode] = ACTIONS(55),
    [sym_cli_opcode] = ACTIONS(55),
    [sym_clv_opcode] = ACTIONS(55),
    [sym_cmp_opcode] = ACTIONS(55),
    [sym_cpx_opcode] = ACTIONS(55),
    [sym_cpy_opcode] = ACTIONS(55),
    [sym_dec_opcode] = ACTIONS(55),
    [sym_dex_opcode] = ACTIONS(55),
    [sym_dey_opcode] = ACTIONS(55),
    [sym_eor_opcode] = ACTIONS(55),
    [sym_inc_opcode] = ACTIONS(55),
    [sym_inx_opcode] = ACTIONS(55),
    [sym_iny_opcode] = ACTIONS(55),
    [sym_jmp_opcode] = ACTIONS(55),
    [sym_jsr_opcode] = ACTIONS(55),
    [sym_lda_opcode] = ACTIONS(55),
    [sym_ldx_opcode] = ACTIONS(55),
    [sym_ldy_opcode] = ACTIONS(55),
    [sym_lsr_opcode] = ACTIONS(55),
    [sym_nop_opcode] = ACTIONS(55),
    [sym_ora_opcode] = ACTIONS(55),
    [sym_pha_opcode] = ACTIONS(55),
    [sym_php_opcode] = ACTIONS(55),
    [sym_pla_opcode] = ACTIONS(55),
    [sym_plp_opcode] = ACTIONS(55),
    [sym_rol_opcode] = ACTIONS(55),
    [sym_ror_opcode] = ACTIONS(55),
    [sym_rti_opcode] = ACTIONS(55),
    [sym_rts_opcode] = ACTIONS(55),
    [sym_sbc_opcode] = ACTIONS(55),
    [sym_sec_opcode] = ACTIONS(55),
    [sym_sed_opcode] = ACTIONS(55),
    [sym_sei_opcode] = ACTIONS(55),
    [sym_sta_opcode] = ACTIONS(55),
    [sym_stx_opcode] = ACTIONS(55),
    [sym_sty_opcode] = ACTIONS(55),
    [sym_tax_opcode] = ACTIONS(55),
    [sym_tay_opcode] = ACTIONS(55),
    [sym_tsx_opcode] = ACTIONS(55),
    [sym_txa_opcode] = ACTIONS(55),
    [sym_tcs_opcode] = ACTIONS(55),
    [sym_tya_opcode] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_DOTXOR] = ACTIONS(95),
    [anon_sym_DOTOR] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [sym_a16_ctrl_cmd] = ACTIONS(53),
    [sym_a8_ctrl_cmd] = ACTIONS(53),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(53),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(53),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(53),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(53),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(53),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(53),
    [sym_bss_ctrl_cmd] = ACTIONS(53),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(53),
  },
  [3] = {
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
    [anon_sym_CARET] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_DOTMOD] = ACTIONS(99),
    [anon_sym_DOTBITAND] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_DOTBITXOR] = ACTIONS(99),
    [anon_sym_DOTSHL] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_DOTSHR] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
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
  },
  [4] = {
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
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
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
  },
  [5] = {
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
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
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
  },
  [6] = {
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
  },
  [7] = {
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
  },
  [8] = {
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
  },
  [9] = {
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
  },
  [10] = {
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
  },
  [11] = {
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
  },
  [12] = {
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
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_CARET] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [anon_sym_DOTMOD] = ACTIONS(135),
    [anon_sym_DOTBITAND] = ACTIONS(135),
    [anon_sym_AMP] = ACTIONS(137),
    [anon_sym_DOTBITXOR] = ACTIONS(135),
    [anon_sym_DOTSHL] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_DOTSHR] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_DOTBITOR] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_LT_GT] = ACTIONS(135),
    [anon_sym_LT_EQ] = ACTIONS(135),
    [anon_sym_GT_EQ] = ACTIONS(135),
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
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_adc_opcode] = ACTIONS(141),
    [sym_and_opcode] = ACTIONS(141),
    [sym_asl_opcode] = ACTIONS(141),
    [sym_bcc_opcode] = ACTIONS(141),
    [sym_bcs_opcode] = ACTIONS(141),
    [sym_beq_opcode] = ACTIONS(141),
    [sym_bit_opcode] = ACTIONS(141),
    [sym_bmi_opcode] = ACTIONS(141),
    [sym_bne_opcode] = ACTIONS(141),
    [sym_bpl_opcode] = ACTIONS(141),
    [sym_brk_opcode] = ACTIONS(141),
    [sym_bvc_opcode] = ACTIONS(141),
    [sym_bvs_opcode] = ACTIONS(141),
    [sym_clc_opcode] = ACTIONS(141),
    [sym_cld_opcode] = ACTIONS(141),
    [sym_cli_opcode] = ACTIONS(141),
    [sym_clv_opcode] = ACTIONS(141),
    [sym_cmp_opcode] = ACTIONS(141),
    [sym_cpx_opcode] = ACTIONS(141),
    [sym_cpy_opcode] = ACTIONS(141),
    [sym_dec_opcode] = ACTIONS(141),
    [sym_dex_opcode] = ACTIONS(141),
    [sym_dey_opcode] = ACTIONS(141),
    [sym_eor_opcode] = ACTIONS(141),
    [sym_inc_opcode] = ACTIONS(141),
    [sym_inx_opcode] = ACTIONS(141),
    [sym_iny_opcode] = ACTIONS(141),
    [sym_jmp_opcode] = ACTIONS(141),
    [sym_jsr_opcode] = ACTIONS(141),
    [sym_lda_opcode] = ACTIONS(141),
    [sym_ldx_opcode] = ACTIONS(141),
    [sym_ldy_opcode] = ACTIONS(141),
    [sym_lsr_opcode] = ACTIONS(141),
    [sym_nop_opcode] = ACTIONS(141),
    [sym_ora_opcode] = ACTIONS(141),
    [sym_pha_opcode] = ACTIONS(141),
    [sym_php_opcode] = ACTIONS(141),
    [sym_pla_opcode] = ACTIONS(141),
    [sym_plp_opcode] = ACTIONS(141),
    [sym_rol_opcode] = ACTIONS(141),
    [sym_ror_opcode] = ACTIONS(141),
    [sym_rti_opcode] = ACTIONS(141),
    [sym_rts_opcode] = ACTIONS(141),
    [sym_sbc_opcode] = ACTIONS(141),
    [sym_sec_opcode] = ACTIONS(141),
    [sym_sed_opcode] = ACTIONS(141),
    [sym_sei_opcode] = ACTIONS(141),
    [sym_sta_opcode] = ACTIONS(141),
    [sym_stx_opcode] = ACTIONS(141),
    [sym_sty_opcode] = ACTIONS(141),
    [sym_tax_opcode] = ACTIONS(141),
    [sym_tay_opcode] = ACTIONS(141),
    [sym_tsx_opcode] = ACTIONS(141),
    [sym_txa_opcode] = ACTIONS(141),
    [sym_tcs_opcode] = ACTIONS(141),
    [sym_tya_opcode] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_DOTMOD] = ACTIONS(139),
    [anon_sym_DOTBITAND] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_DOTBITXOR] = ACTIONS(139),
    [anon_sym_DOTSHL] = ACTIONS(139),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_DOTSHR] = ACTIONS(139),
    [anon_sym_GT_GT] = ACTIONS(139),
    [anon_sym_DOTBITOR] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LT_GT] = ACTIONS(139),
    [anon_sym_LT_EQ] = ACTIONS(139),
    [anon_sym_GT_EQ] = ACTIONS(139),
    [anon_sym_DOTAND] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_DOTXOR] = ACTIONS(139),
    [anon_sym_DOTOR] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [sym_a16_ctrl_cmd] = ACTIONS(139),
    [sym_a8_ctrl_cmd] = ACTIONS(139),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(139),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(139),
    [sym_bss_ctrl_cmd] = ACTIONS(139),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(139),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [sym_adc_opcode] = ACTIONS(145),
    [sym_and_opcode] = ACTIONS(145),
    [sym_asl_opcode] = ACTIONS(145),
    [sym_bcc_opcode] = ACTIONS(145),
    [sym_bcs_opcode] = ACTIONS(145),
    [sym_beq_opcode] = ACTIONS(145),
    [sym_bit_opcode] = ACTIONS(145),
    [sym_bmi_opcode] = ACTIONS(145),
    [sym_bne_opcode] = ACTIONS(145),
    [sym_bpl_opcode] = ACTIONS(145),
    [sym_brk_opcode] = ACTIONS(145),
    [sym_bvc_opcode] = ACTIONS(145),
    [sym_bvs_opcode] = ACTIONS(145),
    [sym_clc_opcode] = ACTIONS(145),
    [sym_cld_opcode] = ACTIONS(145),
    [sym_cli_opcode] = ACTIONS(145),
    [sym_clv_opcode] = ACTIONS(145),
    [sym_cmp_opcode] = ACTIONS(145),
    [sym_cpx_opcode] = ACTIONS(145),
    [sym_cpy_opcode] = ACTIONS(145),
    [sym_dec_opcode] = ACTIONS(145),
    [sym_dex_opcode] = ACTIONS(145),
    [sym_dey_opcode] = ACTIONS(145),
    [sym_eor_opcode] = ACTIONS(145),
    [sym_inc_opcode] = ACTIONS(145),
    [sym_inx_opcode] = ACTIONS(145),
    [sym_iny_opcode] = ACTIONS(145),
    [sym_jmp_opcode] = ACTIONS(145),
    [sym_jsr_opcode] = ACTIONS(145),
    [sym_lda_opcode] = ACTIONS(145),
    [sym_ldx_opcode] = ACTIONS(145),
    [sym_ldy_opcode] = ACTIONS(145),
    [sym_lsr_opcode] = ACTIONS(145),
    [sym_nop_opcode] = ACTIONS(145),
    [sym_ora_opcode] = ACTIONS(145),
    [sym_pha_opcode] = ACTIONS(145),
    [sym_php_opcode] = ACTIONS(145),
    [sym_pla_opcode] = ACTIONS(145),
    [sym_plp_opcode] = ACTIONS(145),
    [sym_rol_opcode] = ACTIONS(145),
    [sym_ror_opcode] = ACTIONS(145),
    [sym_rti_opcode] = ACTIONS(145),
    [sym_rts_opcode] = ACTIONS(145),
    [sym_sbc_opcode] = ACTIONS(145),
    [sym_sec_opcode] = ACTIONS(145),
    [sym_sed_opcode] = ACTIONS(145),
    [sym_sei_opcode] = ACTIONS(145),
    [sym_sta_opcode] = ACTIONS(145),
    [sym_stx_opcode] = ACTIONS(145),
    [sym_sty_opcode] = ACTIONS(145),
    [sym_tax_opcode] = ACTIONS(145),
    [sym_tay_opcode] = ACTIONS(145),
    [sym_tsx_opcode] = ACTIONS(145),
    [sym_txa_opcode] = ACTIONS(145),
    [sym_tcs_opcode] = ACTIONS(145),
    [sym_tya_opcode] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [anon_sym_DOTMOD] = ACTIONS(143),
    [anon_sym_DOTBITAND] = ACTIONS(143),
    [anon_sym_AMP] = ACTIONS(145),
    [anon_sym_DOTBITXOR] = ACTIONS(143),
    [anon_sym_DOTSHL] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_DOTSHR] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_DOTBITOR] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_LT_GT] = ACTIONS(143),
    [anon_sym_LT_EQ] = ACTIONS(143),
    [anon_sym_GT_EQ] = ACTIONS(143),
    [anon_sym_DOTAND] = ACTIONS(143),
    [anon_sym_AMP_AMP] = ACTIONS(143),
    [anon_sym_DOTXOR] = ACTIONS(143),
    [anon_sym_DOTOR] = ACTIONS(143),
    [anon_sym_PIPE_PIPE] = ACTIONS(143),
    [sym_a16_ctrl_cmd] = ACTIONS(143),
    [sym_a8_ctrl_cmd] = ACTIONS(143),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(143),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(143),
    [sym_bss_ctrl_cmd] = ACTIONS(143),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(143),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [sym_adc_opcode] = ACTIONS(149),
    [sym_and_opcode] = ACTIONS(149),
    [sym_asl_opcode] = ACTIONS(149),
    [sym_bcc_opcode] = ACTIONS(149),
    [sym_bcs_opcode] = ACTIONS(149),
    [sym_beq_opcode] = ACTIONS(149),
    [sym_bit_opcode] = ACTIONS(149),
    [sym_bmi_opcode] = ACTIONS(149),
    [sym_bne_opcode] = ACTIONS(149),
    [sym_bpl_opcode] = ACTIONS(149),
    [sym_brk_opcode] = ACTIONS(149),
    [sym_bvc_opcode] = ACTIONS(149),
    [sym_bvs_opcode] = ACTIONS(149),
    [sym_clc_opcode] = ACTIONS(149),
    [sym_cld_opcode] = ACTIONS(149),
    [sym_cli_opcode] = ACTIONS(149),
    [sym_clv_opcode] = ACTIONS(149),
    [sym_cmp_opcode] = ACTIONS(149),
    [sym_cpx_opcode] = ACTIONS(149),
    [sym_cpy_opcode] = ACTIONS(149),
    [sym_dec_opcode] = ACTIONS(149),
    [sym_dex_opcode] = ACTIONS(149),
    [sym_dey_opcode] = ACTIONS(149),
    [sym_eor_opcode] = ACTIONS(149),
    [sym_inc_opcode] = ACTIONS(149),
    [sym_inx_opcode] = ACTIONS(149),
    [sym_iny_opcode] = ACTIONS(149),
    [sym_jmp_opcode] = ACTIONS(149),
    [sym_jsr_opcode] = ACTIONS(149),
    [sym_lda_opcode] = ACTIONS(149),
    [sym_ldx_opcode] = ACTIONS(149),
    [sym_ldy_opcode] = ACTIONS(149),
    [sym_lsr_opcode] = ACTIONS(149),
    [sym_nop_opcode] = ACTIONS(149),
    [sym_ora_opcode] = ACTIONS(149),
    [sym_pha_opcode] = ACTIONS(149),
    [sym_php_opcode] = ACTIONS(149),
    [sym_pla_opcode] = ACTIONS(149),
    [sym_plp_opcode] = ACTIONS(149),
    [sym_rol_opcode] = ACTIONS(149),
    [sym_ror_opcode] = ACTIONS(149),
    [sym_rti_opcode] = ACTIONS(149),
    [sym_rts_opcode] = ACTIONS(149),
    [sym_sbc_opcode] = ACTIONS(149),
    [sym_sec_opcode] = ACTIONS(149),
    [sym_sed_opcode] = ACTIONS(149),
    [sym_sei_opcode] = ACTIONS(149),
    [sym_sta_opcode] = ACTIONS(149),
    [sym_stx_opcode] = ACTIONS(149),
    [sym_sty_opcode] = ACTIONS(149),
    [sym_tax_opcode] = ACTIONS(149),
    [sym_tay_opcode] = ACTIONS(149),
    [sym_tsx_opcode] = ACTIONS(149),
    [sym_txa_opcode] = ACTIONS(149),
    [sym_tcs_opcode] = ACTIONS(149),
    [sym_tya_opcode] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_LT_GT] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(147),
    [anon_sym_GT_EQ] = ACTIONS(147),
    [anon_sym_DOTAND] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_DOTXOR] = ACTIONS(147),
    [anon_sym_DOTOR] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [sym_a16_ctrl_cmd] = ACTIONS(147),
    [sym_a8_ctrl_cmd] = ACTIONS(147),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(147),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(147),
    [sym_bss_ctrl_cmd] = ACTIONS(147),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(147),
  },
  [16] = {
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
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
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
  },
  [17] = {
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
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(157),
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
  },
  [18] = {
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
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
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
  },
  [19] = {
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
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_DOTMOD] = ACTIONS(163),
    [anon_sym_DOTBITAND] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_DOTBITXOR] = ACTIONS(163),
    [anon_sym_DOTSHL] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_DOTSHR] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
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
  },
  [20] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(50),
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
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_DOTXOR] = ACTIONS(95),
    [anon_sym_DOTOR] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
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
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
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
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_DOTMOD] = ACTIONS(173),
    [anon_sym_DOTBITAND] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(175),
    [anon_sym_DOTBITXOR] = ACTIONS(173),
    [anon_sym_DOTSHL] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(173),
    [anon_sym_DOTSHR] = ACTIONS(173),
    [anon_sym_GT_GT] = ACTIONS(173),
    [anon_sym_DOTBITOR] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_LT_GT] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_DOTAND] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_DOTXOR] = ACTIONS(173),
    [anon_sym_DOTOR] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [sym_a16_ctrl_cmd] = ACTIONS(173),
    [sym_a8_ctrl_cmd] = ACTIONS(173),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(173),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(173),
    [sym_bss_ctrl_cmd] = ACTIONS(173),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(173),
  },
  [22] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(52),
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
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_DOTXOR] = ACTIONS(95),
    [anon_sym_DOTOR] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
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
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [sym_adc_opcode] = ACTIONS(183),
    [sym_and_opcode] = ACTIONS(183),
    [sym_asl_opcode] = ACTIONS(183),
    [sym_bcc_opcode] = ACTIONS(183),
    [sym_bcs_opcode] = ACTIONS(183),
    [sym_beq_opcode] = ACTIONS(183),
    [sym_bit_opcode] = ACTIONS(183),
    [sym_bmi_opcode] = ACTIONS(183),
    [sym_bne_opcode] = ACTIONS(183),
    [sym_bpl_opcode] = ACTIONS(183),
    [sym_brk_opcode] = ACTIONS(183),
    [sym_bvc_opcode] = ACTIONS(183),
    [sym_bvs_opcode] = ACTIONS(183),
    [sym_clc_opcode] = ACTIONS(183),
    [sym_cld_opcode] = ACTIONS(183),
    [sym_cli_opcode] = ACTIONS(183),
    [sym_clv_opcode] = ACTIONS(183),
    [sym_cmp_opcode] = ACTIONS(183),
    [sym_cpx_opcode] = ACTIONS(183),
    [sym_cpy_opcode] = ACTIONS(183),
    [sym_dec_opcode] = ACTIONS(183),
    [sym_dex_opcode] = ACTIONS(183),
    [sym_dey_opcode] = ACTIONS(183),
    [sym_eor_opcode] = ACTIONS(183),
    [sym_inc_opcode] = ACTIONS(183),
    [sym_inx_opcode] = ACTIONS(183),
    [sym_iny_opcode] = ACTIONS(183),
    [sym_jmp_opcode] = ACTIONS(183),
    [sym_jsr_opcode] = ACTIONS(183),
    [sym_lda_opcode] = ACTIONS(183),
    [sym_ldx_opcode] = ACTIONS(183),
    [sym_ldy_opcode] = ACTIONS(183),
    [sym_lsr_opcode] = ACTIONS(183),
    [sym_nop_opcode] = ACTIONS(183),
    [sym_ora_opcode] = ACTIONS(183),
    [sym_pha_opcode] = ACTIONS(183),
    [sym_php_opcode] = ACTIONS(183),
    [sym_pla_opcode] = ACTIONS(183),
    [sym_plp_opcode] = ACTIONS(183),
    [sym_rol_opcode] = ACTIONS(183),
    [sym_ror_opcode] = ACTIONS(183),
    [sym_rti_opcode] = ACTIONS(183),
    [sym_rts_opcode] = ACTIONS(183),
    [sym_sbc_opcode] = ACTIONS(183),
    [sym_sec_opcode] = ACTIONS(183),
    [sym_sed_opcode] = ACTIONS(183),
    [sym_sei_opcode] = ACTIONS(183),
    [sym_sta_opcode] = ACTIONS(183),
    [sym_stx_opcode] = ACTIONS(183),
    [sym_sty_opcode] = ACTIONS(183),
    [sym_tax_opcode] = ACTIONS(183),
    [sym_tay_opcode] = ACTIONS(183),
    [sym_tsx_opcode] = ACTIONS(183),
    [sym_txa_opcode] = ACTIONS(183),
    [sym_tcs_opcode] = ACTIONS(183),
    [sym_tya_opcode] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_DOTMOD] = ACTIONS(181),
    [anon_sym_DOTBITAND] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_DOTBITXOR] = ACTIONS(181),
    [anon_sym_DOTSHL] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_DOTSHR] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_DOTBITOR] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_LT_GT] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_DOTAND] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_DOTXOR] = ACTIONS(181),
    [anon_sym_DOTOR] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [sym_a16_ctrl_cmd] = ACTIONS(181),
    [sym_a8_ctrl_cmd] = ACTIONS(181),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(181),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(181),
    [sym_bss_ctrl_cmd] = ACTIONS(181),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(181),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [sym_adc_opcode] = ACTIONS(187),
    [sym_and_opcode] = ACTIONS(187),
    [sym_asl_opcode] = ACTIONS(187),
    [sym_bcc_opcode] = ACTIONS(187),
    [sym_bcs_opcode] = ACTIONS(187),
    [sym_beq_opcode] = ACTIONS(187),
    [sym_bit_opcode] = ACTIONS(187),
    [sym_bmi_opcode] = ACTIONS(187),
    [sym_bne_opcode] = ACTIONS(187),
    [sym_bpl_opcode] = ACTIONS(187),
    [sym_brk_opcode] = ACTIONS(187),
    [sym_bvc_opcode] = ACTIONS(187),
    [sym_bvs_opcode] = ACTIONS(187),
    [sym_clc_opcode] = ACTIONS(187),
    [sym_cld_opcode] = ACTIONS(187),
    [sym_cli_opcode] = ACTIONS(187),
    [sym_clv_opcode] = ACTIONS(187),
    [sym_cmp_opcode] = ACTIONS(187),
    [sym_cpx_opcode] = ACTIONS(187),
    [sym_cpy_opcode] = ACTIONS(187),
    [sym_dec_opcode] = ACTIONS(187),
    [sym_dex_opcode] = ACTIONS(187),
    [sym_dey_opcode] = ACTIONS(187),
    [sym_eor_opcode] = ACTIONS(187),
    [sym_inc_opcode] = ACTIONS(187),
    [sym_inx_opcode] = ACTIONS(187),
    [sym_iny_opcode] = ACTIONS(187),
    [sym_jmp_opcode] = ACTIONS(187),
    [sym_jsr_opcode] = ACTIONS(187),
    [sym_lda_opcode] = ACTIONS(187),
    [sym_ldx_opcode] = ACTIONS(187),
    [sym_ldy_opcode] = ACTIONS(187),
    [sym_lsr_opcode] = ACTIONS(187),
    [sym_nop_opcode] = ACTIONS(187),
    [sym_ora_opcode] = ACTIONS(187),
    [sym_pha_opcode] = ACTIONS(187),
    [sym_php_opcode] = ACTIONS(187),
    [sym_pla_opcode] = ACTIONS(187),
    [sym_plp_opcode] = ACTIONS(187),
    [sym_rol_opcode] = ACTIONS(187),
    [sym_ror_opcode] = ACTIONS(187),
    [sym_rti_opcode] = ACTIONS(187),
    [sym_rts_opcode] = ACTIONS(187),
    [sym_sbc_opcode] = ACTIONS(187),
    [sym_sec_opcode] = ACTIONS(187),
    [sym_sed_opcode] = ACTIONS(187),
    [sym_sei_opcode] = ACTIONS(187),
    [sym_sta_opcode] = ACTIONS(187),
    [sym_stx_opcode] = ACTIONS(187),
    [sym_sty_opcode] = ACTIONS(187),
    [sym_tax_opcode] = ACTIONS(187),
    [sym_tay_opcode] = ACTIONS(187),
    [sym_tsx_opcode] = ACTIONS(187),
    [sym_txa_opcode] = ACTIONS(187),
    [sym_tcs_opcode] = ACTIONS(187),
    [sym_tya_opcode] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_DOTXOR] = ACTIONS(185),
    [anon_sym_DOTOR] = ACTIONS(185),
    [anon_sym_PIPE_PIPE] = ACTIONS(185),
    [sym_a16_ctrl_cmd] = ACTIONS(185),
    [sym_a8_ctrl_cmd] = ACTIONS(185),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(185),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(185),
    [sym_bss_ctrl_cmd] = ACTIONS(185),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(185),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
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
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_DOTMOD] = ACTIONS(189),
    [anon_sym_DOTBITAND] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_DOTBITXOR] = ACTIONS(189),
    [anon_sym_DOTSHL] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_DOTSHR] = ACTIONS(189),
    [anon_sym_GT_GT] = ACTIONS(189),
    [anon_sym_DOTBITOR] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_LT_GT] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_DOTAND] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_DOTXOR] = ACTIONS(189),
    [anon_sym_DOTOR] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [sym_a16_ctrl_cmd] = ACTIONS(189),
    [sym_a8_ctrl_cmd] = ACTIONS(189),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(189),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(189),
    [sym_bss_ctrl_cmd] = ACTIONS(189),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(189),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [sym_adc_opcode] = ACTIONS(195),
    [sym_and_opcode] = ACTIONS(195),
    [sym_asl_opcode] = ACTIONS(195),
    [sym_bcc_opcode] = ACTIONS(195),
    [sym_bcs_opcode] = ACTIONS(195),
    [sym_beq_opcode] = ACTIONS(195),
    [sym_bit_opcode] = ACTIONS(195),
    [sym_bmi_opcode] = ACTIONS(195),
    [sym_bne_opcode] = ACTIONS(195),
    [sym_bpl_opcode] = ACTIONS(195),
    [sym_brk_opcode] = ACTIONS(195),
    [sym_bvc_opcode] = ACTIONS(195),
    [sym_bvs_opcode] = ACTIONS(195),
    [sym_clc_opcode] = ACTIONS(195),
    [sym_cld_opcode] = ACTIONS(195),
    [sym_cli_opcode] = ACTIONS(195),
    [sym_clv_opcode] = ACTIONS(195),
    [sym_cmp_opcode] = ACTIONS(195),
    [sym_cpx_opcode] = ACTIONS(195),
    [sym_cpy_opcode] = ACTIONS(195),
    [sym_dec_opcode] = ACTIONS(195),
    [sym_dex_opcode] = ACTIONS(195),
    [sym_dey_opcode] = ACTIONS(195),
    [sym_eor_opcode] = ACTIONS(195),
    [sym_inc_opcode] = ACTIONS(195),
    [sym_inx_opcode] = ACTIONS(195),
    [sym_iny_opcode] = ACTIONS(195),
    [sym_jmp_opcode] = ACTIONS(195),
    [sym_jsr_opcode] = ACTIONS(195),
    [sym_lda_opcode] = ACTIONS(195),
    [sym_ldx_opcode] = ACTIONS(195),
    [sym_ldy_opcode] = ACTIONS(195),
    [sym_lsr_opcode] = ACTIONS(195),
    [sym_nop_opcode] = ACTIONS(195),
    [sym_ora_opcode] = ACTIONS(195),
    [sym_pha_opcode] = ACTIONS(195),
    [sym_php_opcode] = ACTIONS(195),
    [sym_pla_opcode] = ACTIONS(195),
    [sym_plp_opcode] = ACTIONS(195),
    [sym_rol_opcode] = ACTIONS(195),
    [sym_ror_opcode] = ACTIONS(195),
    [sym_rti_opcode] = ACTIONS(195),
    [sym_rts_opcode] = ACTIONS(195),
    [sym_sbc_opcode] = ACTIONS(195),
    [sym_sec_opcode] = ACTIONS(195),
    [sym_sed_opcode] = ACTIONS(195),
    [sym_sei_opcode] = ACTIONS(195),
    [sym_sta_opcode] = ACTIONS(195),
    [sym_stx_opcode] = ACTIONS(195),
    [sym_sty_opcode] = ACTIONS(195),
    [sym_tax_opcode] = ACTIONS(195),
    [sym_tay_opcode] = ACTIONS(195),
    [sym_tsx_opcode] = ACTIONS(195),
    [sym_txa_opcode] = ACTIONS(195),
    [sym_tcs_opcode] = ACTIONS(195),
    [sym_tya_opcode] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_LT_GT] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_DOTAND] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_DOTXOR] = ACTIONS(193),
    [anon_sym_DOTOR] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [sym_a16_ctrl_cmd] = ACTIONS(193),
    [sym_a8_ctrl_cmd] = ACTIONS(193),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(193),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(193),
    [sym_bss_ctrl_cmd] = ACTIONS(193),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(193),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [sym_adc_opcode] = ACTIONS(200),
    [sym_and_opcode] = ACTIONS(200),
    [sym_asl_opcode] = ACTIONS(200),
    [sym_bcc_opcode] = ACTIONS(200),
    [sym_bcs_opcode] = ACTIONS(200),
    [sym_beq_opcode] = ACTIONS(200),
    [sym_bit_opcode] = ACTIONS(200),
    [sym_bmi_opcode] = ACTIONS(200),
    [sym_bne_opcode] = ACTIONS(200),
    [sym_bpl_opcode] = ACTIONS(200),
    [sym_brk_opcode] = ACTIONS(200),
    [sym_bvc_opcode] = ACTIONS(200),
    [sym_bvs_opcode] = ACTIONS(200),
    [sym_clc_opcode] = ACTIONS(200),
    [sym_cld_opcode] = ACTIONS(200),
    [sym_cli_opcode] = ACTIONS(200),
    [sym_clv_opcode] = ACTIONS(200),
    [sym_cmp_opcode] = ACTIONS(200),
    [sym_cpx_opcode] = ACTIONS(200),
    [sym_cpy_opcode] = ACTIONS(200),
    [sym_dec_opcode] = ACTIONS(200),
    [sym_dex_opcode] = ACTIONS(200),
    [sym_dey_opcode] = ACTIONS(200),
    [sym_eor_opcode] = ACTIONS(200),
    [sym_inc_opcode] = ACTIONS(200),
    [sym_inx_opcode] = ACTIONS(200),
    [sym_iny_opcode] = ACTIONS(200),
    [sym_jmp_opcode] = ACTIONS(200),
    [sym_jsr_opcode] = ACTIONS(200),
    [sym_lda_opcode] = ACTIONS(200),
    [sym_ldx_opcode] = ACTIONS(200),
    [sym_ldy_opcode] = ACTIONS(200),
    [sym_lsr_opcode] = ACTIONS(200),
    [sym_nop_opcode] = ACTIONS(200),
    [sym_ora_opcode] = ACTIONS(200),
    [sym_pha_opcode] = ACTIONS(200),
    [sym_php_opcode] = ACTIONS(200),
    [sym_pla_opcode] = ACTIONS(200),
    [sym_plp_opcode] = ACTIONS(200),
    [sym_rol_opcode] = ACTIONS(200),
    [sym_ror_opcode] = ACTIONS(200),
    [sym_rti_opcode] = ACTIONS(200),
    [sym_rts_opcode] = ACTIONS(200),
    [sym_sbc_opcode] = ACTIONS(200),
    [sym_sec_opcode] = ACTIONS(200),
    [sym_sed_opcode] = ACTIONS(200),
    [sym_sei_opcode] = ACTIONS(200),
    [sym_sta_opcode] = ACTIONS(200),
    [sym_stx_opcode] = ACTIONS(200),
    [sym_sty_opcode] = ACTIONS(200),
    [sym_tax_opcode] = ACTIONS(200),
    [sym_tay_opcode] = ACTIONS(200),
    [sym_tsx_opcode] = ACTIONS(200),
    [sym_txa_opcode] = ACTIONS(200),
    [sym_tcs_opcode] = ACTIONS(200),
    [sym_tya_opcode] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(200),
    [anon_sym_GT] = ACTIONS(200),
    [anon_sym_CARET] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_DOTMOD] = ACTIONS(197),
    [anon_sym_DOTBITAND] = ACTIONS(197),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_DOTBITXOR] = ACTIONS(197),
    [anon_sym_DOTSHL] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_DOTSHR] = ACTIONS(197),
    [anon_sym_GT_GT] = ACTIONS(197),
    [anon_sym_DOTBITOR] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_LT_GT] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_DOTAND] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_DOTXOR] = ACTIONS(197),
    [anon_sym_DOTOR] = ACTIONS(197),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [sym_a16_ctrl_cmd] = ACTIONS(197),
    [sym_a8_ctrl_cmd] = ACTIONS(197),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(197),
    [sym_bss_ctrl_cmd] = ACTIONS(197),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(197),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [sym_adc_opcode] = ACTIONS(205),
    [sym_and_opcode] = ACTIONS(205),
    [sym_asl_opcode] = ACTIONS(205),
    [sym_bcc_opcode] = ACTIONS(205),
    [sym_bcs_opcode] = ACTIONS(205),
    [sym_beq_opcode] = ACTIONS(205),
    [sym_bit_opcode] = ACTIONS(205),
    [sym_bmi_opcode] = ACTIONS(205),
    [sym_bne_opcode] = ACTIONS(205),
    [sym_bpl_opcode] = ACTIONS(205),
    [sym_brk_opcode] = ACTIONS(205),
    [sym_bvc_opcode] = ACTIONS(205),
    [sym_bvs_opcode] = ACTIONS(205),
    [sym_clc_opcode] = ACTIONS(205),
    [sym_cld_opcode] = ACTIONS(205),
    [sym_cli_opcode] = ACTIONS(205),
    [sym_clv_opcode] = ACTIONS(205),
    [sym_cmp_opcode] = ACTIONS(205),
    [sym_cpx_opcode] = ACTIONS(205),
    [sym_cpy_opcode] = ACTIONS(205),
    [sym_dec_opcode] = ACTIONS(205),
    [sym_dex_opcode] = ACTIONS(205),
    [sym_dey_opcode] = ACTIONS(205),
    [sym_eor_opcode] = ACTIONS(205),
    [sym_inc_opcode] = ACTIONS(205),
    [sym_inx_opcode] = ACTIONS(205),
    [sym_iny_opcode] = ACTIONS(205),
    [sym_jmp_opcode] = ACTIONS(205),
    [sym_jsr_opcode] = ACTIONS(205),
    [sym_lda_opcode] = ACTIONS(205),
    [sym_ldx_opcode] = ACTIONS(205),
    [sym_ldy_opcode] = ACTIONS(205),
    [sym_lsr_opcode] = ACTIONS(205),
    [sym_nop_opcode] = ACTIONS(205),
    [sym_ora_opcode] = ACTIONS(205),
    [sym_pha_opcode] = ACTIONS(205),
    [sym_php_opcode] = ACTIONS(205),
    [sym_pla_opcode] = ACTIONS(205),
    [sym_plp_opcode] = ACTIONS(205),
    [sym_rol_opcode] = ACTIONS(205),
    [sym_ror_opcode] = ACTIONS(205),
    [sym_rti_opcode] = ACTIONS(205),
    [sym_rts_opcode] = ACTIONS(205),
    [sym_sbc_opcode] = ACTIONS(205),
    [sym_sec_opcode] = ACTIONS(205),
    [sym_sed_opcode] = ACTIONS(205),
    [sym_sei_opcode] = ACTIONS(205),
    [sym_sta_opcode] = ACTIONS(205),
    [sym_stx_opcode] = ACTIONS(205),
    [sym_sty_opcode] = ACTIONS(205),
    [sym_tax_opcode] = ACTIONS(205),
    [sym_tay_opcode] = ACTIONS(205),
    [sym_tsx_opcode] = ACTIONS(205),
    [sym_txa_opcode] = ACTIONS(205),
    [sym_tcs_opcode] = ACTIONS(205),
    [sym_tya_opcode] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_DOTXOR] = ACTIONS(95),
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
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [sym_adc_opcode] = ACTIONS(209),
    [sym_and_opcode] = ACTIONS(209),
    [sym_asl_opcode] = ACTIONS(209),
    [sym_bcc_opcode] = ACTIONS(209),
    [sym_bcs_opcode] = ACTIONS(209),
    [sym_beq_opcode] = ACTIONS(209),
    [sym_bit_opcode] = ACTIONS(209),
    [sym_bmi_opcode] = ACTIONS(209),
    [sym_bne_opcode] = ACTIONS(209),
    [sym_bpl_opcode] = ACTIONS(209),
    [sym_brk_opcode] = ACTIONS(209),
    [sym_bvc_opcode] = ACTIONS(209),
    [sym_bvs_opcode] = ACTIONS(209),
    [sym_clc_opcode] = ACTIONS(209),
    [sym_cld_opcode] = ACTIONS(209),
    [sym_cli_opcode] = ACTIONS(209),
    [sym_clv_opcode] = ACTIONS(209),
    [sym_cmp_opcode] = ACTIONS(209),
    [sym_cpx_opcode] = ACTIONS(209),
    [sym_cpy_opcode] = ACTIONS(209),
    [sym_dec_opcode] = ACTIONS(209),
    [sym_dex_opcode] = ACTIONS(209),
    [sym_dey_opcode] = ACTIONS(209),
    [sym_eor_opcode] = ACTIONS(209),
    [sym_inc_opcode] = ACTIONS(209),
    [sym_inx_opcode] = ACTIONS(209),
    [sym_iny_opcode] = ACTIONS(209),
    [sym_jmp_opcode] = ACTIONS(209),
    [sym_jsr_opcode] = ACTIONS(209),
    [sym_lda_opcode] = ACTIONS(209),
    [sym_ldx_opcode] = ACTIONS(209),
    [sym_ldy_opcode] = ACTIONS(209),
    [sym_lsr_opcode] = ACTIONS(209),
    [sym_nop_opcode] = ACTIONS(209),
    [sym_ora_opcode] = ACTIONS(209),
    [sym_pha_opcode] = ACTIONS(209),
    [sym_php_opcode] = ACTIONS(209),
    [sym_pla_opcode] = ACTIONS(209),
    [sym_plp_opcode] = ACTIONS(209),
    [sym_rol_opcode] = ACTIONS(209),
    [sym_ror_opcode] = ACTIONS(209),
    [sym_rti_opcode] = ACTIONS(209),
    [sym_rts_opcode] = ACTIONS(209),
    [sym_sbc_opcode] = ACTIONS(209),
    [sym_sec_opcode] = ACTIONS(209),
    [sym_sed_opcode] = ACTIONS(209),
    [sym_sei_opcode] = ACTIONS(209),
    [sym_sta_opcode] = ACTIONS(209),
    [sym_stx_opcode] = ACTIONS(209),
    [sym_sty_opcode] = ACTIONS(209),
    [sym_tax_opcode] = ACTIONS(209),
    [sym_tay_opcode] = ACTIONS(209),
    [sym_tsx_opcode] = ACTIONS(209),
    [sym_txa_opcode] = ACTIONS(209),
    [sym_tcs_opcode] = ACTIONS(209),
    [sym_tya_opcode] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(207),
    [anon_sym_DOTXOR] = ACTIONS(207),
    [anon_sym_DOTOR] = ACTIONS(207),
    [anon_sym_PIPE_PIPE] = ACTIONS(207),
    [sym_a16_ctrl_cmd] = ACTIONS(207),
    [sym_a8_ctrl_cmd] = ACTIONS(207),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(207),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(207),
    [sym_bss_ctrl_cmd] = ACTIONS(207),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(207),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [sym_adc_opcode] = ACTIONS(213),
    [sym_and_opcode] = ACTIONS(213),
    [sym_asl_opcode] = ACTIONS(213),
    [sym_bcc_opcode] = ACTIONS(213),
    [sym_bcs_opcode] = ACTIONS(213),
    [sym_beq_opcode] = ACTIONS(213),
    [sym_bit_opcode] = ACTIONS(213),
    [sym_bmi_opcode] = ACTIONS(213),
    [sym_bne_opcode] = ACTIONS(213),
    [sym_bpl_opcode] = ACTIONS(213),
    [sym_brk_opcode] = ACTIONS(213),
    [sym_bvc_opcode] = ACTIONS(213),
    [sym_bvs_opcode] = ACTIONS(213),
    [sym_clc_opcode] = ACTIONS(213),
    [sym_cld_opcode] = ACTIONS(213),
    [sym_cli_opcode] = ACTIONS(213),
    [sym_clv_opcode] = ACTIONS(213),
    [sym_cmp_opcode] = ACTIONS(213),
    [sym_cpx_opcode] = ACTIONS(213),
    [sym_cpy_opcode] = ACTIONS(213),
    [sym_dec_opcode] = ACTIONS(213),
    [sym_dex_opcode] = ACTIONS(213),
    [sym_dey_opcode] = ACTIONS(213),
    [sym_eor_opcode] = ACTIONS(213),
    [sym_inc_opcode] = ACTIONS(213),
    [sym_inx_opcode] = ACTIONS(213),
    [sym_iny_opcode] = ACTIONS(213),
    [sym_jmp_opcode] = ACTIONS(213),
    [sym_jsr_opcode] = ACTIONS(213),
    [sym_lda_opcode] = ACTIONS(213),
    [sym_ldx_opcode] = ACTIONS(213),
    [sym_ldy_opcode] = ACTIONS(213),
    [sym_lsr_opcode] = ACTIONS(213),
    [sym_nop_opcode] = ACTIONS(213),
    [sym_ora_opcode] = ACTIONS(213),
    [sym_pha_opcode] = ACTIONS(213),
    [sym_php_opcode] = ACTIONS(213),
    [sym_pla_opcode] = ACTIONS(213),
    [sym_plp_opcode] = ACTIONS(213),
    [sym_rol_opcode] = ACTIONS(213),
    [sym_ror_opcode] = ACTIONS(213),
    [sym_rti_opcode] = ACTIONS(213),
    [sym_rts_opcode] = ACTIONS(213),
    [sym_sbc_opcode] = ACTIONS(213),
    [sym_sec_opcode] = ACTIONS(213),
    [sym_sed_opcode] = ACTIONS(213),
    [sym_sei_opcode] = ACTIONS(213),
    [sym_sta_opcode] = ACTIONS(213),
    [sym_stx_opcode] = ACTIONS(213),
    [sym_sty_opcode] = ACTIONS(213),
    [sym_tax_opcode] = ACTIONS(213),
    [sym_tay_opcode] = ACTIONS(213),
    [sym_tsx_opcode] = ACTIONS(213),
    [sym_txa_opcode] = ACTIONS(213),
    [sym_tcs_opcode] = ACTIONS(213),
    [sym_tya_opcode] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LT_GT] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(211),
    [anon_sym_DOTAND] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_DOTXOR] = ACTIONS(211),
    [anon_sym_DOTOR] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [sym_a16_ctrl_cmd] = ACTIONS(211),
    [sym_a8_ctrl_cmd] = ACTIONS(211),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(211),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(211),
    [sym_bss_ctrl_cmd] = ACTIONS(211),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(211),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [sym_adc_opcode] = ACTIONS(217),
    [sym_and_opcode] = ACTIONS(217),
    [sym_asl_opcode] = ACTIONS(217),
    [sym_bcc_opcode] = ACTIONS(217),
    [sym_bcs_opcode] = ACTIONS(217),
    [sym_beq_opcode] = ACTIONS(217),
    [sym_bit_opcode] = ACTIONS(217),
    [sym_bmi_opcode] = ACTIONS(217),
    [sym_bne_opcode] = ACTIONS(217),
    [sym_bpl_opcode] = ACTIONS(217),
    [sym_brk_opcode] = ACTIONS(217),
    [sym_bvc_opcode] = ACTIONS(217),
    [sym_bvs_opcode] = ACTIONS(217),
    [sym_clc_opcode] = ACTIONS(217),
    [sym_cld_opcode] = ACTIONS(217),
    [sym_cli_opcode] = ACTIONS(217),
    [sym_clv_opcode] = ACTIONS(217),
    [sym_cmp_opcode] = ACTIONS(217),
    [sym_cpx_opcode] = ACTIONS(217),
    [sym_cpy_opcode] = ACTIONS(217),
    [sym_dec_opcode] = ACTIONS(217),
    [sym_dex_opcode] = ACTIONS(217),
    [sym_dey_opcode] = ACTIONS(217),
    [sym_eor_opcode] = ACTIONS(217),
    [sym_inc_opcode] = ACTIONS(217),
    [sym_inx_opcode] = ACTIONS(217),
    [sym_iny_opcode] = ACTIONS(217),
    [sym_jmp_opcode] = ACTIONS(217),
    [sym_jsr_opcode] = ACTIONS(217),
    [sym_lda_opcode] = ACTIONS(217),
    [sym_ldx_opcode] = ACTIONS(217),
    [sym_ldy_opcode] = ACTIONS(217),
    [sym_lsr_opcode] = ACTIONS(217),
    [sym_nop_opcode] = ACTIONS(217),
    [sym_ora_opcode] = ACTIONS(217),
    [sym_pha_opcode] = ACTIONS(217),
    [sym_php_opcode] = ACTIONS(217),
    [sym_pla_opcode] = ACTIONS(217),
    [sym_plp_opcode] = ACTIONS(217),
    [sym_rol_opcode] = ACTIONS(217),
    [sym_ror_opcode] = ACTIONS(217),
    [sym_rti_opcode] = ACTIONS(217),
    [sym_rts_opcode] = ACTIONS(217),
    [sym_sbc_opcode] = ACTIONS(217),
    [sym_sec_opcode] = ACTIONS(217),
    [sym_sed_opcode] = ACTIONS(217),
    [sym_sei_opcode] = ACTIONS(217),
    [sym_sta_opcode] = ACTIONS(217),
    [sym_stx_opcode] = ACTIONS(217),
    [sym_sty_opcode] = ACTIONS(217),
    [sym_tax_opcode] = ACTIONS(217),
    [sym_tay_opcode] = ACTIONS(217),
    [sym_tsx_opcode] = ACTIONS(217),
    [sym_txa_opcode] = ACTIONS(217),
    [sym_tcs_opcode] = ACTIONS(217),
    [sym_tya_opcode] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_DOTMOD] = ACTIONS(215),
    [anon_sym_DOTBITAND] = ACTIONS(215),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_DOTBITXOR] = ACTIONS(215),
    [anon_sym_DOTSHL] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_DOTSHR] = ACTIONS(215),
    [anon_sym_GT_GT] = ACTIONS(215),
    [anon_sym_DOTBITOR] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_LT_GT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(215),
    [anon_sym_DOTAND] = ACTIONS(215),
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_DOTXOR] = ACTIONS(215),
    [anon_sym_DOTOR] = ACTIONS(215),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [sym_a16_ctrl_cmd] = ACTIONS(215),
    [sym_a8_ctrl_cmd] = ACTIONS(215),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(215),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(215),
    [sym_bss_ctrl_cmd] = ACTIONS(215),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(215),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [sym_adc_opcode] = ACTIONS(221),
    [sym_and_opcode] = ACTIONS(221),
    [sym_asl_opcode] = ACTIONS(221),
    [sym_bcc_opcode] = ACTIONS(221),
    [sym_bcs_opcode] = ACTIONS(221),
    [sym_beq_opcode] = ACTIONS(221),
    [sym_bit_opcode] = ACTIONS(221),
    [sym_bmi_opcode] = ACTIONS(221),
    [sym_bne_opcode] = ACTIONS(221),
    [sym_bpl_opcode] = ACTIONS(221),
    [sym_brk_opcode] = ACTIONS(221),
    [sym_bvc_opcode] = ACTIONS(221),
    [sym_bvs_opcode] = ACTIONS(221),
    [sym_clc_opcode] = ACTIONS(221),
    [sym_cld_opcode] = ACTIONS(221),
    [sym_cli_opcode] = ACTIONS(221),
    [sym_clv_opcode] = ACTIONS(221),
    [sym_cmp_opcode] = ACTIONS(221),
    [sym_cpx_opcode] = ACTIONS(221),
    [sym_cpy_opcode] = ACTIONS(221),
    [sym_dec_opcode] = ACTIONS(221),
    [sym_dex_opcode] = ACTIONS(221),
    [sym_dey_opcode] = ACTIONS(221),
    [sym_eor_opcode] = ACTIONS(221),
    [sym_inc_opcode] = ACTIONS(221),
    [sym_inx_opcode] = ACTIONS(221),
    [sym_iny_opcode] = ACTIONS(221),
    [sym_jmp_opcode] = ACTIONS(221),
    [sym_jsr_opcode] = ACTIONS(221),
    [sym_lda_opcode] = ACTIONS(221),
    [sym_ldx_opcode] = ACTIONS(221),
    [sym_ldy_opcode] = ACTIONS(221),
    [sym_lsr_opcode] = ACTIONS(221),
    [sym_nop_opcode] = ACTIONS(221),
    [sym_ora_opcode] = ACTIONS(221),
    [sym_pha_opcode] = ACTIONS(221),
    [sym_php_opcode] = ACTIONS(221),
    [sym_pla_opcode] = ACTIONS(221),
    [sym_plp_opcode] = ACTIONS(221),
    [sym_rol_opcode] = ACTIONS(221),
    [sym_ror_opcode] = ACTIONS(221),
    [sym_rti_opcode] = ACTIONS(221),
    [sym_rts_opcode] = ACTIONS(221),
    [sym_sbc_opcode] = ACTIONS(221),
    [sym_sec_opcode] = ACTIONS(221),
    [sym_sed_opcode] = ACTIONS(221),
    [sym_sei_opcode] = ACTIONS(221),
    [sym_sta_opcode] = ACTIONS(221),
    [sym_stx_opcode] = ACTIONS(221),
    [sym_sty_opcode] = ACTIONS(221),
    [sym_tax_opcode] = ACTIONS(221),
    [sym_tay_opcode] = ACTIONS(221),
    [sym_tsx_opcode] = ACTIONS(221),
    [sym_txa_opcode] = ACTIONS(221),
    [sym_tcs_opcode] = ACTIONS(221),
    [sym_tya_opcode] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LT_GT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_DOTAND] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_DOTXOR] = ACTIONS(219),
    [anon_sym_DOTOR] = ACTIONS(219),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [sym_a16_ctrl_cmd] = ACTIONS(219),
    [sym_a8_ctrl_cmd] = ACTIONS(219),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(219),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(219),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(219),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(219),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(219),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(219),
    [sym_bss_ctrl_cmd] = ACTIONS(219),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(219),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [sym_adc_opcode] = ACTIONS(225),
    [sym_and_opcode] = ACTIONS(225),
    [sym_asl_opcode] = ACTIONS(225),
    [sym_bcc_opcode] = ACTIONS(225),
    [sym_bcs_opcode] = ACTIONS(225),
    [sym_beq_opcode] = ACTIONS(225),
    [sym_bit_opcode] = ACTIONS(225),
    [sym_bmi_opcode] = ACTIONS(225),
    [sym_bne_opcode] = ACTIONS(225),
    [sym_bpl_opcode] = ACTIONS(225),
    [sym_brk_opcode] = ACTIONS(225),
    [sym_bvc_opcode] = ACTIONS(225),
    [sym_bvs_opcode] = ACTIONS(225),
    [sym_clc_opcode] = ACTIONS(225),
    [sym_cld_opcode] = ACTIONS(225),
    [sym_cli_opcode] = ACTIONS(225),
    [sym_clv_opcode] = ACTIONS(225),
    [sym_cmp_opcode] = ACTIONS(225),
    [sym_cpx_opcode] = ACTIONS(225),
    [sym_cpy_opcode] = ACTIONS(225),
    [sym_dec_opcode] = ACTIONS(225),
    [sym_dex_opcode] = ACTIONS(225),
    [sym_dey_opcode] = ACTIONS(225),
    [sym_eor_opcode] = ACTIONS(225),
    [sym_inc_opcode] = ACTIONS(225),
    [sym_inx_opcode] = ACTIONS(225),
    [sym_iny_opcode] = ACTIONS(225),
    [sym_jmp_opcode] = ACTIONS(225),
    [sym_jsr_opcode] = ACTIONS(225),
    [sym_lda_opcode] = ACTIONS(225),
    [sym_ldx_opcode] = ACTIONS(225),
    [sym_ldy_opcode] = ACTIONS(225),
    [sym_lsr_opcode] = ACTIONS(225),
    [sym_nop_opcode] = ACTIONS(225),
    [sym_ora_opcode] = ACTIONS(225),
    [sym_pha_opcode] = ACTIONS(225),
    [sym_php_opcode] = ACTIONS(225),
    [sym_pla_opcode] = ACTIONS(225),
    [sym_plp_opcode] = ACTIONS(225),
    [sym_rol_opcode] = ACTIONS(225),
    [sym_ror_opcode] = ACTIONS(225),
    [sym_rti_opcode] = ACTIONS(225),
    [sym_rts_opcode] = ACTIONS(225),
    [sym_sbc_opcode] = ACTIONS(225),
    [sym_sec_opcode] = ACTIONS(225),
    [sym_sed_opcode] = ACTIONS(225),
    [sym_sei_opcode] = ACTIONS(225),
    [sym_sta_opcode] = ACTIONS(225),
    [sym_stx_opcode] = ACTIONS(225),
    [sym_sty_opcode] = ACTIONS(225),
    [sym_tax_opcode] = ACTIONS(225),
    [sym_tay_opcode] = ACTIONS(225),
    [sym_tsx_opcode] = ACTIONS(225),
    [sym_txa_opcode] = ACTIONS(225),
    [sym_tcs_opcode] = ACTIONS(225),
    [sym_tya_opcode] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_DOTMOD] = ACTIONS(223),
    [anon_sym_DOTBITAND] = ACTIONS(223),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_DOTBITXOR] = ACTIONS(223),
    [anon_sym_DOTSHL] = ACTIONS(223),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_DOTSHR] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_DOTBITOR] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LT_GT] = ACTIONS(223),
    [anon_sym_LT_EQ] = ACTIONS(223),
    [anon_sym_GT_EQ] = ACTIONS(223),
    [anon_sym_DOTAND] = ACTIONS(223),
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_DOTXOR] = ACTIONS(223),
    [anon_sym_DOTOR] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_a16_ctrl_cmd] = ACTIONS(223),
    [sym_a8_ctrl_cmd] = ACTIONS(223),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(223),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(223),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(223),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(223),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(223),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(223),
    [sym_bss_ctrl_cmd] = ACTIONS(223),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(223),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [sym_adc_opcode] = ACTIONS(229),
    [sym_and_opcode] = ACTIONS(229),
    [sym_asl_opcode] = ACTIONS(229),
    [sym_bcc_opcode] = ACTIONS(229),
    [sym_bcs_opcode] = ACTIONS(229),
    [sym_beq_opcode] = ACTIONS(229),
    [sym_bit_opcode] = ACTIONS(229),
    [sym_bmi_opcode] = ACTIONS(229),
    [sym_bne_opcode] = ACTIONS(229),
    [sym_bpl_opcode] = ACTIONS(229),
    [sym_brk_opcode] = ACTIONS(229),
    [sym_bvc_opcode] = ACTIONS(229),
    [sym_bvs_opcode] = ACTIONS(229),
    [sym_clc_opcode] = ACTIONS(229),
    [sym_cld_opcode] = ACTIONS(229),
    [sym_cli_opcode] = ACTIONS(229),
    [sym_clv_opcode] = ACTIONS(229),
    [sym_cmp_opcode] = ACTIONS(229),
    [sym_cpx_opcode] = ACTIONS(229),
    [sym_cpy_opcode] = ACTIONS(229),
    [sym_dec_opcode] = ACTIONS(229),
    [sym_dex_opcode] = ACTIONS(229),
    [sym_dey_opcode] = ACTIONS(229),
    [sym_eor_opcode] = ACTIONS(229),
    [sym_inc_opcode] = ACTIONS(229),
    [sym_inx_opcode] = ACTIONS(229),
    [sym_iny_opcode] = ACTIONS(229),
    [sym_jmp_opcode] = ACTIONS(229),
    [sym_jsr_opcode] = ACTIONS(229),
    [sym_lda_opcode] = ACTIONS(229),
    [sym_ldx_opcode] = ACTIONS(229),
    [sym_ldy_opcode] = ACTIONS(229),
    [sym_lsr_opcode] = ACTIONS(229),
    [sym_nop_opcode] = ACTIONS(229),
    [sym_ora_opcode] = ACTIONS(229),
    [sym_pha_opcode] = ACTIONS(229),
    [sym_php_opcode] = ACTIONS(229),
    [sym_pla_opcode] = ACTIONS(229),
    [sym_plp_opcode] = ACTIONS(229),
    [sym_rol_opcode] = ACTIONS(229),
    [sym_ror_opcode] = ACTIONS(229),
    [sym_rti_opcode] = ACTIONS(229),
    [sym_rts_opcode] = ACTIONS(229),
    [sym_sbc_opcode] = ACTIONS(229),
    [sym_sec_opcode] = ACTIONS(229),
    [sym_sed_opcode] = ACTIONS(229),
    [sym_sei_opcode] = ACTIONS(229),
    [sym_sta_opcode] = ACTIONS(229),
    [sym_stx_opcode] = ACTIONS(229),
    [sym_sty_opcode] = ACTIONS(229),
    [sym_tax_opcode] = ACTIONS(229),
    [sym_tay_opcode] = ACTIONS(229),
    [sym_tsx_opcode] = ACTIONS(229),
    [sym_txa_opcode] = ACTIONS(229),
    [sym_tcs_opcode] = ACTIONS(229),
    [sym_tya_opcode] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_DOTMOD] = ACTIONS(227),
    [anon_sym_DOTBITAND] = ACTIONS(227),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_DOTBITXOR] = ACTIONS(227),
    [anon_sym_DOTSHL] = ACTIONS(227),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_DOTSHR] = ACTIONS(227),
    [anon_sym_GT_GT] = ACTIONS(227),
    [anon_sym_DOTBITOR] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_LT_GT] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(227),
    [anon_sym_DOTAND] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [anon_sym_DOTXOR] = ACTIONS(227),
    [anon_sym_DOTOR] = ACTIONS(227),
    [anon_sym_PIPE_PIPE] = ACTIONS(227),
    [sym_a16_ctrl_cmd] = ACTIONS(227),
    [sym_a8_ctrl_cmd] = ACTIONS(227),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(227),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(227),
    [sym_bss_ctrl_cmd] = ACTIONS(227),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(227),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [sym_adc_opcode] = ACTIONS(233),
    [sym_and_opcode] = ACTIONS(233),
    [sym_asl_opcode] = ACTIONS(233),
    [sym_bcc_opcode] = ACTIONS(233),
    [sym_bcs_opcode] = ACTIONS(233),
    [sym_beq_opcode] = ACTIONS(233),
    [sym_bit_opcode] = ACTIONS(233),
    [sym_bmi_opcode] = ACTIONS(233),
    [sym_bne_opcode] = ACTIONS(233),
    [sym_bpl_opcode] = ACTIONS(233),
    [sym_brk_opcode] = ACTIONS(233),
    [sym_bvc_opcode] = ACTIONS(233),
    [sym_bvs_opcode] = ACTIONS(233),
    [sym_clc_opcode] = ACTIONS(233),
    [sym_cld_opcode] = ACTIONS(233),
    [sym_cli_opcode] = ACTIONS(233),
    [sym_clv_opcode] = ACTIONS(233),
    [sym_cmp_opcode] = ACTIONS(233),
    [sym_cpx_opcode] = ACTIONS(233),
    [sym_cpy_opcode] = ACTIONS(233),
    [sym_dec_opcode] = ACTIONS(233),
    [sym_dex_opcode] = ACTIONS(233),
    [sym_dey_opcode] = ACTIONS(233),
    [sym_eor_opcode] = ACTIONS(233),
    [sym_inc_opcode] = ACTIONS(233),
    [sym_inx_opcode] = ACTIONS(233),
    [sym_iny_opcode] = ACTIONS(233),
    [sym_jmp_opcode] = ACTIONS(233),
    [sym_jsr_opcode] = ACTIONS(233),
    [sym_lda_opcode] = ACTIONS(233),
    [sym_ldx_opcode] = ACTIONS(233),
    [sym_ldy_opcode] = ACTIONS(233),
    [sym_lsr_opcode] = ACTIONS(233),
    [sym_nop_opcode] = ACTIONS(233),
    [sym_ora_opcode] = ACTIONS(233),
    [sym_pha_opcode] = ACTIONS(233),
    [sym_php_opcode] = ACTIONS(233),
    [sym_pla_opcode] = ACTIONS(233),
    [sym_plp_opcode] = ACTIONS(233),
    [sym_rol_opcode] = ACTIONS(233),
    [sym_ror_opcode] = ACTIONS(233),
    [sym_rti_opcode] = ACTIONS(233),
    [sym_rts_opcode] = ACTIONS(233),
    [sym_sbc_opcode] = ACTIONS(233),
    [sym_sec_opcode] = ACTIONS(233),
    [sym_sed_opcode] = ACTIONS(233),
    [sym_sei_opcode] = ACTIONS(233),
    [sym_sta_opcode] = ACTIONS(233),
    [sym_stx_opcode] = ACTIONS(233),
    [sym_sty_opcode] = ACTIONS(233),
    [sym_tax_opcode] = ACTIONS(233),
    [sym_tay_opcode] = ACTIONS(233),
    [sym_tsx_opcode] = ACTIONS(233),
    [sym_txa_opcode] = ACTIONS(233),
    [sym_tcs_opcode] = ACTIONS(233),
    [sym_tya_opcode] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_DOTMOD] = ACTIONS(231),
    [anon_sym_DOTBITAND] = ACTIONS(231),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_DOTBITXOR] = ACTIONS(231),
    [anon_sym_DOTSHL] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_DOTSHR] = ACTIONS(231),
    [anon_sym_GT_GT] = ACTIONS(231),
    [anon_sym_DOTBITOR] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LT_GT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_DOTAND] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_DOTXOR] = ACTIONS(231),
    [anon_sym_DOTOR] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_a16_ctrl_cmd] = ACTIONS(231),
    [sym_a8_ctrl_cmd] = ACTIONS(231),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(231),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(231),
    [sym_bss_ctrl_cmd] = ACTIONS(231),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(231),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [sym_adc_opcode] = ACTIONS(237),
    [sym_and_opcode] = ACTIONS(237),
    [sym_asl_opcode] = ACTIONS(237),
    [sym_bcc_opcode] = ACTIONS(237),
    [sym_bcs_opcode] = ACTIONS(237),
    [sym_beq_opcode] = ACTIONS(237),
    [sym_bit_opcode] = ACTIONS(237),
    [sym_bmi_opcode] = ACTIONS(237),
    [sym_bne_opcode] = ACTIONS(237),
    [sym_bpl_opcode] = ACTIONS(237),
    [sym_brk_opcode] = ACTIONS(237),
    [sym_bvc_opcode] = ACTIONS(237),
    [sym_bvs_opcode] = ACTIONS(237),
    [sym_clc_opcode] = ACTIONS(237),
    [sym_cld_opcode] = ACTIONS(237),
    [sym_cli_opcode] = ACTIONS(237),
    [sym_clv_opcode] = ACTIONS(237),
    [sym_cmp_opcode] = ACTIONS(237),
    [sym_cpx_opcode] = ACTIONS(237),
    [sym_cpy_opcode] = ACTIONS(237),
    [sym_dec_opcode] = ACTIONS(237),
    [sym_dex_opcode] = ACTIONS(237),
    [sym_dey_opcode] = ACTIONS(237),
    [sym_eor_opcode] = ACTIONS(237),
    [sym_inc_opcode] = ACTIONS(237),
    [sym_inx_opcode] = ACTIONS(237),
    [sym_iny_opcode] = ACTIONS(237),
    [sym_jmp_opcode] = ACTIONS(237),
    [sym_jsr_opcode] = ACTIONS(237),
    [sym_lda_opcode] = ACTIONS(237),
    [sym_ldx_opcode] = ACTIONS(237),
    [sym_ldy_opcode] = ACTIONS(237),
    [sym_lsr_opcode] = ACTIONS(237),
    [sym_nop_opcode] = ACTIONS(237),
    [sym_ora_opcode] = ACTIONS(237),
    [sym_pha_opcode] = ACTIONS(237),
    [sym_php_opcode] = ACTIONS(237),
    [sym_pla_opcode] = ACTIONS(237),
    [sym_plp_opcode] = ACTIONS(237),
    [sym_rol_opcode] = ACTIONS(237),
    [sym_ror_opcode] = ACTIONS(237),
    [sym_rti_opcode] = ACTIONS(237),
    [sym_rts_opcode] = ACTIONS(237),
    [sym_sbc_opcode] = ACTIONS(237),
    [sym_sec_opcode] = ACTIONS(237),
    [sym_sed_opcode] = ACTIONS(237),
    [sym_sei_opcode] = ACTIONS(237),
    [sym_sta_opcode] = ACTIONS(237),
    [sym_stx_opcode] = ACTIONS(237),
    [sym_sty_opcode] = ACTIONS(237),
    [sym_tax_opcode] = ACTIONS(237),
    [sym_tay_opcode] = ACTIONS(237),
    [sym_tsx_opcode] = ACTIONS(237),
    [sym_txa_opcode] = ACTIONS(237),
    [sym_tcs_opcode] = ACTIONS(237),
    [sym_tya_opcode] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_DOTMOD] = ACTIONS(235),
    [anon_sym_DOTBITAND] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_DOTBITXOR] = ACTIONS(235),
    [anon_sym_DOTSHL] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_DOTSHR] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_DOTBITOR] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_LT_GT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(235),
    [anon_sym_GT_EQ] = ACTIONS(235),
    [anon_sym_DOTAND] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_DOTXOR] = ACTIONS(235),
    [anon_sym_DOTOR] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [sym_a16_ctrl_cmd] = ACTIONS(235),
    [sym_a8_ctrl_cmd] = ACTIONS(235),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(235),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(235),
    [sym_bss_ctrl_cmd] = ACTIONS(235),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(235),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [sym_adc_opcode] = ACTIONS(241),
    [sym_and_opcode] = ACTIONS(241),
    [sym_asl_opcode] = ACTIONS(241),
    [sym_bcc_opcode] = ACTIONS(241),
    [sym_bcs_opcode] = ACTIONS(241),
    [sym_beq_opcode] = ACTIONS(241),
    [sym_bit_opcode] = ACTIONS(241),
    [sym_bmi_opcode] = ACTIONS(241),
    [sym_bne_opcode] = ACTIONS(241),
    [sym_bpl_opcode] = ACTIONS(241),
    [sym_brk_opcode] = ACTIONS(241),
    [sym_bvc_opcode] = ACTIONS(241),
    [sym_bvs_opcode] = ACTIONS(241),
    [sym_clc_opcode] = ACTIONS(241),
    [sym_cld_opcode] = ACTIONS(241),
    [sym_cli_opcode] = ACTIONS(241),
    [sym_clv_opcode] = ACTIONS(241),
    [sym_cmp_opcode] = ACTIONS(241),
    [sym_cpx_opcode] = ACTIONS(241),
    [sym_cpy_opcode] = ACTIONS(241),
    [sym_dec_opcode] = ACTIONS(241),
    [sym_dex_opcode] = ACTIONS(241),
    [sym_dey_opcode] = ACTIONS(241),
    [sym_eor_opcode] = ACTIONS(241),
    [sym_inc_opcode] = ACTIONS(241),
    [sym_inx_opcode] = ACTIONS(241),
    [sym_iny_opcode] = ACTIONS(241),
    [sym_jmp_opcode] = ACTIONS(241),
    [sym_jsr_opcode] = ACTIONS(241),
    [sym_lda_opcode] = ACTIONS(241),
    [sym_ldx_opcode] = ACTIONS(241),
    [sym_ldy_opcode] = ACTIONS(241),
    [sym_lsr_opcode] = ACTIONS(241),
    [sym_nop_opcode] = ACTIONS(241),
    [sym_ora_opcode] = ACTIONS(241),
    [sym_pha_opcode] = ACTIONS(241),
    [sym_php_opcode] = ACTIONS(241),
    [sym_pla_opcode] = ACTIONS(241),
    [sym_plp_opcode] = ACTIONS(241),
    [sym_rol_opcode] = ACTIONS(241),
    [sym_ror_opcode] = ACTIONS(241),
    [sym_rti_opcode] = ACTIONS(241),
    [sym_rts_opcode] = ACTIONS(241),
    [sym_sbc_opcode] = ACTIONS(241),
    [sym_sec_opcode] = ACTIONS(241),
    [sym_sed_opcode] = ACTIONS(241),
    [sym_sei_opcode] = ACTIONS(241),
    [sym_sta_opcode] = ACTIONS(241),
    [sym_stx_opcode] = ACTIONS(241),
    [sym_sty_opcode] = ACTIONS(241),
    [sym_tax_opcode] = ACTIONS(241),
    [sym_tay_opcode] = ACTIONS(241),
    [sym_tsx_opcode] = ACTIONS(241),
    [sym_txa_opcode] = ACTIONS(241),
    [sym_tcs_opcode] = ACTIONS(241),
    [sym_tya_opcode] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_DOTMOD] = ACTIONS(239),
    [anon_sym_DOTBITAND] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_DOTBITXOR] = ACTIONS(239),
    [anon_sym_DOTSHL] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_DOTSHR] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_DOTBITOR] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_LT_GT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(239),
    [anon_sym_DOTAND] = ACTIONS(239),
    [anon_sym_AMP_AMP] = ACTIONS(239),
    [anon_sym_DOTXOR] = ACTIONS(239),
    [anon_sym_DOTOR] = ACTIONS(239),
    [anon_sym_PIPE_PIPE] = ACTIONS(239),
    [sym_a16_ctrl_cmd] = ACTIONS(239),
    [sym_a8_ctrl_cmd] = ACTIONS(239),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(239),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(239),
    [sym_bss_ctrl_cmd] = ACTIONS(239),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(239),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [sym_adc_opcode] = ACTIONS(245),
    [sym_and_opcode] = ACTIONS(245),
    [sym_asl_opcode] = ACTIONS(245),
    [sym_bcc_opcode] = ACTIONS(245),
    [sym_bcs_opcode] = ACTIONS(245),
    [sym_beq_opcode] = ACTIONS(245),
    [sym_bit_opcode] = ACTIONS(245),
    [sym_bmi_opcode] = ACTIONS(245),
    [sym_bne_opcode] = ACTIONS(245),
    [sym_bpl_opcode] = ACTIONS(245),
    [sym_brk_opcode] = ACTIONS(245),
    [sym_bvc_opcode] = ACTIONS(245),
    [sym_bvs_opcode] = ACTIONS(245),
    [sym_clc_opcode] = ACTIONS(245),
    [sym_cld_opcode] = ACTIONS(245),
    [sym_cli_opcode] = ACTIONS(245),
    [sym_clv_opcode] = ACTIONS(245),
    [sym_cmp_opcode] = ACTIONS(245),
    [sym_cpx_opcode] = ACTIONS(245),
    [sym_cpy_opcode] = ACTIONS(245),
    [sym_dec_opcode] = ACTIONS(245),
    [sym_dex_opcode] = ACTIONS(245),
    [sym_dey_opcode] = ACTIONS(245),
    [sym_eor_opcode] = ACTIONS(245),
    [sym_inc_opcode] = ACTIONS(245),
    [sym_inx_opcode] = ACTIONS(245),
    [sym_iny_opcode] = ACTIONS(245),
    [sym_jmp_opcode] = ACTIONS(245),
    [sym_jsr_opcode] = ACTIONS(245),
    [sym_lda_opcode] = ACTIONS(245),
    [sym_ldx_opcode] = ACTIONS(245),
    [sym_ldy_opcode] = ACTIONS(245),
    [sym_lsr_opcode] = ACTIONS(245),
    [sym_nop_opcode] = ACTIONS(245),
    [sym_ora_opcode] = ACTIONS(245),
    [sym_pha_opcode] = ACTIONS(245),
    [sym_php_opcode] = ACTIONS(245),
    [sym_pla_opcode] = ACTIONS(245),
    [sym_plp_opcode] = ACTIONS(245),
    [sym_rol_opcode] = ACTIONS(245),
    [sym_ror_opcode] = ACTIONS(245),
    [sym_rti_opcode] = ACTIONS(245),
    [sym_rts_opcode] = ACTIONS(245),
    [sym_sbc_opcode] = ACTIONS(245),
    [sym_sec_opcode] = ACTIONS(245),
    [sym_sed_opcode] = ACTIONS(245),
    [sym_sei_opcode] = ACTIONS(245),
    [sym_sta_opcode] = ACTIONS(245),
    [sym_stx_opcode] = ACTIONS(245),
    [sym_sty_opcode] = ACTIONS(245),
    [sym_tax_opcode] = ACTIONS(245),
    [sym_tay_opcode] = ACTIONS(245),
    [sym_tsx_opcode] = ACTIONS(245),
    [sym_txa_opcode] = ACTIONS(245),
    [sym_tcs_opcode] = ACTIONS(245),
    [sym_tya_opcode] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_DOTMOD] = ACTIONS(243),
    [anon_sym_DOTBITAND] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_DOTBITXOR] = ACTIONS(243),
    [anon_sym_DOTSHL] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_DOTSHR] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_DOTBITOR] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_LT_GT] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_DOTAND] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_DOTXOR] = ACTIONS(243),
    [anon_sym_DOTOR] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [sym_a16_ctrl_cmd] = ACTIONS(243),
    [sym_a8_ctrl_cmd] = ACTIONS(243),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(243),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(243),
    [sym_bss_ctrl_cmd] = ACTIONS(243),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(243),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [sym_adc_opcode] = ACTIONS(249),
    [sym_and_opcode] = ACTIONS(249),
    [sym_asl_opcode] = ACTIONS(249),
    [sym_bcc_opcode] = ACTIONS(249),
    [sym_bcs_opcode] = ACTIONS(249),
    [sym_beq_opcode] = ACTIONS(249),
    [sym_bit_opcode] = ACTIONS(249),
    [sym_bmi_opcode] = ACTIONS(249),
    [sym_bne_opcode] = ACTIONS(249),
    [sym_bpl_opcode] = ACTIONS(249),
    [sym_brk_opcode] = ACTIONS(249),
    [sym_bvc_opcode] = ACTIONS(249),
    [sym_bvs_opcode] = ACTIONS(249),
    [sym_clc_opcode] = ACTIONS(249),
    [sym_cld_opcode] = ACTIONS(249),
    [sym_cli_opcode] = ACTIONS(249),
    [sym_clv_opcode] = ACTIONS(249),
    [sym_cmp_opcode] = ACTIONS(249),
    [sym_cpx_opcode] = ACTIONS(249),
    [sym_cpy_opcode] = ACTIONS(249),
    [sym_dec_opcode] = ACTIONS(249),
    [sym_dex_opcode] = ACTIONS(249),
    [sym_dey_opcode] = ACTIONS(249),
    [sym_eor_opcode] = ACTIONS(249),
    [sym_inc_opcode] = ACTIONS(249),
    [sym_inx_opcode] = ACTIONS(249),
    [sym_iny_opcode] = ACTIONS(249),
    [sym_jmp_opcode] = ACTIONS(249),
    [sym_jsr_opcode] = ACTIONS(249),
    [sym_lda_opcode] = ACTIONS(249),
    [sym_ldx_opcode] = ACTIONS(249),
    [sym_ldy_opcode] = ACTIONS(249),
    [sym_lsr_opcode] = ACTIONS(249),
    [sym_nop_opcode] = ACTIONS(249),
    [sym_ora_opcode] = ACTIONS(249),
    [sym_pha_opcode] = ACTIONS(249),
    [sym_php_opcode] = ACTIONS(249),
    [sym_pla_opcode] = ACTIONS(249),
    [sym_plp_opcode] = ACTIONS(249),
    [sym_rol_opcode] = ACTIONS(249),
    [sym_ror_opcode] = ACTIONS(249),
    [sym_rti_opcode] = ACTIONS(249),
    [sym_rts_opcode] = ACTIONS(249),
    [sym_sbc_opcode] = ACTIONS(249),
    [sym_sec_opcode] = ACTIONS(249),
    [sym_sed_opcode] = ACTIONS(249),
    [sym_sei_opcode] = ACTIONS(249),
    [sym_sta_opcode] = ACTIONS(249),
    [sym_stx_opcode] = ACTIONS(249),
    [sym_sty_opcode] = ACTIONS(249),
    [sym_tax_opcode] = ACTIONS(249),
    [sym_tay_opcode] = ACTIONS(249),
    [sym_tsx_opcode] = ACTIONS(249),
    [sym_txa_opcode] = ACTIONS(249),
    [sym_tcs_opcode] = ACTIONS(249),
    [sym_tya_opcode] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_DOTMOD] = ACTIONS(247),
    [anon_sym_DOTBITAND] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_DOTBITXOR] = ACTIONS(247),
    [anon_sym_DOTSHL] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_DOTSHR] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_DOTBITOR] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_LT_GT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(247),
    [anon_sym_DOTAND] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_DOTXOR] = ACTIONS(247),
    [anon_sym_DOTOR] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [sym_a16_ctrl_cmd] = ACTIONS(247),
    [sym_a8_ctrl_cmd] = ACTIONS(247),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(247),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(247),
    [sym_bss_ctrl_cmd] = ACTIONS(247),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(247),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [sym_adc_opcode] = ACTIONS(253),
    [sym_and_opcode] = ACTIONS(253),
    [sym_asl_opcode] = ACTIONS(253),
    [sym_bcc_opcode] = ACTIONS(253),
    [sym_bcs_opcode] = ACTIONS(253),
    [sym_beq_opcode] = ACTIONS(253),
    [sym_bit_opcode] = ACTIONS(253),
    [sym_bmi_opcode] = ACTIONS(253),
    [sym_bne_opcode] = ACTIONS(253),
    [sym_bpl_opcode] = ACTIONS(253),
    [sym_brk_opcode] = ACTIONS(253),
    [sym_bvc_opcode] = ACTIONS(253),
    [sym_bvs_opcode] = ACTIONS(253),
    [sym_clc_opcode] = ACTIONS(253),
    [sym_cld_opcode] = ACTIONS(253),
    [sym_cli_opcode] = ACTIONS(253),
    [sym_clv_opcode] = ACTIONS(253),
    [sym_cmp_opcode] = ACTIONS(253),
    [sym_cpx_opcode] = ACTIONS(253),
    [sym_cpy_opcode] = ACTIONS(253),
    [sym_dec_opcode] = ACTIONS(253),
    [sym_dex_opcode] = ACTIONS(253),
    [sym_dey_opcode] = ACTIONS(253),
    [sym_eor_opcode] = ACTIONS(253),
    [sym_inc_opcode] = ACTIONS(253),
    [sym_inx_opcode] = ACTIONS(253),
    [sym_iny_opcode] = ACTIONS(253),
    [sym_jmp_opcode] = ACTIONS(253),
    [sym_jsr_opcode] = ACTIONS(253),
    [sym_lda_opcode] = ACTIONS(253),
    [sym_ldx_opcode] = ACTIONS(253),
    [sym_ldy_opcode] = ACTIONS(253),
    [sym_lsr_opcode] = ACTIONS(253),
    [sym_nop_opcode] = ACTIONS(253),
    [sym_ora_opcode] = ACTIONS(253),
    [sym_pha_opcode] = ACTIONS(253),
    [sym_php_opcode] = ACTIONS(253),
    [sym_pla_opcode] = ACTIONS(253),
    [sym_plp_opcode] = ACTIONS(253),
    [sym_rol_opcode] = ACTIONS(253),
    [sym_ror_opcode] = ACTIONS(253),
    [sym_rti_opcode] = ACTIONS(253),
    [sym_rts_opcode] = ACTIONS(253),
    [sym_sbc_opcode] = ACTIONS(253),
    [sym_sec_opcode] = ACTIONS(253),
    [sym_sed_opcode] = ACTIONS(253),
    [sym_sei_opcode] = ACTIONS(253),
    [sym_sta_opcode] = ACTIONS(253),
    [sym_stx_opcode] = ACTIONS(253),
    [sym_sty_opcode] = ACTIONS(253),
    [sym_tax_opcode] = ACTIONS(253),
    [sym_tay_opcode] = ACTIONS(253),
    [sym_tsx_opcode] = ACTIONS(253),
    [sym_txa_opcode] = ACTIONS(253),
    [sym_tcs_opcode] = ACTIONS(253),
    [sym_tya_opcode] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_CARET] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_DOTMOD] = ACTIONS(251),
    [anon_sym_DOTBITAND] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(253),
    [anon_sym_DOTBITXOR] = ACTIONS(251),
    [anon_sym_DOTSHL] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_DOTSHR] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_DOTBITOR] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_LT_GT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(251),
    [anon_sym_DOTAND] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_DOTXOR] = ACTIONS(251),
    [anon_sym_DOTOR] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [sym_a16_ctrl_cmd] = ACTIONS(251),
    [sym_a8_ctrl_cmd] = ACTIONS(251),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(251),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(251),
    [sym_bss_ctrl_cmd] = ACTIONS(251),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(251),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_adc_opcode] = ACTIONS(257),
    [sym_and_opcode] = ACTIONS(257),
    [sym_asl_opcode] = ACTIONS(257),
    [sym_bcc_opcode] = ACTIONS(257),
    [sym_bcs_opcode] = ACTIONS(257),
    [sym_beq_opcode] = ACTIONS(257),
    [sym_bit_opcode] = ACTIONS(257),
    [sym_bmi_opcode] = ACTIONS(257),
    [sym_bne_opcode] = ACTIONS(257),
    [sym_bpl_opcode] = ACTIONS(257),
    [sym_brk_opcode] = ACTIONS(257),
    [sym_bvc_opcode] = ACTIONS(257),
    [sym_bvs_opcode] = ACTIONS(257),
    [sym_clc_opcode] = ACTIONS(257),
    [sym_cld_opcode] = ACTIONS(257),
    [sym_cli_opcode] = ACTIONS(257),
    [sym_clv_opcode] = ACTIONS(257),
    [sym_cmp_opcode] = ACTIONS(257),
    [sym_cpx_opcode] = ACTIONS(257),
    [sym_cpy_opcode] = ACTIONS(257),
    [sym_dec_opcode] = ACTIONS(257),
    [sym_dex_opcode] = ACTIONS(257),
    [sym_dey_opcode] = ACTIONS(257),
    [sym_eor_opcode] = ACTIONS(257),
    [sym_inc_opcode] = ACTIONS(257),
    [sym_inx_opcode] = ACTIONS(257),
    [sym_iny_opcode] = ACTIONS(257),
    [sym_jmp_opcode] = ACTIONS(257),
    [sym_jsr_opcode] = ACTIONS(257),
    [sym_lda_opcode] = ACTIONS(257),
    [sym_ldx_opcode] = ACTIONS(257),
    [sym_ldy_opcode] = ACTIONS(257),
    [sym_lsr_opcode] = ACTIONS(257),
    [sym_nop_opcode] = ACTIONS(257),
    [sym_ora_opcode] = ACTIONS(257),
    [sym_pha_opcode] = ACTIONS(257),
    [sym_php_opcode] = ACTIONS(257),
    [sym_pla_opcode] = ACTIONS(257),
    [sym_plp_opcode] = ACTIONS(257),
    [sym_rol_opcode] = ACTIONS(257),
    [sym_ror_opcode] = ACTIONS(257),
    [sym_rti_opcode] = ACTIONS(257),
    [sym_rts_opcode] = ACTIONS(257),
    [sym_sbc_opcode] = ACTIONS(257),
    [sym_sec_opcode] = ACTIONS(257),
    [sym_sed_opcode] = ACTIONS(257),
    [sym_sei_opcode] = ACTIONS(257),
    [sym_sta_opcode] = ACTIONS(257),
    [sym_stx_opcode] = ACTIONS(257),
    [sym_sty_opcode] = ACTIONS(257),
    [sym_tax_opcode] = ACTIONS(257),
    [sym_tay_opcode] = ACTIONS(257),
    [sym_tsx_opcode] = ACTIONS(257),
    [sym_txa_opcode] = ACTIONS(257),
    [sym_tcs_opcode] = ACTIONS(257),
    [sym_tya_opcode] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_DOTMOD] = ACTIONS(71),
    [anon_sym_DOTBITAND] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_DOTBITXOR] = ACTIONS(65),
    [anon_sym_DOTSHL] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_DOTSHR] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_DOTBITOR] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_DOTAND] = ACTIONS(93),
    [anon_sym_AMP_AMP] = ACTIONS(93),
    [anon_sym_DOTXOR] = ACTIONS(95),
    [anon_sym_DOTOR] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [sym_a16_ctrl_cmd] = ACTIONS(255),
    [sym_a8_ctrl_cmd] = ACTIONS(255),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(255),
    [sym_bss_ctrl_cmd] = ACTIONS(255),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(255),
  },
  [42] = {
    [sym_inst] = STATE(42),
    [sym_impl_addr_inst] = STATE(62),
    [sym_acc_addr_inst] = STATE(62),
    [sym_imm_addr_inst] = STATE(62),
    [sym_abs_addr_inst] = STATE(62),
    [sym_zp_addr_inst] = STATE(62),
    [sym_abs_x_addr_inst] = STATE(62),
    [sym_abs_y_addr_inst] = STATE(62),
    [sym_zp_x_addr_inst] = STATE(62),
    [sym_zp_y_addr_inst] = STATE(62),
    [sym_ind_addr_inst] = STATE(62),
    [sym_ind_x_addr_inst] = STATE(62),
    [sym_ind_y_addr_inst] = STATE(62),
    [sym_rel_addr_inst] = STATE(62),
    [sym_ctrl_cmd] = STATE(42),
    [sym_addr_ctrl_cmd] = STATE(64),
    [sym_align_ctrl_cmd] = STATE(64),
    [sym_asciiz_ctrl_cmd] = STATE(64),
    [sym_assert_ctrl_cmd] = STATE(64),
    [sym_autoimport_ctrl_cmd] = STATE(64),
    [sym_bankbytes_ctrl_cmd] = STATE(64),
    [sym_byte_ctrl_cmd] = STATE(64),
    [aux_sym_ca65_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(261),
    [sym_adc_opcode] = ACTIONS(264),
    [sym_and_opcode] = ACTIONS(264),
    [sym_asl_opcode] = ACTIONS(267),
    [sym_bcc_opcode] = ACTIONS(270),
    [sym_bcs_opcode] = ACTIONS(270),
    [sym_beq_opcode] = ACTIONS(270),
    [sym_bit_opcode] = ACTIONS(273),
    [sym_bmi_opcode] = ACTIONS(270),
    [sym_bne_opcode] = ACTIONS(270),
    [sym_bpl_opcode] = ACTIONS(270),
    [sym_brk_opcode] = ACTIONS(276),
    [sym_bvc_opcode] = ACTIONS(270),
    [sym_bvs_opcode] = ACTIONS(270),
    [sym_clc_opcode] = ACTIONS(276),
    [sym_cld_opcode] = ACTIONS(276),
    [sym_cli_opcode] = ACTIONS(276),
    [sym_clv_opcode] = ACTIONS(276),
    [sym_cmp_opcode] = ACTIONS(264),
    [sym_cpx_opcode] = ACTIONS(279),
    [sym_cpy_opcode] = ACTIONS(279),
    [sym_dec_opcode] = ACTIONS(282),
    [sym_dex_opcode] = ACTIONS(276),
    [sym_dey_opcode] = ACTIONS(276),
    [sym_eor_opcode] = ACTIONS(264),
    [sym_inc_opcode] = ACTIONS(282),
    [sym_inx_opcode] = ACTIONS(276),
    [sym_iny_opcode] = ACTIONS(276),
    [sym_jmp_opcode] = ACTIONS(285),
    [sym_jsr_opcode] = ACTIONS(288),
    [sym_lda_opcode] = ACTIONS(264),
    [sym_ldx_opcode] = ACTIONS(291),
    [sym_ldy_opcode] = ACTIONS(294),
    [sym_lsr_opcode] = ACTIONS(294),
    [sym_nop_opcode] = ACTIONS(276),
    [sym_ora_opcode] = ACTIONS(264),
    [sym_pha_opcode] = ACTIONS(276),
    [sym_php_opcode] = ACTIONS(276),
    [sym_pla_opcode] = ACTIONS(276),
    [sym_plp_opcode] = ACTIONS(276),
    [sym_rol_opcode] = ACTIONS(267),
    [sym_ror_opcode] = ACTIONS(267),
    [sym_rti_opcode] = ACTIONS(276),
    [sym_rts_opcode] = ACTIONS(276),
    [sym_sbc_opcode] = ACTIONS(264),
    [sym_sec_opcode] = ACTIONS(276),
    [sym_sed_opcode] = ACTIONS(276),
    [sym_sei_opcode] = ACTIONS(276),
    [sym_sta_opcode] = ACTIONS(297),
    [sym_stx_opcode] = ACTIONS(300),
    [sym_sty_opcode] = ACTIONS(303),
    [sym_tax_opcode] = ACTIONS(276),
    [sym_tay_opcode] = ACTIONS(276),
    [sym_tsx_opcode] = ACTIONS(276),
    [sym_txa_opcode] = ACTIONS(276),
    [sym_tcs_opcode] = ACTIONS(276),
    [sym_tya_opcode] = ACTIONS(276),
    [sym_a16_ctrl_cmd] = ACTIONS(306),
    [sym_a8_ctrl_cmd] = ACTIONS(306),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(309),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(312),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(315),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(318),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(321),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(324),
    [sym_bss_ctrl_cmd] = ACTIONS(306),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(327),
  },
  [43] = {
    [sym_inst] = STATE(42),
    [sym_impl_addr_inst] = STATE(62),
    [sym_acc_addr_inst] = STATE(62),
    [sym_imm_addr_inst] = STATE(62),
    [sym_abs_addr_inst] = STATE(62),
    [sym_zp_addr_inst] = STATE(62),
    [sym_abs_x_addr_inst] = STATE(62),
    [sym_abs_y_addr_inst] = STATE(62),
    [sym_zp_x_addr_inst] = STATE(62),
    [sym_zp_y_addr_inst] = STATE(62),
    [sym_ind_addr_inst] = STATE(62),
    [sym_ind_x_addr_inst] = STATE(62),
    [sym_ind_y_addr_inst] = STATE(62),
    [sym_rel_addr_inst] = STATE(62),
    [sym_ctrl_cmd] = STATE(42),
    [sym_addr_ctrl_cmd] = STATE(64),
    [sym_align_ctrl_cmd] = STATE(64),
    [sym_asciiz_ctrl_cmd] = STATE(64),
    [sym_assert_ctrl_cmd] = STATE(64),
    [sym_autoimport_ctrl_cmd] = STATE(64),
    [sym_bankbytes_ctrl_cmd] = STATE(64),
    [sym_byte_ctrl_cmd] = STATE(64),
    [aux_sym_ca65_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(332),
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
  },
  [44] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_adc_opcode] = ACTIONS(338),
    [sym_and_opcode] = ACTIONS(338),
    [sym_asl_opcode] = ACTIONS(338),
    [sym_bcc_opcode] = ACTIONS(338),
    [sym_bcs_opcode] = ACTIONS(338),
    [sym_beq_opcode] = ACTIONS(338),
    [sym_bit_opcode] = ACTIONS(338),
    [sym_bmi_opcode] = ACTIONS(338),
    [sym_bne_opcode] = ACTIONS(338),
    [sym_bpl_opcode] = ACTIONS(338),
    [sym_brk_opcode] = ACTIONS(338),
    [sym_bvc_opcode] = ACTIONS(338),
    [sym_bvs_opcode] = ACTIONS(338),
    [sym_clc_opcode] = ACTIONS(338),
    [sym_cld_opcode] = ACTIONS(338),
    [sym_cli_opcode] = ACTIONS(338),
    [sym_clv_opcode] = ACTIONS(338),
    [sym_cmp_opcode] = ACTIONS(338),
    [sym_cpx_opcode] = ACTIONS(338),
    [sym_cpy_opcode] = ACTIONS(338),
    [sym_dec_opcode] = ACTIONS(338),
    [sym_dex_opcode] = ACTIONS(338),
    [sym_dey_opcode] = ACTIONS(338),
    [sym_eor_opcode] = ACTIONS(338),
    [sym_inc_opcode] = ACTIONS(338),
    [sym_inx_opcode] = ACTIONS(338),
    [sym_iny_opcode] = ACTIONS(338),
    [sym_jmp_opcode] = ACTIONS(338),
    [sym_jsr_opcode] = ACTIONS(338),
    [sym_lda_opcode] = ACTIONS(338),
    [sym_ldx_opcode] = ACTIONS(338),
    [sym_ldy_opcode] = ACTIONS(338),
    [sym_lsr_opcode] = ACTIONS(338),
    [sym_nop_opcode] = ACTIONS(338),
    [sym_ora_opcode] = ACTIONS(338),
    [sym_pha_opcode] = ACTIONS(338),
    [sym_php_opcode] = ACTIONS(338),
    [sym_pla_opcode] = ACTIONS(338),
    [sym_plp_opcode] = ACTIONS(338),
    [sym_rol_opcode] = ACTIONS(338),
    [sym_ror_opcode] = ACTIONS(338),
    [sym_rti_opcode] = ACTIONS(338),
    [sym_rts_opcode] = ACTIONS(338),
    [sym_sbc_opcode] = ACTIONS(338),
    [sym_sec_opcode] = ACTIONS(338),
    [sym_sed_opcode] = ACTIONS(338),
    [sym_sei_opcode] = ACTIONS(338),
    [sym_sta_opcode] = ACTIONS(338),
    [sym_stx_opcode] = ACTIONS(338),
    [sym_sty_opcode] = ACTIONS(338),
    [sym_tax_opcode] = ACTIONS(338),
    [sym_tay_opcode] = ACTIONS(338),
    [sym_tsx_opcode] = ACTIONS(338),
    [sym_txa_opcode] = ACTIONS(338),
    [sym_tcs_opcode] = ACTIONS(338),
    [sym_tya_opcode] = ACTIONS(338),
    [sym_a16_ctrl_cmd] = ACTIONS(334),
    [sym_a8_ctrl_cmd] = ACTIONS(334),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(334),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(334),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(334),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(334),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(334),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(334),
    [sym_bss_ctrl_cmd] = ACTIONS(334),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(334),
  },
  [45] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(340),
    [anon_sym_COMMA] = ACTIONS(342),
    [sym_adc_opcode] = ACTIONS(344),
    [sym_and_opcode] = ACTIONS(344),
    [sym_asl_opcode] = ACTIONS(344),
    [sym_bcc_opcode] = ACTIONS(344),
    [sym_bcs_opcode] = ACTIONS(344),
    [sym_beq_opcode] = ACTIONS(344),
    [sym_bit_opcode] = ACTIONS(344),
    [sym_bmi_opcode] = ACTIONS(344),
    [sym_bne_opcode] = ACTIONS(344),
    [sym_bpl_opcode] = ACTIONS(344),
    [sym_brk_opcode] = ACTIONS(344),
    [sym_bvc_opcode] = ACTIONS(344),
    [sym_bvs_opcode] = ACTIONS(344),
    [sym_clc_opcode] = ACTIONS(344),
    [sym_cld_opcode] = ACTIONS(344),
    [sym_cli_opcode] = ACTIONS(344),
    [sym_clv_opcode] = ACTIONS(344),
    [sym_cmp_opcode] = ACTIONS(344),
    [sym_cpx_opcode] = ACTIONS(344),
    [sym_cpy_opcode] = ACTIONS(344),
    [sym_dec_opcode] = ACTIONS(344),
    [sym_dex_opcode] = ACTIONS(344),
    [sym_dey_opcode] = ACTIONS(344),
    [sym_eor_opcode] = ACTIONS(344),
    [sym_inc_opcode] = ACTIONS(344),
    [sym_inx_opcode] = ACTIONS(344),
    [sym_iny_opcode] = ACTIONS(344),
    [sym_jmp_opcode] = ACTIONS(344),
    [sym_jsr_opcode] = ACTIONS(344),
    [sym_lda_opcode] = ACTIONS(344),
    [sym_ldx_opcode] = ACTIONS(344),
    [sym_ldy_opcode] = ACTIONS(344),
    [sym_lsr_opcode] = ACTIONS(344),
    [sym_nop_opcode] = ACTIONS(344),
    [sym_ora_opcode] = ACTIONS(344),
    [sym_pha_opcode] = ACTIONS(344),
    [sym_php_opcode] = ACTIONS(344),
    [sym_pla_opcode] = ACTIONS(344),
    [sym_plp_opcode] = ACTIONS(344),
    [sym_rol_opcode] = ACTIONS(344),
    [sym_ror_opcode] = ACTIONS(344),
    [sym_rti_opcode] = ACTIONS(344),
    [sym_rts_opcode] = ACTIONS(344),
    [sym_sbc_opcode] = ACTIONS(344),
    [sym_sec_opcode] = ACTIONS(344),
    [sym_sed_opcode] = ACTIONS(344),
    [sym_sei_opcode] = ACTIONS(344),
    [sym_sta_opcode] = ACTIONS(344),
    [sym_stx_opcode] = ACTIONS(344),
    [sym_sty_opcode] = ACTIONS(344),
    [sym_tax_opcode] = ACTIONS(344),
    [sym_tay_opcode] = ACTIONS(344),
    [sym_tsx_opcode] = ACTIONS(344),
    [sym_txa_opcode] = ACTIONS(344),
    [sym_tcs_opcode] = ACTIONS(344),
    [sym_tya_opcode] = ACTIONS(344),
    [sym_a16_ctrl_cmd] = ACTIONS(340),
    [sym_a8_ctrl_cmd] = ACTIONS(340),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(340),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(340),
    [sym_bss_ctrl_cmd] = ACTIONS(340),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(340),
  },
  [46] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(348),
    [sym_adc_opcode] = ACTIONS(351),
    [sym_and_opcode] = ACTIONS(351),
    [sym_asl_opcode] = ACTIONS(351),
    [sym_bcc_opcode] = ACTIONS(351),
    [sym_bcs_opcode] = ACTIONS(351),
    [sym_beq_opcode] = ACTIONS(351),
    [sym_bit_opcode] = ACTIONS(351),
    [sym_bmi_opcode] = ACTIONS(351),
    [sym_bne_opcode] = ACTIONS(351),
    [sym_bpl_opcode] = ACTIONS(351),
    [sym_brk_opcode] = ACTIONS(351),
    [sym_bvc_opcode] = ACTIONS(351),
    [sym_bvs_opcode] = ACTIONS(351),
    [sym_clc_opcode] = ACTIONS(351),
    [sym_cld_opcode] = ACTIONS(351),
    [sym_cli_opcode] = ACTIONS(351),
    [sym_clv_opcode] = ACTIONS(351),
    [sym_cmp_opcode] = ACTIONS(351),
    [sym_cpx_opcode] = ACTIONS(351),
    [sym_cpy_opcode] = ACTIONS(351),
    [sym_dec_opcode] = ACTIONS(351),
    [sym_dex_opcode] = ACTIONS(351),
    [sym_dey_opcode] = ACTIONS(351),
    [sym_eor_opcode] = ACTIONS(351),
    [sym_inc_opcode] = ACTIONS(351),
    [sym_inx_opcode] = ACTIONS(351),
    [sym_iny_opcode] = ACTIONS(351),
    [sym_jmp_opcode] = ACTIONS(351),
    [sym_jsr_opcode] = ACTIONS(351),
    [sym_lda_opcode] = ACTIONS(351),
    [sym_ldx_opcode] = ACTIONS(351),
    [sym_ldy_opcode] = ACTIONS(351),
    [sym_lsr_opcode] = ACTIONS(351),
    [sym_nop_opcode] = ACTIONS(351),
    [sym_ora_opcode] = ACTIONS(351),
    [sym_pha_opcode] = ACTIONS(351),
    [sym_php_opcode] = ACTIONS(351),
    [sym_pla_opcode] = ACTIONS(351),
    [sym_plp_opcode] = ACTIONS(351),
    [sym_rol_opcode] = ACTIONS(351),
    [sym_ror_opcode] = ACTIONS(351),
    [sym_rti_opcode] = ACTIONS(351),
    [sym_rts_opcode] = ACTIONS(351),
    [sym_sbc_opcode] = ACTIONS(351),
    [sym_sec_opcode] = ACTIONS(351),
    [sym_sed_opcode] = ACTIONS(351),
    [sym_sei_opcode] = ACTIONS(351),
    [sym_sta_opcode] = ACTIONS(351),
    [sym_stx_opcode] = ACTIONS(351),
    [sym_sty_opcode] = ACTIONS(351),
    [sym_tax_opcode] = ACTIONS(351),
    [sym_tay_opcode] = ACTIONS(351),
    [sym_tsx_opcode] = ACTIONS(351),
    [sym_txa_opcode] = ACTIONS(351),
    [sym_tcs_opcode] = ACTIONS(351),
    [sym_tya_opcode] = ACTIONS(351),
    [sym_a16_ctrl_cmd] = ACTIONS(346),
    [sym_a8_ctrl_cmd] = ACTIONS(346),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(346),
    [sym_bss_ctrl_cmd] = ACTIONS(346),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(346),
  },
  [47] = {
    [aux_sym_asciiz_ctrl_cmd_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_adc_opcode] = ACTIONS(355),
    [sym_and_opcode] = ACTIONS(355),
    [sym_asl_opcode] = ACTIONS(355),
    [sym_bcc_opcode] = ACTIONS(355),
    [sym_bcs_opcode] = ACTIONS(355),
    [sym_beq_opcode] = ACTIONS(355),
    [sym_bit_opcode] = ACTIONS(355),
    [sym_bmi_opcode] = ACTIONS(355),
    [sym_bne_opcode] = ACTIONS(355),
    [sym_bpl_opcode] = ACTIONS(355),
    [sym_brk_opcode] = ACTIONS(355),
    [sym_bvc_opcode] = ACTIONS(355),
    [sym_bvs_opcode] = ACTIONS(355),
    [sym_clc_opcode] = ACTIONS(355),
    [sym_cld_opcode] = ACTIONS(355),
    [sym_cli_opcode] = ACTIONS(355),
    [sym_clv_opcode] = ACTIONS(355),
    [sym_cmp_opcode] = ACTIONS(355),
    [sym_cpx_opcode] = ACTIONS(355),
    [sym_cpy_opcode] = ACTIONS(355),
    [sym_dec_opcode] = ACTIONS(355),
    [sym_dex_opcode] = ACTIONS(355),
    [sym_dey_opcode] = ACTIONS(355),
    [sym_eor_opcode] = ACTIONS(355),
    [sym_inc_opcode] = ACTIONS(355),
    [sym_inx_opcode] = ACTIONS(355),
    [sym_iny_opcode] = ACTIONS(355),
    [sym_jmp_opcode] = ACTIONS(355),
    [sym_jsr_opcode] = ACTIONS(355),
    [sym_lda_opcode] = ACTIONS(355),
    [sym_ldx_opcode] = ACTIONS(355),
    [sym_ldy_opcode] = ACTIONS(355),
    [sym_lsr_opcode] = ACTIONS(355),
    [sym_nop_opcode] = ACTIONS(355),
    [sym_ora_opcode] = ACTIONS(355),
    [sym_pha_opcode] = ACTIONS(355),
    [sym_php_opcode] = ACTIONS(355),
    [sym_pla_opcode] = ACTIONS(355),
    [sym_plp_opcode] = ACTIONS(355),
    [sym_rol_opcode] = ACTIONS(355),
    [sym_ror_opcode] = ACTIONS(355),
    [sym_rti_opcode] = ACTIONS(355),
    [sym_rts_opcode] = ACTIONS(355),
    [sym_sbc_opcode] = ACTIONS(355),
    [sym_sec_opcode] = ACTIONS(355),
    [sym_sed_opcode] = ACTIONS(355),
    [sym_sei_opcode] = ACTIONS(355),
    [sym_sta_opcode] = ACTIONS(355),
    [sym_stx_opcode] = ACTIONS(355),
    [sym_sty_opcode] = ACTIONS(355),
    [sym_tax_opcode] = ACTIONS(355),
    [sym_tay_opcode] = ACTIONS(355),
    [sym_tsx_opcode] = ACTIONS(355),
    [sym_txa_opcode] = ACTIONS(355),
    [sym_tcs_opcode] = ACTIONS(355),
    [sym_tya_opcode] = ACTIONS(355),
    [sym_a16_ctrl_cmd] = ACTIONS(353),
    [sym_a8_ctrl_cmd] = ACTIONS(353),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(353),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(353),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(353),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(353),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(353),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(353),
    [sym_bss_ctrl_cmd] = ACTIONS(353),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(353),
  },
  [48] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(342),
    [sym_adc_opcode] = ACTIONS(359),
    [sym_and_opcode] = ACTIONS(359),
    [sym_asl_opcode] = ACTIONS(359),
    [sym_bcc_opcode] = ACTIONS(359),
    [sym_bcs_opcode] = ACTIONS(359),
    [sym_beq_opcode] = ACTIONS(359),
    [sym_bit_opcode] = ACTIONS(359),
    [sym_bmi_opcode] = ACTIONS(359),
    [sym_bne_opcode] = ACTIONS(359),
    [sym_bpl_opcode] = ACTIONS(359),
    [sym_brk_opcode] = ACTIONS(359),
    [sym_bvc_opcode] = ACTIONS(359),
    [sym_bvs_opcode] = ACTIONS(359),
    [sym_clc_opcode] = ACTIONS(359),
    [sym_cld_opcode] = ACTIONS(359),
    [sym_cli_opcode] = ACTIONS(359),
    [sym_clv_opcode] = ACTIONS(359),
    [sym_cmp_opcode] = ACTIONS(359),
    [sym_cpx_opcode] = ACTIONS(359),
    [sym_cpy_opcode] = ACTIONS(359),
    [sym_dec_opcode] = ACTIONS(359),
    [sym_dex_opcode] = ACTIONS(359),
    [sym_dey_opcode] = ACTIONS(359),
    [sym_eor_opcode] = ACTIONS(359),
    [sym_inc_opcode] = ACTIONS(359),
    [sym_inx_opcode] = ACTIONS(359),
    [sym_iny_opcode] = ACTIONS(359),
    [sym_jmp_opcode] = ACTIONS(359),
    [sym_jsr_opcode] = ACTIONS(359),
    [sym_lda_opcode] = ACTIONS(359),
    [sym_ldx_opcode] = ACTIONS(359),
    [sym_ldy_opcode] = ACTIONS(359),
    [sym_lsr_opcode] = ACTIONS(359),
    [sym_nop_opcode] = ACTIONS(359),
    [sym_ora_opcode] = ACTIONS(359),
    [sym_pha_opcode] = ACTIONS(359),
    [sym_php_opcode] = ACTIONS(359),
    [sym_pla_opcode] = ACTIONS(359),
    [sym_plp_opcode] = ACTIONS(359),
    [sym_rol_opcode] = ACTIONS(359),
    [sym_ror_opcode] = ACTIONS(359),
    [sym_rti_opcode] = ACTIONS(359),
    [sym_rts_opcode] = ACTIONS(359),
    [sym_sbc_opcode] = ACTIONS(359),
    [sym_sec_opcode] = ACTIONS(359),
    [sym_sed_opcode] = ACTIONS(359),
    [sym_sei_opcode] = ACTIONS(359),
    [sym_sta_opcode] = ACTIONS(359),
    [sym_stx_opcode] = ACTIONS(359),
    [sym_sty_opcode] = ACTIONS(359),
    [sym_tax_opcode] = ACTIONS(359),
    [sym_tay_opcode] = ACTIONS(359),
    [sym_tsx_opcode] = ACTIONS(359),
    [sym_txa_opcode] = ACTIONS(359),
    [sym_tcs_opcode] = ACTIONS(359),
    [sym_tya_opcode] = ACTIONS(359),
    [sym_a16_ctrl_cmd] = ACTIONS(357),
    [sym_a8_ctrl_cmd] = ACTIONS(357),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(357),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(357),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(357),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(357),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(357),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(357),
    [sym_bss_ctrl_cmd] = ACTIONS(357),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(357),
  },
  [49] = {
    [aux_sym_addr_ctrl_cmd_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym_adc_opcode] = ACTIONS(366),
    [sym_and_opcode] = ACTIONS(366),
    [sym_asl_opcode] = ACTIONS(366),
    [sym_bcc_opcode] = ACTIONS(366),
    [sym_bcs_opcode] = ACTIONS(366),
    [sym_beq_opcode] = ACTIONS(366),
    [sym_bit_opcode] = ACTIONS(366),
    [sym_bmi_opcode] = ACTIONS(366),
    [sym_bne_opcode] = ACTIONS(366),
    [sym_bpl_opcode] = ACTIONS(366),
    [sym_brk_opcode] = ACTIONS(366),
    [sym_bvc_opcode] = ACTIONS(366),
    [sym_bvs_opcode] = ACTIONS(366),
    [sym_clc_opcode] = ACTIONS(366),
    [sym_cld_opcode] = ACTIONS(366),
    [sym_cli_opcode] = ACTIONS(366),
    [sym_clv_opcode] = ACTIONS(366),
    [sym_cmp_opcode] = ACTIONS(366),
    [sym_cpx_opcode] = ACTIONS(366),
    [sym_cpy_opcode] = ACTIONS(366),
    [sym_dec_opcode] = ACTIONS(366),
    [sym_dex_opcode] = ACTIONS(366),
    [sym_dey_opcode] = ACTIONS(366),
    [sym_eor_opcode] = ACTIONS(366),
    [sym_inc_opcode] = ACTIONS(366),
    [sym_inx_opcode] = ACTIONS(366),
    [sym_iny_opcode] = ACTIONS(366),
    [sym_jmp_opcode] = ACTIONS(366),
    [sym_jsr_opcode] = ACTIONS(366),
    [sym_lda_opcode] = ACTIONS(366),
    [sym_ldx_opcode] = ACTIONS(366),
    [sym_ldy_opcode] = ACTIONS(366),
    [sym_lsr_opcode] = ACTIONS(366),
    [sym_nop_opcode] = ACTIONS(366),
    [sym_ora_opcode] = ACTIONS(366),
    [sym_pha_opcode] = ACTIONS(366),
    [sym_php_opcode] = ACTIONS(366),
    [sym_pla_opcode] = ACTIONS(366),
    [sym_plp_opcode] = ACTIONS(366),
    [sym_rol_opcode] = ACTIONS(366),
    [sym_ror_opcode] = ACTIONS(366),
    [sym_rti_opcode] = ACTIONS(366),
    [sym_rts_opcode] = ACTIONS(366),
    [sym_sbc_opcode] = ACTIONS(366),
    [sym_sec_opcode] = ACTIONS(366),
    [sym_sed_opcode] = ACTIONS(366),
    [sym_sei_opcode] = ACTIONS(366),
    [sym_sta_opcode] = ACTIONS(366),
    [sym_stx_opcode] = ACTIONS(366),
    [sym_sty_opcode] = ACTIONS(366),
    [sym_tax_opcode] = ACTIONS(366),
    [sym_tay_opcode] = ACTIONS(366),
    [sym_tsx_opcode] = ACTIONS(366),
    [sym_txa_opcode] = ACTIONS(366),
    [sym_tcs_opcode] = ACTIONS(366),
    [sym_tya_opcode] = ACTIONS(366),
    [sym_a16_ctrl_cmd] = ACTIONS(361),
    [sym_a8_ctrl_cmd] = ACTIONS(361),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(361),
    [sym_bss_ctrl_cmd] = ACTIONS(361),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(361),
  },
  [50] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_adc_opcode] = ACTIONS(370),
    [sym_and_opcode] = ACTIONS(370),
    [sym_asl_opcode] = ACTIONS(370),
    [sym_bcc_opcode] = ACTIONS(370),
    [sym_bcs_opcode] = ACTIONS(370),
    [sym_beq_opcode] = ACTIONS(370),
    [sym_bit_opcode] = ACTIONS(370),
    [sym_bmi_opcode] = ACTIONS(370),
    [sym_bne_opcode] = ACTIONS(370),
    [sym_bpl_opcode] = ACTIONS(370),
    [sym_brk_opcode] = ACTIONS(370),
    [sym_bvc_opcode] = ACTIONS(370),
    [sym_bvs_opcode] = ACTIONS(370),
    [sym_clc_opcode] = ACTIONS(370),
    [sym_cld_opcode] = ACTIONS(370),
    [sym_cli_opcode] = ACTIONS(370),
    [sym_clv_opcode] = ACTIONS(370),
    [sym_cmp_opcode] = ACTIONS(370),
    [sym_cpx_opcode] = ACTIONS(370),
    [sym_cpy_opcode] = ACTIONS(370),
    [sym_dec_opcode] = ACTIONS(370),
    [sym_dex_opcode] = ACTIONS(370),
    [sym_dey_opcode] = ACTIONS(370),
    [sym_eor_opcode] = ACTIONS(370),
    [sym_inc_opcode] = ACTIONS(370),
    [sym_inx_opcode] = ACTIONS(370),
    [sym_iny_opcode] = ACTIONS(370),
    [sym_jmp_opcode] = ACTIONS(370),
    [sym_jsr_opcode] = ACTIONS(370),
    [sym_lda_opcode] = ACTIONS(370),
    [sym_ldx_opcode] = ACTIONS(370),
    [sym_ldy_opcode] = ACTIONS(370),
    [sym_lsr_opcode] = ACTIONS(370),
    [sym_nop_opcode] = ACTIONS(370),
    [sym_ora_opcode] = ACTIONS(370),
    [sym_pha_opcode] = ACTIONS(370),
    [sym_php_opcode] = ACTIONS(370),
    [sym_pla_opcode] = ACTIONS(370),
    [sym_plp_opcode] = ACTIONS(370),
    [sym_rol_opcode] = ACTIONS(370),
    [sym_ror_opcode] = ACTIONS(370),
    [sym_rti_opcode] = ACTIONS(370),
    [sym_rts_opcode] = ACTIONS(370),
    [sym_sbc_opcode] = ACTIONS(370),
    [sym_sec_opcode] = ACTIONS(370),
    [sym_sed_opcode] = ACTIONS(370),
    [sym_sei_opcode] = ACTIONS(370),
    [sym_sta_opcode] = ACTIONS(370),
    [sym_stx_opcode] = ACTIONS(370),
    [sym_sty_opcode] = ACTIONS(370),
    [sym_tax_opcode] = ACTIONS(370),
    [sym_tay_opcode] = ACTIONS(370),
    [sym_tsx_opcode] = ACTIONS(370),
    [sym_txa_opcode] = ACTIONS(370),
    [sym_tcs_opcode] = ACTIONS(370),
    [sym_tya_opcode] = ACTIONS(370),
    [sym_a16_ctrl_cmd] = ACTIONS(368),
    [sym_a8_ctrl_cmd] = ACTIONS(368),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(368),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(368),
    [sym_bss_ctrl_cmd] = ACTIONS(368),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(368),
  },
  [51] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_adc_opcode] = ACTIONS(257),
    [sym_and_opcode] = ACTIONS(257),
    [sym_asl_opcode] = ACTIONS(257),
    [sym_bcc_opcode] = ACTIONS(257),
    [sym_bcs_opcode] = ACTIONS(257),
    [sym_beq_opcode] = ACTIONS(257),
    [sym_bit_opcode] = ACTIONS(257),
    [sym_bmi_opcode] = ACTIONS(257),
    [sym_bne_opcode] = ACTIONS(257),
    [sym_bpl_opcode] = ACTIONS(257),
    [sym_brk_opcode] = ACTIONS(257),
    [sym_bvc_opcode] = ACTIONS(257),
    [sym_bvs_opcode] = ACTIONS(257),
    [sym_clc_opcode] = ACTIONS(257),
    [sym_cld_opcode] = ACTIONS(257),
    [sym_cli_opcode] = ACTIONS(257),
    [sym_clv_opcode] = ACTIONS(257),
    [sym_cmp_opcode] = ACTIONS(257),
    [sym_cpx_opcode] = ACTIONS(257),
    [sym_cpy_opcode] = ACTIONS(257),
    [sym_dec_opcode] = ACTIONS(257),
    [sym_dex_opcode] = ACTIONS(257),
    [sym_dey_opcode] = ACTIONS(257),
    [sym_eor_opcode] = ACTIONS(257),
    [sym_inc_opcode] = ACTIONS(257),
    [sym_inx_opcode] = ACTIONS(257),
    [sym_iny_opcode] = ACTIONS(257),
    [sym_jmp_opcode] = ACTIONS(257),
    [sym_jsr_opcode] = ACTIONS(257),
    [sym_lda_opcode] = ACTIONS(257),
    [sym_ldx_opcode] = ACTIONS(257),
    [sym_ldy_opcode] = ACTIONS(257),
    [sym_lsr_opcode] = ACTIONS(257),
    [sym_nop_opcode] = ACTIONS(257),
    [sym_ora_opcode] = ACTIONS(257),
    [sym_pha_opcode] = ACTIONS(257),
    [sym_php_opcode] = ACTIONS(257),
    [sym_pla_opcode] = ACTIONS(257),
    [sym_plp_opcode] = ACTIONS(257),
    [sym_rol_opcode] = ACTIONS(257),
    [sym_ror_opcode] = ACTIONS(257),
    [sym_rti_opcode] = ACTIONS(257),
    [sym_rts_opcode] = ACTIONS(257),
    [sym_sbc_opcode] = ACTIONS(257),
    [sym_sec_opcode] = ACTIONS(257),
    [sym_sed_opcode] = ACTIONS(257),
    [sym_sei_opcode] = ACTIONS(257),
    [sym_sta_opcode] = ACTIONS(257),
    [sym_stx_opcode] = ACTIONS(257),
    [sym_sty_opcode] = ACTIONS(257),
    [sym_tax_opcode] = ACTIONS(257),
    [sym_tay_opcode] = ACTIONS(257),
    [sym_tsx_opcode] = ACTIONS(257),
    [sym_txa_opcode] = ACTIONS(257),
    [sym_tcs_opcode] = ACTIONS(257),
    [sym_tya_opcode] = ACTIONS(257),
    [sym_a16_ctrl_cmd] = ACTIONS(255),
    [sym_a8_ctrl_cmd] = ACTIONS(255),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(255),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(255),
    [sym_bss_ctrl_cmd] = ACTIONS(255),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(255),
  },
  [52] = {
    [aux_sym_bankbytes_ctrl_cmd_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(375),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(375),
    [anon_sym_COMMA] = ACTIONS(169),
    [sym_adc_opcode] = ACTIONS(377),
    [sym_and_opcode] = ACTIONS(377),
    [sym_asl_opcode] = ACTIONS(377),
    [sym_bcc_opcode] = ACTIONS(377),
    [sym_bcs_opcode] = ACTIONS(377),
    [sym_beq_opcode] = ACTIONS(377),
    [sym_bit_opcode] = ACTIONS(377),
    [sym_bmi_opcode] = ACTIONS(377),
    [sym_bne_opcode] = ACTIONS(377),
    [sym_bpl_opcode] = ACTIONS(377),
    [sym_brk_opcode] = ACTIONS(377),
    [sym_bvc_opcode] = ACTIONS(377),
    [sym_bvs_opcode] = ACTIONS(377),
    [sym_clc_opcode] = ACTIONS(377),
    [sym_cld_opcode] = ACTIONS(377),
    [sym_cli_opcode] = ACTIONS(377),
    [sym_clv_opcode] = ACTIONS(377),
    [sym_cmp_opcode] = ACTIONS(377),
    [sym_cpx_opcode] = ACTIONS(377),
    [sym_cpy_opcode] = ACTIONS(377),
    [sym_dec_opcode] = ACTIONS(377),
    [sym_dex_opcode] = ACTIONS(377),
    [sym_dey_opcode] = ACTIONS(377),
    [sym_eor_opcode] = ACTIONS(377),
    [sym_inc_opcode] = ACTIONS(377),
    [sym_inx_opcode] = ACTIONS(377),
    [sym_iny_opcode] = ACTIONS(377),
    [sym_jmp_opcode] = ACTIONS(377),
    [sym_jsr_opcode] = ACTIONS(377),
    [sym_lda_opcode] = ACTIONS(377),
    [sym_ldx_opcode] = ACTIONS(377),
    [sym_ldy_opcode] = ACTIONS(377),
    [sym_lsr_opcode] = ACTIONS(377),
    [sym_nop_opcode] = ACTIONS(377),
    [sym_ora_opcode] = ACTIONS(377),
    [sym_pha_opcode] = ACTIONS(377),
    [sym_php_opcode] = ACTIONS(377),
    [sym_pla_opcode] = ACTIONS(377),
    [sym_plp_opcode] = ACTIONS(377),
    [sym_rol_opcode] = ACTIONS(377),
    [sym_ror_opcode] = ACTIONS(377),
    [sym_rti_opcode] = ACTIONS(377),
    [sym_rts_opcode] = ACTIONS(377),
    [sym_sbc_opcode] = ACTIONS(377),
    [sym_sec_opcode] = ACTIONS(377),
    [sym_sed_opcode] = ACTIONS(377),
    [sym_sei_opcode] = ACTIONS(377),
    [sym_sta_opcode] = ACTIONS(377),
    [sym_stx_opcode] = ACTIONS(377),
    [sym_sty_opcode] = ACTIONS(377),
    [sym_tax_opcode] = ACTIONS(377),
    [sym_tay_opcode] = ACTIONS(377),
    [sym_tsx_opcode] = ACTIONS(377),
    [sym_txa_opcode] = ACTIONS(377),
    [sym_tcs_opcode] = ACTIONS(377),
    [sym_tya_opcode] = ACTIONS(377),
    [sym_a16_ctrl_cmd] = ACTIONS(375),
    [sym_a8_ctrl_cmd] = ACTIONS(375),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(375),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(375),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(375),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(375),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(375),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(375),
    [sym_bss_ctrl_cmd] = ACTIONS(375),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(375),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(381),
    [sym_adc_opcode] = ACTIONS(383),
    [sym_and_opcode] = ACTIONS(383),
    [sym_asl_opcode] = ACTIONS(383),
    [sym_bcc_opcode] = ACTIONS(383),
    [sym_bcs_opcode] = ACTIONS(383),
    [sym_beq_opcode] = ACTIONS(383),
    [sym_bit_opcode] = ACTIONS(383),
    [sym_bmi_opcode] = ACTIONS(383),
    [sym_bne_opcode] = ACTIONS(383),
    [sym_bpl_opcode] = ACTIONS(383),
    [sym_brk_opcode] = ACTIONS(383),
    [sym_bvc_opcode] = ACTIONS(383),
    [sym_bvs_opcode] = ACTIONS(383),
    [sym_clc_opcode] = ACTIONS(383),
    [sym_cld_opcode] = ACTIONS(383),
    [sym_cli_opcode] = ACTIONS(383),
    [sym_clv_opcode] = ACTIONS(383),
    [sym_cmp_opcode] = ACTIONS(383),
    [sym_cpx_opcode] = ACTIONS(383),
    [sym_cpy_opcode] = ACTIONS(383),
    [sym_dec_opcode] = ACTIONS(383),
    [sym_dex_opcode] = ACTIONS(383),
    [sym_dey_opcode] = ACTIONS(383),
    [sym_eor_opcode] = ACTIONS(383),
    [sym_inc_opcode] = ACTIONS(383),
    [sym_inx_opcode] = ACTIONS(383),
    [sym_iny_opcode] = ACTIONS(383),
    [sym_jmp_opcode] = ACTIONS(383),
    [sym_jsr_opcode] = ACTIONS(383),
    [sym_lda_opcode] = ACTIONS(383),
    [sym_ldx_opcode] = ACTIONS(383),
    [sym_ldy_opcode] = ACTIONS(383),
    [sym_lsr_opcode] = ACTIONS(383),
    [sym_nop_opcode] = ACTIONS(383),
    [sym_ora_opcode] = ACTIONS(383),
    [sym_pha_opcode] = ACTIONS(383),
    [sym_php_opcode] = ACTIONS(383),
    [sym_pla_opcode] = ACTIONS(383),
    [sym_plp_opcode] = ACTIONS(383),
    [sym_rol_opcode] = ACTIONS(383),
    [sym_ror_opcode] = ACTIONS(383),
    [sym_rti_opcode] = ACTIONS(383),
    [sym_rts_opcode] = ACTIONS(383),
    [sym_sbc_opcode] = ACTIONS(383),
    [sym_sec_opcode] = ACTIONS(383),
    [sym_sed_opcode] = ACTIONS(383),
    [sym_sei_opcode] = ACTIONS(383),
    [sym_sta_opcode] = ACTIONS(383),
    [sym_stx_opcode] = ACTIONS(383),
    [sym_sty_opcode] = ACTIONS(383),
    [sym_tax_opcode] = ACTIONS(383),
    [sym_tay_opcode] = ACTIONS(383),
    [sym_tsx_opcode] = ACTIONS(383),
    [sym_txa_opcode] = ACTIONS(383),
    [sym_tcs_opcode] = ACTIONS(383),
    [sym_tya_opcode] = ACTIONS(383),
    [sym_a16_ctrl_cmd] = ACTIONS(379),
    [sym_a8_ctrl_cmd] = ACTIONS(379),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(379),
    [sym_bss_ctrl_cmd] = ACTIONS(379),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(379),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [sym_adc_opcode] = ACTIONS(389),
    [sym_and_opcode] = ACTIONS(389),
    [sym_asl_opcode] = ACTIONS(389),
    [sym_bcc_opcode] = ACTIONS(389),
    [sym_bcs_opcode] = ACTIONS(389),
    [sym_beq_opcode] = ACTIONS(389),
    [sym_bit_opcode] = ACTIONS(389),
    [sym_bmi_opcode] = ACTIONS(389),
    [sym_bne_opcode] = ACTIONS(389),
    [sym_bpl_opcode] = ACTIONS(389),
    [sym_brk_opcode] = ACTIONS(389),
    [sym_bvc_opcode] = ACTIONS(389),
    [sym_bvs_opcode] = ACTIONS(389),
    [sym_clc_opcode] = ACTIONS(389),
    [sym_cld_opcode] = ACTIONS(389),
    [sym_cli_opcode] = ACTIONS(389),
    [sym_clv_opcode] = ACTIONS(389),
    [sym_cmp_opcode] = ACTIONS(389),
    [sym_cpx_opcode] = ACTIONS(389),
    [sym_cpy_opcode] = ACTIONS(389),
    [sym_dec_opcode] = ACTIONS(389),
    [sym_dex_opcode] = ACTIONS(389),
    [sym_dey_opcode] = ACTIONS(389),
    [sym_eor_opcode] = ACTIONS(389),
    [sym_inc_opcode] = ACTIONS(389),
    [sym_inx_opcode] = ACTIONS(389),
    [sym_iny_opcode] = ACTIONS(389),
    [sym_jmp_opcode] = ACTIONS(389),
    [sym_jsr_opcode] = ACTIONS(389),
    [sym_lda_opcode] = ACTIONS(389),
    [sym_ldx_opcode] = ACTIONS(389),
    [sym_ldy_opcode] = ACTIONS(389),
    [sym_lsr_opcode] = ACTIONS(389),
    [sym_nop_opcode] = ACTIONS(389),
    [sym_ora_opcode] = ACTIONS(389),
    [sym_pha_opcode] = ACTIONS(389),
    [sym_php_opcode] = ACTIONS(389),
    [sym_pla_opcode] = ACTIONS(389),
    [sym_plp_opcode] = ACTIONS(389),
    [sym_rol_opcode] = ACTIONS(389),
    [sym_ror_opcode] = ACTIONS(389),
    [sym_rti_opcode] = ACTIONS(389),
    [sym_rts_opcode] = ACTIONS(389),
    [sym_sbc_opcode] = ACTIONS(389),
    [sym_sec_opcode] = ACTIONS(389),
    [sym_sed_opcode] = ACTIONS(389),
    [sym_sei_opcode] = ACTIONS(389),
    [sym_sta_opcode] = ACTIONS(389),
    [sym_stx_opcode] = ACTIONS(389),
    [sym_sty_opcode] = ACTIONS(389),
    [sym_tax_opcode] = ACTIONS(389),
    [sym_tay_opcode] = ACTIONS(389),
    [sym_tsx_opcode] = ACTIONS(389),
    [sym_txa_opcode] = ACTIONS(389),
    [sym_tcs_opcode] = ACTIONS(389),
    [sym_tya_opcode] = ACTIONS(389),
    [sym_a16_ctrl_cmd] = ACTIONS(385),
    [sym_a8_ctrl_cmd] = ACTIONS(385),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(385),
    [sym_bss_ctrl_cmd] = ACTIONS(385),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(385),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(391),
    [sym_adc_opcode] = ACTIONS(383),
    [sym_and_opcode] = ACTIONS(383),
    [sym_asl_opcode] = ACTIONS(383),
    [sym_bcc_opcode] = ACTIONS(383),
    [sym_bcs_opcode] = ACTIONS(383),
    [sym_beq_opcode] = ACTIONS(383),
    [sym_bit_opcode] = ACTIONS(383),
    [sym_bmi_opcode] = ACTIONS(383),
    [sym_bne_opcode] = ACTIONS(383),
    [sym_bpl_opcode] = ACTIONS(383),
    [sym_brk_opcode] = ACTIONS(383),
    [sym_bvc_opcode] = ACTIONS(383),
    [sym_bvs_opcode] = ACTIONS(383),
    [sym_clc_opcode] = ACTIONS(383),
    [sym_cld_opcode] = ACTIONS(383),
    [sym_cli_opcode] = ACTIONS(383),
    [sym_clv_opcode] = ACTIONS(383),
    [sym_cmp_opcode] = ACTIONS(383),
    [sym_cpx_opcode] = ACTIONS(383),
    [sym_cpy_opcode] = ACTIONS(383),
    [sym_dec_opcode] = ACTIONS(383),
    [sym_dex_opcode] = ACTIONS(383),
    [sym_dey_opcode] = ACTIONS(383),
    [sym_eor_opcode] = ACTIONS(383),
    [sym_inc_opcode] = ACTIONS(383),
    [sym_inx_opcode] = ACTIONS(383),
    [sym_iny_opcode] = ACTIONS(383),
    [sym_jmp_opcode] = ACTIONS(383),
    [sym_jsr_opcode] = ACTIONS(383),
    [sym_lda_opcode] = ACTIONS(383),
    [sym_ldx_opcode] = ACTIONS(383),
    [sym_ldy_opcode] = ACTIONS(383),
    [sym_lsr_opcode] = ACTIONS(383),
    [sym_nop_opcode] = ACTIONS(383),
    [sym_ora_opcode] = ACTIONS(383),
    [sym_pha_opcode] = ACTIONS(383),
    [sym_php_opcode] = ACTIONS(383),
    [sym_pla_opcode] = ACTIONS(383),
    [sym_plp_opcode] = ACTIONS(383),
    [sym_rol_opcode] = ACTIONS(383),
    [sym_ror_opcode] = ACTIONS(383),
    [sym_rti_opcode] = ACTIONS(383),
    [sym_rts_opcode] = ACTIONS(383),
    [sym_sbc_opcode] = ACTIONS(383),
    [sym_sec_opcode] = ACTIONS(383),
    [sym_sed_opcode] = ACTIONS(383),
    [sym_sei_opcode] = ACTIONS(383),
    [sym_sta_opcode] = ACTIONS(383),
    [sym_stx_opcode] = ACTIONS(383),
    [sym_sty_opcode] = ACTIONS(383),
    [sym_tax_opcode] = ACTIONS(383),
    [sym_tay_opcode] = ACTIONS(383),
    [sym_tsx_opcode] = ACTIONS(383),
    [sym_txa_opcode] = ACTIONS(383),
    [sym_tcs_opcode] = ACTIONS(383),
    [sym_tya_opcode] = ACTIONS(383),
    [sym_a16_ctrl_cmd] = ACTIONS(379),
    [sym_a8_ctrl_cmd] = ACTIONS(379),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(379),
    [sym_bss_ctrl_cmd] = ACTIONS(379),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(379),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(215),
    [sym_adc_opcode] = ACTIONS(200),
    [sym_and_opcode] = ACTIONS(200),
    [sym_asl_opcode] = ACTIONS(200),
    [sym_bcc_opcode] = ACTIONS(200),
    [sym_bcs_opcode] = ACTIONS(200),
    [sym_beq_opcode] = ACTIONS(200),
    [sym_bit_opcode] = ACTIONS(200),
    [sym_bmi_opcode] = ACTIONS(200),
    [sym_bne_opcode] = ACTIONS(200),
    [sym_bpl_opcode] = ACTIONS(200),
    [sym_brk_opcode] = ACTIONS(200),
    [sym_bvc_opcode] = ACTIONS(200),
    [sym_bvs_opcode] = ACTIONS(200),
    [sym_clc_opcode] = ACTIONS(200),
    [sym_cld_opcode] = ACTIONS(200),
    [sym_cli_opcode] = ACTIONS(200),
    [sym_clv_opcode] = ACTIONS(200),
    [sym_cmp_opcode] = ACTIONS(200),
    [sym_cpx_opcode] = ACTIONS(200),
    [sym_cpy_opcode] = ACTIONS(200),
    [sym_dec_opcode] = ACTIONS(200),
    [sym_dex_opcode] = ACTIONS(200),
    [sym_dey_opcode] = ACTIONS(200),
    [sym_eor_opcode] = ACTIONS(200),
    [sym_inc_opcode] = ACTIONS(200),
    [sym_inx_opcode] = ACTIONS(200),
    [sym_iny_opcode] = ACTIONS(200),
    [sym_jmp_opcode] = ACTIONS(200),
    [sym_jsr_opcode] = ACTIONS(200),
    [sym_lda_opcode] = ACTIONS(200),
    [sym_ldx_opcode] = ACTIONS(200),
    [sym_ldy_opcode] = ACTIONS(200),
    [sym_lsr_opcode] = ACTIONS(200),
    [sym_nop_opcode] = ACTIONS(200),
    [sym_ora_opcode] = ACTIONS(200),
    [sym_pha_opcode] = ACTIONS(200),
    [sym_php_opcode] = ACTIONS(200),
    [sym_pla_opcode] = ACTIONS(200),
    [sym_plp_opcode] = ACTIONS(200),
    [sym_rol_opcode] = ACTIONS(200),
    [sym_ror_opcode] = ACTIONS(200),
    [sym_rti_opcode] = ACTIONS(200),
    [sym_rts_opcode] = ACTIONS(200),
    [sym_sbc_opcode] = ACTIONS(200),
    [sym_sec_opcode] = ACTIONS(200),
    [sym_sed_opcode] = ACTIONS(200),
    [sym_sei_opcode] = ACTIONS(200),
    [sym_sta_opcode] = ACTIONS(200),
    [sym_stx_opcode] = ACTIONS(200),
    [sym_sty_opcode] = ACTIONS(200),
    [sym_tax_opcode] = ACTIONS(200),
    [sym_tay_opcode] = ACTIONS(200),
    [sym_tsx_opcode] = ACTIONS(200),
    [sym_txa_opcode] = ACTIONS(200),
    [sym_tcs_opcode] = ACTIONS(200),
    [sym_tya_opcode] = ACTIONS(200),
    [sym_a16_ctrl_cmd] = ACTIONS(197),
    [sym_a8_ctrl_cmd] = ACTIONS(197),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(197),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(197),
    [sym_bss_ctrl_cmd] = ACTIONS(197),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(197),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(361),
    [sym_adc_opcode] = ACTIONS(366),
    [sym_and_opcode] = ACTIONS(366),
    [sym_asl_opcode] = ACTIONS(366),
    [sym_bcc_opcode] = ACTIONS(366),
    [sym_bcs_opcode] = ACTIONS(366),
    [sym_beq_opcode] = ACTIONS(366),
    [sym_bit_opcode] = ACTIONS(366),
    [sym_bmi_opcode] = ACTIONS(366),
    [sym_bne_opcode] = ACTIONS(366),
    [sym_bpl_opcode] = ACTIONS(366),
    [sym_brk_opcode] = ACTIONS(366),
    [sym_bvc_opcode] = ACTIONS(366),
    [sym_bvs_opcode] = ACTIONS(366),
    [sym_clc_opcode] = ACTIONS(366),
    [sym_cld_opcode] = ACTIONS(366),
    [sym_cli_opcode] = ACTIONS(366),
    [sym_clv_opcode] = ACTIONS(366),
    [sym_cmp_opcode] = ACTIONS(366),
    [sym_cpx_opcode] = ACTIONS(366),
    [sym_cpy_opcode] = ACTIONS(366),
    [sym_dec_opcode] = ACTIONS(366),
    [sym_dex_opcode] = ACTIONS(366),
    [sym_dey_opcode] = ACTIONS(366),
    [sym_eor_opcode] = ACTIONS(366),
    [sym_inc_opcode] = ACTIONS(366),
    [sym_inx_opcode] = ACTIONS(366),
    [sym_iny_opcode] = ACTIONS(366),
    [sym_jmp_opcode] = ACTIONS(366),
    [sym_jsr_opcode] = ACTIONS(366),
    [sym_lda_opcode] = ACTIONS(366),
    [sym_ldx_opcode] = ACTIONS(366),
    [sym_ldy_opcode] = ACTIONS(366),
    [sym_lsr_opcode] = ACTIONS(366),
    [sym_nop_opcode] = ACTIONS(366),
    [sym_ora_opcode] = ACTIONS(366),
    [sym_pha_opcode] = ACTIONS(366),
    [sym_php_opcode] = ACTIONS(366),
    [sym_pla_opcode] = ACTIONS(366),
    [sym_plp_opcode] = ACTIONS(366),
    [sym_rol_opcode] = ACTIONS(366),
    [sym_ror_opcode] = ACTIONS(366),
    [sym_rti_opcode] = ACTIONS(366),
    [sym_rts_opcode] = ACTIONS(366),
    [sym_sbc_opcode] = ACTIONS(366),
    [sym_sec_opcode] = ACTIONS(366),
    [sym_sed_opcode] = ACTIONS(366),
    [sym_sei_opcode] = ACTIONS(366),
    [sym_sta_opcode] = ACTIONS(366),
    [sym_stx_opcode] = ACTIONS(366),
    [sym_sty_opcode] = ACTIONS(366),
    [sym_tax_opcode] = ACTIONS(366),
    [sym_tay_opcode] = ACTIONS(366),
    [sym_tsx_opcode] = ACTIONS(366),
    [sym_txa_opcode] = ACTIONS(366),
    [sym_tcs_opcode] = ACTIONS(366),
    [sym_tya_opcode] = ACTIONS(366),
    [sym_a16_ctrl_cmd] = ACTIONS(361),
    [sym_a8_ctrl_cmd] = ACTIONS(361),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(361),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(361),
    [sym_bss_ctrl_cmd] = ACTIONS(361),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(361),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(393),
    [sym_adc_opcode] = ACTIONS(383),
    [sym_and_opcode] = ACTIONS(383),
    [sym_asl_opcode] = ACTIONS(383),
    [sym_bcc_opcode] = ACTIONS(383),
    [sym_bcs_opcode] = ACTIONS(383),
    [sym_beq_opcode] = ACTIONS(383),
    [sym_bit_opcode] = ACTIONS(383),
    [sym_bmi_opcode] = ACTIONS(383),
    [sym_bne_opcode] = ACTIONS(383),
    [sym_bpl_opcode] = ACTIONS(383),
    [sym_brk_opcode] = ACTIONS(383),
    [sym_bvc_opcode] = ACTIONS(383),
    [sym_bvs_opcode] = ACTIONS(383),
    [sym_clc_opcode] = ACTIONS(383),
    [sym_cld_opcode] = ACTIONS(383),
    [sym_cli_opcode] = ACTIONS(383),
    [sym_clv_opcode] = ACTIONS(383),
    [sym_cmp_opcode] = ACTIONS(383),
    [sym_cpx_opcode] = ACTIONS(383),
    [sym_cpy_opcode] = ACTIONS(383),
    [sym_dec_opcode] = ACTIONS(383),
    [sym_dex_opcode] = ACTIONS(383),
    [sym_dey_opcode] = ACTIONS(383),
    [sym_eor_opcode] = ACTIONS(383),
    [sym_inc_opcode] = ACTIONS(383),
    [sym_inx_opcode] = ACTIONS(383),
    [sym_iny_opcode] = ACTIONS(383),
    [sym_jmp_opcode] = ACTIONS(383),
    [sym_jsr_opcode] = ACTIONS(383),
    [sym_lda_opcode] = ACTIONS(383),
    [sym_ldx_opcode] = ACTIONS(383),
    [sym_ldy_opcode] = ACTIONS(383),
    [sym_lsr_opcode] = ACTIONS(383),
    [sym_nop_opcode] = ACTIONS(383),
    [sym_ora_opcode] = ACTIONS(383),
    [sym_pha_opcode] = ACTIONS(383),
    [sym_php_opcode] = ACTIONS(383),
    [sym_pla_opcode] = ACTIONS(383),
    [sym_plp_opcode] = ACTIONS(383),
    [sym_rol_opcode] = ACTIONS(383),
    [sym_ror_opcode] = ACTIONS(383),
    [sym_rti_opcode] = ACTIONS(383),
    [sym_rts_opcode] = ACTIONS(383),
    [sym_sbc_opcode] = ACTIONS(383),
    [sym_sec_opcode] = ACTIONS(383),
    [sym_sed_opcode] = ACTIONS(383),
    [sym_sei_opcode] = ACTIONS(383),
    [sym_sta_opcode] = ACTIONS(383),
    [sym_stx_opcode] = ACTIONS(383),
    [sym_sty_opcode] = ACTIONS(383),
    [sym_tax_opcode] = ACTIONS(383),
    [sym_tay_opcode] = ACTIONS(383),
    [sym_tsx_opcode] = ACTIONS(383),
    [sym_txa_opcode] = ACTIONS(383),
    [sym_tcs_opcode] = ACTIONS(383),
    [sym_tya_opcode] = ACTIONS(383),
    [sym_a16_ctrl_cmd] = ACTIONS(379),
    [sym_a8_ctrl_cmd] = ACTIONS(379),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(379),
    [sym_bss_ctrl_cmd] = ACTIONS(379),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(379),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(346),
    [sym_adc_opcode] = ACTIONS(351),
    [sym_and_opcode] = ACTIONS(351),
    [sym_asl_opcode] = ACTIONS(351),
    [sym_bcc_opcode] = ACTIONS(351),
    [sym_bcs_opcode] = ACTIONS(351),
    [sym_beq_opcode] = ACTIONS(351),
    [sym_bit_opcode] = ACTIONS(351),
    [sym_bmi_opcode] = ACTIONS(351),
    [sym_bne_opcode] = ACTIONS(351),
    [sym_bpl_opcode] = ACTIONS(351),
    [sym_brk_opcode] = ACTIONS(351),
    [sym_bvc_opcode] = ACTIONS(351),
    [sym_bvs_opcode] = ACTIONS(351),
    [sym_clc_opcode] = ACTIONS(351),
    [sym_cld_opcode] = ACTIONS(351),
    [sym_cli_opcode] = ACTIONS(351),
    [sym_clv_opcode] = ACTIONS(351),
    [sym_cmp_opcode] = ACTIONS(351),
    [sym_cpx_opcode] = ACTIONS(351),
    [sym_cpy_opcode] = ACTIONS(351),
    [sym_dec_opcode] = ACTIONS(351),
    [sym_dex_opcode] = ACTIONS(351),
    [sym_dey_opcode] = ACTIONS(351),
    [sym_eor_opcode] = ACTIONS(351),
    [sym_inc_opcode] = ACTIONS(351),
    [sym_inx_opcode] = ACTIONS(351),
    [sym_iny_opcode] = ACTIONS(351),
    [sym_jmp_opcode] = ACTIONS(351),
    [sym_jsr_opcode] = ACTIONS(351),
    [sym_lda_opcode] = ACTIONS(351),
    [sym_ldx_opcode] = ACTIONS(351),
    [sym_ldy_opcode] = ACTIONS(351),
    [sym_lsr_opcode] = ACTIONS(351),
    [sym_nop_opcode] = ACTIONS(351),
    [sym_ora_opcode] = ACTIONS(351),
    [sym_pha_opcode] = ACTIONS(351),
    [sym_php_opcode] = ACTIONS(351),
    [sym_pla_opcode] = ACTIONS(351),
    [sym_plp_opcode] = ACTIONS(351),
    [sym_rol_opcode] = ACTIONS(351),
    [sym_ror_opcode] = ACTIONS(351),
    [sym_rti_opcode] = ACTIONS(351),
    [sym_rts_opcode] = ACTIONS(351),
    [sym_sbc_opcode] = ACTIONS(351),
    [sym_sec_opcode] = ACTIONS(351),
    [sym_sed_opcode] = ACTIONS(351),
    [sym_sei_opcode] = ACTIONS(351),
    [sym_sta_opcode] = ACTIONS(351),
    [sym_stx_opcode] = ACTIONS(351),
    [sym_sty_opcode] = ACTIONS(351),
    [sym_tax_opcode] = ACTIONS(351),
    [sym_tay_opcode] = ACTIONS(351),
    [sym_tsx_opcode] = ACTIONS(351),
    [sym_txa_opcode] = ACTIONS(351),
    [sym_tcs_opcode] = ACTIONS(351),
    [sym_tya_opcode] = ACTIONS(351),
    [sym_a16_ctrl_cmd] = ACTIONS(346),
    [sym_a8_ctrl_cmd] = ACTIONS(346),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(346),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(346),
    [sym_bss_ctrl_cmd] = ACTIONS(346),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(346),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(397),
    [sym_adc_opcode] = ACTIONS(399),
    [sym_and_opcode] = ACTIONS(399),
    [sym_asl_opcode] = ACTIONS(399),
    [sym_bcc_opcode] = ACTIONS(399),
    [sym_bcs_opcode] = ACTIONS(399),
    [sym_beq_opcode] = ACTIONS(399),
    [sym_bit_opcode] = ACTIONS(399),
    [sym_bmi_opcode] = ACTIONS(399),
    [sym_bne_opcode] = ACTIONS(399),
    [sym_bpl_opcode] = ACTIONS(399),
    [sym_brk_opcode] = ACTIONS(399),
    [sym_bvc_opcode] = ACTIONS(399),
    [sym_bvs_opcode] = ACTIONS(399),
    [sym_clc_opcode] = ACTIONS(399),
    [sym_cld_opcode] = ACTIONS(399),
    [sym_cli_opcode] = ACTIONS(399),
    [sym_clv_opcode] = ACTIONS(399),
    [sym_cmp_opcode] = ACTIONS(399),
    [sym_cpx_opcode] = ACTIONS(399),
    [sym_cpy_opcode] = ACTIONS(399),
    [sym_dec_opcode] = ACTIONS(399),
    [sym_dex_opcode] = ACTIONS(399),
    [sym_dey_opcode] = ACTIONS(399),
    [sym_eor_opcode] = ACTIONS(399),
    [sym_inc_opcode] = ACTIONS(399),
    [sym_inx_opcode] = ACTIONS(399),
    [sym_iny_opcode] = ACTIONS(399),
    [sym_jmp_opcode] = ACTIONS(399),
    [sym_jsr_opcode] = ACTIONS(399),
    [sym_lda_opcode] = ACTIONS(399),
    [sym_ldx_opcode] = ACTIONS(399),
    [sym_ldy_opcode] = ACTIONS(399),
    [sym_lsr_opcode] = ACTIONS(399),
    [sym_nop_opcode] = ACTIONS(399),
    [sym_ora_opcode] = ACTIONS(399),
    [sym_pha_opcode] = ACTIONS(399),
    [sym_php_opcode] = ACTIONS(399),
    [sym_pla_opcode] = ACTIONS(399),
    [sym_plp_opcode] = ACTIONS(399),
    [sym_rol_opcode] = ACTIONS(399),
    [sym_ror_opcode] = ACTIONS(399),
    [sym_rti_opcode] = ACTIONS(399),
    [sym_rts_opcode] = ACTIONS(399),
    [sym_sbc_opcode] = ACTIONS(399),
    [sym_sec_opcode] = ACTIONS(399),
    [sym_sed_opcode] = ACTIONS(399),
    [sym_sei_opcode] = ACTIONS(399),
    [sym_sta_opcode] = ACTIONS(399),
    [sym_stx_opcode] = ACTIONS(399),
    [sym_sty_opcode] = ACTIONS(399),
    [sym_tax_opcode] = ACTIONS(399),
    [sym_tay_opcode] = ACTIONS(399),
    [sym_tsx_opcode] = ACTIONS(399),
    [sym_txa_opcode] = ACTIONS(399),
    [sym_tcs_opcode] = ACTIONS(399),
    [sym_tya_opcode] = ACTIONS(399),
    [sym_a16_ctrl_cmd] = ACTIONS(395),
    [sym_a8_ctrl_cmd] = ACTIONS(395),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(395),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(395),
    [sym_bss_ctrl_cmd] = ACTIONS(395),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(395),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(401),
    [sym_adc_opcode] = ACTIONS(389),
    [sym_and_opcode] = ACTIONS(389),
    [sym_asl_opcode] = ACTIONS(389),
    [sym_bcc_opcode] = ACTIONS(389),
    [sym_bcs_opcode] = ACTIONS(389),
    [sym_beq_opcode] = ACTIONS(389),
    [sym_bit_opcode] = ACTIONS(389),
    [sym_bmi_opcode] = ACTIONS(389),
    [sym_bne_opcode] = ACTIONS(389),
    [sym_bpl_opcode] = ACTIONS(389),
    [sym_brk_opcode] = ACTIONS(389),
    [sym_bvc_opcode] = ACTIONS(389),
    [sym_bvs_opcode] = ACTIONS(389),
    [sym_clc_opcode] = ACTIONS(389),
    [sym_cld_opcode] = ACTIONS(389),
    [sym_cli_opcode] = ACTIONS(389),
    [sym_clv_opcode] = ACTIONS(389),
    [sym_cmp_opcode] = ACTIONS(389),
    [sym_cpx_opcode] = ACTIONS(389),
    [sym_cpy_opcode] = ACTIONS(389),
    [sym_dec_opcode] = ACTIONS(389),
    [sym_dex_opcode] = ACTIONS(389),
    [sym_dey_opcode] = ACTIONS(389),
    [sym_eor_opcode] = ACTIONS(389),
    [sym_inc_opcode] = ACTIONS(389),
    [sym_inx_opcode] = ACTIONS(389),
    [sym_iny_opcode] = ACTIONS(389),
    [sym_jmp_opcode] = ACTIONS(389),
    [sym_jsr_opcode] = ACTIONS(389),
    [sym_lda_opcode] = ACTIONS(389),
    [sym_ldx_opcode] = ACTIONS(389),
    [sym_ldy_opcode] = ACTIONS(389),
    [sym_lsr_opcode] = ACTIONS(389),
    [sym_nop_opcode] = ACTIONS(389),
    [sym_ora_opcode] = ACTIONS(389),
    [sym_pha_opcode] = ACTIONS(389),
    [sym_php_opcode] = ACTIONS(389),
    [sym_pla_opcode] = ACTIONS(389),
    [sym_plp_opcode] = ACTIONS(389),
    [sym_rol_opcode] = ACTIONS(389),
    [sym_ror_opcode] = ACTIONS(389),
    [sym_rti_opcode] = ACTIONS(389),
    [sym_rts_opcode] = ACTIONS(389),
    [sym_sbc_opcode] = ACTIONS(389),
    [sym_sec_opcode] = ACTIONS(389),
    [sym_sed_opcode] = ACTIONS(389),
    [sym_sei_opcode] = ACTIONS(389),
    [sym_sta_opcode] = ACTIONS(389),
    [sym_stx_opcode] = ACTIONS(389),
    [sym_sty_opcode] = ACTIONS(389),
    [sym_tax_opcode] = ACTIONS(389),
    [sym_tay_opcode] = ACTIONS(389),
    [sym_tsx_opcode] = ACTIONS(389),
    [sym_txa_opcode] = ACTIONS(389),
    [sym_tcs_opcode] = ACTIONS(389),
    [sym_tya_opcode] = ACTIONS(389),
    [sym_a16_ctrl_cmd] = ACTIONS(385),
    [sym_a8_ctrl_cmd] = ACTIONS(385),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(385),
    [sym_bss_ctrl_cmd] = ACTIONS(385),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(385),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(403),
    [sym_adc_opcode] = ACTIONS(405),
    [sym_and_opcode] = ACTIONS(405),
    [sym_asl_opcode] = ACTIONS(405),
    [sym_bcc_opcode] = ACTIONS(405),
    [sym_bcs_opcode] = ACTIONS(405),
    [sym_beq_opcode] = ACTIONS(405),
    [sym_bit_opcode] = ACTIONS(405),
    [sym_bmi_opcode] = ACTIONS(405),
    [sym_bne_opcode] = ACTIONS(405),
    [sym_bpl_opcode] = ACTIONS(405),
    [sym_brk_opcode] = ACTIONS(405),
    [sym_bvc_opcode] = ACTIONS(405),
    [sym_bvs_opcode] = ACTIONS(405),
    [sym_clc_opcode] = ACTIONS(405),
    [sym_cld_opcode] = ACTIONS(405),
    [sym_cli_opcode] = ACTIONS(405),
    [sym_clv_opcode] = ACTIONS(405),
    [sym_cmp_opcode] = ACTIONS(405),
    [sym_cpx_opcode] = ACTIONS(405),
    [sym_cpy_opcode] = ACTIONS(405),
    [sym_dec_opcode] = ACTIONS(405),
    [sym_dex_opcode] = ACTIONS(405),
    [sym_dey_opcode] = ACTIONS(405),
    [sym_eor_opcode] = ACTIONS(405),
    [sym_inc_opcode] = ACTIONS(405),
    [sym_inx_opcode] = ACTIONS(405),
    [sym_iny_opcode] = ACTIONS(405),
    [sym_jmp_opcode] = ACTIONS(405),
    [sym_jsr_opcode] = ACTIONS(405),
    [sym_lda_opcode] = ACTIONS(405),
    [sym_ldx_opcode] = ACTIONS(405),
    [sym_ldy_opcode] = ACTIONS(405),
    [sym_lsr_opcode] = ACTIONS(405),
    [sym_nop_opcode] = ACTIONS(405),
    [sym_ora_opcode] = ACTIONS(405),
    [sym_pha_opcode] = ACTIONS(405),
    [sym_php_opcode] = ACTIONS(405),
    [sym_pla_opcode] = ACTIONS(405),
    [sym_plp_opcode] = ACTIONS(405),
    [sym_rol_opcode] = ACTIONS(405),
    [sym_ror_opcode] = ACTIONS(405),
    [sym_rti_opcode] = ACTIONS(405),
    [sym_rts_opcode] = ACTIONS(405),
    [sym_sbc_opcode] = ACTIONS(405),
    [sym_sec_opcode] = ACTIONS(405),
    [sym_sed_opcode] = ACTIONS(405),
    [sym_sei_opcode] = ACTIONS(405),
    [sym_sta_opcode] = ACTIONS(405),
    [sym_stx_opcode] = ACTIONS(405),
    [sym_sty_opcode] = ACTIONS(405),
    [sym_tax_opcode] = ACTIONS(405),
    [sym_tay_opcode] = ACTIONS(405),
    [sym_tsx_opcode] = ACTIONS(405),
    [sym_txa_opcode] = ACTIONS(405),
    [sym_tcs_opcode] = ACTIONS(405),
    [sym_tya_opcode] = ACTIONS(405),
    [sym_a16_ctrl_cmd] = ACTIONS(403),
    [sym_a8_ctrl_cmd] = ACTIONS(403),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(403),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(403),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(403),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(403),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(403),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(403),
    [sym_bss_ctrl_cmd] = ACTIONS(403),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(403),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(385),
    [sym_adc_opcode] = ACTIONS(389),
    [sym_and_opcode] = ACTIONS(389),
    [sym_asl_opcode] = ACTIONS(389),
    [sym_bcc_opcode] = ACTIONS(389),
    [sym_bcs_opcode] = ACTIONS(389),
    [sym_beq_opcode] = ACTIONS(389),
    [sym_bit_opcode] = ACTIONS(389),
    [sym_bmi_opcode] = ACTIONS(389),
    [sym_bne_opcode] = ACTIONS(389),
    [sym_bpl_opcode] = ACTIONS(389),
    [sym_brk_opcode] = ACTIONS(389),
    [sym_bvc_opcode] = ACTIONS(389),
    [sym_bvs_opcode] = ACTIONS(389),
    [sym_clc_opcode] = ACTIONS(389),
    [sym_cld_opcode] = ACTIONS(389),
    [sym_cli_opcode] = ACTIONS(389),
    [sym_clv_opcode] = ACTIONS(389),
    [sym_cmp_opcode] = ACTIONS(389),
    [sym_cpx_opcode] = ACTIONS(389),
    [sym_cpy_opcode] = ACTIONS(389),
    [sym_dec_opcode] = ACTIONS(389),
    [sym_dex_opcode] = ACTIONS(389),
    [sym_dey_opcode] = ACTIONS(389),
    [sym_eor_opcode] = ACTIONS(389),
    [sym_inc_opcode] = ACTIONS(389),
    [sym_inx_opcode] = ACTIONS(389),
    [sym_iny_opcode] = ACTIONS(389),
    [sym_jmp_opcode] = ACTIONS(389),
    [sym_jsr_opcode] = ACTIONS(389),
    [sym_lda_opcode] = ACTIONS(389),
    [sym_ldx_opcode] = ACTIONS(389),
    [sym_ldy_opcode] = ACTIONS(389),
    [sym_lsr_opcode] = ACTIONS(389),
    [sym_nop_opcode] = ACTIONS(389),
    [sym_ora_opcode] = ACTIONS(389),
    [sym_pha_opcode] = ACTIONS(389),
    [sym_php_opcode] = ACTIONS(389),
    [sym_pla_opcode] = ACTIONS(389),
    [sym_plp_opcode] = ACTIONS(389),
    [sym_rol_opcode] = ACTIONS(389),
    [sym_ror_opcode] = ACTIONS(389),
    [sym_rti_opcode] = ACTIONS(389),
    [sym_rts_opcode] = ACTIONS(389),
    [sym_sbc_opcode] = ACTIONS(389),
    [sym_sec_opcode] = ACTIONS(389),
    [sym_sed_opcode] = ACTIONS(389),
    [sym_sei_opcode] = ACTIONS(389),
    [sym_sta_opcode] = ACTIONS(389),
    [sym_stx_opcode] = ACTIONS(389),
    [sym_sty_opcode] = ACTIONS(389),
    [sym_tax_opcode] = ACTIONS(389),
    [sym_tay_opcode] = ACTIONS(389),
    [sym_tsx_opcode] = ACTIONS(389),
    [sym_txa_opcode] = ACTIONS(389),
    [sym_tcs_opcode] = ACTIONS(389),
    [sym_tya_opcode] = ACTIONS(389),
    [sym_a16_ctrl_cmd] = ACTIONS(385),
    [sym_a8_ctrl_cmd] = ACTIONS(385),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(385),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(385),
    [sym_bss_ctrl_cmd] = ACTIONS(385),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(385),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(407),
    [sym_adc_opcode] = ACTIONS(409),
    [sym_and_opcode] = ACTIONS(409),
    [sym_asl_opcode] = ACTIONS(409),
    [sym_bcc_opcode] = ACTIONS(409),
    [sym_bcs_opcode] = ACTIONS(409),
    [sym_beq_opcode] = ACTIONS(409),
    [sym_bit_opcode] = ACTIONS(409),
    [sym_bmi_opcode] = ACTIONS(409),
    [sym_bne_opcode] = ACTIONS(409),
    [sym_bpl_opcode] = ACTIONS(409),
    [sym_brk_opcode] = ACTIONS(409),
    [sym_bvc_opcode] = ACTIONS(409),
    [sym_bvs_opcode] = ACTIONS(409),
    [sym_clc_opcode] = ACTIONS(409),
    [sym_cld_opcode] = ACTIONS(409),
    [sym_cli_opcode] = ACTIONS(409),
    [sym_clv_opcode] = ACTIONS(409),
    [sym_cmp_opcode] = ACTIONS(409),
    [sym_cpx_opcode] = ACTIONS(409),
    [sym_cpy_opcode] = ACTIONS(409),
    [sym_dec_opcode] = ACTIONS(409),
    [sym_dex_opcode] = ACTIONS(409),
    [sym_dey_opcode] = ACTIONS(409),
    [sym_eor_opcode] = ACTIONS(409),
    [sym_inc_opcode] = ACTIONS(409),
    [sym_inx_opcode] = ACTIONS(409),
    [sym_iny_opcode] = ACTIONS(409),
    [sym_jmp_opcode] = ACTIONS(409),
    [sym_jsr_opcode] = ACTIONS(409),
    [sym_lda_opcode] = ACTIONS(409),
    [sym_ldx_opcode] = ACTIONS(409),
    [sym_ldy_opcode] = ACTIONS(409),
    [sym_lsr_opcode] = ACTIONS(409),
    [sym_nop_opcode] = ACTIONS(409),
    [sym_ora_opcode] = ACTIONS(409),
    [sym_pha_opcode] = ACTIONS(409),
    [sym_php_opcode] = ACTIONS(409),
    [sym_pla_opcode] = ACTIONS(409),
    [sym_plp_opcode] = ACTIONS(409),
    [sym_rol_opcode] = ACTIONS(409),
    [sym_ror_opcode] = ACTIONS(409),
    [sym_rti_opcode] = ACTIONS(409),
    [sym_rts_opcode] = ACTIONS(409),
    [sym_sbc_opcode] = ACTIONS(409),
    [sym_sec_opcode] = ACTIONS(409),
    [sym_sed_opcode] = ACTIONS(409),
    [sym_sei_opcode] = ACTIONS(409),
    [sym_sta_opcode] = ACTIONS(409),
    [sym_stx_opcode] = ACTIONS(409),
    [sym_sty_opcode] = ACTIONS(409),
    [sym_tax_opcode] = ACTIONS(409),
    [sym_tay_opcode] = ACTIONS(409),
    [sym_tsx_opcode] = ACTIONS(409),
    [sym_txa_opcode] = ACTIONS(409),
    [sym_tcs_opcode] = ACTIONS(409),
    [sym_tya_opcode] = ACTIONS(409),
    [sym_a16_ctrl_cmd] = ACTIONS(407),
    [sym_a8_ctrl_cmd] = ACTIONS(407),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(407),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(407),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(407),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(407),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(407),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(407),
    [sym_bss_ctrl_cmd] = ACTIONS(407),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(407),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(411),
    [sym_adc_opcode] = ACTIONS(413),
    [sym_and_opcode] = ACTIONS(413),
    [sym_asl_opcode] = ACTIONS(413),
    [sym_bcc_opcode] = ACTIONS(413),
    [sym_bcs_opcode] = ACTIONS(413),
    [sym_beq_opcode] = ACTIONS(413),
    [sym_bit_opcode] = ACTIONS(413),
    [sym_bmi_opcode] = ACTIONS(413),
    [sym_bne_opcode] = ACTIONS(413),
    [sym_bpl_opcode] = ACTIONS(413),
    [sym_brk_opcode] = ACTIONS(413),
    [sym_bvc_opcode] = ACTIONS(413),
    [sym_bvs_opcode] = ACTIONS(413),
    [sym_clc_opcode] = ACTIONS(413),
    [sym_cld_opcode] = ACTIONS(413),
    [sym_cli_opcode] = ACTIONS(413),
    [sym_clv_opcode] = ACTIONS(413),
    [sym_cmp_opcode] = ACTIONS(413),
    [sym_cpx_opcode] = ACTIONS(413),
    [sym_cpy_opcode] = ACTIONS(413),
    [sym_dec_opcode] = ACTIONS(413),
    [sym_dex_opcode] = ACTIONS(413),
    [sym_dey_opcode] = ACTIONS(413),
    [sym_eor_opcode] = ACTIONS(413),
    [sym_inc_opcode] = ACTIONS(413),
    [sym_inx_opcode] = ACTIONS(413),
    [sym_iny_opcode] = ACTIONS(413),
    [sym_jmp_opcode] = ACTIONS(413),
    [sym_jsr_opcode] = ACTIONS(413),
    [sym_lda_opcode] = ACTIONS(413),
    [sym_ldx_opcode] = ACTIONS(413),
    [sym_ldy_opcode] = ACTIONS(413),
    [sym_lsr_opcode] = ACTIONS(413),
    [sym_nop_opcode] = ACTIONS(413),
    [sym_ora_opcode] = ACTIONS(413),
    [sym_pha_opcode] = ACTIONS(413),
    [sym_php_opcode] = ACTIONS(413),
    [sym_pla_opcode] = ACTIONS(413),
    [sym_plp_opcode] = ACTIONS(413),
    [sym_rol_opcode] = ACTIONS(413),
    [sym_ror_opcode] = ACTIONS(413),
    [sym_rti_opcode] = ACTIONS(413),
    [sym_rts_opcode] = ACTIONS(413),
    [sym_sbc_opcode] = ACTIONS(413),
    [sym_sec_opcode] = ACTIONS(413),
    [sym_sed_opcode] = ACTIONS(413),
    [sym_sei_opcode] = ACTIONS(413),
    [sym_sta_opcode] = ACTIONS(413),
    [sym_stx_opcode] = ACTIONS(413),
    [sym_sty_opcode] = ACTIONS(413),
    [sym_tax_opcode] = ACTIONS(413),
    [sym_tay_opcode] = ACTIONS(413),
    [sym_tsx_opcode] = ACTIONS(413),
    [sym_txa_opcode] = ACTIONS(413),
    [sym_tcs_opcode] = ACTIONS(413),
    [sym_tya_opcode] = ACTIONS(413),
    [sym_a16_ctrl_cmd] = ACTIONS(411),
    [sym_a8_ctrl_cmd] = ACTIONS(411),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(411),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(411),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(411),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(411),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(411),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(411),
    [sym_bss_ctrl_cmd] = ACTIONS(411),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(411),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(415),
    [sym_adc_opcode] = ACTIONS(417),
    [sym_and_opcode] = ACTIONS(417),
    [sym_asl_opcode] = ACTIONS(417),
    [sym_bcc_opcode] = ACTIONS(417),
    [sym_bcs_opcode] = ACTIONS(417),
    [sym_beq_opcode] = ACTIONS(417),
    [sym_bit_opcode] = ACTIONS(417),
    [sym_bmi_opcode] = ACTIONS(417),
    [sym_bne_opcode] = ACTIONS(417),
    [sym_bpl_opcode] = ACTIONS(417),
    [sym_brk_opcode] = ACTIONS(417),
    [sym_bvc_opcode] = ACTIONS(417),
    [sym_bvs_opcode] = ACTIONS(417),
    [sym_clc_opcode] = ACTIONS(417),
    [sym_cld_opcode] = ACTIONS(417),
    [sym_cli_opcode] = ACTIONS(417),
    [sym_clv_opcode] = ACTIONS(417),
    [sym_cmp_opcode] = ACTIONS(417),
    [sym_cpx_opcode] = ACTIONS(417),
    [sym_cpy_opcode] = ACTIONS(417),
    [sym_dec_opcode] = ACTIONS(417),
    [sym_dex_opcode] = ACTIONS(417),
    [sym_dey_opcode] = ACTIONS(417),
    [sym_eor_opcode] = ACTIONS(417),
    [sym_inc_opcode] = ACTIONS(417),
    [sym_inx_opcode] = ACTIONS(417),
    [sym_iny_opcode] = ACTIONS(417),
    [sym_jmp_opcode] = ACTIONS(417),
    [sym_jsr_opcode] = ACTIONS(417),
    [sym_lda_opcode] = ACTIONS(417),
    [sym_ldx_opcode] = ACTIONS(417),
    [sym_ldy_opcode] = ACTIONS(417),
    [sym_lsr_opcode] = ACTIONS(417),
    [sym_nop_opcode] = ACTIONS(417),
    [sym_ora_opcode] = ACTIONS(417),
    [sym_pha_opcode] = ACTIONS(417),
    [sym_php_opcode] = ACTIONS(417),
    [sym_pla_opcode] = ACTIONS(417),
    [sym_plp_opcode] = ACTIONS(417),
    [sym_rol_opcode] = ACTIONS(417),
    [sym_ror_opcode] = ACTIONS(417),
    [sym_rti_opcode] = ACTIONS(417),
    [sym_rts_opcode] = ACTIONS(417),
    [sym_sbc_opcode] = ACTIONS(417),
    [sym_sec_opcode] = ACTIONS(417),
    [sym_sed_opcode] = ACTIONS(417),
    [sym_sei_opcode] = ACTIONS(417),
    [sym_sta_opcode] = ACTIONS(417),
    [sym_stx_opcode] = ACTIONS(417),
    [sym_sty_opcode] = ACTIONS(417),
    [sym_tax_opcode] = ACTIONS(417),
    [sym_tay_opcode] = ACTIONS(417),
    [sym_tsx_opcode] = ACTIONS(417),
    [sym_txa_opcode] = ACTIONS(417),
    [sym_tcs_opcode] = ACTIONS(417),
    [sym_tya_opcode] = ACTIONS(417),
    [sym_a16_ctrl_cmd] = ACTIONS(415),
    [sym_a8_ctrl_cmd] = ACTIONS(415),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(415),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(415),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(415),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(415),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(415),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(415),
    [sym_bss_ctrl_cmd] = ACTIONS(415),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(415),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(419),
    [sym_adc_opcode] = ACTIONS(421),
    [sym_and_opcode] = ACTIONS(421),
    [sym_asl_opcode] = ACTIONS(421),
    [sym_bcc_opcode] = ACTIONS(421),
    [sym_bcs_opcode] = ACTIONS(421),
    [sym_beq_opcode] = ACTIONS(421),
    [sym_bit_opcode] = ACTIONS(421),
    [sym_bmi_opcode] = ACTIONS(421),
    [sym_bne_opcode] = ACTIONS(421),
    [sym_bpl_opcode] = ACTIONS(421),
    [sym_brk_opcode] = ACTIONS(421),
    [sym_bvc_opcode] = ACTIONS(421),
    [sym_bvs_opcode] = ACTIONS(421),
    [sym_clc_opcode] = ACTIONS(421),
    [sym_cld_opcode] = ACTIONS(421),
    [sym_cli_opcode] = ACTIONS(421),
    [sym_clv_opcode] = ACTIONS(421),
    [sym_cmp_opcode] = ACTIONS(421),
    [sym_cpx_opcode] = ACTIONS(421),
    [sym_cpy_opcode] = ACTIONS(421),
    [sym_dec_opcode] = ACTIONS(421),
    [sym_dex_opcode] = ACTIONS(421),
    [sym_dey_opcode] = ACTIONS(421),
    [sym_eor_opcode] = ACTIONS(421),
    [sym_inc_opcode] = ACTIONS(421),
    [sym_inx_opcode] = ACTIONS(421),
    [sym_iny_opcode] = ACTIONS(421),
    [sym_jmp_opcode] = ACTIONS(421),
    [sym_jsr_opcode] = ACTIONS(421),
    [sym_lda_opcode] = ACTIONS(421),
    [sym_ldx_opcode] = ACTIONS(421),
    [sym_ldy_opcode] = ACTIONS(421),
    [sym_lsr_opcode] = ACTIONS(421),
    [sym_nop_opcode] = ACTIONS(421),
    [sym_ora_opcode] = ACTIONS(421),
    [sym_pha_opcode] = ACTIONS(421),
    [sym_php_opcode] = ACTIONS(421),
    [sym_pla_opcode] = ACTIONS(421),
    [sym_plp_opcode] = ACTIONS(421),
    [sym_rol_opcode] = ACTIONS(421),
    [sym_ror_opcode] = ACTIONS(421),
    [sym_rti_opcode] = ACTIONS(421),
    [sym_rts_opcode] = ACTIONS(421),
    [sym_sbc_opcode] = ACTIONS(421),
    [sym_sec_opcode] = ACTIONS(421),
    [sym_sed_opcode] = ACTIONS(421),
    [sym_sei_opcode] = ACTIONS(421),
    [sym_sta_opcode] = ACTIONS(421),
    [sym_stx_opcode] = ACTIONS(421),
    [sym_sty_opcode] = ACTIONS(421),
    [sym_tax_opcode] = ACTIONS(421),
    [sym_tay_opcode] = ACTIONS(421),
    [sym_tsx_opcode] = ACTIONS(421),
    [sym_txa_opcode] = ACTIONS(421),
    [sym_tcs_opcode] = ACTIONS(421),
    [sym_tya_opcode] = ACTIONS(421),
    [sym_a16_ctrl_cmd] = ACTIONS(419),
    [sym_a8_ctrl_cmd] = ACTIONS(419),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(419),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(419),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(419),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(419),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(419),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(419),
    [sym_bss_ctrl_cmd] = ACTIONS(419),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(419),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(423),
    [sym_adc_opcode] = ACTIONS(425),
    [sym_and_opcode] = ACTIONS(425),
    [sym_asl_opcode] = ACTIONS(425),
    [sym_bcc_opcode] = ACTIONS(425),
    [sym_bcs_opcode] = ACTIONS(425),
    [sym_beq_opcode] = ACTIONS(425),
    [sym_bit_opcode] = ACTIONS(425),
    [sym_bmi_opcode] = ACTIONS(425),
    [sym_bne_opcode] = ACTIONS(425),
    [sym_bpl_opcode] = ACTIONS(425),
    [sym_brk_opcode] = ACTIONS(425),
    [sym_bvc_opcode] = ACTIONS(425),
    [sym_bvs_opcode] = ACTIONS(425),
    [sym_clc_opcode] = ACTIONS(425),
    [sym_cld_opcode] = ACTIONS(425),
    [sym_cli_opcode] = ACTIONS(425),
    [sym_clv_opcode] = ACTIONS(425),
    [sym_cmp_opcode] = ACTIONS(425),
    [sym_cpx_opcode] = ACTIONS(425),
    [sym_cpy_opcode] = ACTIONS(425),
    [sym_dec_opcode] = ACTIONS(425),
    [sym_dex_opcode] = ACTIONS(425),
    [sym_dey_opcode] = ACTIONS(425),
    [sym_eor_opcode] = ACTIONS(425),
    [sym_inc_opcode] = ACTIONS(425),
    [sym_inx_opcode] = ACTIONS(425),
    [sym_iny_opcode] = ACTIONS(425),
    [sym_jmp_opcode] = ACTIONS(425),
    [sym_jsr_opcode] = ACTIONS(425),
    [sym_lda_opcode] = ACTIONS(425),
    [sym_ldx_opcode] = ACTIONS(425),
    [sym_ldy_opcode] = ACTIONS(425),
    [sym_lsr_opcode] = ACTIONS(425),
    [sym_nop_opcode] = ACTIONS(425),
    [sym_ora_opcode] = ACTIONS(425),
    [sym_pha_opcode] = ACTIONS(425),
    [sym_php_opcode] = ACTIONS(425),
    [sym_pla_opcode] = ACTIONS(425),
    [sym_plp_opcode] = ACTIONS(425),
    [sym_rol_opcode] = ACTIONS(425),
    [sym_ror_opcode] = ACTIONS(425),
    [sym_rti_opcode] = ACTIONS(425),
    [sym_rts_opcode] = ACTIONS(425),
    [sym_sbc_opcode] = ACTIONS(425),
    [sym_sec_opcode] = ACTIONS(425),
    [sym_sed_opcode] = ACTIONS(425),
    [sym_sei_opcode] = ACTIONS(425),
    [sym_sta_opcode] = ACTIONS(425),
    [sym_stx_opcode] = ACTIONS(425),
    [sym_sty_opcode] = ACTIONS(425),
    [sym_tax_opcode] = ACTIONS(425),
    [sym_tay_opcode] = ACTIONS(425),
    [sym_tsx_opcode] = ACTIONS(425),
    [sym_txa_opcode] = ACTIONS(425),
    [sym_tcs_opcode] = ACTIONS(425),
    [sym_tya_opcode] = ACTIONS(425),
    [sym_a16_ctrl_cmd] = ACTIONS(423),
    [sym_a8_ctrl_cmd] = ACTIONS(423),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(423),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(423),
    [sym_bss_ctrl_cmd] = ACTIONS(423),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(423),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(427),
    [sym_adc_opcode] = ACTIONS(429),
    [sym_and_opcode] = ACTIONS(429),
    [sym_asl_opcode] = ACTIONS(429),
    [sym_bcc_opcode] = ACTIONS(429),
    [sym_bcs_opcode] = ACTIONS(429),
    [sym_beq_opcode] = ACTIONS(429),
    [sym_bit_opcode] = ACTIONS(429),
    [sym_bmi_opcode] = ACTIONS(429),
    [sym_bne_opcode] = ACTIONS(429),
    [sym_bpl_opcode] = ACTIONS(429),
    [sym_brk_opcode] = ACTIONS(429),
    [sym_bvc_opcode] = ACTIONS(429),
    [sym_bvs_opcode] = ACTIONS(429),
    [sym_clc_opcode] = ACTIONS(429),
    [sym_cld_opcode] = ACTIONS(429),
    [sym_cli_opcode] = ACTIONS(429),
    [sym_clv_opcode] = ACTIONS(429),
    [sym_cmp_opcode] = ACTIONS(429),
    [sym_cpx_opcode] = ACTIONS(429),
    [sym_cpy_opcode] = ACTIONS(429),
    [sym_dec_opcode] = ACTIONS(429),
    [sym_dex_opcode] = ACTIONS(429),
    [sym_dey_opcode] = ACTIONS(429),
    [sym_eor_opcode] = ACTIONS(429),
    [sym_inc_opcode] = ACTIONS(429),
    [sym_inx_opcode] = ACTIONS(429),
    [sym_iny_opcode] = ACTIONS(429),
    [sym_jmp_opcode] = ACTIONS(429),
    [sym_jsr_opcode] = ACTIONS(429),
    [sym_lda_opcode] = ACTIONS(429),
    [sym_ldx_opcode] = ACTIONS(429),
    [sym_ldy_opcode] = ACTIONS(429),
    [sym_lsr_opcode] = ACTIONS(429),
    [sym_nop_opcode] = ACTIONS(429),
    [sym_ora_opcode] = ACTIONS(429),
    [sym_pha_opcode] = ACTIONS(429),
    [sym_php_opcode] = ACTIONS(429),
    [sym_pla_opcode] = ACTIONS(429),
    [sym_plp_opcode] = ACTIONS(429),
    [sym_rol_opcode] = ACTIONS(429),
    [sym_ror_opcode] = ACTIONS(429),
    [sym_rti_opcode] = ACTIONS(429),
    [sym_rts_opcode] = ACTIONS(429),
    [sym_sbc_opcode] = ACTIONS(429),
    [sym_sec_opcode] = ACTIONS(429),
    [sym_sed_opcode] = ACTIONS(429),
    [sym_sei_opcode] = ACTIONS(429),
    [sym_sta_opcode] = ACTIONS(429),
    [sym_stx_opcode] = ACTIONS(429),
    [sym_sty_opcode] = ACTIONS(429),
    [sym_tax_opcode] = ACTIONS(429),
    [sym_tay_opcode] = ACTIONS(429),
    [sym_tsx_opcode] = ACTIONS(429),
    [sym_txa_opcode] = ACTIONS(429),
    [sym_tcs_opcode] = ACTIONS(429),
    [sym_tya_opcode] = ACTIONS(429),
    [sym_a16_ctrl_cmd] = ACTIONS(427),
    [sym_a8_ctrl_cmd] = ACTIONS(427),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(427),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(427),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(427),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(427),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(427),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(427),
    [sym_bss_ctrl_cmd] = ACTIONS(427),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(427),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(431),
    [sym_adc_opcode] = ACTIONS(433),
    [sym_and_opcode] = ACTIONS(433),
    [sym_asl_opcode] = ACTIONS(433),
    [sym_bcc_opcode] = ACTIONS(433),
    [sym_bcs_opcode] = ACTIONS(433),
    [sym_beq_opcode] = ACTIONS(433),
    [sym_bit_opcode] = ACTIONS(433),
    [sym_bmi_opcode] = ACTIONS(433),
    [sym_bne_opcode] = ACTIONS(433),
    [sym_bpl_opcode] = ACTIONS(433),
    [sym_brk_opcode] = ACTIONS(433),
    [sym_bvc_opcode] = ACTIONS(433),
    [sym_bvs_opcode] = ACTIONS(433),
    [sym_clc_opcode] = ACTIONS(433),
    [sym_cld_opcode] = ACTIONS(433),
    [sym_cli_opcode] = ACTIONS(433),
    [sym_clv_opcode] = ACTIONS(433),
    [sym_cmp_opcode] = ACTIONS(433),
    [sym_cpx_opcode] = ACTIONS(433),
    [sym_cpy_opcode] = ACTIONS(433),
    [sym_dec_opcode] = ACTIONS(433),
    [sym_dex_opcode] = ACTIONS(433),
    [sym_dey_opcode] = ACTIONS(433),
    [sym_eor_opcode] = ACTIONS(433),
    [sym_inc_opcode] = ACTIONS(433),
    [sym_inx_opcode] = ACTIONS(433),
    [sym_iny_opcode] = ACTIONS(433),
    [sym_jmp_opcode] = ACTIONS(433),
    [sym_jsr_opcode] = ACTIONS(433),
    [sym_lda_opcode] = ACTIONS(433),
    [sym_ldx_opcode] = ACTIONS(433),
    [sym_ldy_opcode] = ACTIONS(433),
    [sym_lsr_opcode] = ACTIONS(433),
    [sym_nop_opcode] = ACTIONS(433),
    [sym_ora_opcode] = ACTIONS(433),
    [sym_pha_opcode] = ACTIONS(433),
    [sym_php_opcode] = ACTIONS(433),
    [sym_pla_opcode] = ACTIONS(433),
    [sym_plp_opcode] = ACTIONS(433),
    [sym_rol_opcode] = ACTIONS(433),
    [sym_ror_opcode] = ACTIONS(433),
    [sym_rti_opcode] = ACTIONS(433),
    [sym_rts_opcode] = ACTIONS(433),
    [sym_sbc_opcode] = ACTIONS(433),
    [sym_sec_opcode] = ACTIONS(433),
    [sym_sed_opcode] = ACTIONS(433),
    [sym_sei_opcode] = ACTIONS(433),
    [sym_sta_opcode] = ACTIONS(433),
    [sym_stx_opcode] = ACTIONS(433),
    [sym_sty_opcode] = ACTIONS(433),
    [sym_tax_opcode] = ACTIONS(433),
    [sym_tay_opcode] = ACTIONS(433),
    [sym_tsx_opcode] = ACTIONS(433),
    [sym_txa_opcode] = ACTIONS(433),
    [sym_tcs_opcode] = ACTIONS(433),
    [sym_tya_opcode] = ACTIONS(433),
    [sym_a16_ctrl_cmd] = ACTIONS(431),
    [sym_a8_ctrl_cmd] = ACTIONS(431),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(431),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(431),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(431),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(431),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(431),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(431),
    [sym_bss_ctrl_cmd] = ACTIONS(431),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(431),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(435),
    [sym_adc_opcode] = ACTIONS(437),
    [sym_and_opcode] = ACTIONS(437),
    [sym_asl_opcode] = ACTIONS(437),
    [sym_bcc_opcode] = ACTIONS(437),
    [sym_bcs_opcode] = ACTIONS(437),
    [sym_beq_opcode] = ACTIONS(437),
    [sym_bit_opcode] = ACTIONS(437),
    [sym_bmi_opcode] = ACTIONS(437),
    [sym_bne_opcode] = ACTIONS(437),
    [sym_bpl_opcode] = ACTIONS(437),
    [sym_brk_opcode] = ACTIONS(437),
    [sym_bvc_opcode] = ACTIONS(437),
    [sym_bvs_opcode] = ACTIONS(437),
    [sym_clc_opcode] = ACTIONS(437),
    [sym_cld_opcode] = ACTIONS(437),
    [sym_cli_opcode] = ACTIONS(437),
    [sym_clv_opcode] = ACTIONS(437),
    [sym_cmp_opcode] = ACTIONS(437),
    [sym_cpx_opcode] = ACTIONS(437),
    [sym_cpy_opcode] = ACTIONS(437),
    [sym_dec_opcode] = ACTIONS(437),
    [sym_dex_opcode] = ACTIONS(437),
    [sym_dey_opcode] = ACTIONS(437),
    [sym_eor_opcode] = ACTIONS(437),
    [sym_inc_opcode] = ACTIONS(437),
    [sym_inx_opcode] = ACTIONS(437),
    [sym_iny_opcode] = ACTIONS(437),
    [sym_jmp_opcode] = ACTIONS(437),
    [sym_jsr_opcode] = ACTIONS(437),
    [sym_lda_opcode] = ACTIONS(437),
    [sym_ldx_opcode] = ACTIONS(437),
    [sym_ldy_opcode] = ACTIONS(437),
    [sym_lsr_opcode] = ACTIONS(437),
    [sym_nop_opcode] = ACTIONS(437),
    [sym_ora_opcode] = ACTIONS(437),
    [sym_pha_opcode] = ACTIONS(437),
    [sym_php_opcode] = ACTIONS(437),
    [sym_pla_opcode] = ACTIONS(437),
    [sym_plp_opcode] = ACTIONS(437),
    [sym_rol_opcode] = ACTIONS(437),
    [sym_ror_opcode] = ACTIONS(437),
    [sym_rti_opcode] = ACTIONS(437),
    [sym_rts_opcode] = ACTIONS(437),
    [sym_sbc_opcode] = ACTIONS(437),
    [sym_sec_opcode] = ACTIONS(437),
    [sym_sed_opcode] = ACTIONS(437),
    [sym_sei_opcode] = ACTIONS(437),
    [sym_sta_opcode] = ACTIONS(437),
    [sym_stx_opcode] = ACTIONS(437),
    [sym_sty_opcode] = ACTIONS(437),
    [sym_tax_opcode] = ACTIONS(437),
    [sym_tay_opcode] = ACTIONS(437),
    [sym_tsx_opcode] = ACTIONS(437),
    [sym_txa_opcode] = ACTIONS(437),
    [sym_tcs_opcode] = ACTIONS(437),
    [sym_tya_opcode] = ACTIONS(437),
    [sym_a16_ctrl_cmd] = ACTIONS(435),
    [sym_a8_ctrl_cmd] = ACTIONS(435),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(435),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(435),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(435),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(435),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(435),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(435),
    [sym_bss_ctrl_cmd] = ACTIONS(435),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(435),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(439),
    [sym_adc_opcode] = ACTIONS(441),
    [sym_and_opcode] = ACTIONS(441),
    [sym_asl_opcode] = ACTIONS(441),
    [sym_bcc_opcode] = ACTIONS(441),
    [sym_bcs_opcode] = ACTIONS(441),
    [sym_beq_opcode] = ACTIONS(441),
    [sym_bit_opcode] = ACTIONS(441),
    [sym_bmi_opcode] = ACTIONS(441),
    [sym_bne_opcode] = ACTIONS(441),
    [sym_bpl_opcode] = ACTIONS(441),
    [sym_brk_opcode] = ACTIONS(441),
    [sym_bvc_opcode] = ACTIONS(441),
    [sym_bvs_opcode] = ACTIONS(441),
    [sym_clc_opcode] = ACTIONS(441),
    [sym_cld_opcode] = ACTIONS(441),
    [sym_cli_opcode] = ACTIONS(441),
    [sym_clv_opcode] = ACTIONS(441),
    [sym_cmp_opcode] = ACTIONS(441),
    [sym_cpx_opcode] = ACTIONS(441),
    [sym_cpy_opcode] = ACTIONS(441),
    [sym_dec_opcode] = ACTIONS(441),
    [sym_dex_opcode] = ACTIONS(441),
    [sym_dey_opcode] = ACTIONS(441),
    [sym_eor_opcode] = ACTIONS(441),
    [sym_inc_opcode] = ACTIONS(441),
    [sym_inx_opcode] = ACTIONS(441),
    [sym_iny_opcode] = ACTIONS(441),
    [sym_jmp_opcode] = ACTIONS(441),
    [sym_jsr_opcode] = ACTIONS(441),
    [sym_lda_opcode] = ACTIONS(441),
    [sym_ldx_opcode] = ACTIONS(441),
    [sym_ldy_opcode] = ACTIONS(441),
    [sym_lsr_opcode] = ACTIONS(441),
    [sym_nop_opcode] = ACTIONS(441),
    [sym_ora_opcode] = ACTIONS(441),
    [sym_pha_opcode] = ACTIONS(441),
    [sym_php_opcode] = ACTIONS(441),
    [sym_pla_opcode] = ACTIONS(441),
    [sym_plp_opcode] = ACTIONS(441),
    [sym_rol_opcode] = ACTIONS(441),
    [sym_ror_opcode] = ACTIONS(441),
    [sym_rti_opcode] = ACTIONS(441),
    [sym_rts_opcode] = ACTIONS(441),
    [sym_sbc_opcode] = ACTIONS(441),
    [sym_sec_opcode] = ACTIONS(441),
    [sym_sed_opcode] = ACTIONS(441),
    [sym_sei_opcode] = ACTIONS(441),
    [sym_sta_opcode] = ACTIONS(441),
    [sym_stx_opcode] = ACTIONS(441),
    [sym_sty_opcode] = ACTIONS(441),
    [sym_tax_opcode] = ACTIONS(441),
    [sym_tay_opcode] = ACTIONS(441),
    [sym_tsx_opcode] = ACTIONS(441),
    [sym_txa_opcode] = ACTIONS(441),
    [sym_tcs_opcode] = ACTIONS(441),
    [sym_tya_opcode] = ACTIONS(441),
    [sym_a16_ctrl_cmd] = ACTIONS(439),
    [sym_a8_ctrl_cmd] = ACTIONS(439),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(439),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(439),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(439),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(439),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(439),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(439),
    [sym_bss_ctrl_cmd] = ACTIONS(439),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(439),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(443),
    [sym_adc_opcode] = ACTIONS(445),
    [sym_and_opcode] = ACTIONS(445),
    [sym_asl_opcode] = ACTIONS(445),
    [sym_bcc_opcode] = ACTIONS(445),
    [sym_bcs_opcode] = ACTIONS(445),
    [sym_beq_opcode] = ACTIONS(445),
    [sym_bit_opcode] = ACTIONS(445),
    [sym_bmi_opcode] = ACTIONS(445),
    [sym_bne_opcode] = ACTIONS(445),
    [sym_bpl_opcode] = ACTIONS(445),
    [sym_brk_opcode] = ACTIONS(445),
    [sym_bvc_opcode] = ACTIONS(445),
    [sym_bvs_opcode] = ACTIONS(445),
    [sym_clc_opcode] = ACTIONS(445),
    [sym_cld_opcode] = ACTIONS(445),
    [sym_cli_opcode] = ACTIONS(445),
    [sym_clv_opcode] = ACTIONS(445),
    [sym_cmp_opcode] = ACTIONS(445),
    [sym_cpx_opcode] = ACTIONS(445),
    [sym_cpy_opcode] = ACTIONS(445),
    [sym_dec_opcode] = ACTIONS(445),
    [sym_dex_opcode] = ACTIONS(445),
    [sym_dey_opcode] = ACTIONS(445),
    [sym_eor_opcode] = ACTIONS(445),
    [sym_inc_opcode] = ACTIONS(445),
    [sym_inx_opcode] = ACTIONS(445),
    [sym_iny_opcode] = ACTIONS(445),
    [sym_jmp_opcode] = ACTIONS(445),
    [sym_jsr_opcode] = ACTIONS(445),
    [sym_lda_opcode] = ACTIONS(445),
    [sym_ldx_opcode] = ACTIONS(445),
    [sym_ldy_opcode] = ACTIONS(445),
    [sym_lsr_opcode] = ACTIONS(445),
    [sym_nop_opcode] = ACTIONS(445),
    [sym_ora_opcode] = ACTIONS(445),
    [sym_pha_opcode] = ACTIONS(445),
    [sym_php_opcode] = ACTIONS(445),
    [sym_pla_opcode] = ACTIONS(445),
    [sym_plp_opcode] = ACTIONS(445),
    [sym_rol_opcode] = ACTIONS(445),
    [sym_ror_opcode] = ACTIONS(445),
    [sym_rti_opcode] = ACTIONS(445),
    [sym_rts_opcode] = ACTIONS(445),
    [sym_sbc_opcode] = ACTIONS(445),
    [sym_sec_opcode] = ACTIONS(445),
    [sym_sed_opcode] = ACTIONS(445),
    [sym_sei_opcode] = ACTIONS(445),
    [sym_sta_opcode] = ACTIONS(445),
    [sym_stx_opcode] = ACTIONS(445),
    [sym_sty_opcode] = ACTIONS(445),
    [sym_tax_opcode] = ACTIONS(445),
    [sym_tay_opcode] = ACTIONS(445),
    [sym_tsx_opcode] = ACTIONS(445),
    [sym_txa_opcode] = ACTIONS(445),
    [sym_tcs_opcode] = ACTIONS(445),
    [sym_tya_opcode] = ACTIONS(445),
    [sym_a16_ctrl_cmd] = ACTIONS(443),
    [sym_a8_ctrl_cmd] = ACTIONS(443),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(443),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(443),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(443),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(443),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(443),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(443),
    [sym_bss_ctrl_cmd] = ACTIONS(443),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(443),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(447),
    [sym_adc_opcode] = ACTIONS(449),
    [sym_and_opcode] = ACTIONS(449),
    [sym_asl_opcode] = ACTIONS(449),
    [sym_bcc_opcode] = ACTIONS(449),
    [sym_bcs_opcode] = ACTIONS(449),
    [sym_beq_opcode] = ACTIONS(449),
    [sym_bit_opcode] = ACTIONS(449),
    [sym_bmi_opcode] = ACTIONS(449),
    [sym_bne_opcode] = ACTIONS(449),
    [sym_bpl_opcode] = ACTIONS(449),
    [sym_brk_opcode] = ACTIONS(449),
    [sym_bvc_opcode] = ACTIONS(449),
    [sym_bvs_opcode] = ACTIONS(449),
    [sym_clc_opcode] = ACTIONS(449),
    [sym_cld_opcode] = ACTIONS(449),
    [sym_cli_opcode] = ACTIONS(449),
    [sym_clv_opcode] = ACTIONS(449),
    [sym_cmp_opcode] = ACTIONS(449),
    [sym_cpx_opcode] = ACTIONS(449),
    [sym_cpy_opcode] = ACTIONS(449),
    [sym_dec_opcode] = ACTIONS(449),
    [sym_dex_opcode] = ACTIONS(449),
    [sym_dey_opcode] = ACTIONS(449),
    [sym_eor_opcode] = ACTIONS(449),
    [sym_inc_opcode] = ACTIONS(449),
    [sym_inx_opcode] = ACTIONS(449),
    [sym_iny_opcode] = ACTIONS(449),
    [sym_jmp_opcode] = ACTIONS(449),
    [sym_jsr_opcode] = ACTIONS(449),
    [sym_lda_opcode] = ACTIONS(449),
    [sym_ldx_opcode] = ACTIONS(449),
    [sym_ldy_opcode] = ACTIONS(449),
    [sym_lsr_opcode] = ACTIONS(449),
    [sym_nop_opcode] = ACTIONS(449),
    [sym_ora_opcode] = ACTIONS(449),
    [sym_pha_opcode] = ACTIONS(449),
    [sym_php_opcode] = ACTIONS(449),
    [sym_pla_opcode] = ACTIONS(449),
    [sym_plp_opcode] = ACTIONS(449),
    [sym_rol_opcode] = ACTIONS(449),
    [sym_ror_opcode] = ACTIONS(449),
    [sym_rti_opcode] = ACTIONS(449),
    [sym_rts_opcode] = ACTIONS(449),
    [sym_sbc_opcode] = ACTIONS(449),
    [sym_sec_opcode] = ACTIONS(449),
    [sym_sed_opcode] = ACTIONS(449),
    [sym_sei_opcode] = ACTIONS(449),
    [sym_sta_opcode] = ACTIONS(449),
    [sym_stx_opcode] = ACTIONS(449),
    [sym_sty_opcode] = ACTIONS(449),
    [sym_tax_opcode] = ACTIONS(449),
    [sym_tay_opcode] = ACTIONS(449),
    [sym_tsx_opcode] = ACTIONS(449),
    [sym_txa_opcode] = ACTIONS(449),
    [sym_tcs_opcode] = ACTIONS(449),
    [sym_tya_opcode] = ACTIONS(449),
    [sym_a16_ctrl_cmd] = ACTIONS(447),
    [sym_a8_ctrl_cmd] = ACTIONS(447),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(447),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(447),
    [sym_bss_ctrl_cmd] = ACTIONS(447),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(447),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(451),
    [sym_adc_opcode] = ACTIONS(453),
    [sym_and_opcode] = ACTIONS(453),
    [sym_asl_opcode] = ACTIONS(453),
    [sym_bcc_opcode] = ACTIONS(453),
    [sym_bcs_opcode] = ACTIONS(453),
    [sym_beq_opcode] = ACTIONS(453),
    [sym_bit_opcode] = ACTIONS(453),
    [sym_bmi_opcode] = ACTIONS(453),
    [sym_bne_opcode] = ACTIONS(453),
    [sym_bpl_opcode] = ACTIONS(453),
    [sym_brk_opcode] = ACTIONS(453),
    [sym_bvc_opcode] = ACTIONS(453),
    [sym_bvs_opcode] = ACTIONS(453),
    [sym_clc_opcode] = ACTIONS(453),
    [sym_cld_opcode] = ACTIONS(453),
    [sym_cli_opcode] = ACTIONS(453),
    [sym_clv_opcode] = ACTIONS(453),
    [sym_cmp_opcode] = ACTIONS(453),
    [sym_cpx_opcode] = ACTIONS(453),
    [sym_cpy_opcode] = ACTIONS(453),
    [sym_dec_opcode] = ACTIONS(453),
    [sym_dex_opcode] = ACTIONS(453),
    [sym_dey_opcode] = ACTIONS(453),
    [sym_eor_opcode] = ACTIONS(453),
    [sym_inc_opcode] = ACTIONS(453),
    [sym_inx_opcode] = ACTIONS(453),
    [sym_iny_opcode] = ACTIONS(453),
    [sym_jmp_opcode] = ACTIONS(453),
    [sym_jsr_opcode] = ACTIONS(453),
    [sym_lda_opcode] = ACTIONS(453),
    [sym_ldx_opcode] = ACTIONS(453),
    [sym_ldy_opcode] = ACTIONS(453),
    [sym_lsr_opcode] = ACTIONS(453),
    [sym_nop_opcode] = ACTIONS(453),
    [sym_ora_opcode] = ACTIONS(453),
    [sym_pha_opcode] = ACTIONS(453),
    [sym_php_opcode] = ACTIONS(453),
    [sym_pla_opcode] = ACTIONS(453),
    [sym_plp_opcode] = ACTIONS(453),
    [sym_rol_opcode] = ACTIONS(453),
    [sym_ror_opcode] = ACTIONS(453),
    [sym_rti_opcode] = ACTIONS(453),
    [sym_rts_opcode] = ACTIONS(453),
    [sym_sbc_opcode] = ACTIONS(453),
    [sym_sec_opcode] = ACTIONS(453),
    [sym_sed_opcode] = ACTIONS(453),
    [sym_sei_opcode] = ACTIONS(453),
    [sym_sta_opcode] = ACTIONS(453),
    [sym_stx_opcode] = ACTIONS(453),
    [sym_sty_opcode] = ACTIONS(453),
    [sym_tax_opcode] = ACTIONS(453),
    [sym_tay_opcode] = ACTIONS(453),
    [sym_tsx_opcode] = ACTIONS(453),
    [sym_txa_opcode] = ACTIONS(453),
    [sym_tcs_opcode] = ACTIONS(453),
    [sym_tya_opcode] = ACTIONS(453),
    [sym_a16_ctrl_cmd] = ACTIONS(451),
    [sym_a8_ctrl_cmd] = ACTIONS(451),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(451),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(451),
    [sym_bss_ctrl_cmd] = ACTIONS(451),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(451),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(455),
    [sym_adc_opcode] = ACTIONS(457),
    [sym_and_opcode] = ACTIONS(457),
    [sym_asl_opcode] = ACTIONS(457),
    [sym_bcc_opcode] = ACTIONS(457),
    [sym_bcs_opcode] = ACTIONS(457),
    [sym_beq_opcode] = ACTIONS(457),
    [sym_bit_opcode] = ACTIONS(457),
    [sym_bmi_opcode] = ACTIONS(457),
    [sym_bne_opcode] = ACTIONS(457),
    [sym_bpl_opcode] = ACTIONS(457),
    [sym_brk_opcode] = ACTIONS(457),
    [sym_bvc_opcode] = ACTIONS(457),
    [sym_bvs_opcode] = ACTIONS(457),
    [sym_clc_opcode] = ACTIONS(457),
    [sym_cld_opcode] = ACTIONS(457),
    [sym_cli_opcode] = ACTIONS(457),
    [sym_clv_opcode] = ACTIONS(457),
    [sym_cmp_opcode] = ACTIONS(457),
    [sym_cpx_opcode] = ACTIONS(457),
    [sym_cpy_opcode] = ACTIONS(457),
    [sym_dec_opcode] = ACTIONS(457),
    [sym_dex_opcode] = ACTIONS(457),
    [sym_dey_opcode] = ACTIONS(457),
    [sym_eor_opcode] = ACTIONS(457),
    [sym_inc_opcode] = ACTIONS(457),
    [sym_inx_opcode] = ACTIONS(457),
    [sym_iny_opcode] = ACTIONS(457),
    [sym_jmp_opcode] = ACTIONS(457),
    [sym_jsr_opcode] = ACTIONS(457),
    [sym_lda_opcode] = ACTIONS(457),
    [sym_ldx_opcode] = ACTIONS(457),
    [sym_ldy_opcode] = ACTIONS(457),
    [sym_lsr_opcode] = ACTIONS(457),
    [sym_nop_opcode] = ACTIONS(457),
    [sym_ora_opcode] = ACTIONS(457),
    [sym_pha_opcode] = ACTIONS(457),
    [sym_php_opcode] = ACTIONS(457),
    [sym_pla_opcode] = ACTIONS(457),
    [sym_plp_opcode] = ACTIONS(457),
    [sym_rol_opcode] = ACTIONS(457),
    [sym_ror_opcode] = ACTIONS(457),
    [sym_rti_opcode] = ACTIONS(457),
    [sym_rts_opcode] = ACTIONS(457),
    [sym_sbc_opcode] = ACTIONS(457),
    [sym_sec_opcode] = ACTIONS(457),
    [sym_sed_opcode] = ACTIONS(457),
    [sym_sei_opcode] = ACTIONS(457),
    [sym_sta_opcode] = ACTIONS(457),
    [sym_stx_opcode] = ACTIONS(457),
    [sym_sty_opcode] = ACTIONS(457),
    [sym_tax_opcode] = ACTIONS(457),
    [sym_tay_opcode] = ACTIONS(457),
    [sym_tsx_opcode] = ACTIONS(457),
    [sym_txa_opcode] = ACTIONS(457),
    [sym_tcs_opcode] = ACTIONS(457),
    [sym_tya_opcode] = ACTIONS(457),
    [sym_a16_ctrl_cmd] = ACTIONS(455),
    [sym_a8_ctrl_cmd] = ACTIONS(455),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(455),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(455),
    [sym_bss_ctrl_cmd] = ACTIONS(455),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(455),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(459),
    [sym_adc_opcode] = ACTIONS(461),
    [sym_and_opcode] = ACTIONS(461),
    [sym_asl_opcode] = ACTIONS(461),
    [sym_bcc_opcode] = ACTIONS(461),
    [sym_bcs_opcode] = ACTIONS(461),
    [sym_beq_opcode] = ACTIONS(461),
    [sym_bit_opcode] = ACTIONS(461),
    [sym_bmi_opcode] = ACTIONS(461),
    [sym_bne_opcode] = ACTIONS(461),
    [sym_bpl_opcode] = ACTIONS(461),
    [sym_brk_opcode] = ACTIONS(461),
    [sym_bvc_opcode] = ACTIONS(461),
    [sym_bvs_opcode] = ACTIONS(461),
    [sym_clc_opcode] = ACTIONS(461),
    [sym_cld_opcode] = ACTIONS(461),
    [sym_cli_opcode] = ACTIONS(461),
    [sym_clv_opcode] = ACTIONS(461),
    [sym_cmp_opcode] = ACTIONS(461),
    [sym_cpx_opcode] = ACTIONS(461),
    [sym_cpy_opcode] = ACTIONS(461),
    [sym_dec_opcode] = ACTIONS(461),
    [sym_dex_opcode] = ACTIONS(461),
    [sym_dey_opcode] = ACTIONS(461),
    [sym_eor_opcode] = ACTIONS(461),
    [sym_inc_opcode] = ACTIONS(461),
    [sym_inx_opcode] = ACTIONS(461),
    [sym_iny_opcode] = ACTIONS(461),
    [sym_jmp_opcode] = ACTIONS(461),
    [sym_jsr_opcode] = ACTIONS(461),
    [sym_lda_opcode] = ACTIONS(461),
    [sym_ldx_opcode] = ACTIONS(461),
    [sym_ldy_opcode] = ACTIONS(461),
    [sym_lsr_opcode] = ACTIONS(461),
    [sym_nop_opcode] = ACTIONS(461),
    [sym_ora_opcode] = ACTIONS(461),
    [sym_pha_opcode] = ACTIONS(461),
    [sym_php_opcode] = ACTIONS(461),
    [sym_pla_opcode] = ACTIONS(461),
    [sym_plp_opcode] = ACTIONS(461),
    [sym_rol_opcode] = ACTIONS(461),
    [sym_ror_opcode] = ACTIONS(461),
    [sym_rti_opcode] = ACTIONS(461),
    [sym_rts_opcode] = ACTIONS(461),
    [sym_sbc_opcode] = ACTIONS(461),
    [sym_sec_opcode] = ACTIONS(461),
    [sym_sed_opcode] = ACTIONS(461),
    [sym_sei_opcode] = ACTIONS(461),
    [sym_sta_opcode] = ACTIONS(461),
    [sym_stx_opcode] = ACTIONS(461),
    [sym_sty_opcode] = ACTIONS(461),
    [sym_tax_opcode] = ACTIONS(461),
    [sym_tay_opcode] = ACTIONS(461),
    [sym_tsx_opcode] = ACTIONS(461),
    [sym_txa_opcode] = ACTIONS(461),
    [sym_tcs_opcode] = ACTIONS(461),
    [sym_tya_opcode] = ACTIONS(461),
    [sym_a16_ctrl_cmd] = ACTIONS(459),
    [sym_a8_ctrl_cmd] = ACTIONS(459),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(459),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(459),
    [sym_bss_ctrl_cmd] = ACTIONS(459),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(459),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(463),
    [sym_adc_opcode] = ACTIONS(465),
    [sym_and_opcode] = ACTIONS(465),
    [sym_asl_opcode] = ACTIONS(465),
    [sym_bcc_opcode] = ACTIONS(465),
    [sym_bcs_opcode] = ACTIONS(465),
    [sym_beq_opcode] = ACTIONS(465),
    [sym_bit_opcode] = ACTIONS(465),
    [sym_bmi_opcode] = ACTIONS(465),
    [sym_bne_opcode] = ACTIONS(465),
    [sym_bpl_opcode] = ACTIONS(465),
    [sym_brk_opcode] = ACTIONS(465),
    [sym_bvc_opcode] = ACTIONS(465),
    [sym_bvs_opcode] = ACTIONS(465),
    [sym_clc_opcode] = ACTIONS(465),
    [sym_cld_opcode] = ACTIONS(465),
    [sym_cli_opcode] = ACTIONS(465),
    [sym_clv_opcode] = ACTIONS(465),
    [sym_cmp_opcode] = ACTIONS(465),
    [sym_cpx_opcode] = ACTIONS(465),
    [sym_cpy_opcode] = ACTIONS(465),
    [sym_dec_opcode] = ACTIONS(465),
    [sym_dex_opcode] = ACTIONS(465),
    [sym_dey_opcode] = ACTIONS(465),
    [sym_eor_opcode] = ACTIONS(465),
    [sym_inc_opcode] = ACTIONS(465),
    [sym_inx_opcode] = ACTIONS(465),
    [sym_iny_opcode] = ACTIONS(465),
    [sym_jmp_opcode] = ACTIONS(465),
    [sym_jsr_opcode] = ACTIONS(465),
    [sym_lda_opcode] = ACTIONS(465),
    [sym_ldx_opcode] = ACTIONS(465),
    [sym_ldy_opcode] = ACTIONS(465),
    [sym_lsr_opcode] = ACTIONS(465),
    [sym_nop_opcode] = ACTIONS(465),
    [sym_ora_opcode] = ACTIONS(465),
    [sym_pha_opcode] = ACTIONS(465),
    [sym_php_opcode] = ACTIONS(465),
    [sym_pla_opcode] = ACTIONS(465),
    [sym_plp_opcode] = ACTIONS(465),
    [sym_rol_opcode] = ACTIONS(465),
    [sym_ror_opcode] = ACTIONS(465),
    [sym_rti_opcode] = ACTIONS(465),
    [sym_rts_opcode] = ACTIONS(465),
    [sym_sbc_opcode] = ACTIONS(465),
    [sym_sec_opcode] = ACTIONS(465),
    [sym_sed_opcode] = ACTIONS(465),
    [sym_sei_opcode] = ACTIONS(465),
    [sym_sta_opcode] = ACTIONS(465),
    [sym_stx_opcode] = ACTIONS(465),
    [sym_sty_opcode] = ACTIONS(465),
    [sym_tax_opcode] = ACTIONS(465),
    [sym_tay_opcode] = ACTIONS(465),
    [sym_tsx_opcode] = ACTIONS(465),
    [sym_txa_opcode] = ACTIONS(465),
    [sym_tcs_opcode] = ACTIONS(465),
    [sym_tya_opcode] = ACTIONS(465),
    [sym_a16_ctrl_cmd] = ACTIONS(463),
    [sym_a8_ctrl_cmd] = ACTIONS(463),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(463),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(463),
    [sym_bss_ctrl_cmd] = ACTIONS(463),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(463),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(467),
    [sym_adc_opcode] = ACTIONS(469),
    [sym_and_opcode] = ACTIONS(469),
    [sym_asl_opcode] = ACTIONS(469),
    [sym_bcc_opcode] = ACTIONS(469),
    [sym_bcs_opcode] = ACTIONS(469),
    [sym_beq_opcode] = ACTIONS(469),
    [sym_bit_opcode] = ACTIONS(469),
    [sym_bmi_opcode] = ACTIONS(469),
    [sym_bne_opcode] = ACTIONS(469),
    [sym_bpl_opcode] = ACTIONS(469),
    [sym_brk_opcode] = ACTIONS(469),
    [sym_bvc_opcode] = ACTIONS(469),
    [sym_bvs_opcode] = ACTIONS(469),
    [sym_clc_opcode] = ACTIONS(469),
    [sym_cld_opcode] = ACTIONS(469),
    [sym_cli_opcode] = ACTIONS(469),
    [sym_clv_opcode] = ACTIONS(469),
    [sym_cmp_opcode] = ACTIONS(469),
    [sym_cpx_opcode] = ACTIONS(469),
    [sym_cpy_opcode] = ACTIONS(469),
    [sym_dec_opcode] = ACTIONS(469),
    [sym_dex_opcode] = ACTIONS(469),
    [sym_dey_opcode] = ACTIONS(469),
    [sym_eor_opcode] = ACTIONS(469),
    [sym_inc_opcode] = ACTIONS(469),
    [sym_inx_opcode] = ACTIONS(469),
    [sym_iny_opcode] = ACTIONS(469),
    [sym_jmp_opcode] = ACTIONS(469),
    [sym_jsr_opcode] = ACTIONS(469),
    [sym_lda_opcode] = ACTIONS(469),
    [sym_ldx_opcode] = ACTIONS(469),
    [sym_ldy_opcode] = ACTIONS(469),
    [sym_lsr_opcode] = ACTIONS(469),
    [sym_nop_opcode] = ACTIONS(469),
    [sym_ora_opcode] = ACTIONS(469),
    [sym_pha_opcode] = ACTIONS(469),
    [sym_php_opcode] = ACTIONS(469),
    [sym_pla_opcode] = ACTIONS(469),
    [sym_plp_opcode] = ACTIONS(469),
    [sym_rol_opcode] = ACTIONS(469),
    [sym_ror_opcode] = ACTIONS(469),
    [sym_rti_opcode] = ACTIONS(469),
    [sym_rts_opcode] = ACTIONS(469),
    [sym_sbc_opcode] = ACTIONS(469),
    [sym_sec_opcode] = ACTIONS(469),
    [sym_sed_opcode] = ACTIONS(469),
    [sym_sei_opcode] = ACTIONS(469),
    [sym_sta_opcode] = ACTIONS(469),
    [sym_stx_opcode] = ACTIONS(469),
    [sym_sty_opcode] = ACTIONS(469),
    [sym_tax_opcode] = ACTIONS(469),
    [sym_tay_opcode] = ACTIONS(469),
    [sym_tsx_opcode] = ACTIONS(469),
    [sym_txa_opcode] = ACTIONS(469),
    [sym_tcs_opcode] = ACTIONS(469),
    [sym_tya_opcode] = ACTIONS(469),
    [sym_a16_ctrl_cmd] = ACTIONS(467),
    [sym_a8_ctrl_cmd] = ACTIONS(467),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(467),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(467),
    [sym_bss_ctrl_cmd] = ACTIONS(467),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(467),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(471),
    [sym_adc_opcode] = ACTIONS(473),
    [sym_and_opcode] = ACTIONS(473),
    [sym_asl_opcode] = ACTIONS(473),
    [sym_bcc_opcode] = ACTIONS(473),
    [sym_bcs_opcode] = ACTIONS(473),
    [sym_beq_opcode] = ACTIONS(473),
    [sym_bit_opcode] = ACTIONS(473),
    [sym_bmi_opcode] = ACTIONS(473),
    [sym_bne_opcode] = ACTIONS(473),
    [sym_bpl_opcode] = ACTIONS(473),
    [sym_brk_opcode] = ACTIONS(473),
    [sym_bvc_opcode] = ACTIONS(473),
    [sym_bvs_opcode] = ACTIONS(473),
    [sym_clc_opcode] = ACTIONS(473),
    [sym_cld_opcode] = ACTIONS(473),
    [sym_cli_opcode] = ACTIONS(473),
    [sym_clv_opcode] = ACTIONS(473),
    [sym_cmp_opcode] = ACTIONS(473),
    [sym_cpx_opcode] = ACTIONS(473),
    [sym_cpy_opcode] = ACTIONS(473),
    [sym_dec_opcode] = ACTIONS(473),
    [sym_dex_opcode] = ACTIONS(473),
    [sym_dey_opcode] = ACTIONS(473),
    [sym_eor_opcode] = ACTIONS(473),
    [sym_inc_opcode] = ACTIONS(473),
    [sym_inx_opcode] = ACTIONS(473),
    [sym_iny_opcode] = ACTIONS(473),
    [sym_jmp_opcode] = ACTIONS(473),
    [sym_jsr_opcode] = ACTIONS(473),
    [sym_lda_opcode] = ACTIONS(473),
    [sym_ldx_opcode] = ACTIONS(473),
    [sym_ldy_opcode] = ACTIONS(473),
    [sym_lsr_opcode] = ACTIONS(473),
    [sym_nop_opcode] = ACTIONS(473),
    [sym_ora_opcode] = ACTIONS(473),
    [sym_pha_opcode] = ACTIONS(473),
    [sym_php_opcode] = ACTIONS(473),
    [sym_pla_opcode] = ACTIONS(473),
    [sym_plp_opcode] = ACTIONS(473),
    [sym_rol_opcode] = ACTIONS(473),
    [sym_ror_opcode] = ACTIONS(473),
    [sym_rti_opcode] = ACTIONS(473),
    [sym_rts_opcode] = ACTIONS(473),
    [sym_sbc_opcode] = ACTIONS(473),
    [sym_sec_opcode] = ACTIONS(473),
    [sym_sed_opcode] = ACTIONS(473),
    [sym_sei_opcode] = ACTIONS(473),
    [sym_sta_opcode] = ACTIONS(473),
    [sym_stx_opcode] = ACTIONS(473),
    [sym_sty_opcode] = ACTIONS(473),
    [sym_tax_opcode] = ACTIONS(473),
    [sym_tay_opcode] = ACTIONS(473),
    [sym_tsx_opcode] = ACTIONS(473),
    [sym_txa_opcode] = ACTIONS(473),
    [sym_tcs_opcode] = ACTIONS(473),
    [sym_tya_opcode] = ACTIONS(473),
    [sym_a16_ctrl_cmd] = ACTIONS(471),
    [sym_a8_ctrl_cmd] = ACTIONS(471),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(471),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(471),
    [sym_bss_ctrl_cmd] = ACTIONS(471),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(471),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_label] = ACTIONS(379),
    [sym_adc_opcode] = ACTIONS(383),
    [sym_and_opcode] = ACTIONS(383),
    [sym_asl_opcode] = ACTIONS(383),
    [sym_bcc_opcode] = ACTIONS(383),
    [sym_bcs_opcode] = ACTIONS(383),
    [sym_beq_opcode] = ACTIONS(383),
    [sym_bit_opcode] = ACTIONS(383),
    [sym_bmi_opcode] = ACTIONS(383),
    [sym_bne_opcode] = ACTIONS(383),
    [sym_bpl_opcode] = ACTIONS(383),
    [sym_brk_opcode] = ACTIONS(383),
    [sym_bvc_opcode] = ACTIONS(383),
    [sym_bvs_opcode] = ACTIONS(383),
    [sym_clc_opcode] = ACTIONS(383),
    [sym_cld_opcode] = ACTIONS(383),
    [sym_cli_opcode] = ACTIONS(383),
    [sym_clv_opcode] = ACTIONS(383),
    [sym_cmp_opcode] = ACTIONS(383),
    [sym_cpx_opcode] = ACTIONS(383),
    [sym_cpy_opcode] = ACTIONS(383),
    [sym_dec_opcode] = ACTIONS(383),
    [sym_dex_opcode] = ACTIONS(383),
    [sym_dey_opcode] = ACTIONS(383),
    [sym_eor_opcode] = ACTIONS(383),
    [sym_inc_opcode] = ACTIONS(383),
    [sym_inx_opcode] = ACTIONS(383),
    [sym_iny_opcode] = ACTIONS(383),
    [sym_jmp_opcode] = ACTIONS(383),
    [sym_jsr_opcode] = ACTIONS(383),
    [sym_lda_opcode] = ACTIONS(383),
    [sym_ldx_opcode] = ACTIONS(383),
    [sym_ldy_opcode] = ACTIONS(383),
    [sym_lsr_opcode] = ACTIONS(383),
    [sym_nop_opcode] = ACTIONS(383),
    [sym_ora_opcode] = ACTIONS(383),
    [sym_pha_opcode] = ACTIONS(383),
    [sym_php_opcode] = ACTIONS(383),
    [sym_pla_opcode] = ACTIONS(383),
    [sym_plp_opcode] = ACTIONS(383),
    [sym_rol_opcode] = ACTIONS(383),
    [sym_ror_opcode] = ACTIONS(383),
    [sym_rti_opcode] = ACTIONS(383),
    [sym_rts_opcode] = ACTIONS(383),
    [sym_sbc_opcode] = ACTIONS(383),
    [sym_sec_opcode] = ACTIONS(383),
    [sym_sed_opcode] = ACTIONS(383),
    [sym_sei_opcode] = ACTIONS(383),
    [sym_sta_opcode] = ACTIONS(383),
    [sym_stx_opcode] = ACTIONS(383),
    [sym_sty_opcode] = ACTIONS(383),
    [sym_tax_opcode] = ACTIONS(383),
    [sym_tay_opcode] = ACTIONS(383),
    [sym_tsx_opcode] = ACTIONS(383),
    [sym_txa_opcode] = ACTIONS(383),
    [sym_tcs_opcode] = ACTIONS(383),
    [sym_tya_opcode] = ACTIONS(383),
    [sym_a16_ctrl_cmd] = ACTIONS(379),
    [sym_a8_ctrl_cmd] = ACTIONS(379),
    [aux_sym_addr_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_align_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_asciiz_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_assert_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_autoimport_ctrl_cmd_token1] = ACTIONS(379),
    [aux_sym_bankbytes_ctrl_cmd_token1] = ACTIONS(379),
    [sym_bss_ctrl_cmd] = ACTIONS(379),
    [aux_sym_byte_ctrl_cmd_token1] = ACTIONS(379),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(28), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(3), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(36), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(114), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(113), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(22), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(34), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(37), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(2), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(39), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(32), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(30), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(26), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(493), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(29), 1,
      sym_expression,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(497), 2,
      anon_sym_DOTBITNOT,
      anon_sym_TILDE,
    ACTIONS(499), 2,
      anon_sym_DOTLOBYTE,
      anon_sym_LT,
    ACTIONS(501), 2,
      anon_sym_DOTHIBYTE,
      anon_sym_GT,
    ACTIONS(503), 2,
      anon_sym_DOTBANKBYTE,
      anon_sym_CARET,
    ACTIONS(505), 2,
      anon_sym_DOTNOT,
      anon_sym_BANG,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(21), 29,
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
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      anon_sym_GT,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_DOTMOD,
    ACTIONS(73), 1,
      anon_sym_DOTBITAND,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(81), 1,
      anon_sym_DOTBITOR,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_LT_GT,
    ACTIONS(89), 1,
      anon_sym_LT_EQ,
    ACTIONS(91), 1,
      anon_sym_GT_EQ,
    ACTIONS(95), 1,
      anon_sym_DOTXOR,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(77), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(79), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(93), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(97), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3175] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      anon_sym_GT,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    ACTIONS(71), 1,
      anon_sym_DOTMOD,
    ACTIONS(73), 1,
      anon_sym_DOTBITAND,
    ACTIONS(75), 1,
      anon_sym_AMP,
    ACTIONS(81), 1,
      anon_sym_DOTBITOR,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(85), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_LT_GT,
    ACTIONS(89), 1,
      anon_sym_LT_EQ,
    ACTIONS(91), 1,
      anon_sym_GT_EQ,
    ACTIONS(95), 1,
      anon_sym_DOTXOR,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(65), 2,
      anon_sym_CARET,
      anon_sym_DOTBITXOR,
    ACTIONS(77), 2,
      anon_sym_DOTSHL,
      anon_sym_LT_LT,
    ACTIONS(79), 2,
      anon_sym_DOTSHR,
      anon_sym_GT_GT,
    ACTIONS(93), 2,
      anon_sym_DOTAND,
      anon_sym_AMP_AMP,
    ACTIONS(97), 2,
      anon_sym_DOTOR,
      anon_sym_PIPE_PIPE,
  [3250] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      sym_imm_prefix,
    STATE(54), 1,
      sym_operand_8,
    STATE(55), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3295] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(515), 1,
      sym_acc_register,
    STATE(54), 1,
      sym_operand_8,
    STATE(58), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3337] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(513), 1,
      sym_imm_prefix,
    STATE(63), 1,
      sym_operand_8,
    STATE(81), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3379] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(513), 1,
      sym_imm_prefix,
    STATE(53), 1,
      sym_operand_16,
    STATE(61), 1,
      sym_operand_8,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3421] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(513), 1,
      sym_imm_prefix,
    STATE(54), 1,
      sym_operand_8,
    STATE(58), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3463] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_operand_8,
    STATE(55), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3505] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(60), 2,
      sym_operand_8,
      sym_operand_16,
  [3542] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    STATE(63), 1,
      sym_operand_8,
    STATE(81), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3581] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    STATE(54), 1,
      sym_operand_8,
    STATE(58), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3620] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(517), 1,
      sym_symbol,
    STATE(61), 1,
      sym_operand_8,
    STATE(81), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3659] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    ACTIONS(517), 1,
      sym_symbol,
    STATE(54), 1,
      sym_operand_8,
    STATE(81), 1,
      sym_operand_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3698] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_symbol,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(483), 1,
      sym_dec_8,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      anon_sym_h,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(491), 1,
      sym_dec_16,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
    STATE(65), 2,
      sym_operand_8,
      sym_operand_16,
  [3735] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_symbol,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_PERCENT,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      anon_sym_h,
    ACTIONS(527), 1,
      sym_dec_16,
    STATE(81), 1,
      sym_operand_16,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3764] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(529), 1,
      anon_sym_PERCENT,
    ACTIONS(531), 1,
      anon_sym_DOLLAR,
    ACTIONS(533), 1,
      anon_sym_h,
    STATE(74), 1,
      sym_operand_8,
    ACTIONS(483), 2,
      sym_symbol,
      sym_dec_8,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
  [3791] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      aux_sym_hex_8_token2,
    ACTIONS(529), 1,
      anon_sym_PERCENT,
    ACTIONS(531), 1,
      anon_sym_DOLLAR,
    ACTIONS(533), 1,
      anon_sym_h,
    STATE(140), 1,
      sym_operand_8,
    ACTIONS(483), 2,
      sym_symbol,
      sym_dec_8,
    STATE(31), 2,
      sym_bin_8,
      sym_hex_8,
  [3818] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_symbol,
    ACTIONS(521), 1,
      anon_sym_PERCENT,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      anon_sym_h,
    ACTIONS(527), 1,
      sym_dec_16,
    STATE(48), 1,
      sym_operand_16,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3844] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_symbol,
    ACTIONS(521), 1,
      anon_sym_PERCENT,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      anon_sym_h,
    ACTIONS(527), 1,
      sym_dec_16,
    STATE(57), 1,
      sym_operand_16,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3870] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_symbol,
    ACTIONS(521), 1,
      anon_sym_PERCENT,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      anon_sym_h,
    ACTIONS(527), 1,
      sym_dec_16,
    STATE(81), 1,
      sym_operand_16,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3896] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_symbol,
    ACTIONS(521), 1,
      anon_sym_PERCENT,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      anon_sym_h,
    ACTIONS(527), 1,
      sym_dec_16,
    STATE(77), 1,
      sym_operand_16,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3922] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_symbol,
    ACTIONS(521), 1,
      anon_sym_PERCENT,
    ACTIONS(523), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      anon_sym_h,
    ACTIONS(527), 1,
      sym_dec_16,
    STATE(144), 1,
      sym_operand_16,
    STATE(33), 2,
      sym_bin_16,
      sym_hex_16,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_PLUS,
    ACTIONS(537), 1,
      anon_sym_DASH,
    STATE(68), 2,
      sym_plus_symbol,
      sym_sub_symbol,
  [3962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 4,
      sym_warning_keyword,
      sym_error_keyword,
      sym_ldwarning_keyword,
      sym_lderror_keyword,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym_string,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [3983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(79), 1,
      sym_string,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [3994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(59), 1,
      sym_string,
    ACTIONS(475), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [4005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [4015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_x_register,
    ACTIONS(547), 1,
      sym_y_register,
  [4025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      aux_sym_bin_8_token1,
    ACTIONS(551), 1,
      aux_sym_bin_16_token1,
  [4035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      aux_sym_hex_8_token1,
    ACTIONS(555), 1,
      aux_sym_hex_16_token1,
  [4045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_COMMA,
  [4059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COMMA,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_x_register,
  [4073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
  [4080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_y_register,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_y_register,
  [4094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_x_register,
  [4101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_y_register,
  [4115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym_x_register,
  [4122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_hex_8_token1,
  [4129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      aux_sym_bin_8_token1,
  [4136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      aux_sym_hex_16_token1,
  [4143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_bin_16_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(82)] = 0,
  [SMALL_STATE(83)] = 100,
  [SMALL_STATE(84)] = 200,
  [SMALL_STATE(85)] = 300,
  [SMALL_STATE(86)] = 400,
  [SMALL_STATE(87)] = 500,
  [SMALL_STATE(88)] = 600,
  [SMALL_STATE(89)] = 700,
  [SMALL_STATE(90)] = 800,
  [SMALL_STATE(91)] = 900,
  [SMALL_STATE(92)] = 1000,
  [SMALL_STATE(93)] = 1100,
  [SMALL_STATE(94)] = 1200,
  [SMALL_STATE(95)] = 1300,
  [SMALL_STATE(96)] = 1400,
  [SMALL_STATE(97)] = 1500,
  [SMALL_STATE(98)] = 1600,
  [SMALL_STATE(99)] = 1700,
  [SMALL_STATE(100)] = 1800,
  [SMALL_STATE(101)] = 1900,
  [SMALL_STATE(102)] = 2000,
  [SMALL_STATE(103)] = 2100,
  [SMALL_STATE(104)] = 2200,
  [SMALL_STATE(105)] = 2300,
  [SMALL_STATE(106)] = 2400,
  [SMALL_STATE(107)] = 2500,
  [SMALL_STATE(108)] = 2600,
  [SMALL_STATE(109)] = 2700,
  [SMALL_STATE(110)] = 2800,
  [SMALL_STATE(111)] = 2900,
  [SMALL_STATE(112)] = 3000,
  [SMALL_STATE(113)] = 3100,
  [SMALL_STATE(114)] = 3175,
  [SMALL_STATE(115)] = 3250,
  [SMALL_STATE(116)] = 3295,
  [SMALL_STATE(117)] = 3337,
  [SMALL_STATE(118)] = 3379,
  [SMALL_STATE(119)] = 3421,
  [SMALL_STATE(120)] = 3463,
  [SMALL_STATE(121)] = 3505,
  [SMALL_STATE(122)] = 3542,
  [SMALL_STATE(123)] = 3581,
  [SMALL_STATE(124)] = 3620,
  [SMALL_STATE(125)] = 3659,
  [SMALL_STATE(126)] = 3698,
  [SMALL_STATE(127)] = 3735,
  [SMALL_STATE(128)] = 3764,
  [SMALL_STATE(129)] = 3791,
  [SMALL_STATE(130)] = 3818,
  [SMALL_STATE(131)] = 3844,
  [SMALL_STATE(132)] = 3870,
  [SMALL_STATE(133)] = 3896,
  [SMALL_STATE(134)] = 3922,
  [SMALL_STATE(135)] = 3948,
  [SMALL_STATE(136)] = 3962,
  [SMALL_STATE(137)] = 3972,
  [SMALL_STATE(138)] = 3983,
  [SMALL_STATE(139)] = 3994,
  [SMALL_STATE(140)] = 4005,
  [SMALL_STATE(141)] = 4015,
  [SMALL_STATE(142)] = 4025,
  [SMALL_STATE(143)] = 4035,
  [SMALL_STATE(144)] = 4045,
  [SMALL_STATE(145)] = 4052,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_not_exp, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_not_exp, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_neg_exp, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_neg_exp, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neq_cmp, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neq_cmp, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_cmp, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_cmp, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_r_exp, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_r_exp, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_8, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_8, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_l_exp, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_l_exp, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_and_exp, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_and_exp, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_exp, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_exp, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_exp, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mult_exp, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mult_exp, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_xor_exp, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_xor_exp, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt_cmp, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gt_cmp, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_cmp, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lt_cmp, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_exp, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_exp, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_ctrl_cmd, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_ctrl_cmd, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_8, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_8, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_and_exp, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_and_exp, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_16, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_16, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte_cmp, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gte_cmp, 3),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operand_8, 1), REDUCE(sym_operand_16, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_or_exp, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_or_exp, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_xor_exp, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_xor_exp, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte_cmp, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lte_cmp, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_8, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_8, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bit_or_exp, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bit_or_exp, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand_16, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand_16, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_bankbyte_exp, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_bankbyte_exp, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_pos_exp, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_pos_exp, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_hibyte_exp, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_hibyte_exp, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bin_16, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bin_16, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_lobyte_exp, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_lobyte_exp, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_not_exp, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_not_exp, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(42),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(115),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(116),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(133),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(122),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(73),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(117),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(123),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(127),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(132),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(118),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(119),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(120),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(124),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(125),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(64),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(130),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(121),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(137),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(87),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(135),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(89),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ca65_repeat1, 2), SHIFT_REPEAT(82),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ca65, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(139),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asciiz_ctrl_cmd_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asciiz_ctrl_cmd, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asciiz_ctrl_cmd, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr_ctrl_cmd, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr_ctrl_cmd, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(131),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addr_ctrl_cmd_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_ctrl_cmd, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_ctrl_cmd, 3),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bankbytes_ctrl_cmd_repeat1, 2), SHIFT_REPEAT(93),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bankbytes_ctrl_cmd, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bankbytes_ctrl_cmd, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_addr_inst, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_addr_inst, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_addr_inst, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_addr_inst, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inst, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inst, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctrl_cmd, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctrl_cmd, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_align_ctrl_cmd, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_align_ctrl_cmd, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus_symbol, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plus_symbol, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_symbol, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_symbol, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autoimport_ctrl_cmd, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autoimport_ctrl_cmd, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_x_addr_inst, 6),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_x_addr_inst, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_y_addr_inst, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_y_addr_inst, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_addr_inst, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_addr_inst, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_y_addr_inst, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_y_addr_inst, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl_addr_inst, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl_addr_inst, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_addr_inst, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_addr_inst, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abs_x_addr_inst, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abs_x_addr_inst, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zp_x_addr_inst, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zp_x_addr_inst, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_addr_inst, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rel_addr_inst, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ind_y_addr_inst, 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ind_y_addr_inst, 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_ctrl_cmd, 6),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_ctrl_cmd, 6),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_acc_addr_inst, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_acc_addr_inst, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [565] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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
