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
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_DOTprogram = 2,
  anon_sym_DOTdefine = 3,
  anon_sym_DOTorigin = 4,
  anon_sym_DOTside_set = 5,
  anon_sym_pindirs = 6,
  anon_sym_DOTwrap_target = 7,
  anon_sym_DOTwrap = 8,
  anon_sym_DOTword = 9,
  anon_sym_DOTlang_opt = 10,
  anon_sym_EQ = 11,
  anon_sym_nop = 12,
  anon_sym_jmp = 13,
  anon_sym_COMMA = 14,
  anon_sym_wait = 15,
  anon_sym_in = 16,
  anon_sym_out = 17,
  anon_sym_push = 18,
  anon_sym_iffull = 19,
  anon_sym_pull = 20,
  anon_sym_ifempty = 21,
  anon_sym_mov = 22,
  anon_sym_irq = 23,
  anon_sym_rel = 24,
  anon_sym_set = 25,
  anon_sym_block = 26,
  anon_sym_noblock = 27,
  anon_sym_x = 28,
  anon_sym_DASH_DASH = 29,
  anon_sym_y = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_pin = 32,
  anon_sym_osre = 33,
  anon_sym_gpio = 34,
  anon_sym_pins = 35,
  anon_sym_null = 36,
  anon_sym_isr = 37,
  anon_sym_osr = 38,
  anon_sym_status = 39,
  anon_sym_pc = 40,
  anon_sym_exec = 41,
  anon_sym_COLON_COLON = 42,
  anon_sym_clear = 43,
  anon_sym_nowait = 44,
  anon_sym_side = 45,
  anon_sym_sideset = 46,
  anon_sym_side_set = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  anon_sym_public = 50,
  anon_sym_STAR = 51,
  anon_sym_LPAREN = 52,
  anon_sym_RPAREN = 53,
  anon_sym_PLUS = 54,
  anon_sym_DASH = 55,
  anon_sym_SLASH = 56,
  anon_sym_PIPE = 57,
  anon_sym_AMP = 58,
  anon_sym_CARET = 59,
  anon_sym_COLON = 60,
  anon_sym_PERCENT = 61,
  anon_sym_LBRACE = 62,
  anon_sym_PERCENT_RBRACE = 63,
  sym_code_block_language = 64,
  sym_identifier = 65,
  sym_integer = 66,
  sym_non_ws = 67,
  sym_string = 68,
  sym_not = 69,
  anon_sym_opt = 70,
  anon_sym_optional = 71,
  anon_sym_SLASH_STAR = 72,
  aux_sym_block_comment_token1 = 73,
  sym_line_comment = 74,
  sym_code_block_body = 75,
  sym_source_file = 76,
  sym__lines = 77,
  sym__line = 78,
  sym_directive = 79,
  sym_instruction = 80,
  sym__base_instruction = 81,
  sym__blocking = 82,
  sym_condition = 83,
  sym_wait_source = 84,
  sym_in_source = 85,
  sym_out_target = 86,
  sym_mov_target = 87,
  sym_mov_source = 88,
  sym_mov_op = 89,
  sym_irq_modifiers = 90,
  sym_set_target = 91,
  sym_sideset = 92,
  sym_delay = 93,
  sym_symbol_def = 94,
  sym_value = 95,
  sym_expression = 96,
  sym_label_decl = 97,
  sym_code_block = 98,
  sym_optional = 99,
  sym_block_comment = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_DOTprogram] = ".program",
  [anon_sym_DOTdefine] = ".define",
  [anon_sym_DOTorigin] = ".origin",
  [anon_sym_DOTside_set] = ".side_set",
  [anon_sym_pindirs] = "pindirs",
  [anon_sym_DOTwrap_target] = ".wrap_target",
  [anon_sym_DOTwrap] = ".wrap",
  [anon_sym_DOTword] = ".word",
  [anon_sym_DOTlang_opt] = ".lang_opt",
  [anon_sym_EQ] = "=",
  [anon_sym_nop] = "nop",
  [anon_sym_jmp] = "jmp",
  [anon_sym_COMMA] = ",",
  [anon_sym_wait] = "wait",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_push] = "push",
  [anon_sym_iffull] = "iffull",
  [anon_sym_pull] = "pull",
  [anon_sym_ifempty] = "ifempty",
  [anon_sym_mov] = "mov",
  [anon_sym_irq] = "irq",
  [anon_sym_rel] = "rel",
  [anon_sym_set] = "set",
  [anon_sym_block] = "block",
  [anon_sym_noblock] = "noblock",
  [anon_sym_x] = "x",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_y] = "y",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_pin] = "pin",
  [anon_sym_osre] = "osre",
  [anon_sym_gpio] = "gpio",
  [anon_sym_pins] = "pins",
  [anon_sym_null] = "null",
  [anon_sym_isr] = "isr",
  [anon_sym_osr] = "osr",
  [anon_sym_status] = "status",
  [anon_sym_pc] = "pc",
  [anon_sym_exec] = "exec",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_clear] = "clear",
  [anon_sym_nowait] = "nowait",
  [anon_sym_side] = "side",
  [anon_sym_sideset] = "sideset",
  [anon_sym_side_set] = "side_set",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_public] = "public",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_COLON] = ":",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [sym_code_block_language] = "code_block_language",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_non_ws] = "non_ws",
  [sym_string] = "string",
  [sym_not] = "not",
  [anon_sym_opt] = "opt",
  [anon_sym_optional] = "optional",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [sym_line_comment] = "line_comment",
  [sym_code_block_body] = "code_block_body",
  [sym_source_file] = "source_file",
  [sym__lines] = "_lines",
  [sym__line] = "_line",
  [sym_directive] = "directive",
  [sym_instruction] = "instruction",
  [sym__base_instruction] = "_base_instruction",
  [sym__blocking] = "_blocking",
  [sym_condition] = "condition",
  [sym_wait_source] = "wait_source",
  [sym_in_source] = "in_source",
  [sym_out_target] = "out_target",
  [sym_mov_target] = "mov_target",
  [sym_mov_source] = "mov_source",
  [sym_mov_op] = "mov_op",
  [sym_irq_modifiers] = "irq_modifiers",
  [sym_set_target] = "set_target",
  [sym_sideset] = "sideset",
  [sym_delay] = "delay",
  [sym_symbol_def] = "symbol_def",
  [sym_value] = "value",
  [sym_expression] = "expression",
  [sym_label_decl] = "label_decl",
  [sym_code_block] = "code_block",
  [sym_optional] = "optional",
  [sym_block_comment] = "block_comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DOTprogram] = anon_sym_DOTprogram,
  [anon_sym_DOTdefine] = anon_sym_DOTdefine,
  [anon_sym_DOTorigin] = anon_sym_DOTorigin,
  [anon_sym_DOTside_set] = anon_sym_DOTside_set,
  [anon_sym_pindirs] = anon_sym_pindirs,
  [anon_sym_DOTwrap_target] = anon_sym_DOTwrap_target,
  [anon_sym_DOTwrap] = anon_sym_DOTwrap,
  [anon_sym_DOTword] = anon_sym_DOTword,
  [anon_sym_DOTlang_opt] = anon_sym_DOTlang_opt,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_wait] = anon_sym_wait,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_iffull] = anon_sym_iffull,
  [anon_sym_pull] = anon_sym_pull,
  [anon_sym_ifempty] = anon_sym_ifempty,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_irq] = anon_sym_irq,
  [anon_sym_rel] = anon_sym_rel,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_noblock] = anon_sym_noblock,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_pin] = anon_sym_pin,
  [anon_sym_osre] = anon_sym_osre,
  [anon_sym_gpio] = anon_sym_gpio,
  [anon_sym_pins] = anon_sym_pins,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_isr] = anon_sym_isr,
  [anon_sym_osr] = anon_sym_osr,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_pc] = anon_sym_pc,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_clear] = anon_sym_clear,
  [anon_sym_nowait] = anon_sym_nowait,
  [anon_sym_side] = anon_sym_side,
  [anon_sym_sideset] = anon_sym_sideset,
  [anon_sym_side_set] = anon_sym_side_set,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [sym_code_block_language] = sym_code_block_language,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_non_ws] = sym_non_ws,
  [sym_string] = sym_string,
  [sym_not] = sym_not,
  [anon_sym_opt] = anon_sym_opt,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [sym_line_comment] = sym_line_comment,
  [sym_code_block_body] = sym_code_block_body,
  [sym_source_file] = sym_source_file,
  [sym__lines] = sym__lines,
  [sym__line] = sym__line,
  [sym_directive] = sym_directive,
  [sym_instruction] = sym_instruction,
  [sym__base_instruction] = sym__base_instruction,
  [sym__blocking] = sym__blocking,
  [sym_condition] = sym_condition,
  [sym_wait_source] = sym_wait_source,
  [sym_in_source] = sym_in_source,
  [sym_out_target] = sym_out_target,
  [sym_mov_target] = sym_mov_target,
  [sym_mov_source] = sym_mov_source,
  [sym_mov_op] = sym_mov_op,
  [sym_irq_modifiers] = sym_irq_modifiers,
  [sym_set_target] = sym_set_target,
  [sym_sideset] = sym_sideset,
  [sym_delay] = sym_delay,
  [sym_symbol_def] = sym_symbol_def,
  [sym_value] = sym_value,
  [sym_expression] = sym_expression,
  [sym_label_decl] = sym_label_decl,
  [sym_code_block] = sym_code_block,
  [sym_optional] = sym_optional,
  [sym_block_comment] = sym_block_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTorigin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTside_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pindirs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTwrap_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTwrap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlang_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iffull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_osre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gpio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pins] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_osr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nowait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_side] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sideset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_side_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_code_block_language] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_non_ws] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_body] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__lines] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__base_instruction] = {
    .visible = false,
    .named = true,
  },
  [sym__blocking] = {
    .visible = false,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_wait_source] = {
    .visible = true,
    .named = true,
  },
  [sym_in_source] = {
    .visible = true,
    .named = true,
  },
  [sym_out_target] = {
    .visible = true,
    .named = true,
  },
  [sym_mov_target] = {
    .visible = true,
    .named = true,
  },
  [sym_mov_source] = {
    .visible = true,
    .named = true,
  },
  [sym_mov_op] = {
    .visible = true,
    .named = true,
  },
  [sym_irq_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_set_target] = {
    .visible = true,
    .named = true,
  },
  [sym_sideset] = {
    .visible = true,
    .named = true,
  },
  [sym_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_def] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_label_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_directive = 1,
  field_opcode = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_directive] = "directive",
  [field_opcode] = "opcode",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive, 0},
  [1] =
    {field_opcode, 0},
  [2] =
    {field_opcode, 0, .inherited = true},
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
  [36] = 31,
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
  [59] = 55,
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
  [77] = 3,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 4,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '\n', 160,
        '!', 309,
        '"', 2,
        '%', 239,
        '&', 234,
        '(', 228,
        ')', 229,
        '*', 227,
        '+', 230,
        ',', 175,
        '-', 231,
        '.', 45,
        '/', 232,
        '0', 289,
        ':', 237,
        ';', 316,
        '=', 170,
        'O', 22,
        'Z', 20,
        '[', 223,
        ']', 224,
        '^', 235,
        'b', 87,
        'c', 88,
        'e', 152,
        'g', 115,
        'i', 63,
        'j', 94,
        'm', 102,
        'n', 103,
        'o', 112,
        'p', 38,
        'r', 56,
        's', 55,
        'w', 30,
        'x', 197,
        'y', 200,
        '{', 240,
        '|', 233,
        '~', 308,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == '0') ADVANCE(290);
      if (lookahead == 'O') ADVANCE(301);
      if (lookahead == 'Z') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 228,
        ',', 175,
        '-', 231,
        '/', 9,
        '0', 289,
        ':', 18,
        'O', 245,
        'Z', 244,
        'p', 258,
        'x', 198,
        'y', 201,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(308);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 228,
        ',', 175,
        '-', 231,
        '/', 9,
        '0', 289,
        ':', 18,
        'O', 245,
        'Z', 244,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(289);
      if (lookahead == ':') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(245);
      if (lookahead == 'Z') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 228,
        '/', 9,
        '0', 289,
        'O', 245,
        'Z', 244,
        'c', 263,
        'n', 269,
        's', 255,
        'w', 248,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 228,
        '/', 9,
        '0', 289,
        'O', 245,
        'Z', 244,
        'g', 274,
        'i', 276,
        'p', 258,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(312);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '/') ADVANCE(316);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(315);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(313);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == 'y') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(215);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(202);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(288);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(288);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(196);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 118:
      if (lookahead == 'q') ADVANCE(190);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 151:
      if (lookahead == 'v') ADVANCE(188);
      END_STATE();
    case 152:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 154:
      if (lookahead == '}') ADVANCE(241);
      END_STATE();
    case 155:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(291);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 157:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '\n', 160,
        '!', 19,
        '%', 238,
        '*', 227,
        '-', 14,
        '.', 45,
        '/', 10,
        ':', 236,
        ';', 316,
        'i', 266,
        'j', 265,
        'm', 268,
        'n', 271,
        'o', 282,
        'p', 283,
        's', 255,
        'w', 248,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '\n', 160,
        '%', 154,
        '&', 234,
        ')', 229,
        '*', 227,
        '+', 230,
        ',', 175,
        '-', 231,
        '/', 232,
        ':', 18,
        ';', 316,
        '[', 223,
        ']', 224,
        '^', 235,
        'e', 152,
        'i', 131,
        'n', 149,
        'o', 111,
        'p', 39,
        'r', 56,
        's', 70,
        'x', 197,
        'y', 200,
        '|', 233,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(158);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(308);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTprogram);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTdefine);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTorigin);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTside_set);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_pindirs);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTwrap_target);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTwrap);
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTword);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTlang_opt);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_wait);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_wait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_push);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_iffull);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_pull);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_pull);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ifempty);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_mov);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_mov);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_irq);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_irq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_noblock);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_pin);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_pin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_osre);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_gpio);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_gpio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_pins);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_isr);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_osr);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_pc);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_nowait);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_nowait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_side);
      if (lookahead == '_') ADVANCE(133);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_sideset);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_side_set);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '/') ADVANCE(316);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(215);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_code_block_language);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 's') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b') ADVANCE(304);
      if (lookahead == 'x') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == '*') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'E') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'N') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'O') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'R') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_non_ws);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(202);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(306);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 157},
  [2] = {.lex_state = 157},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 158},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 158},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 158},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 158},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 158},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 158},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 158},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 158},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 158},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 158},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 158},
  [79] = {.lex_state = 158},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 157},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 157},
  [116] = {.lex_state = 158},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 157},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 4},
  [125] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_DOTprogram] = ACTIONS(1),
    [anon_sym_DOTdefine] = ACTIONS(1),
    [anon_sym_DOTorigin] = ACTIONS(1),
    [anon_sym_DOTside_set] = ACTIONS(1),
    [anon_sym_DOTwrap_target] = ACTIONS(1),
    [anon_sym_DOTwrap] = ACTIONS(1),
    [anon_sym_DOTword] = ACTIONS(1),
    [anon_sym_DOTlang_opt] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_wait] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_iffull] = ACTIONS(1),
    [anon_sym_pull] = ACTIONS(1),
    [anon_sym_ifempty] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_irq] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_noblock] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_pin] = ACTIONS(1),
    [anon_sym_gpio] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_isr] = ACTIONS(1),
    [anon_sym_osr] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_pc] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_clear] = ACTIONS(1),
    [anon_sym_nowait] = ACTIONS(1),
    [anon_sym_side] = ACTIONS(1),
    [anon_sym_sideset] = ACTIONS(1),
    [anon_sym_side_set] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(1),
    [sym_code_block_body] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(119),
    [sym__lines] = STATE(109),
    [sym__line] = STATE(107),
    [sym_directive] = STATE(94),
    [sym_instruction] = STATE(94),
    [sym__base_instruction] = STATE(24),
    [sym_symbol_def] = STATE(115),
    [sym_label_decl] = STATE(10),
    [sym_code_block] = STATE(94),
    [sym_block_comment] = STATE(1),
    [anon_sym_DOTprogram] = ACTIONS(5),
    [anon_sym_DOTdefine] = ACTIONS(7),
    [anon_sym_DOTorigin] = ACTIONS(9),
    [anon_sym_DOTside_set] = ACTIONS(11),
    [anon_sym_DOTwrap_target] = ACTIONS(13),
    [anon_sym_DOTwrap] = ACTIONS(15),
    [anon_sym_DOTword] = ACTIONS(9),
    [anon_sym_DOTlang_opt] = ACTIONS(17),
    [anon_sym_nop] = ACTIONS(19),
    [anon_sym_jmp] = ACTIONS(21),
    [anon_sym_wait] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_push] = ACTIONS(29),
    [anon_sym_pull] = ACTIONS(31),
    [anon_sym_mov] = ACTIONS(33),
    [anon_sym_irq] = ACTIONS(35),
    [anon_sym_set] = ACTIONS(37),
    [anon_sym_public] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_DOTprogram,
    ACTIONS(7), 1,
      anon_sym_DOTdefine,
    ACTIONS(11), 1,
      anon_sym_DOTside_set,
    ACTIONS(13), 1,
      anon_sym_DOTwrap_target,
    ACTIONS(15), 1,
      anon_sym_DOTwrap,
    ACTIONS(17), 1,
      anon_sym_DOTlang_opt,
    ACTIONS(19), 1,
      anon_sym_nop,
    ACTIONS(21), 1,
      anon_sym_jmp,
    ACTIONS(23), 1,
      anon_sym_wait,
    ACTIONS(25), 1,
      anon_sym_in,
    ACTIONS(27), 1,
      anon_sym_out,
    ACTIONS(29), 1,
      anon_sym_push,
    ACTIONS(31), 1,
      anon_sym_pull,
    ACTIONS(33), 1,
      anon_sym_mov,
    ACTIONS(35), 1,
      anon_sym_irq,
    ACTIONS(37), 1,
      anon_sym_set,
    ACTIONS(39), 1,
      anon_sym_public,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(43), 1,
      anon_sym_PERCENT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_line_comment,
    STATE(2), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_label_decl,
    STATE(24), 1,
      sym__base_instruction,
    STATE(105), 1,
      sym__line,
    STATE(115), 1,
      sym_symbol_def,
    ACTIONS(9), 2,
      anon_sym_DOTorigin,
      anon_sym_DOTword,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(94), 3,
      sym_directive,
      sym_instruction,
      sym_code_block,
  [95] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(3), 1,
      sym_block_comment,
    ACTIONS(53), 3,
      anon_sym_side,
      anon_sym_SLASH,
      anon_sym_opt,
    ACTIONS(51), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_pindirs,
      anon_sym_rel,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_optional,
      sym_line_comment,
  [126] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      sym_block_comment,
    ACTIONS(57), 3,
      anon_sym_side,
      anon_sym_SLASH,
      anon_sym_opt,
    ACTIONS(55), 17,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_pindirs,
      anon_sym_rel,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_optional,
      sym_line_comment,
  [157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_block_comment,
    ACTIONS(61), 2,
      anon_sym_side,
      anon_sym_SLASH,
    ACTIONS(59), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      sym_line_comment,
  [184] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_block_comment,
    ACTIONS(65), 2,
      anon_sym_side,
      anon_sym_SLASH,
    ACTIONS(63), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      sym_line_comment,
  [211] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_side,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      sym_line_comment,
  [244] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_side,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      sym_block_comment,
    ACTIONS(67), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      sym_line_comment,
  [275] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_side,
      anon_sym_SLASH,
    ACTIONS(67), 14,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      sym_line_comment,
  [302] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_nop,
    ACTIONS(81), 1,
      anon_sym_jmp,
    ACTIONS(83), 1,
      anon_sym_wait,
    ACTIONS(85), 1,
      anon_sym_in,
    ACTIONS(87), 1,
      anon_sym_out,
    ACTIONS(89), 1,
      anon_sym_push,
    ACTIONS(91), 1,
      anon_sym_pull,
    ACTIONS(93), 1,
      anon_sym_mov,
    ACTIONS(95), 1,
      anon_sym_irq,
    ACTIONS(97), 1,
      anon_sym_set,
    ACTIONS(99), 1,
      sym_line_comment,
    STATE(10), 1,
      sym_block_comment,
    STATE(24), 1,
      sym__base_instruction,
    STATE(92), 1,
      sym_instruction,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [352] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_side,
    STATE(11), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [385] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(109), 1,
      anon_sym_side,
    STATE(12), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [418] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_side,
    STATE(13), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [451] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_block_comment,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_nop,
      anon_sym_jmp,
      anon_sym_wait,
      anon_sym_in,
      anon_sym_out,
      anon_sym_push,
      anon_sym_pull,
      anon_sym_mov,
      anon_sym_irq,
      anon_sym_set,
      sym_line_comment,
  [473] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_x,
    ACTIONS(121), 1,
      anon_sym_y,
    ACTIONS(123), 1,
      anon_sym_pin,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_not,
    STATE(6), 1,
      sym_value,
    STATE(12), 1,
      sym_expression,
    STATE(15), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_condition,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
    ACTIONS(129), 2,
      sym_identifier,
      sym_integer,
  [515] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym_block_comment,
    STATE(29), 1,
      sym_mov_op,
    STATE(52), 1,
      sym_mov_source,
    ACTIONS(137), 2,
      anon_sym_COLON_COLON,
      sym_not,
    ACTIONS(135), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [544] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      anon_sym_ifempty,
    ACTIONS(145), 1,
      anon_sym_side,
    STATE(17), 1,
      sym_block_comment,
    STATE(48), 1,
      sym__blocking,
    ACTIONS(143), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [572] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_block_comment,
    STATE(37), 1,
      sym_mov_op,
    STATE(49), 1,
      sym_mov_source,
    ACTIONS(137), 2,
      anon_sym_COLON_COLON,
      sym_not,
    ACTIONS(135), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [598] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      anon_sym_iffull,
    ACTIONS(145), 1,
      anon_sym_side,
    STATE(19), 1,
      sym_block_comment,
    STATE(48), 1,
      sym__blocking,
    ACTIONS(143), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [626] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [653] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      anon_sym_side,
    STATE(21), 1,
      sym_block_comment,
    STATE(52), 1,
      sym__blocking,
    ACTIONS(143), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [678] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_block_comment,
    ACTIONS(149), 10,
      anon_sym_COMMA,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
      anon_sym_COLON_COLON,
      sym_not,
  [697] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_block_comment,
    STATE(33), 1,
      sym_value,
    STATE(87), 1,
      sym_irq_modifiers,
    ACTIONS(129), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(151), 4,
      anon_sym_wait,
      anon_sym_set,
      anon_sym_clear,
      anon_sym_nowait,
  [723] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      anon_sym_side,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_delay,
    STATE(70), 1,
      sym_sideset,
    ACTIONS(157), 2,
      anon_sym_sideset,
      anon_sym_side_set,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_block_comment,
    STATE(73), 1,
      sym_out_target,
    ACTIONS(161), 8,
      anon_sym_pindirs,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_pc,
      anon_sym_exec,
  [771] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_rel,
    ACTIONS(167), 1,
      anon_sym_side,
    STATE(26), 1,
      sym_block_comment,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [792] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [817] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      anon_sym_side,
    ACTIONS(171), 1,
      anon_sym_rel,
    STATE(28), 1,
      sym_block_comment,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [838] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_mov_source,
    ACTIONS(135), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [857] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      anon_sym_irq,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_wait_source,
    STATE(68), 1,
      sym_value,
    ACTIONS(175), 2,
      anon_sym_pin,
      anon_sym_gpio,
    ACTIONS(179), 2,
      sym_identifier,
      sym_integer,
  [884] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [909] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_block_comment,
    STATE(73), 1,
      sym_in_source,
    ACTIONS(183), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [928] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      anon_sym_side,
    ACTIONS(185), 1,
      anon_sym_rel,
    STATE(33), 1,
      sym_block_comment,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [949] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_rel,
    ACTIONS(191), 1,
      anon_sym_side,
    STATE(34), 1,
      sym_block_comment,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_mov_target,
    STATE(35), 1,
      sym_block_comment,
    ACTIONS(193), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_pc,
      anon_sym_exec,
  [989] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [1014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_mov_source,
    ACTIONS(135), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [1033] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(11), 1,
      sym_expression,
    STATE(38), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1062] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_block_comment,
    ACTIONS(201), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [1078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      anon_sym_side,
    STATE(40), 1,
      sym_block_comment,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1096] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(7), 1,
      sym_expression,
    STATE(41), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1122] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expression,
    STATE(6), 1,
      sym_value,
    STATE(42), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1148] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(8), 1,
      sym_expression,
    STATE(43), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1174] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 1,
      anon_sym_side,
    STATE(44), 1,
      sym_block_comment,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_side,
    STATE(45), 1,
      sym_block_comment,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1210] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(9), 1,
      sym_expression,
    STATE(46), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1236] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(13), 1,
      sym_expression,
    STATE(47), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      anon_sym_side,
    STATE(48), 1,
      sym_block_comment,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1280] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      anon_sym_side,
    STATE(49), 1,
      sym_block_comment,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      anon_sym_side,
    STATE(50), 1,
      sym_block_comment,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1316] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(11), 1,
      sym_expression,
    STATE(51), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      anon_sym_side,
    STATE(52), 1,
      sym_block_comment,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1360] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_pindirs,
    ACTIONS(211), 1,
      anon_sym_opt,
    ACTIONS(213), 1,
      anon_sym_optional,
    STATE(53), 1,
      sym_block_comment,
    STATE(79), 1,
      sym_optional,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1384] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_side,
    STATE(54), 1,
      sym_block_comment,
    ACTIONS(215), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1402] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(31), 1,
      sym_expression,
    STATE(55), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1428] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_side,
    STATE(56), 1,
      sym_block_comment,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_side,
    STATE(57), 1,
      sym_block_comment,
    ACTIONS(223), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1464] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      anon_sym_side,
    STATE(58), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_sideset,
    ACTIONS(157), 2,
      anon_sym_sideset,
      anon_sym_side_set,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1486] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(36), 1,
      sym_expression,
    STATE(59), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1512] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(27), 1,
      sym_expression,
    STATE(60), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1538] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(6), 1,
      sym_value,
    STATE(20), 1,
      sym_expression,
    STATE(61), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_block_comment,
    ACTIONS(231), 2,
      anon_sym_COLON,
      sym_integer,
    ACTIONS(229), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1581] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_block_comment,
    ACTIONS(235), 2,
      anon_sym_COLON,
      sym_integer,
    ACTIONS(233), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      sym_integer,
    STATE(64), 1,
      sym_block_comment,
    ACTIONS(237), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1615] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      anon_sym_side,
    STATE(65), 1,
      sym_block_comment,
    ACTIONS(241), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      sym_line_comment,
  [1632] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      sym_integer,
    STATE(66), 1,
      sym_block_comment,
    ACTIONS(245), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      sym_integer,
    STATE(67), 1,
      sym_block_comment,
    ACTIONS(249), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1666] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_irq,
    STATE(52), 1,
      sym_wait_source,
    STATE(68), 1,
      sym_block_comment,
    ACTIONS(257), 2,
      anon_sym_pin,
      anon_sym_gpio,
  [1686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_block_comment,
    STATE(73), 1,
      sym_set_target,
    ACTIONS(259), 4,
      anon_sym_pindirs,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
  [1702] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_delay,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1720] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      sym_value,
    STATE(71), 1,
      sym_block_comment,
  [1742] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_value,
    STATE(72), 1,
      sym_block_comment,
  [1764] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_value,
    STATE(73), 1,
      sym_block_comment,
  [1786] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      sym_integer,
    STATE(74), 1,
      sym_block_comment,
    ACTIONS(265), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [1801] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(53), 1,
      sym_value,
    STATE(75), 1,
      sym_block_comment,
  [1820] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(76), 1,
      sym_block_comment,
    STATE(85), 1,
      sym_value,
  [1839] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_block_comment,
    ACTIONS(51), 4,
      anon_sym_COMMA,
      anon_sym_irq,
      anon_sym_pin,
      anon_sym_gpio,
  [1852] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_block_comment,
    ACTIONS(269), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_pindirs,
      sym_line_comment,
  [1865] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_pindirs,
    STATE(79), 1,
      sym_block_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym_integer,
    STATE(80), 1,
      sym_block_comment,
    ACTIONS(273), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [1895] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(81), 1,
      sym_block_comment,
    STATE(93), 1,
      sym_value,
  [1914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      sym_integer,
    STATE(82), 1,
      sym_block_comment,
    ACTIONS(277), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [1929] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_public,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(61), 1,
      sym_symbol_def,
    STATE(83), 1,
      sym_block_comment,
  [1948] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_block_comment,
    ACTIONS(55), 4,
      anon_sym_COMMA,
      anon_sym_irq,
      anon_sym_pin,
      anon_sym_gpio,
  [1961] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_block_comment,
    ACTIONS(281), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
      sym_line_comment,
  [1974] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(26), 1,
      sym_value,
    STATE(86), 1,
      sym_block_comment,
  [1993] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(28), 1,
      sym_value,
    STATE(87), 1,
      sym_block_comment,
  [2012] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(45), 1,
      sym_value,
    STATE(88), 1,
      sym_block_comment,
  [2031] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(49), 1,
      sym_value,
    STATE(89), 1,
      sym_block_comment,
  [2050] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(285), 1,
      sym_integer,
    STATE(90), 1,
      sym_block_comment,
    ACTIONS(283), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2064] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_block_comment,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      sym_line_comment,
    STATE(92), 1,
      sym_block_comment,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2090] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_block_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2102] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      sym_line_comment,
    STATE(94), 1,
      sym_block_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2116] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_block_comment,
    ACTIONS(293), 3,
      anon_sym_x,
      anon_sym_y,
      anon_sym_osre,
  [2128] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_block_comment,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2140] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_block_comment,
    ACTIONS(295), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2152] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_block_comment,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2164] = 4,
    ACTIONS(301), 1,
      sym_string,
    ACTIONS(303), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_block_comment,
    ACTIONS(299), 2,
      sym_integer,
      sym_non_ws,
  [2178] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_block_comment,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2190] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_block_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2202] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_block_comment,
    ACTIONS(307), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2214] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_block_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2225] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_block_comment,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2236] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_block_comment,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      anon_sym_DASH_DASH,
    ACTIONS(313), 1,
      anon_sym_BANG_EQ,
    STATE(106), 1,
      sym_block_comment,
  [2260] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_block_comment,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2271] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_block_comment,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2282] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_block_comment,
  [2295] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block_comment,
  [2305] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      sym_code_block_language,
    STATE(111), 1,
      sym_block_comment,
  [2315] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(112), 1,
      sym_block_comment,
  [2325] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      sym_code_block_body,
    STATE(113), 1,
      sym_block_comment,
  [2335] = 3,
    ACTIONS(303), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      sym_non_ws,
    STATE(114), 1,
      sym_block_comment,
  [2345] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_COLON,
    STATE(115), 1,
      sym_block_comment,
  [2355] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(116), 1,
      sym_block_comment,
  [2365] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    STATE(117), 1,
      sym_block_comment,
  [2375] = 3,
    ACTIONS(303), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      sym_non_ws,
    STATE(118), 1,
      sym_block_comment,
  [2385] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_block_comment,
  [2395] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      anon_sym_DASH_DASH,
    STATE(120), 1,
      sym_block_comment,
  [2405] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_y,
    STATE(121), 1,
      sym_block_comment,
  [2415] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      anon_sym_EQ,
    STATE(122), 1,
      sym_block_comment,
  [2425] = 3,
    ACTIONS(303), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      aux_sym_block_comment_token1,
    STATE(123), 1,
      sym_block_comment,
  [2435] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      sym_identifier,
    STATE(124), 1,
      sym_block_comment,
  [2445] = 1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 275,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 385,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 451,
  [SMALL_STATE(15)] = 473,
  [SMALL_STATE(16)] = 515,
  [SMALL_STATE(17)] = 544,
  [SMALL_STATE(18)] = 572,
  [SMALL_STATE(19)] = 598,
  [SMALL_STATE(20)] = 626,
  [SMALL_STATE(21)] = 653,
  [SMALL_STATE(22)] = 678,
  [SMALL_STATE(23)] = 697,
  [SMALL_STATE(24)] = 723,
  [SMALL_STATE(25)] = 751,
  [SMALL_STATE(26)] = 771,
  [SMALL_STATE(27)] = 792,
  [SMALL_STATE(28)] = 817,
  [SMALL_STATE(29)] = 838,
  [SMALL_STATE(30)] = 857,
  [SMALL_STATE(31)] = 884,
  [SMALL_STATE(32)] = 909,
  [SMALL_STATE(33)] = 928,
  [SMALL_STATE(34)] = 949,
  [SMALL_STATE(35)] = 970,
  [SMALL_STATE(36)] = 989,
  [SMALL_STATE(37)] = 1014,
  [SMALL_STATE(38)] = 1033,
  [SMALL_STATE(39)] = 1062,
  [SMALL_STATE(40)] = 1078,
  [SMALL_STATE(41)] = 1096,
  [SMALL_STATE(42)] = 1122,
  [SMALL_STATE(43)] = 1148,
  [SMALL_STATE(44)] = 1174,
  [SMALL_STATE(45)] = 1192,
  [SMALL_STATE(46)] = 1210,
  [SMALL_STATE(47)] = 1236,
  [SMALL_STATE(48)] = 1262,
  [SMALL_STATE(49)] = 1280,
  [SMALL_STATE(50)] = 1298,
  [SMALL_STATE(51)] = 1316,
  [SMALL_STATE(52)] = 1342,
  [SMALL_STATE(53)] = 1360,
  [SMALL_STATE(54)] = 1384,
  [SMALL_STATE(55)] = 1402,
  [SMALL_STATE(56)] = 1428,
  [SMALL_STATE(57)] = 1446,
  [SMALL_STATE(58)] = 1464,
  [SMALL_STATE(59)] = 1486,
  [SMALL_STATE(60)] = 1512,
  [SMALL_STATE(61)] = 1538,
  [SMALL_STATE(62)] = 1564,
  [SMALL_STATE(63)] = 1581,
  [SMALL_STATE(64)] = 1598,
  [SMALL_STATE(65)] = 1615,
  [SMALL_STATE(66)] = 1632,
  [SMALL_STATE(67)] = 1649,
  [SMALL_STATE(68)] = 1666,
  [SMALL_STATE(69)] = 1686,
  [SMALL_STATE(70)] = 1702,
  [SMALL_STATE(71)] = 1720,
  [SMALL_STATE(72)] = 1742,
  [SMALL_STATE(73)] = 1764,
  [SMALL_STATE(74)] = 1786,
  [SMALL_STATE(75)] = 1801,
  [SMALL_STATE(76)] = 1820,
  [SMALL_STATE(77)] = 1839,
  [SMALL_STATE(78)] = 1852,
  [SMALL_STATE(79)] = 1865,
  [SMALL_STATE(80)] = 1880,
  [SMALL_STATE(81)] = 1895,
  [SMALL_STATE(82)] = 1914,
  [SMALL_STATE(83)] = 1929,
  [SMALL_STATE(84)] = 1948,
  [SMALL_STATE(85)] = 1961,
  [SMALL_STATE(86)] = 1974,
  [SMALL_STATE(87)] = 1993,
  [SMALL_STATE(88)] = 2012,
  [SMALL_STATE(89)] = 2031,
  [SMALL_STATE(90)] = 2050,
  [SMALL_STATE(91)] = 2064,
  [SMALL_STATE(92)] = 2076,
  [SMALL_STATE(93)] = 2090,
  [SMALL_STATE(94)] = 2102,
  [SMALL_STATE(95)] = 2116,
  [SMALL_STATE(96)] = 2128,
  [SMALL_STATE(97)] = 2140,
  [SMALL_STATE(98)] = 2152,
  [SMALL_STATE(99)] = 2164,
  [SMALL_STATE(100)] = 2178,
  [SMALL_STATE(101)] = 2190,
  [SMALL_STATE(102)] = 2202,
  [SMALL_STATE(103)] = 2214,
  [SMALL_STATE(104)] = 2225,
  [SMALL_STATE(105)] = 2236,
  [SMALL_STATE(106)] = 2247,
  [SMALL_STATE(107)] = 2260,
  [SMALL_STATE(108)] = 2271,
  [SMALL_STATE(109)] = 2282,
  [SMALL_STATE(110)] = 2295,
  [SMALL_STATE(111)] = 2305,
  [SMALL_STATE(112)] = 2315,
  [SMALL_STATE(113)] = 2325,
  [SMALL_STATE(114)] = 2335,
  [SMALL_STATE(115)] = 2345,
  [SMALL_STATE(116)] = 2355,
  [SMALL_STATE(117)] = 2365,
  [SMALL_STATE(118)] = 2375,
  [SMALL_STATE(119)] = 2385,
  [SMALL_STATE(120)] = 2395,
  [SMALL_STATE(121)] = 2405,
  [SMALL_STATE(122)] = 2415,
  [SMALL_STATE(123)] = 2425,
  [SMALL_STATE(124)] = 2435,
  [SMALL_STATE(125)] = 2445,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lines, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 3, 0, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 3, 0, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 2, 0, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 2, 0, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 4, 0, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 4, 0, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_decl, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 1, 0, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 1, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_target, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_op, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_source, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mov_source, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blocking, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blocking, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 5, 0, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 5, 0, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_def, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_def, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_def, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_def, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delay, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_target, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out_target, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_target, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_target, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_source, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_source, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sideset, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_irq_modifiers, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_irq_modifiers, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 5, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lines, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lines, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [339] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_code_block_body = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_block_body] = sym_code_block_body,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_block_body] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pioasm_external_scanner_create(void);
void tree_sitter_pioasm_external_scanner_destroy(void *);
bool tree_sitter_pioasm_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pioasm_external_scanner_serialize(void *, char *);
void tree_sitter_pioasm_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pioasm(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pioasm_external_scanner_create,
      tree_sitter_pioasm_external_scanner_destroy,
      tree_sitter_pioasm_external_scanner_scan,
      tree_sitter_pioasm_external_scanner_serialize,
      tree_sitter_pioasm_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
