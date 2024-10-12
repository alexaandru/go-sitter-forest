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
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 101
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_DOTdefine = 2,
  anon_sym_DOTclock_div = 3,
  anon_sym_DOTfifo = 4,
  anon_sym_txrx = 5,
  anon_sym_rx = 6,
  anon_sym_txput = 7,
  anon_sym_txget = 8,
  anon_sym_putget = 9,
  anon_sym_DOTmov_status = 10,
  anon_sym_rxfifo = 11,
  anon_sym_LT = 12,
  anon_sym_txfifo = 13,
  anon_sym_irq = 14,
  anon_sym_next = 15,
  anon_sym_prev = 16,
  anon_sym_set = 17,
  anon_sym_DOTin = 18,
  anon_sym_DOTout = 19,
  anon_sym_left = 20,
  anon_sym_right = 21,
  anon_sym_auto = 22,
  anon_sym_DOTprogram = 23,
  anon_sym_DOTorigin = 24,
  anon_sym_DOTpio_version = 25,
  anon_sym_0 = 26,
  anon_sym_RP2040 = 27,
  anon_sym_1 = 28,
  anon_sym_RP2350 = 29,
  anon_sym_DOTset = 30,
  anon_sym_DOTside_set = 31,
  anon_sym_pindirs = 32,
  anon_sym_DOTwrap_target = 33,
  anon_sym_DOTwrap = 34,
  anon_sym_DOTlang_opt = 35,
  anon_sym_EQ = 36,
  anon_sym_DOTword = 37,
  anon_sym_nop = 38,
  anon_sym_jmp = 39,
  anon_sym_COMMA = 40,
  anon_sym_wait = 41,
  anon_sym_in = 42,
  anon_sym_out = 43,
  anon_sym_push = 44,
  anon_sym_iffull = 45,
  anon_sym_pull = 46,
  anon_sym_ifempty = 47,
  anon_sym_mov = 48,
  anon_sym_rel = 49,
  anon_sym_block = 50,
  anon_sym_noblock = 51,
  anon_sym_x = 52,
  anon_sym_DASH_DASH = 53,
  anon_sym_y = 54,
  anon_sym_BANG_EQ = 55,
  anon_sym_pin = 56,
  anon_sym_osre = 57,
  anon_sym_gpio = 58,
  anon_sym_pins = 59,
  anon_sym_null = 60,
  anon_sym_isr = 61,
  anon_sym_osr = 62,
  anon_sym_status = 63,
  anon_sym_pc = 64,
  anon_sym_exec = 65,
  anon_sym_COLON_COLON = 66,
  anon_sym_clear = 67,
  anon_sym_nowait = 68,
  anon_sym_side = 69,
  anon_sym_sideset = 70,
  anon_sym_side_set = 71,
  anon_sym_LBRACK = 72,
  anon_sym_RBRACK = 73,
  anon_sym_public = 74,
  anon_sym_STAR = 75,
  anon_sym_LPAREN = 76,
  anon_sym_RPAREN = 77,
  anon_sym_PLUS = 78,
  anon_sym_DASH = 79,
  anon_sym_SLASH = 80,
  anon_sym_PIPE = 81,
  anon_sym_AMP = 82,
  anon_sym_CARET = 83,
  anon_sym_COLON = 84,
  anon_sym_PERCENT = 85,
  anon_sym_LBRACE = 86,
  anon_sym_PERCENT_RBRACE = 87,
  sym_code_block_language = 88,
  sym_identifier = 89,
  sym_integer = 90,
  sym_float = 91,
  sym_non_ws = 92,
  sym_string = 93,
  sym_not = 94,
  anon_sym_opt = 95,
  anon_sym_optional = 96,
  anon_sym_SLASH_STAR = 97,
  aux_sym_block_comment_token1 = 98,
  sym_line_comment = 99,
  sym_code_block_body = 100,
  sym_source_file = 101,
  sym__lines = 102,
  sym__line = 103,
  sym_directive = 104,
  sym_instruction = 105,
  sym__base_instruction = 106,
  sym__blocking = 107,
  sym_condition = 108,
  sym_wait_source = 109,
  sym_in_source = 110,
  sym_out_target = 111,
  sym_mov_target = 112,
  sym_mov_source = 113,
  sym_mov_op = 114,
  sym_irq_modifiers = 115,
  sym_set_target = 116,
  sym_sideset = 117,
  sym_delay = 118,
  sym_symbol_def = 119,
  sym_value = 120,
  sym_expression = 121,
  sym_label_decl = 122,
  sym_code_block = 123,
  sym_optional = 124,
  sym_block_comment = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_DOTdefine] = ".define",
  [anon_sym_DOTclock_div] = ".clock_div",
  [anon_sym_DOTfifo] = ".fifo",
  [anon_sym_txrx] = "txrx",
  [anon_sym_rx] = "rx",
  [anon_sym_txput] = "txput",
  [anon_sym_txget] = "txget",
  [anon_sym_putget] = "putget",
  [anon_sym_DOTmov_status] = ".mov_status",
  [anon_sym_rxfifo] = "rxfifo",
  [anon_sym_LT] = "<",
  [anon_sym_txfifo] = "txfifo",
  [anon_sym_irq] = "irq",
  [anon_sym_next] = "next",
  [anon_sym_prev] = "prev",
  [anon_sym_set] = "set",
  [anon_sym_DOTin] = ".in",
  [anon_sym_DOTout] = ".out",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_auto] = "auto",
  [anon_sym_DOTprogram] = ".program",
  [anon_sym_DOTorigin] = ".origin",
  [anon_sym_DOTpio_version] = ".pio_version",
  [anon_sym_0] = "0",
  [anon_sym_RP2040] = "RP2040",
  [anon_sym_1] = "1",
  [anon_sym_RP2350] = "RP2350",
  [anon_sym_DOTset] = ".set",
  [anon_sym_DOTside_set] = ".side_set",
  [anon_sym_pindirs] = "pindirs",
  [anon_sym_DOTwrap_target] = ".wrap_target",
  [anon_sym_DOTwrap] = ".wrap",
  [anon_sym_DOTlang_opt] = ".lang_opt",
  [anon_sym_EQ] = "=",
  [anon_sym_DOTword] = ".word",
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
  [anon_sym_rel] = "rel",
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
  [sym_float] = "float",
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
  [anon_sym_DOTdefine] = anon_sym_DOTdefine,
  [anon_sym_DOTclock_div] = anon_sym_DOTclock_div,
  [anon_sym_DOTfifo] = anon_sym_DOTfifo,
  [anon_sym_txrx] = anon_sym_txrx,
  [anon_sym_rx] = anon_sym_rx,
  [anon_sym_txput] = anon_sym_txput,
  [anon_sym_txget] = anon_sym_txget,
  [anon_sym_putget] = anon_sym_putget,
  [anon_sym_DOTmov_status] = anon_sym_DOTmov_status,
  [anon_sym_rxfifo] = anon_sym_rxfifo,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_txfifo] = anon_sym_txfifo,
  [anon_sym_irq] = anon_sym_irq,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_prev] = anon_sym_prev,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_DOTin] = anon_sym_DOTin,
  [anon_sym_DOTout] = anon_sym_DOTout,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_DOTprogram] = anon_sym_DOTprogram,
  [anon_sym_DOTorigin] = anon_sym_DOTorigin,
  [anon_sym_DOTpio_version] = anon_sym_DOTpio_version,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_RP2040] = anon_sym_RP2040,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_RP2350] = anon_sym_RP2350,
  [anon_sym_DOTset] = anon_sym_DOTset,
  [anon_sym_DOTside_set] = anon_sym_DOTside_set,
  [anon_sym_pindirs] = anon_sym_pindirs,
  [anon_sym_DOTwrap_target] = anon_sym_DOTwrap_target,
  [anon_sym_DOTwrap] = anon_sym_DOTwrap,
  [anon_sym_DOTlang_opt] = anon_sym_DOTlang_opt,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOTword] = anon_sym_DOTword,
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
  [anon_sym_rel] = anon_sym_rel,
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
  [sym_float] = sym_float,
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
  [anon_sym_DOTdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTclock_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfifo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txrx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_putget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTmov_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rxfifo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txfifo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTorigin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTpio_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RP2040] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RP2350] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTset] = {
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
  [anon_sym_DOTlang_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTword] = {
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
  [anon_sym_rel] = {
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
  [sym_float] = {
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
  [36] = 36,
  [37] = 37,
  [38] = 30,
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
  [61] = 55,
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
  [76] = 4,
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
  [93] = 3,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 240,
        '!', 418,
        '"', 2,
        '%', 346,
        '&', 341,
        '(', 335,
        ')', 336,
        '*', 334,
        '+', 337,
        ',', 286,
        '-', 338,
        '.', 57,
        '/', 339,
        '0', 269,
        '1', 272,
        ':', 344,
        ';', 425,
        '<', 252,
        '=', 280,
        'O', 29,
        'R', 31,
        'Z', 27,
        '[', 330,
        ']', 331,
        '^', 342,
        'a', 214,
        'b', 128,
        'c', 127,
        'e', 228,
        'g', 163,
        'i', 86,
        'j', 135,
        'l', 64,
        'm', 145,
        'n', 70,
        'o', 165,
        'p', 50,
        'r', 72,
        's', 74,
        't', 225,
        'w', 40,
        'x', 304,
        'y', 307,
        '{', 347,
        '|', 340,
        '~', 417,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == '0') ADVANCE(397);
      if (lookahead == 'O') ADVANCE(410);
      if (lookahead == 'Z') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 335,
        ',', 286,
        '-', 338,
        '/', 9,
        '0', 396,
        ':', 25,
        'O', 352,
        'Z', 351,
        'p', 365,
        'x', 305,
        'y', 308,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(417);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '(', 335,
        ',', 286,
        '-', 338,
        '/', 9,
        '0', 396,
        ':', 25,
        'O', 352,
        'Z', 351,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(396);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == 'O') ADVANCE(352);
      if (lookahead == 'Z') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 335,
        '/', 9,
        '0', 396,
        'O', 352,
        'Z', 351,
        'c', 370,
        'n', 376,
        's', 362,
        'w', 355,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '(', 335,
        '/', 9,
        '0', 396,
        'O', 352,
        'Z', 351,
        'g', 381,
        'i', 383,
        'p', 365,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(421);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(425);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(424);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(424);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(422);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '.') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '/', 9,
        '0', 396,
        'O', 29,
        'Z', 27,
        'i', 169,
        'o', 184,
        'r', 229,
        't', 231,
        'x', 304,
        'y', 307,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(23);
      if (lookahead == '3') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(270);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(273);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == '5') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(322);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(395);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(395);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(185);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(224);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(282);
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        'c', 132,
        'd', 68,
        'f', 106,
        'i', 137,
        'l', 41,
        'm', 152,
        'o', 174,
        'p', 105,
        's', 76,
        'w', 154,
      );
      END_STATE();
    case 58:
      ADVANCE_MAP(
        'c', 132,
        'd', 68,
        'f', 106,
        'i', 137,
        'l', 41,
        'm', 152,
        'o', 174,
        'p', 105,
        's', 76,
        'w', 154,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(246);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(245);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'g') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(302);
      END_STATE();
    case 120:
      if (lookahead == 'k') ADVANCE(303);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(34);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 168:
      if (lookahead == 'q') ADVANCE(254);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 220:
      if (lookahead == 'v') ADVANCE(299);
      END_STATE();
    case 221:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 222:
      if (lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 223:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 224:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 225:
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 226:
      if (lookahead == 'x') ADVANCE(244);
      END_STATE();
    case 227:
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 228:
      if (lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 229:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 230:
      if (lookahead == 'x') ADVANCE(195);
      END_STATE();
    case 231:
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 232:
      if (lookahead == 'y') ADVANCE(298);
      END_STATE();
    case 233:
      if (lookahead == '}') ADVANCE(348);
      END_STATE();
    case 234:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(398);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 237:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 240,
        '!', 26,
        '%', 345,
        '*', 334,
        '+', 15,
        '-', 14,
        '.', 58,
        '/', 10,
        ':', 343,
        ';', 425,
        'i', 373,
        'j', 372,
        'm', 375,
        'n', 378,
        'o', 389,
        'p', 390,
        's', 362,
        'w', 355,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 240,
        '%', 233,
        '&', 341,
        ')', 336,
        '*', 334,
        '+', 337,
        ',', 286,
        '-', 338,
        '/', 339,
        '0', 268,
        '1', 271,
        ':', 25,
        ';', 425,
        'R', 31,
        '[', 330,
        ']', 331,
        '^', 342,
        'e', 228,
        'i', 180,
        'n', 215,
        'o', 164,
        'p', 51,
        'r', 73,
        's', 104,
        't', 227,
        'x', 304,
        'y', 307,
        '|', 340,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(238);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(417);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DOTdefine);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DOTclock_div);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DOTfifo);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_txrx);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_rx);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_rx);
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_txput);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_txget);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_putget);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DOTmov_status);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_rxfifo);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_txfifo);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_irq);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_irq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_prev);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DOTin);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOTout);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOTprogram);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DOTorigin);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DOTpio_version);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'x') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RP2040);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RP2350);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DOTset);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DOTside_set);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_pindirs);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DOTwrap_target);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOTwrap);
      if (lookahead == '_') ADVANCE(211);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DOTlang_opt);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DOTword);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_wait);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_wait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_push);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_iffull);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_pull);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_pull);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_ifempty);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_mov);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_mov);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_noblock);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_y);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_pin);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_pin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_osre);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_gpio);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_gpio);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_pins);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_isr);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_osr);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_pc);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_nowait);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_nowait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_side);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_sideset);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_side_set);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(425);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(322);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(348);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_code_block_language);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 's') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'x') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == 'x') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == '*') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'E') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'E') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'N') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'O') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == 'R') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_non_ws);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_non_ws);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_not);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '=') ADVANCE(415);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(425);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 237},
  [2] = {.lex_state = 237},
  [3] = {.lex_state = 238},
  [4] = {.lex_state = 238},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 238},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 238},
  [20] = {.lex_state = 238},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 238},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 238},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 238},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 238},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 238},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 238},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 238},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 238},
  [73] = {.lex_state = 238},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 238},
  [81] = {.lex_state = 238},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 238},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 237},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 237},
  [129] = {.lex_state = 237},
  [130] = {.lex_state = 238},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 237},
  [137] = {.lex_state = 0},
  [138] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_DOTdefine] = ACTIONS(1),
    [anon_sym_DOTclock_div] = ACTIONS(1),
    [anon_sym_DOTfifo] = ACTIONS(1),
    [anon_sym_txrx] = ACTIONS(1),
    [anon_sym_rx] = ACTIONS(1),
    [anon_sym_txput] = ACTIONS(1),
    [anon_sym_txget] = ACTIONS(1),
    [anon_sym_putget] = ACTIONS(1),
    [anon_sym_DOTmov_status] = ACTIONS(1),
    [anon_sym_rxfifo] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_txfifo] = ACTIONS(1),
    [anon_sym_irq] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_prev] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_DOTin] = ACTIONS(1),
    [anon_sym_DOTout] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_DOTprogram] = ACTIONS(1),
    [anon_sym_DOTorigin] = ACTIONS(1),
    [anon_sym_DOTpio_version] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_RP2040] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_RP2350] = ACTIONS(1),
    [anon_sym_DOTset] = ACTIONS(1),
    [anon_sym_DOTside_set] = ACTIONS(1),
    [anon_sym_DOTwrap_target] = ACTIONS(1),
    [anon_sym_DOTwrap] = ACTIONS(1),
    [anon_sym_DOTlang_opt] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOTword] = ACTIONS(1),
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
    [anon_sym_rel] = ACTIONS(1),
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
    [sym_source_file] = STATE(137),
    [sym__lines] = STATE(115),
    [sym__line] = STATE(108),
    [sym_directive] = STATE(97),
    [sym_instruction] = STATE(97),
    [sym__base_instruction] = STATE(24),
    [sym_symbol_def] = STATE(129),
    [sym_label_decl] = STATE(10),
    [sym_code_block] = STATE(97),
    [sym_block_comment] = STATE(1),
    [anon_sym_DOTdefine] = ACTIONS(5),
    [anon_sym_DOTclock_div] = ACTIONS(7),
    [anon_sym_DOTfifo] = ACTIONS(9),
    [anon_sym_DOTmov_status] = ACTIONS(11),
    [anon_sym_irq] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(15),
    [anon_sym_DOTin] = ACTIONS(17),
    [anon_sym_DOTout] = ACTIONS(17),
    [anon_sym_DOTprogram] = ACTIONS(19),
    [anon_sym_DOTorigin] = ACTIONS(21),
    [anon_sym_DOTpio_version] = ACTIONS(23),
    [anon_sym_DOTset] = ACTIONS(25),
    [anon_sym_DOTside_set] = ACTIONS(27),
    [anon_sym_DOTwrap_target] = ACTIONS(29),
    [anon_sym_DOTwrap] = ACTIONS(31),
    [anon_sym_DOTlang_opt] = ACTIONS(33),
    [anon_sym_DOTword] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(35),
    [anon_sym_jmp] = ACTIONS(37),
    [anon_sym_wait] = ACTIONS(39),
    [anon_sym_in] = ACTIONS(41),
    [anon_sym_out] = ACTIONS(43),
    [anon_sym_push] = ACTIONS(45),
    [anon_sym_pull] = ACTIONS(47),
    [anon_sym_mov] = ACTIONS(49),
    [anon_sym_public] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_DOTdefine,
    ACTIONS(7), 1,
      anon_sym_DOTclock_div,
    ACTIONS(9), 1,
      anon_sym_DOTfifo,
    ACTIONS(11), 1,
      anon_sym_DOTmov_status,
    ACTIONS(13), 1,
      anon_sym_irq,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(19), 1,
      anon_sym_DOTprogram,
    ACTIONS(23), 1,
      anon_sym_DOTpio_version,
    ACTIONS(25), 1,
      anon_sym_DOTset,
    ACTIONS(27), 1,
      anon_sym_DOTside_set,
    ACTIONS(29), 1,
      anon_sym_DOTwrap_target,
    ACTIONS(31), 1,
      anon_sym_DOTwrap,
    ACTIONS(33), 1,
      anon_sym_DOTlang_opt,
    ACTIONS(35), 1,
      anon_sym_nop,
    ACTIONS(37), 1,
      anon_sym_jmp,
    ACTIONS(39), 1,
      anon_sym_wait,
    ACTIONS(41), 1,
      anon_sym_in,
    ACTIONS(43), 1,
      anon_sym_out,
    ACTIONS(45), 1,
      anon_sym_push,
    ACTIONS(47), 1,
      anon_sym_pull,
    ACTIONS(49), 1,
      anon_sym_mov,
    ACTIONS(51), 1,
      anon_sym_public,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_PERCENT,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_line_comment,
    STATE(2), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_label_decl,
    STATE(24), 1,
      sym__base_instruction,
    STATE(109), 1,
      sym__line,
    STATE(129), 1,
      sym_symbol_def,
    ACTIONS(17), 2,
      anon_sym_DOTin,
      anon_sym_DOTout,
    ACTIONS(21), 2,
      anon_sym_DOTorigin,
      anon_sym_DOTword,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(97), 3,
      sym_directive,
      sym_instruction,
      sym_code_block,
  [114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(3), 1,
      sym_block_comment,
    ACTIONS(65), 3,
      anon_sym_side,
      anon_sym_SLASH,
      anon_sym_opt,
    ACTIONS(63), 17,
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
  [145] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      sym_block_comment,
    ACTIONS(69), 3,
      anon_sym_side,
      anon_sym_SLASH,
      anon_sym_opt,
    ACTIONS(67), 17,
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
  [176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_side,
      anon_sym_SLASH,
    ACTIONS(71), 14,
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
  [203] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_side,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    STATE(6), 1,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 11,
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
  [236] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_block_comment,
    ACTIONS(87), 2,
      anon_sym_side,
      anon_sym_SLASH,
    ACTIONS(85), 14,
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
  [263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_block_comment,
    ACTIONS(77), 2,
      anon_sym_side,
      anon_sym_SLASH,
    ACTIONS(75), 14,
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
  [290] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      anon_sym_side,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    STATE(9), 1,
      sym_block_comment,
    ACTIONS(75), 13,
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
  [321] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_irq,
    ACTIONS(93), 1,
      anon_sym_set,
    ACTIONS(95), 1,
      anon_sym_nop,
    ACTIONS(97), 1,
      anon_sym_jmp,
    ACTIONS(99), 1,
      anon_sym_wait,
    ACTIONS(101), 1,
      anon_sym_in,
    ACTIONS(103), 1,
      anon_sym_out,
    ACTIONS(105), 1,
      anon_sym_push,
    ACTIONS(107), 1,
      anon_sym_pull,
    ACTIONS(109), 1,
      anon_sym_mov,
    ACTIONS(111), 1,
      sym_line_comment,
    STATE(10), 1,
      sym_block_comment,
    STATE(24), 1,
      sym__base_instruction,
    STATE(99), 1,
      sym_instruction,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [371] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_side,
    STATE(11), 1,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [404] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(121), 1,
      anon_sym_side,
    STATE(12), 1,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [437] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_side,
    STATE(13), 1,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [470] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_x,
    ACTIONS(131), 1,
      anon_sym_y,
    ACTIONS(133), 1,
      anon_sym_pin,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_not,
    STATE(5), 1,
      sym_value,
    STATE(11), 1,
      sym_expression,
    STATE(14), 1,
      sym_block_comment,
    STATE(35), 1,
      sym_condition,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
    ACTIONS(139), 2,
      sym_identifier,
      sym_integer,
  [512] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_block_comment,
    ACTIONS(143), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_irq,
      anon_sym_set,
      anon_sym_nop,
      anon_sym_jmp,
      anon_sym_wait,
      anon_sym_in,
      anon_sym_out,
      anon_sym_push,
      anon_sym_pull,
      anon_sym_mov,
      sym_line_comment,
  [534] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym_block_comment,
    STATE(33), 1,
      sym_mov_op,
    STATE(60), 1,
      sym_mov_source,
    ACTIONS(149), 2,
      anon_sym_COLON_COLON,
      sym_not,
    ACTIONS(147), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [563] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_iffull,
    ACTIONS(157), 1,
      anon_sym_side,
    STATE(17), 1,
      sym_block_comment,
    STATE(57), 1,
      sym__blocking,
    ACTIONS(155), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [591] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      anon_sym_ifempty,
    ACTIONS(157), 1,
      anon_sym_side,
    STATE(18), 1,
      sym_block_comment,
    STATE(57), 1,
      sym__blocking,
    ACTIONS(155), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [619] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_block_comment,
    STATE(26), 1,
      sym_mov_op,
    STATE(52), 1,
      sym_mov_source,
    ACTIONS(149), 2,
      anon_sym_COLON_COLON,
      sym_not,
    ACTIONS(147), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [645] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_block_comment,
    ACTIONS(159), 10,
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
  [664] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_side,
    STATE(21), 1,
      sym_block_comment,
    STATE(60), 1,
      sym__blocking,
    ACTIONS(155), 2,
      anon_sym_block,
      anon_sym_noblock,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [689] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [716] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_block_comment,
    STATE(71), 1,
      sym_out_target,
    ACTIONS(163), 8,
      anon_sym_pindirs,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_pc,
      anon_sym_exec,
  [736] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_side,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_delay,
    STATE(69), 1,
      sym_sideset,
    ACTIONS(169), 2,
      anon_sym_sideset,
      anon_sym_side_set,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [764] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_block_comment,
    STATE(29), 1,
      sym_value,
    STATE(84), 1,
      sym_irq_modifiers,
    ACTIONS(139), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(173), 4,
      anon_sym_set,
      anon_sym_wait,
      anon_sym_clear,
      anon_sym_nowait,
  [790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_block_comment,
    STATE(59), 1,
      sym_mov_source,
    ACTIONS(147), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [809] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      anon_sym_irq,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_wait_source,
    STATE(70), 1,
      sym_value,
    ACTIONS(177), 2,
      anon_sym_pin,
      anon_sym_gpio,
    ACTIONS(181), 2,
      sym_identifier,
      sym_integer,
  [836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_block_comment,
    STATE(71), 1,
      sym_in_source,
    ACTIONS(183), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [855] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_side,
    ACTIONS(185), 1,
      anon_sym_rel,
    STATE(29), 1,
      sym_block_comment,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [876] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [901] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      anon_sym_side,
    ACTIONS(189), 1,
      anon_sym_rel,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [922] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_rel,
    ACTIONS(195), 1,
      anon_sym_side,
    STATE(32), 1,
      sym_block_comment,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [943] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_mov_source,
    ACTIONS(147), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [962] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [987] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(13), 1,
      sym_expression,
    STATE(35), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1016] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_mov_target,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(203), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_pc,
      anon_sym_exec,
  [1035] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      anon_sym_rel,
    ACTIONS(209), 1,
      anon_sym_side,
    STATE(37), 1,
      sym_block_comment,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1056] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(117), 3,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
  [1081] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_side,
    STATE(39), 1,
      sym_block_comment,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1099] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      anon_sym_pindirs,
    ACTIONS(217), 1,
      anon_sym_opt,
    ACTIONS(219), 1,
      anon_sym_optional,
    STATE(40), 1,
      sym_block_comment,
    STATE(81), 1,
      sym_optional,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1123] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      anon_sym_side,
    STATE(41), 1,
      sym_block_comment,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1141] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(13), 1,
      sym_expression,
    STATE(42), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1167] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(12), 1,
      sym_expression,
    STATE(43), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1193] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(8), 1,
      sym_expression,
    STATE(44), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1219] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(9), 1,
      sym_expression,
    STATE(45), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1245] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(6), 1,
      sym_expression,
    STATE(46), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1271] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(22), 1,
      sym_expression,
    STATE(47), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      anon_sym_side,
    STATE(48), 1,
      sym_block_comment,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1315] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_side,
    STATE(49), 1,
      sym_block_comment,
    STATE(103), 1,
      sym_sideset,
    ACTIONS(169), 2,
      anon_sym_sideset,
      anon_sym_side_set,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1337] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_block_comment,
    ACTIONS(227), 7,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
      anon_sym_null,
      anon_sym_isr,
      anon_sym_osr,
      anon_sym_status,
  [1353] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(7), 1,
      sym_expression,
    STATE(51), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1379] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      anon_sym_side,
    STATE(52), 1,
      sym_block_comment,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1397] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      anon_sym_side,
    STATE(53), 1,
      sym_block_comment,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1415] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(34), 1,
      sym_expression,
    STATE(54), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1441] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(30), 1,
      sym_expression,
    STATE(55), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1467] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      anon_sym_side,
    STATE(56), 1,
      sym_block_comment,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_side,
    STATE(57), 1,
      sym_block_comment,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1503] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      anon_sym_side,
    STATE(58), 1,
      sym_block_comment,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1521] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      anon_sym_side,
    STATE(59), 1,
      sym_block_comment,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      anon_sym_side,
    STATE(60), 1,
      sym_block_comment,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      anon_sym_LBRACK,
      sym_line_comment,
  [1557] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(5), 1,
      sym_value,
    STATE(38), 1,
      sym_expression,
    STATE(61), 1,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_COLON_COLON,
      anon_sym_DASH,
  [1583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      sym_integer,
    STATE(62), 1,
      sym_block_comment,
    ACTIONS(241), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1600] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      sym_integer,
    STATE(63), 1,
      sym_block_comment,
    ACTIONS(245), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_block_comment,
    ACTIONS(251), 2,
      anon_sym_COLON,
      sym_integer,
    ACTIONS(249), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      sym_integer,
    STATE(65), 1,
      sym_block_comment,
    ACTIONS(253), 5,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_side,
    STATE(66), 1,
      sym_block_comment,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_sideset,
      anon_sym_side_set,
      sym_line_comment,
  [1668] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_auto,
    STATE(67), 1,
      sym_block_comment,
    ACTIONS(261), 2,
      anon_sym_left,
      anon_sym_right,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_block_comment,
    ACTIONS(267), 2,
      anon_sym_COLON,
      sym_integer,
    ACTIONS(265), 4,
      anon_sym_COLON_COLON,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1704] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_block_comment,
    STATE(104), 1,
      sym_delay,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1722] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_irq,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_wait_source,
    STATE(70), 1,
      sym_block_comment,
    ACTIONS(273), 2,
      anon_sym_pin,
      anon_sym_gpio,
  [1742] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_value,
    STATE(71), 1,
      sym_block_comment,
  [1764] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_block_comment,
    ACTIONS(275), 5,
      anon_sym_txrx,
      anon_sym_rx,
      anon_sym_txput,
      anon_sym_txget,
      anon_sym_putget,
  [1778] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_set_target,
    STATE(73), 1,
      sym_block_comment,
    ACTIONS(277), 4,
      anon_sym_pindirs,
      anon_sym_x,
      anon_sym_y,
      anon_sym_pins,
  [1794] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      sym_value,
    STATE(74), 1,
      sym_block_comment,
  [1816] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      sym_value,
    STATE(75), 1,
      sym_block_comment,
  [1838] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_block_comment,
    ACTIONS(67), 4,
      anon_sym_irq,
      anon_sym_COMMA,
      anon_sym_pin,
      anon_sym_gpio,
  [1851] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(39), 1,
      sym_value,
    STATE(77), 1,
      sym_block_comment,
  [1870] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      anon_sym_auto,
    STATE(78), 1,
      sym_block_comment,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1885] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 1,
      sym_integer,
    STATE(79), 1,
      sym_block_comment,
    ACTIONS(285), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [1900] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_block_comment,
    ACTIONS(289), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_pindirs,
      sym_line_comment,
  [1913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      anon_sym_pindirs,
    STATE(81), 1,
      sym_block_comment,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [1928] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(37), 1,
      sym_value,
    STATE(82), 1,
      sym_block_comment,
  [1947] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      anon_sym_public,
    ACTIONS(53), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(47), 1,
      sym_symbol_def,
    STATE(83), 1,
      sym_block_comment,
  [1966] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(31), 1,
      sym_value,
    STATE(84), 1,
      sym_block_comment,
  [1985] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(85), 1,
      sym_block_comment,
    STATE(87), 1,
      sym_value,
  [2004] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_block_comment,
    ACTIONS(275), 4,
      anon_sym_0,
      anon_sym_RP2040,
      anon_sym_1,
      anon_sym_RP2350,
  [2017] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_block_comment,
    ACTIONS(293), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
      sym_line_comment,
  [2030] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      sym_integer,
    STATE(88), 1,
      sym_block_comment,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [2045] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(52), 1,
      sym_value,
    STATE(89), 1,
      sym_block_comment,
  [2064] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(40), 1,
      sym_value,
    STATE(90), 1,
      sym_block_comment,
  [2083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      sym_integer,
    STATE(91), 1,
      sym_block_comment,
    ACTIONS(299), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [2098] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(92), 1,
      sym_block_comment,
    STATE(102), 1,
      sym_value,
  [2117] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_block_comment,
    ACTIONS(63), 4,
      anon_sym_irq,
      anon_sym_COMMA,
      anon_sym_pin,
      anon_sym_gpio,
  [2130] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_block_comment,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2142] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_block_comment,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2154] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 1,
      sym_integer,
    STATE(96), 1,
      sym_block_comment,
    ACTIONS(305), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2168] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      sym_line_comment,
    STATE(97), 1,
      sym_block_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2182] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      anon_sym_irq,
    STATE(98), 1,
      sym_block_comment,
    ACTIONS(309), 2,
      anon_sym_rxfifo,
      anon_sym_txfifo,
  [2196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      sym_line_comment,
    STATE(99), 1,
      sym_block_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2210] = 4,
    ACTIONS(319), 1,
      sym_string,
    ACTIONS(321), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_block_comment,
    ACTIONS(317), 2,
      sym_integer,
      sym_non_ws,
  [2224] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_block_comment,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2236] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_block_comment,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2248] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_block_comment,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2260] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_block_comment,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2272] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_block_comment,
    ACTIONS(327), 3,
      anon_sym_x,
      anon_sym_y,
      anon_sym_osre,
  [2284] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_block_comment,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2296] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_block_comment,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_line_comment,
  [2308] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_block_comment,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2319] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(109), 1,
      sym_block_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2330] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_block_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2341] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_block_comment,
    ACTIONS(339), 2,
      anon_sym_next,
      anon_sym_prev,
  [2352] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(112), 1,
      sym_block_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_DASH_DASH,
    ACTIONS(341), 1,
      anon_sym_BANG_EQ,
    STATE(113), 1,
      sym_block_comment,
  [2376] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(114), 1,
      sym_block_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_block_comment,
  [2400] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_block_comment,
  [2410] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      anon_sym_set,
    STATE(117), 1,
      sym_block_comment,
  [2420] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      anon_sym_y,
    STATE(118), 1,
      sym_block_comment,
  [2430] = 3,
    ACTIONS(321), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      aux_sym_block_comment_token1,
    STATE(119), 1,
      sym_block_comment,
  [2440] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym_integer,
    STATE(120), 1,
      sym_block_comment,
  [2450] = 3,
    ACTIONS(321), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(353), 1,
      sym_non_ws,
    STATE(121), 1,
      sym_block_comment,
  [2460] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_LT,
    STATE(122), 1,
      sym_block_comment,
  [2470] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      sym_integer,
    STATE(123), 1,
      sym_block_comment,
  [2480] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_SLASH,
    STATE(124), 1,
      sym_block_comment,
  [2490] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      sym_integer,
    STATE(125), 1,
      sym_block_comment,
  [2500] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(126), 1,
      sym_block_comment,
  [2510] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(127), 1,
      sym_block_comment,
  [2520] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym_float,
    STATE(128), 1,
      sym_block_comment,
  [2530] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(361), 1,
      anon_sym_COLON,
    STATE(129), 1,
      sym_block_comment,
  [2540] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(363), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(130), 1,
      sym_block_comment,
  [2550] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      sym_integer,
    STATE(131), 1,
      sym_block_comment,
  [2560] = 3,
    ACTIONS(321), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      sym_non_ws,
    STATE(132), 1,
      sym_block_comment,
  [2570] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_EQ,
    STATE(133), 1,
      sym_block_comment,
  [2580] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(369), 1,
      sym_code_block_language,
    STATE(134), 1,
      sym_block_comment,
  [2590] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      sym_code_block_body,
    STATE(135), 1,
      sym_block_comment,
  [2600] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_DASH_DASH,
    STATE(136), 1,
      sym_block_comment,
  [2610] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_block_comment,
  [2620] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 114,
  [SMALL_STATE(4)] = 145,
  [SMALL_STATE(5)] = 176,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 263,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 321,
  [SMALL_STATE(11)] = 371,
  [SMALL_STATE(12)] = 404,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 512,
  [SMALL_STATE(16)] = 534,
  [SMALL_STATE(17)] = 563,
  [SMALL_STATE(18)] = 591,
  [SMALL_STATE(19)] = 619,
  [SMALL_STATE(20)] = 645,
  [SMALL_STATE(21)] = 664,
  [SMALL_STATE(22)] = 689,
  [SMALL_STATE(23)] = 716,
  [SMALL_STATE(24)] = 736,
  [SMALL_STATE(25)] = 764,
  [SMALL_STATE(26)] = 790,
  [SMALL_STATE(27)] = 809,
  [SMALL_STATE(28)] = 836,
  [SMALL_STATE(29)] = 855,
  [SMALL_STATE(30)] = 876,
  [SMALL_STATE(31)] = 901,
  [SMALL_STATE(32)] = 922,
  [SMALL_STATE(33)] = 943,
  [SMALL_STATE(34)] = 962,
  [SMALL_STATE(35)] = 987,
  [SMALL_STATE(36)] = 1016,
  [SMALL_STATE(37)] = 1035,
  [SMALL_STATE(38)] = 1056,
  [SMALL_STATE(39)] = 1081,
  [SMALL_STATE(40)] = 1099,
  [SMALL_STATE(41)] = 1123,
  [SMALL_STATE(42)] = 1141,
  [SMALL_STATE(43)] = 1167,
  [SMALL_STATE(44)] = 1193,
  [SMALL_STATE(45)] = 1219,
  [SMALL_STATE(46)] = 1245,
  [SMALL_STATE(47)] = 1271,
  [SMALL_STATE(48)] = 1297,
  [SMALL_STATE(49)] = 1315,
  [SMALL_STATE(50)] = 1337,
  [SMALL_STATE(51)] = 1353,
  [SMALL_STATE(52)] = 1379,
  [SMALL_STATE(53)] = 1397,
  [SMALL_STATE(54)] = 1415,
  [SMALL_STATE(55)] = 1441,
  [SMALL_STATE(56)] = 1467,
  [SMALL_STATE(57)] = 1485,
  [SMALL_STATE(58)] = 1503,
  [SMALL_STATE(59)] = 1521,
  [SMALL_STATE(60)] = 1539,
  [SMALL_STATE(61)] = 1557,
  [SMALL_STATE(62)] = 1583,
  [SMALL_STATE(63)] = 1600,
  [SMALL_STATE(64)] = 1617,
  [SMALL_STATE(65)] = 1634,
  [SMALL_STATE(66)] = 1651,
  [SMALL_STATE(67)] = 1668,
  [SMALL_STATE(68)] = 1687,
  [SMALL_STATE(69)] = 1704,
  [SMALL_STATE(70)] = 1722,
  [SMALL_STATE(71)] = 1742,
  [SMALL_STATE(72)] = 1764,
  [SMALL_STATE(73)] = 1778,
  [SMALL_STATE(74)] = 1794,
  [SMALL_STATE(75)] = 1816,
  [SMALL_STATE(76)] = 1838,
  [SMALL_STATE(77)] = 1851,
  [SMALL_STATE(78)] = 1870,
  [SMALL_STATE(79)] = 1885,
  [SMALL_STATE(80)] = 1900,
  [SMALL_STATE(81)] = 1913,
  [SMALL_STATE(82)] = 1928,
  [SMALL_STATE(83)] = 1947,
  [SMALL_STATE(84)] = 1966,
  [SMALL_STATE(85)] = 1985,
  [SMALL_STATE(86)] = 2004,
  [SMALL_STATE(87)] = 2017,
  [SMALL_STATE(88)] = 2030,
  [SMALL_STATE(89)] = 2045,
  [SMALL_STATE(90)] = 2064,
  [SMALL_STATE(91)] = 2083,
  [SMALL_STATE(92)] = 2098,
  [SMALL_STATE(93)] = 2117,
  [SMALL_STATE(94)] = 2130,
  [SMALL_STATE(95)] = 2142,
  [SMALL_STATE(96)] = 2154,
  [SMALL_STATE(97)] = 2168,
  [SMALL_STATE(98)] = 2182,
  [SMALL_STATE(99)] = 2196,
  [SMALL_STATE(100)] = 2210,
  [SMALL_STATE(101)] = 2224,
  [SMALL_STATE(102)] = 2236,
  [SMALL_STATE(103)] = 2248,
  [SMALL_STATE(104)] = 2260,
  [SMALL_STATE(105)] = 2272,
  [SMALL_STATE(106)] = 2284,
  [SMALL_STATE(107)] = 2296,
  [SMALL_STATE(108)] = 2308,
  [SMALL_STATE(109)] = 2319,
  [SMALL_STATE(110)] = 2330,
  [SMALL_STATE(111)] = 2341,
  [SMALL_STATE(112)] = 2352,
  [SMALL_STATE(113)] = 2363,
  [SMALL_STATE(114)] = 2376,
  [SMALL_STATE(115)] = 2387,
  [SMALL_STATE(116)] = 2400,
  [SMALL_STATE(117)] = 2410,
  [SMALL_STATE(118)] = 2420,
  [SMALL_STATE(119)] = 2430,
  [SMALL_STATE(120)] = 2440,
  [SMALL_STATE(121)] = 2450,
  [SMALL_STATE(122)] = 2460,
  [SMALL_STATE(123)] = 2470,
  [SMALL_STATE(124)] = 2480,
  [SMALL_STATE(125)] = 2490,
  [SMALL_STATE(126)] = 2500,
  [SMALL_STATE(127)] = 2510,
  [SMALL_STATE(128)] = 2520,
  [SMALL_STATE(129)] = 2530,
  [SMALL_STATE(130)] = 2540,
  [SMALL_STATE(131)] = 2550,
  [SMALL_STATE(132)] = 2560,
  [SMALL_STATE(133)] = 2570,
  [SMALL_STATE(134)] = 2580,
  [SMALL_STATE(135)] = 2590,
  [SMALL_STATE(136)] = 2600,
  [SMALL_STATE(137)] = 2610,
  [SMALL_STATE(138)] = 2620,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lines, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 2, 0, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 2, 0, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 4, 0, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 4, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 3, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 3, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_decl, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 1, 0, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 1, 0, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_target, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_source, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mov_source, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov_op, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_source, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_source, 4, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blocking, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blocking, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_instruction, 5, 0, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__base_instruction, 5, 0, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_def, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_def, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delay, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_def, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_def, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_target, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_target, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sideset, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_source, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_source, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_target, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_out_target, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_irq_modifiers, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_irq_modifiers, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, 0, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 5, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lines, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lines, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [373] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
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
