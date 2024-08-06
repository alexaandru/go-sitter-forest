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
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 0
#define TOKEN_COUNT 137
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_AT = 5,
  anon_sym_php = 6,
  aux_sym_php_directive_token1 = 7,
  anon_sym_ATendphp = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_can = 11,
  anon_sym_endcan = 12,
  anon_sym_click = 13,
  anon_sym_livewireStyles = 14,
  anon_sym_livewireScripts = 15,
  anon_sym_stack = 16,
  anon_sym_livewire = 17,
  anon_sym_vite = 18,
  anon_sym_inject = 19,
  anon_sym_fragment = 20,
  anon_sym_endfragment = 21,
  anon_sym_csrf = 22,
  anon_sym_method = 23,
  anon_sym_props = 24,
  anon_sym_if = 25,
  anon_sym_else = 26,
  anon_sym_endif = 27,
  anon_sym_unless = 28,
  anon_sym_endunless = 29,
  anon_sym_isset = 30,
  anon_sym_endisset = 31,
  anon_sym_empty = 32,
  anon_sym_endempty = 33,
  anon_sym_auth = 34,
  anon_sym_endauth = 35,
  anon_sym_guest = 36,
  anon_sym_endguest = 37,
  anon_sym_production = 38,
  anon_sym_endproduction = 39,
  anon_sym_env = 40,
  anon_sym_endenv = 41,
  anon_sym_hasSection = 42,
  anon_sym_yield = 43,
  anon_sym_sectionMissing = 44,
  anon_sym_include = 45,
  anon_sym_session = 46,
  anon_sym_endsession = 47,
  anon_sym_switch = 48,
  anon_sym_case = 49,
  anon_sym_break = 50,
  anon_sym_default = 51,
  anon_sym_endswitch = 52,
  anon_sym_for = 53,
  anon_sym_endfor = 54,
  anon_sym_foreach = 55,
  anon_sym_endforeach = 56,
  anon_sym_forelse = 57,
  anon_sym_endforelse = 58,
  anon_sym_while = 59,
  anon_sym_endwhile = 60,
  anon_sym_continue = 61,
  anon_sym_includeIf = 62,
  anon_sym_includeWhen = 63,
  anon_sym_includeUnless = 64,
  anon_sym_includeFirst = 65,
  anon_sym_each = 66,
  anon_sym_once = 67,
  anon_sym_push = 68,
  anon_sym_pushIf = 69,
  anon_sym_endPushIf = 70,
  anon_sym_endpush = 71,
  anon_sym_endonce = 72,
  anon_sym_prepend = 73,
  anon_sym_pushOnce = 74,
  anon_sym_endPushOnce = 75,
  anon_sym_prependOnce = 76,
  anon_sym_endPrependOnce = 77,
  anon_sym_error = 78,
  anon_sym_enderror = 79,
  anon_sym_use = 80,
  anon_sym_style = 81,
  anon_sym_class = 82,
  anon_sym_checked = 83,
  anon_sym_selected = 84,
  anon_sym_disabled = 85,
  anon_sym_readonly = 86,
  anon_sym_required = 87,
  anon_sym_LBRACE_LBRACE = 88,
  anon_sym_RBRACE_RBRACE = 89,
  anon_sym_LBRACE_LBRACE_BANG_BANG = 90,
  anon_sym_BANG_BANG_RBRACE_RBRACE = 91,
  anon_sym_LBRACE_LBRACE_DASH_DASH = 92,
  anon_sym_DASH_DASH_RBRACE_RBRACE = 93,
  anon_sym_LT = 94,
  anon_sym_SLASH_GT = 95,
  anon_sym_LT_SLASH = 96,
  anon_sym_EQ = 97,
  anon_sym_COLON = 98,
  aux_sym_alpine_attribute_name_token1 = 99,
  anon_sym_x_DASHdata = 100,
  anon_sym_x_DASHbind = 101,
  anon_sym_x_DASHon = 102,
  anon_sym_x_DASHtext = 103,
  anon_sym_x_DASHhtml = 104,
  anon_sym_x_DASHmodel = 105,
  anon_sym_x_DASHshow = 106,
  anon_sym_x_DASHtransition = 107,
  anon_sym_x_DASHfor = 108,
  anon_sym_x_DASHif = 109,
  anon_sym_x_DASHinit = 110,
  anon_sym_x_DASHeffect = 111,
  anon_sym_x_DASHref = 112,
  anon_sym_x_DASHcloak = 113,
  anon_sym_x_DASHignore = 114,
  aux_sym_expression_attribute_token1 = 115,
  anon_sym_SQUOTE = 116,
  aux_sym__expression_attribute_value_token1 = 117,
  anon_sym_DQUOTE = 118,
  aux_sym__expression_attribute_value_token2 = 119,
  sym_attribute_name = 120,
  sym_entity = 121,
  aux_sym_quoted_attribute_value_token1 = 122,
  aux_sym_quoted_attribute_value_token2 = 123,
  anon_sym_AT_LBRACE_LBRACE = 124,
  anon_sym_AT_AT = 125,
  aux_sym__text_token1 = 126,
  anon_sym_LBRACE = 127,
  sym_argument_php_text = 128,
  sym__start_tag_name = 129,
  sym__script_start_tag_name = 130,
  sym__style_start_tag_name = 131,
  sym__end_tag_name = 132,
  sym_erroneous_end_tag_name = 133,
  sym__implicit_end_tag = 134,
  sym_raw_text = 135,
  sym_comment = 136,
  sym_document = 137,
  sym_doctype = 138,
  sym__node = 139,
  sym_php_directive = 140,
  sym_directive = 141,
  sym_directive_argument = 142,
  sym__directive_argument = 143,
  sym_directive_attribute = 144,
  sym_directive_attribute_value = 145,
  sym__directive = 146,
  sym__directive_attribute = 147,
  sym__directive_attribute_value = 148,
  sym_echo_statement = 149,
  sym_escaped_echo_statement = 150,
  sym_unescaped_echo_statement = 151,
  sym_blade_comment = 152,
  sym_element = 153,
  sym_script_element = 154,
  sym_style_element = 155,
  sym_start_tag = 156,
  sym_script_start_tag = 157,
  sym_style_start_tag = 158,
  sym_self_closing_tag = 159,
  sym_end_tag = 160,
  sym_erroneous_end_tag = 161,
  sym_alpine_attribute = 162,
  sym_alpine_attribute_name = 163,
  sym__alpine_attribute_name = 164,
  sym_attribute = 165,
  sym__attribute = 166,
  sym_expression_attribute = 167,
  sym__expression_attribute_value = 168,
  sym_attribute_value = 169,
  sym_quoted_attribute_value = 170,
  sym__quoted_attribute_value = 171,
  sym_text = 172,
  sym__text = 173,
  aux_sym_document_repeat1 = 174,
  aux_sym_php_directive_repeat1 = 175,
  aux_sym_start_tag_repeat1 = 176,
  aux_sym_quoted_attribute_value_repeat1 = 177,
  aux_sym_quoted_attribute_value_repeat2 = 178,
  aux_sym_text_repeat1 = 179,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_AT] = "@",
  [anon_sym_php] = "php",
  [aux_sym_php_directive_token1] = "php_directive_token1",
  [anon_sym_ATendphp] = "@endphp",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_can] = "can",
  [anon_sym_endcan] = "endcan",
  [anon_sym_click] = "click",
  [anon_sym_livewireStyles] = "livewireStyles",
  [anon_sym_livewireScripts] = "livewireScripts",
  [anon_sym_stack] = "stack",
  [anon_sym_livewire] = "livewire",
  [anon_sym_vite] = "vite",
  [anon_sym_inject] = "inject",
  [anon_sym_fragment] = "fragment",
  [anon_sym_endfragment] = "endfragment",
  [anon_sym_csrf] = "csrf",
  [anon_sym_method] = "method",
  [anon_sym_props] = "props",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [anon_sym_unless] = "unless",
  [anon_sym_endunless] = "endunless",
  [anon_sym_isset] = "isset",
  [anon_sym_endisset] = "endisset",
  [anon_sym_empty] = "empty",
  [anon_sym_endempty] = "endempty",
  [anon_sym_auth] = "auth",
  [anon_sym_endauth] = "endauth",
  [anon_sym_guest] = "guest",
  [anon_sym_endguest] = "endguest",
  [anon_sym_production] = "production",
  [anon_sym_endproduction] = "endproduction",
  [anon_sym_env] = "env",
  [anon_sym_endenv] = "endenv",
  [anon_sym_hasSection] = "hasSection",
  [anon_sym_yield] = "yield",
  [anon_sym_sectionMissing] = "sectionMissing",
  [anon_sym_include] = "include",
  [anon_sym_session] = "session",
  [anon_sym_endsession] = "endsession",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_break] = "break",
  [anon_sym_default] = "default",
  [anon_sym_endswitch] = "endswitch",
  [anon_sym_for] = "for",
  [anon_sym_endfor] = "endfor",
  [anon_sym_foreach] = "foreach",
  [anon_sym_endforeach] = "endforeach",
  [anon_sym_forelse] = "forelse",
  [anon_sym_endforelse] = "endforelse",
  [anon_sym_while] = "while",
  [anon_sym_endwhile] = "endwhile",
  [anon_sym_continue] = "continue",
  [anon_sym_includeIf] = "includeIf",
  [anon_sym_includeWhen] = "includeWhen",
  [anon_sym_includeUnless] = "includeUnless",
  [anon_sym_includeFirst] = "includeFirst",
  [anon_sym_each] = "each",
  [anon_sym_once] = "once",
  [anon_sym_push] = "push",
  [anon_sym_pushIf] = "pushIf",
  [anon_sym_endPushIf] = "endPushIf",
  [anon_sym_endpush] = "endpush",
  [anon_sym_endonce] = "endonce",
  [anon_sym_prepend] = "prepend",
  [anon_sym_pushOnce] = "pushOnce",
  [anon_sym_endPushOnce] = "endPushOnce",
  [anon_sym_prependOnce] = "prependOnce",
  [anon_sym_endPrependOnce] = "endPrependOnce",
  [anon_sym_error] = "error",
  [anon_sym_enderror] = "enderror",
  [anon_sym_use] = "use",
  [anon_sym_style] = "style",
  [anon_sym_class] = "class",
  [anon_sym_checked] = "checked",
  [anon_sym_selected] = "selected",
  [anon_sym_disabled] = "disabled",
  [anon_sym_readonly] = "readonly",
  [anon_sym_required] = "required",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = "{{!!",
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = "!!}}",
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = "{{--",
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = "--}}",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [aux_sym_alpine_attribute_name_token1] = "alpine_attribute_name_token1",
  [anon_sym_x_DASHdata] = "x-data",
  [anon_sym_x_DASHbind] = "x-bind",
  [anon_sym_x_DASHon] = "x-on",
  [anon_sym_x_DASHtext] = "x-text",
  [anon_sym_x_DASHhtml] = "x-html",
  [anon_sym_x_DASHmodel] = "x-model",
  [anon_sym_x_DASHshow] = "x-show",
  [anon_sym_x_DASHtransition] = "x-transition",
  [anon_sym_x_DASHfor] = "x-for",
  [anon_sym_x_DASHif] = "x-if",
  [anon_sym_x_DASHinit] = "x-init",
  [anon_sym_x_DASHeffect] = "x-effect",
  [anon_sym_x_DASHref] = "x-ref",
  [anon_sym_x_DASHcloak] = "x-cloak",
  [anon_sym_x_DASHignore] = "x-ignore",
  [aux_sym_expression_attribute_token1] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__expression_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__expression_attribute_value_token2] = "attribute_value",
  [sym_attribute_name] = "attribute_name",
  [sym_entity] = "entity",
  [aux_sym_quoted_attribute_value_token1] = "quoted_attribute_value_token1",
  [aux_sym_quoted_attribute_value_token2] = "quoted_attribute_value_token2",
  [anon_sym_AT_LBRACE_LBRACE] = "@{{",
  [anon_sym_AT_AT] = "@@",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_LBRACE] = "{",
  [sym_argument_php_text] = "raw_text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_php_directive] = "php_directive",
  [sym_directive] = "directive",
  [sym_directive_argument] = "directive_argument",
  [sym__directive_argument] = "_directive_argument",
  [sym_directive_attribute] = "directive",
  [sym_directive_attribute_value] = "directive",
  [sym__directive] = "_directive",
  [sym__directive_attribute] = "_directive_attribute",
  [sym__directive_attribute_value] = "_directive_attribute_value",
  [sym_echo_statement] = "echo_statement",
  [sym_escaped_echo_statement] = "escaped_echo_statement",
  [sym_unescaped_echo_statement] = "unescaped_echo_statement",
  [sym_blade_comment] = "blade_comment",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_alpine_attribute] = "alpine_attribute",
  [sym_alpine_attribute_name] = "attribute_name",
  [sym__alpine_attribute_name] = "_alpine_attribute_name",
  [sym_attribute] = "attribute",
  [sym__attribute] = "_attribute",
  [sym_expression_attribute] = "expression_attribute",
  [sym__expression_attribute_value] = "quoted_attribute_value",
  [sym_attribute_value] = "attribute_value",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [sym_text] = "text",
  [sym__text] = "_text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_php_directive_repeat1] = "php_directive_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_quoted_attribute_value_repeat1] = "quoted_attribute_value_repeat1",
  [aux_sym_quoted_attribute_value_repeat2] = "quoted_attribute_value_repeat2",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_php] = anon_sym_php,
  [aux_sym_php_directive_token1] = aux_sym_php_directive_token1,
  [anon_sym_ATendphp] = anon_sym_ATendphp,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_can] = anon_sym_can,
  [anon_sym_endcan] = anon_sym_endcan,
  [anon_sym_click] = anon_sym_click,
  [anon_sym_livewireStyles] = anon_sym_livewireStyles,
  [anon_sym_livewireScripts] = anon_sym_livewireScripts,
  [anon_sym_stack] = anon_sym_stack,
  [anon_sym_livewire] = anon_sym_livewire,
  [anon_sym_vite] = anon_sym_vite,
  [anon_sym_inject] = anon_sym_inject,
  [anon_sym_fragment] = anon_sym_fragment,
  [anon_sym_endfragment] = anon_sym_endfragment,
  [anon_sym_csrf] = anon_sym_csrf,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_props] = anon_sym_props,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_endunless] = anon_sym_endunless,
  [anon_sym_isset] = anon_sym_isset,
  [anon_sym_endisset] = anon_sym_endisset,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_endempty] = anon_sym_endempty,
  [anon_sym_auth] = anon_sym_auth,
  [anon_sym_endauth] = anon_sym_endauth,
  [anon_sym_guest] = anon_sym_guest,
  [anon_sym_endguest] = anon_sym_endguest,
  [anon_sym_production] = anon_sym_production,
  [anon_sym_endproduction] = anon_sym_endproduction,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_endenv] = anon_sym_endenv,
  [anon_sym_hasSection] = anon_sym_hasSection,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_sectionMissing] = anon_sym_sectionMissing,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_endsession] = anon_sym_endsession,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_endswitch] = anon_sym_endswitch,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_endforeach] = anon_sym_endforeach,
  [anon_sym_forelse] = anon_sym_forelse,
  [anon_sym_endforelse] = anon_sym_endforelse,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_endwhile] = anon_sym_endwhile,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_includeIf] = anon_sym_includeIf,
  [anon_sym_includeWhen] = anon_sym_includeWhen,
  [anon_sym_includeUnless] = anon_sym_includeUnless,
  [anon_sym_includeFirst] = anon_sym_includeFirst,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_once] = anon_sym_once,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pushIf] = anon_sym_pushIf,
  [anon_sym_endPushIf] = anon_sym_endPushIf,
  [anon_sym_endpush] = anon_sym_endpush,
  [anon_sym_endonce] = anon_sym_endonce,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_pushOnce] = anon_sym_pushOnce,
  [anon_sym_endPushOnce] = anon_sym_endPushOnce,
  [anon_sym_prependOnce] = anon_sym_prependOnce,
  [anon_sym_endPrependOnce] = anon_sym_endPrependOnce,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_enderror] = anon_sym_enderror,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_checked] = anon_sym_checked,
  [anon_sym_selected] = anon_sym_selected,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = anon_sym_LBRACE_LBRACE_BANG_BANG,
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = anon_sym_BANG_BANG_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = anon_sym_LBRACE_LBRACE_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = anon_sym_DASH_DASH_RBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_alpine_attribute_name_token1] = aux_sym_alpine_attribute_name_token1,
  [anon_sym_x_DASHdata] = anon_sym_x_DASHdata,
  [anon_sym_x_DASHbind] = anon_sym_x_DASHbind,
  [anon_sym_x_DASHon] = anon_sym_x_DASHon,
  [anon_sym_x_DASHtext] = anon_sym_x_DASHtext,
  [anon_sym_x_DASHhtml] = anon_sym_x_DASHhtml,
  [anon_sym_x_DASHmodel] = anon_sym_x_DASHmodel,
  [anon_sym_x_DASHshow] = anon_sym_x_DASHshow,
  [anon_sym_x_DASHtransition] = anon_sym_x_DASHtransition,
  [anon_sym_x_DASHfor] = anon_sym_x_DASHfor,
  [anon_sym_x_DASHif] = anon_sym_x_DASHif,
  [anon_sym_x_DASHinit] = anon_sym_x_DASHinit,
  [anon_sym_x_DASHeffect] = anon_sym_x_DASHeffect,
  [anon_sym_x_DASHref] = anon_sym_x_DASHref,
  [anon_sym_x_DASHcloak] = anon_sym_x_DASHcloak,
  [anon_sym_x_DASHignore] = anon_sym_x_DASHignore,
  [aux_sym_expression_attribute_token1] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__expression_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__expression_attribute_value_token2] = sym_attribute_value,
  [sym_attribute_name] = sym_attribute_name,
  [sym_entity] = sym_entity,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token2,
  [anon_sym_AT_LBRACE_LBRACE] = anon_sym_AT_LBRACE_LBRACE,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_argument_php_text] = sym_raw_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_php_directive] = sym_php_directive,
  [sym_directive] = sym_directive,
  [sym_directive_argument] = sym_directive_argument,
  [sym__directive_argument] = sym__directive_argument,
  [sym_directive_attribute] = sym_directive,
  [sym_directive_attribute_value] = sym_directive,
  [sym__directive] = sym__directive,
  [sym__directive_attribute] = sym__directive_attribute,
  [sym__directive_attribute_value] = sym__directive_attribute_value,
  [sym_echo_statement] = sym_echo_statement,
  [sym_escaped_echo_statement] = sym_escaped_echo_statement,
  [sym_unescaped_echo_statement] = sym_unescaped_echo_statement,
  [sym_blade_comment] = sym_blade_comment,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_alpine_attribute] = sym_alpine_attribute,
  [sym_alpine_attribute_name] = sym_attribute_name,
  [sym__alpine_attribute_name] = sym__alpine_attribute_name,
  [sym_attribute] = sym_attribute,
  [sym__attribute] = sym__attribute,
  [sym_expression_attribute] = sym_expression_attribute,
  [sym__expression_attribute_value] = sym_quoted_attribute_value,
  [sym_attribute_value] = sym_attribute_value,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__quoted_attribute_value] = sym__quoted_attribute_value,
  [sym_text] = sym_text,
  [sym__text] = sym__text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_php_directive_repeat1] = aux_sym_php_directive_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_quoted_attribute_value_repeat1] = aux_sym_quoted_attribute_value_repeat1,
  [aux_sym_quoted_attribute_value_repeat2] = aux_sym_quoted_attribute_value_repeat2,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_php] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_php_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATendphp] = {
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
  [anon_sym_can] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_click] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_livewireStyles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_livewireScripts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_livewire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csrf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_props] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endunless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endisset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endauth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endguest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_production] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endproduction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasSection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sectionMissing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsession] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endforeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endforelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeWhen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeUnless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeFirst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_once] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPushIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPushOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prependOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPrependOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enderror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alpine_attribute_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_x_DASHdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHbind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHtext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHhtml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHmodel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHshow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHtransition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHinit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHeffect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHcloak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x_DASHignore] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_attribute_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_argument_php_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_php_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_blade_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_alpine_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_alpine_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__alpine_attribute_name] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_php_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_raw_text,
  },
  [2] = {
    [2] = sym_raw_text,
  },
  [3] = {
    [1] = sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_php_directive_repeat1, 2,
    aux_sym_php_directive_repeat1,
    sym_raw_text,
  aux_sym_quoted_attribute_value_repeat1, 2,
    aux_sym_quoted_attribute_value_repeat1,
    sym_attribute_value,
  aux_sym_quoted_attribute_value_repeat2, 2,
    aux_sym_quoted_attribute_value_repeat2,
    sym_attribute_value,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 9,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 23,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 26,
  [44] = 27,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 37,
  [49] = 47,
  [50] = 32,
  [51] = 30,
  [52] = 34,
  [53] = 39,
  [54] = 38,
  [55] = 36,
  [56] = 31,
  [57] = 40,
  [58] = 33,
  [59] = 46,
  [60] = 28,
  [61] = 45,
  [62] = 29,
  [63] = 42,
  [64] = 41,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 65,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 71,
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
  [84] = 41,
  [85] = 42,
  [86] = 46,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 31,
  [93] = 93,
  [94] = 94,
  [95] = 77,
  [96] = 75,
  [97] = 97,
  [98] = 31,
  [99] = 91,
  [100] = 88,
  [101] = 74,
  [102] = 81,
  [103] = 73,
  [104] = 80,
  [105] = 105,
  [106] = 106,
  [107] = 79,
  [108] = 93,
  [109] = 37,
  [110] = 83,
  [111] = 37,
  [112] = 78,
  [113] = 76,
  [114] = 41,
  [115] = 42,
  [116] = 46,
  [117] = 89,
  [118] = 90,
  [119] = 94,
  [120] = 120,
  [121] = 30,
  [122] = 97,
  [123] = 123,
  [124] = 36,
  [125] = 123,
  [126] = 34,
  [127] = 30,
  [128] = 82,
  [129] = 34,
  [130] = 36,
  [131] = 131,
  [132] = 131,
  [133] = 133,
  [134] = 133,
  [135] = 135,
  [136] = 135,
  [137] = 42,
  [138] = 138,
  [139] = 139,
  [140] = 41,
  [141] = 141,
  [142] = 41,
  [143] = 31,
  [144] = 37,
  [145] = 46,
  [146] = 42,
  [147] = 46,
  [148] = 36,
  [149] = 37,
  [150] = 34,
  [151] = 138,
  [152] = 30,
  [153] = 31,
  [154] = 36,
  [155] = 30,
  [156] = 34,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 158,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 159,
  [167] = 158,
  [168] = 168,
  [169] = 160,
  [170] = 170,
  [171] = 161,
  [172] = 164,
  [173] = 163,
  [174] = 164,
  [175] = 159,
  [176] = 158,
  [177] = 177,
  [178] = 168,
  [179] = 161,
  [180] = 161,
  [181] = 160,
  [182] = 163,
  [183] = 183,
  [184] = 184,
  [185] = 164,
  [186] = 159,
  [187] = 158,
  [188] = 183,
  [189] = 189,
  [190] = 168,
  [191] = 160,
  [192] = 163,
  [193] = 160,
  [194] = 168,
  [195] = 184,
  [196] = 170,
  [197] = 157,
  [198] = 165,
  [199] = 158,
  [200] = 159,
  [201] = 164,
  [202] = 168,
  [203] = 163,
  [204] = 160,
  [205] = 205,
  [206] = 205,
  [207] = 164,
  [208] = 177,
  [209] = 189,
  [210] = 163,
  [211] = 159,
  [212] = 168,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 221,
  [223] = 213,
  [224] = 221,
  [225] = 221,
  [226] = 220,
  [227] = 221,
  [228] = 221,
  [229] = 220,
  [230] = 220,
  [231] = 219,
  [232] = 214,
  [233] = 233,
  [234] = 234,
  [235] = 233,
  [236] = 236,
  [237] = 236,
  [238] = 238,
  [239] = 239,
  [240] = 236,
  [241] = 241,
  [242] = 236,
  [243] = 234,
  [244] = 236,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 239,
  [249] = 249,
  [250] = 250,
  [251] = 236,
  [252] = 252,
  [253] = 247,
  [254] = 241,
  [255] = 238,
  [256] = 252,
  [257] = 257,
  [258] = 258,
  [259] = 249,
  [260] = 250,
  [261] = 245,
  [262] = 262,
  [263] = 258,
  [264] = 246,
  [265] = 257,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(340);
      ADVANCE_MAP(
        '!', 350,
        '"', 475,
        '\'', 472,
        '(', 357,
        ')', 358,
        '-', 352,
        '/', 349,
        ':', 451,
        '<', 446,
        '=', 450,
        '>', 344,
        '@', 346,
        '{', 588,
        '}', 355,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(440);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 475,
        '\'', 472,
        ')', 358,
        '=', 450,
        'D', 327,
        'a', 302,
        'b', 241,
        'c', 27,
        'd', 73,
        'e', 22,
        'f', 214,
        'g', 305,
        'h', 28,
        'i', 122,
        'l', 148,
        'm', 113,
        'o', 197,
        'p', 142,
        'r', 74,
        's', 75,
        'u', 187,
        'v', 149,
        'w', 144,
        'y', 152,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(475);
      if (lookahead == '\'') ADVANCE(472);
      if (lookahead == '{') ADVANCE(454);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(475);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '{') ADVANCE(584);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(475);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '{') ADVANCE(584);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(583);
      if (lookahead != 0) ADVANCE(581);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(472);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '{') ADVANCE(580);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(472);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '{') ADVANCE(580);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(579);
      if (lookahead != 0) ADVANCE(577);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(481);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'x') ADVANCE(480);
      if (lookahead == '{') ADVANCE(531);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(443);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(451);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'x') ADVANCE(480);
      if (lookahead == '{') ADVANCE(531);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(481);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'x') ADVANCE(480);
      if (lookahead == '{') ADVANCE(531);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(448);
      END_STATE();
    case 16:
      if (lookahead == '@') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == 'O') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(164);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'P', 244,
        'a', 308,
        'c', 30,
        'e', 185,
        'f', 217,
        'g', 309,
        'i', 124,
        'o', 207,
        'p', 248,
        's', 118,
        'u', 212,
        'w', 147,
      );
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'q') ADVANCE(306);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(176);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'j') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(388);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(371);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(370);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(417);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(418);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(410);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(382);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(396);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(383);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(403);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(400);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(404);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(215);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 168:
      if (lookahead == 'k') ADVANCE(398);
      END_STATE();
    case 169:
      if (lookahead == 'k') ADVANCE(361);
      END_STATE();
    case 170:
      if (lookahead == 'k') ADVANCE(364);
      END_STATE();
    case 171:
      if (lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(385);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 312:
      if (lookahead == 'v') ADVANCE(389);
      END_STATE();
    case 313:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 314:
      if (lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 315:
      if (lookahead == 'y') ADVANCE(380);
      END_STATE();
    case 316:
      if (lookahead == 'y') ADVANCE(381);
      END_STATE();
    case 317:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 318:
      if (lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 319:
      if (lookahead == '{') ADVANCE(585);
      END_STATE();
    case 320:
      if (lookahead == '}') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(320);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 321:
      if (lookahead == '}') ADVANCE(442);
      END_STATE();
    case 322:
      if (lookahead == '}') ADVANCE(445);
      END_STATE();
    case 323:
      if (lookahead == '}') ADVANCE(321);
      END_STATE();
    case 324:
      if (lookahead == '}') ADVANCE(322);
      END_STATE();
    case 325:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 328:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 329:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(331);
      END_STATE();
    case 330:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      END_STATE();
    case 331:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 332:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(587);
      END_STATE();
    case 333:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(333);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 334:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(343);
      END_STATE();
    case 335:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(474);
      END_STATE();
    case 336:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(477);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 338:
      if (eof) ADVANCE(340);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == '<') ADVANCE(447);
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == '{') ADVANCE(589);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(338);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(587);
      END_STATE();
    case 339:
      if (eof) ADVANCE(340);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '<') ADVANCE(447);
      if (lookahead == '>') ADVANCE(344);
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == '{') ADVANCE(589);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(339);
      if (lookahead != 0) ADVANCE(587);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == '{') ADVANCE(319);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_php);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == '!') ADVANCE(534);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == '!') ADVANCE(323);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == '-') ADVANCE(324);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == '}') ADVANCE(439);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_ATendphp);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_can);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_endcan);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_click);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_livewireStyles);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_livewireScripts);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_stack);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_livewire);
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_vite);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_inject);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_fragment);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_endfragment);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_csrf);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_props);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_endunless);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_endisset);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_endempty);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_auth);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_endauth);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_guest);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_endguest);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_production);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_endproduction);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_endenv);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_hasSection);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_sectionMissing);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'F') ADVANCE(153);
      if (lookahead == 'I') ADVANCE(127);
      if (lookahead == 'U') ADVANCE(213);
      if (lookahead == 'W') ADVANCE(146);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_endsession);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_endswitch);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_endforeach);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_forelse);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_endforelse);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_endwhile);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_includeIf);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_includeWhen);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_includeUnless);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_includeFirst);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_once);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'I') ADVANCE(125);
      if (lookahead == 'O') ADVANCE(208);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_pushIf);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_endPushIf);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_endpush);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_endonce);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_pushOnce);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_endPushOnce);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_prependOnce);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_endPrependOnce);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_enderror);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_selected);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(452);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_BANG_BANG_RBRACE_RBRACE);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH_DASH);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH_DASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE_RBRACE);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(341);
      if (lookahead == '/') ADVANCE(449);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_alpine_attribute_name_token1);
      if (lookahead == '!') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_alpine_attribute_name_token1);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_alpine_attribute_name_token1);
      if (lookahead == '{') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_alpine_attribute_name_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_x_DASHdata);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_x_DASHbind);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_x_DASHon);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_x_DASHtext);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_x_DASHhtml);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_x_DASHmodel);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_x_DASHshow);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_x_DASHtransition);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_x_DASHfor);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_x_DASHif);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_x_DASHinit);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_x_DASHeffect);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_x_DASHref);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_x_DASHcloak);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_x_DASHignore);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_expression_attribute_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '!') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == ':') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(471);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_attribute_name);
      ADVANCE_MAP(
        'b', 500,
        'c', 507,
        'd', 484,
        'e', 497,
        'f', 514,
        'h', 523,
        'i', 495,
        'm', 515,
        'o', 509,
        'r', 494,
        's', 499,
        't', 490,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(465);
      if (lookahead == 'g') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'w') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'x') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '{') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '}') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '}') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '}') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '}') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(571);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '{') ADVANCE(580);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(577);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '{') ADVANCE(580);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(577);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '{') ADVANCE(436);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '{') ADVANCE(584);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(581);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '{') ADVANCE(584);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(581);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '{') ADVANCE(436);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE_LBRACE);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(436);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 339, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 14, .external_lex_state = 3},
  [5] = {.lex_state = 14, .external_lex_state = 3},
  [6] = {.lex_state = 14, .external_lex_state = 3},
  [7] = {.lex_state = 14, .external_lex_state = 3},
  [8] = {.lex_state = 14, .external_lex_state = 3},
  [9] = {.lex_state = 339, .external_lex_state = 4},
  [10] = {.lex_state = 14, .external_lex_state = 2},
  [11] = {.lex_state = 339, .external_lex_state = 4},
  [12] = {.lex_state = 339, .external_lex_state = 4},
  [13] = {.lex_state = 339, .external_lex_state = 4},
  [14] = {.lex_state = 14, .external_lex_state = 2},
  [15] = {.lex_state = 14, .external_lex_state = 2},
  [16] = {.lex_state = 14, .external_lex_state = 2},
  [17] = {.lex_state = 14, .external_lex_state = 2},
  [18] = {.lex_state = 339, .external_lex_state = 4},
  [19] = {.lex_state = 339, .external_lex_state = 2},
  [20] = {.lex_state = 339, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 3},
  [22] = {.lex_state = 10, .external_lex_state = 3},
  [23] = {.lex_state = 14, .external_lex_state = 3},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 10, .external_lex_state = 2},
  [26] = {.lex_state = 14, .external_lex_state = 3},
  [27] = {.lex_state = 14, .external_lex_state = 3},
  [28] = {.lex_state = 14, .external_lex_state = 3},
  [29] = {.lex_state = 14, .external_lex_state = 3},
  [30] = {.lex_state = 14, .external_lex_state = 3},
  [31] = {.lex_state = 14, .external_lex_state = 3},
  [32] = {.lex_state = 14, .external_lex_state = 3},
  [33] = {.lex_state = 14, .external_lex_state = 3},
  [34] = {.lex_state = 14, .external_lex_state = 3},
  [35] = {.lex_state = 14, .external_lex_state = 2},
  [36] = {.lex_state = 14, .external_lex_state = 3},
  [37] = {.lex_state = 14, .external_lex_state = 3},
  [38] = {.lex_state = 14, .external_lex_state = 3},
  [39] = {.lex_state = 14, .external_lex_state = 3},
  [40] = {.lex_state = 14, .external_lex_state = 3},
  [41] = {.lex_state = 14, .external_lex_state = 3},
  [42] = {.lex_state = 14, .external_lex_state = 3},
  [43] = {.lex_state = 14, .external_lex_state = 2},
  [44] = {.lex_state = 14, .external_lex_state = 2},
  [45] = {.lex_state = 14, .external_lex_state = 3},
  [46] = {.lex_state = 14, .external_lex_state = 3},
  [47] = {.lex_state = 14, .external_lex_state = 3},
  [48] = {.lex_state = 14, .external_lex_state = 2},
  [49] = {.lex_state = 14, .external_lex_state = 2},
  [50] = {.lex_state = 14, .external_lex_state = 2},
  [51] = {.lex_state = 14, .external_lex_state = 2},
  [52] = {.lex_state = 14, .external_lex_state = 2},
  [53] = {.lex_state = 14, .external_lex_state = 2},
  [54] = {.lex_state = 14, .external_lex_state = 2},
  [55] = {.lex_state = 14, .external_lex_state = 2},
  [56] = {.lex_state = 14, .external_lex_state = 2},
  [57] = {.lex_state = 14, .external_lex_state = 2},
  [58] = {.lex_state = 14, .external_lex_state = 2},
  [59] = {.lex_state = 14, .external_lex_state = 2},
  [60] = {.lex_state = 14, .external_lex_state = 2},
  [61] = {.lex_state = 14, .external_lex_state = 2},
  [62] = {.lex_state = 14, .external_lex_state = 2},
  [63] = {.lex_state = 14, .external_lex_state = 2},
  [64] = {.lex_state = 14, .external_lex_state = 2},
  [65] = {.lex_state = 339, .external_lex_state = 2},
  [66] = {.lex_state = 339, .external_lex_state = 4},
  [67] = {.lex_state = 339, .external_lex_state = 2},
  [68] = {.lex_state = 339, .external_lex_state = 4},
  [69] = {.lex_state = 338, .external_lex_state = 2},
  [70] = {.lex_state = 338, .external_lex_state = 4},
  [71] = {.lex_state = 339, .external_lex_state = 2},
  [72] = {.lex_state = 339, .external_lex_state = 4},
  [73] = {.lex_state = 6, .external_lex_state = 2},
  [74] = {.lex_state = 9, .external_lex_state = 2},
  [75] = {.lex_state = 6, .external_lex_state = 2},
  [76] = {.lex_state = 339, .external_lex_state = 2},
  [77] = {.lex_state = 9, .external_lex_state = 2},
  [78] = {.lex_state = 339, .external_lex_state = 2},
  [79] = {.lex_state = 339, .external_lex_state = 2},
  [80] = {.lex_state = 339, .external_lex_state = 2},
  [81] = {.lex_state = 339, .external_lex_state = 2},
  [82] = {.lex_state = 339, .external_lex_state = 2},
  [83] = {.lex_state = 339, .external_lex_state = 2},
  [84] = {.lex_state = 339, .external_lex_state = 2},
  [85] = {.lex_state = 339, .external_lex_state = 2},
  [86] = {.lex_state = 339, .external_lex_state = 2},
  [87] = {.lex_state = 339, .external_lex_state = 4},
  [88] = {.lex_state = 339, .external_lex_state = 2},
  [89] = {.lex_state = 339, .external_lex_state = 2},
  [90] = {.lex_state = 339, .external_lex_state = 2},
  [91] = {.lex_state = 339, .external_lex_state = 2},
  [92] = {.lex_state = 339, .external_lex_state = 2},
  [93] = {.lex_state = 339, .external_lex_state = 2},
  [94] = {.lex_state = 339, .external_lex_state = 2},
  [95] = {.lex_state = 9, .external_lex_state = 2},
  [96] = {.lex_state = 6, .external_lex_state = 2},
  [97] = {.lex_state = 339, .external_lex_state = 2},
  [98] = {.lex_state = 339, .external_lex_state = 4},
  [99] = {.lex_state = 339, .external_lex_state = 4},
  [100] = {.lex_state = 339, .external_lex_state = 4},
  [101] = {.lex_state = 9, .external_lex_state = 2},
  [102] = {.lex_state = 339, .external_lex_state = 4},
  [103] = {.lex_state = 6, .external_lex_state = 2},
  [104] = {.lex_state = 339, .external_lex_state = 4},
  [105] = {.lex_state = 9, .external_lex_state = 2},
  [106] = {.lex_state = 6, .external_lex_state = 2},
  [107] = {.lex_state = 339, .external_lex_state = 4},
  [108] = {.lex_state = 339, .external_lex_state = 4},
  [109] = {.lex_state = 339, .external_lex_state = 4},
  [110] = {.lex_state = 339, .external_lex_state = 4},
  [111] = {.lex_state = 339, .external_lex_state = 2},
  [112] = {.lex_state = 339, .external_lex_state = 4},
  [113] = {.lex_state = 339, .external_lex_state = 4},
  [114] = {.lex_state = 339, .external_lex_state = 4},
  [115] = {.lex_state = 339, .external_lex_state = 4},
  [116] = {.lex_state = 339, .external_lex_state = 4},
  [117] = {.lex_state = 339, .external_lex_state = 4},
  [118] = {.lex_state = 339, .external_lex_state = 4},
  [119] = {.lex_state = 339, .external_lex_state = 4},
  [120] = {.lex_state = 339, .external_lex_state = 4},
  [121] = {.lex_state = 339, .external_lex_state = 2},
  [122] = {.lex_state = 339, .external_lex_state = 4},
  [123] = {.lex_state = 339, .external_lex_state = 4},
  [124] = {.lex_state = 339, .external_lex_state = 4},
  [125] = {.lex_state = 339, .external_lex_state = 2},
  [126] = {.lex_state = 339, .external_lex_state = 4},
  [127] = {.lex_state = 339, .external_lex_state = 4},
  [128] = {.lex_state = 339, .external_lex_state = 4},
  [129] = {.lex_state = 339, .external_lex_state = 2},
  [130] = {.lex_state = 339, .external_lex_state = 2},
  [131] = {.lex_state = 4, .external_lex_state = 2},
  [132] = {.lex_state = 4, .external_lex_state = 2},
  [133] = {.lex_state = 5, .external_lex_state = 2},
  [134] = {.lex_state = 8, .external_lex_state = 2},
  [135] = {.lex_state = 3, .external_lex_state = 2},
  [136] = {.lex_state = 3, .external_lex_state = 2},
  [137] = {.lex_state = 9, .external_lex_state = 2},
  [138] = {.lex_state = 9, .external_lex_state = 2},
  [139] = {.lex_state = 6, .external_lex_state = 2},
  [140] = {.lex_state = 6, .external_lex_state = 2},
  [141] = {.lex_state = 9, .external_lex_state = 2},
  [142] = {.lex_state = 9, .external_lex_state = 2},
  [143] = {.lex_state = 9, .external_lex_state = 2},
  [144] = {.lex_state = 6, .external_lex_state = 2},
  [145] = {.lex_state = 9, .external_lex_state = 2},
  [146] = {.lex_state = 6, .external_lex_state = 2},
  [147] = {.lex_state = 6, .external_lex_state = 2},
  [148] = {.lex_state = 6, .external_lex_state = 2},
  [149] = {.lex_state = 9, .external_lex_state = 2},
  [150] = {.lex_state = 6, .external_lex_state = 2},
  [151] = {.lex_state = 6, .external_lex_state = 2},
  [152] = {.lex_state = 6, .external_lex_state = 2},
  [153] = {.lex_state = 6, .external_lex_state = 2},
  [154] = {.lex_state = 9, .external_lex_state = 2},
  [155] = {.lex_state = 9, .external_lex_state = 2},
  [156] = {.lex_state = 9, .external_lex_state = 2},
  [157] = {.lex_state = 339, .external_lex_state = 5},
  [158] = {.lex_state = 320, .external_lex_state = 2},
  [159] = {.lex_state = 2, .external_lex_state = 2},
  [160] = {.lex_state = 2, .external_lex_state = 2},
  [161] = {.lex_state = 12, .external_lex_state = 2},
  [162] = {.lex_state = 320, .external_lex_state = 2},
  [163] = {.lex_state = 320, .external_lex_state = 2},
  [164] = {.lex_state = 12, .external_lex_state = 2},
  [165] = {.lex_state = 16, .external_lex_state = 2},
  [166] = {.lex_state = 2, .external_lex_state = 2},
  [167] = {.lex_state = 320, .external_lex_state = 2},
  [168] = {.lex_state = 12, .external_lex_state = 2},
  [169] = {.lex_state = 2, .external_lex_state = 2},
  [170] = {.lex_state = 339, .external_lex_state = 5},
  [171] = {.lex_state = 16, .external_lex_state = 2},
  [172] = {.lex_state = 12, .external_lex_state = 2},
  [173] = {.lex_state = 320, .external_lex_state = 2},
  [174] = {.lex_state = 12, .external_lex_state = 2},
  [175] = {.lex_state = 2, .external_lex_state = 2},
  [176] = {.lex_state = 320, .external_lex_state = 2},
  [177] = {.lex_state = 16, .external_lex_state = 2},
  [178] = {.lex_state = 12, .external_lex_state = 2},
  [179] = {.lex_state = 320, .external_lex_state = 2},
  [180] = {.lex_state = 2, .external_lex_state = 2},
  [181] = {.lex_state = 2, .external_lex_state = 2},
  [182] = {.lex_state = 320, .external_lex_state = 2},
  [183] = {.lex_state = 3, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 6},
  [185] = {.lex_state = 12, .external_lex_state = 2},
  [186] = {.lex_state = 2, .external_lex_state = 2},
  [187] = {.lex_state = 320, .external_lex_state = 2},
  [188] = {.lex_state = 3, .external_lex_state = 2},
  [189] = {.lex_state = 3, .external_lex_state = 2},
  [190] = {.lex_state = 12, .external_lex_state = 2},
  [191] = {.lex_state = 2, .external_lex_state = 2},
  [192] = {.lex_state = 320, .external_lex_state = 2},
  [193] = {.lex_state = 2, .external_lex_state = 2},
  [194] = {.lex_state = 12, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 6},
  [196] = {.lex_state = 339, .external_lex_state = 5},
  [197] = {.lex_state = 339, .external_lex_state = 5},
  [198] = {.lex_state = 16, .external_lex_state = 2},
  [199] = {.lex_state = 320, .external_lex_state = 2},
  [200] = {.lex_state = 2, .external_lex_state = 2},
  [201] = {.lex_state = 12, .external_lex_state = 2},
  [202] = {.lex_state = 12, .external_lex_state = 2},
  [203] = {.lex_state = 320, .external_lex_state = 2},
  [204] = {.lex_state = 2, .external_lex_state = 2},
  [205] = {.lex_state = 3, .external_lex_state = 2},
  [206] = {.lex_state = 3, .external_lex_state = 2},
  [207] = {.lex_state = 12, .external_lex_state = 2},
  [208] = {.lex_state = 16, .external_lex_state = 2},
  [209] = {.lex_state = 3, .external_lex_state = 2},
  [210] = {.lex_state = 320, .external_lex_state = 2},
  [211] = {.lex_state = 2, .external_lex_state = 2},
  [212] = {.lex_state = 12, .external_lex_state = 2},
  [213] = {.lex_state = 339, .external_lex_state = 2},
  [214] = {.lex_state = 339, .external_lex_state = 2},
  [215] = {.lex_state = 339, .external_lex_state = 5},
  [216] = {.lex_state = 339, .external_lex_state = 5},
  [217] = {.lex_state = 339, .external_lex_state = 5},
  [218] = {.lex_state = 339, .external_lex_state = 5},
  [219] = {.lex_state = 0, .external_lex_state = 7},
  [220] = {.lex_state = 2, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 8},
  [222] = {.lex_state = 0, .external_lex_state = 8},
  [223] = {.lex_state = 339, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 8},
  [225] = {.lex_state = 0, .external_lex_state = 8},
  [226] = {.lex_state = 12, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 8},
  [228] = {.lex_state = 0, .external_lex_state = 8},
  [229] = {.lex_state = 16, .external_lex_state = 2},
  [230] = {.lex_state = 320, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 7},
  [232] = {.lex_state = 339, .external_lex_state = 2},
  [233] = {.lex_state = 3, .external_lex_state = 2},
  [234] = {.lex_state = 339, .external_lex_state = 2},
  [235] = {.lex_state = 3, .external_lex_state = 2},
  [236] = {.lex_state = 3, .external_lex_state = 2},
  [237] = {.lex_state = 3, .external_lex_state = 2},
  [238] = {.lex_state = 3, .external_lex_state = 2},
  [239] = {.lex_state = 333, .external_lex_state = 2},
  [240] = {.lex_state = 3, .external_lex_state = 2},
  [241] = {.lex_state = 334, .external_lex_state = 2},
  [242] = {.lex_state = 3, .external_lex_state = 2},
  [243] = {.lex_state = 339, .external_lex_state = 2},
  [244] = {.lex_state = 3, .external_lex_state = 2},
  [245] = {.lex_state = 339, .external_lex_state = 2},
  [246] = {.lex_state = 339, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 9},
  [248] = {.lex_state = 333, .external_lex_state = 2},
  [249] = {.lex_state = 335, .external_lex_state = 2},
  [250] = {.lex_state = 336, .external_lex_state = 2},
  [251] = {.lex_state = 3, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 10},
  [253] = {.lex_state = 0, .external_lex_state = 9},
  [254] = {.lex_state = 334, .external_lex_state = 2},
  [255] = {.lex_state = 3, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 10},
  [257] = {.lex_state = 3, .external_lex_state = 2},
  [258] = {.lex_state = 3, .external_lex_state = 2},
  [259] = {.lex_state = 335, .external_lex_state = 2},
  [260] = {.lex_state = 336, .external_lex_state = 2},
  [261] = {.lex_state = 339, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 3, .external_lex_state = 2},
  [264] = {.lex_state = 339, .external_lex_state = 2},
  [265] = {.lex_state = 3, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_php_directive_token1] = ACTIONS(1),
    [anon_sym_ATendphp] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_BANG_BANG_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_argument_php_text] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(262),
    [sym_doctype] = STATE(20),
    [sym__node] = STATE(20),
    [sym_php_directive] = STATE(93),
    [sym_directive] = STATE(20),
    [sym_echo_statement] = STATE(65),
    [sym_escaped_echo_statement] = STATE(111),
    [sym_unescaped_echo_statement] = STATE(111),
    [sym_blade_comment] = STATE(111),
    [sym_element] = STATE(20),
    [sym_script_element] = STATE(20),
    [sym_style_element] = STATE(20),
    [sym_start_tag] = STATE(12),
    [sym_script_start_tag] = STATE(170),
    [sym_style_start_tag] = STATE(157),
    [sym_self_closing_tag] = STATE(83),
    [sym_erroneous_end_tag] = STATE(20),
    [sym_text] = STATE(20),
    [sym__text] = STATE(65),
    [aux_sym_document_repeat1] = STATE(20),
    [aux_sym_text_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE_BANG_BANG] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE_DASH_DASH] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_SLASH] = ACTIONS(19),
    [sym_entity] = ACTIONS(21),
    [anon_sym_AT_LBRACE_LBRACE] = ACTIONS(23),
    [anon_sym_AT_AT] = ACTIONS(23),
    [aux_sym__text_token1] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__directive] = STATE(70),
    [anon_sym_php] = ACTIONS(27),
    [anon_sym_can] = ACTIONS(29),
    [anon_sym_endcan] = ACTIONS(29),
    [anon_sym_click] = ACTIONS(29),
    [anon_sym_livewireStyles] = ACTIONS(29),
    [anon_sym_livewireScripts] = ACTIONS(29),
    [anon_sym_stack] = ACTIONS(29),
    [anon_sym_livewire] = ACTIONS(31),
    [anon_sym_vite] = ACTIONS(29),
    [anon_sym_inject] = ACTIONS(29),
    [anon_sym_fragment] = ACTIONS(29),
    [anon_sym_endfragment] = ACTIONS(29),
    [anon_sym_csrf] = ACTIONS(29),
    [anon_sym_method] = ACTIONS(29),
    [anon_sym_props] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_else] = ACTIONS(29),
    [anon_sym_endif] = ACTIONS(29),
    [anon_sym_unless] = ACTIONS(29),
    [anon_sym_endunless] = ACTIONS(29),
    [anon_sym_isset] = ACTIONS(29),
    [anon_sym_endisset] = ACTIONS(29),
    [anon_sym_empty] = ACTIONS(29),
    [anon_sym_endempty] = ACTIONS(29),
    [anon_sym_auth] = ACTIONS(29),
    [anon_sym_endauth] = ACTIONS(29),
    [anon_sym_guest] = ACTIONS(29),
    [anon_sym_endguest] = ACTIONS(29),
    [anon_sym_production] = ACTIONS(29),
    [anon_sym_endproduction] = ACTIONS(29),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_endenv] = ACTIONS(29),
    [anon_sym_hasSection] = ACTIONS(29),
    [anon_sym_yield] = ACTIONS(29),
    [anon_sym_sectionMissing] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(31),
    [anon_sym_session] = ACTIONS(29),
    [anon_sym_endsession] = ACTIONS(29),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_endswitch] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_endfor] = ACTIONS(31),
    [anon_sym_foreach] = ACTIONS(29),
    [anon_sym_endforeach] = ACTIONS(29),
    [anon_sym_forelse] = ACTIONS(29),
    [anon_sym_endforelse] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_endwhile] = ACTIONS(29),
    [anon_sym_continue] = ACTIONS(29),
    [anon_sym_includeIf] = ACTIONS(29),
    [anon_sym_includeWhen] = ACTIONS(29),
    [anon_sym_includeUnless] = ACTIONS(29),
    [anon_sym_includeFirst] = ACTIONS(29),
    [anon_sym_each] = ACTIONS(29),
    [anon_sym_once] = ACTIONS(29),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pushIf] = ACTIONS(29),
    [anon_sym_endPushIf] = ACTIONS(29),
    [anon_sym_endpush] = ACTIONS(29),
    [anon_sym_endonce] = ACTIONS(29),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_pushOnce] = ACTIONS(29),
    [anon_sym_endPushOnce] = ACTIONS(29),
    [anon_sym_prependOnce] = ACTIONS(29),
    [anon_sym_endPrependOnce] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_enderror] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__directive] = STATE(69),
    [anon_sym_php] = ACTIONS(33),
    [anon_sym_can] = ACTIONS(35),
    [anon_sym_endcan] = ACTIONS(35),
    [anon_sym_click] = ACTIONS(35),
    [anon_sym_livewireStyles] = ACTIONS(35),
    [anon_sym_livewireScripts] = ACTIONS(35),
    [anon_sym_stack] = ACTIONS(35),
    [anon_sym_livewire] = ACTIONS(37),
    [anon_sym_vite] = ACTIONS(35),
    [anon_sym_inject] = ACTIONS(35),
    [anon_sym_fragment] = ACTIONS(35),
    [anon_sym_endfragment] = ACTIONS(35),
    [anon_sym_csrf] = ACTIONS(35),
    [anon_sym_method] = ACTIONS(35),
    [anon_sym_props] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_else] = ACTIONS(35),
    [anon_sym_endif] = ACTIONS(35),
    [anon_sym_unless] = ACTIONS(35),
    [anon_sym_endunless] = ACTIONS(35),
    [anon_sym_isset] = ACTIONS(35),
    [anon_sym_endisset] = ACTIONS(35),
    [anon_sym_empty] = ACTIONS(35),
    [anon_sym_endempty] = ACTIONS(35),
    [anon_sym_auth] = ACTIONS(35),
    [anon_sym_endauth] = ACTIONS(35),
    [anon_sym_guest] = ACTIONS(35),
    [anon_sym_endguest] = ACTIONS(35),
    [anon_sym_production] = ACTIONS(35),
    [anon_sym_endproduction] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(35),
    [anon_sym_endenv] = ACTIONS(35),
    [anon_sym_hasSection] = ACTIONS(35),
    [anon_sym_yield] = ACTIONS(35),
    [anon_sym_sectionMissing] = ACTIONS(35),
    [anon_sym_include] = ACTIONS(37),
    [anon_sym_session] = ACTIONS(35),
    [anon_sym_endsession] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(35),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_break] = ACTIONS(35),
    [anon_sym_default] = ACTIONS(35),
    [anon_sym_endswitch] = ACTIONS(35),
    [anon_sym_for] = ACTIONS(37),
    [anon_sym_endfor] = ACTIONS(37),
    [anon_sym_foreach] = ACTIONS(35),
    [anon_sym_endforeach] = ACTIONS(35),
    [anon_sym_forelse] = ACTIONS(35),
    [anon_sym_endforelse] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_endwhile] = ACTIONS(35),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_includeIf] = ACTIONS(35),
    [anon_sym_includeWhen] = ACTIONS(35),
    [anon_sym_includeUnless] = ACTIONS(35),
    [anon_sym_includeFirst] = ACTIONS(35),
    [anon_sym_each] = ACTIONS(35),
    [anon_sym_once] = ACTIONS(35),
    [anon_sym_push] = ACTIONS(37),
    [anon_sym_pushIf] = ACTIONS(35),
    [anon_sym_endPushIf] = ACTIONS(35),
    [anon_sym_endpush] = ACTIONS(35),
    [anon_sym_endonce] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(37),
    [anon_sym_pushOnce] = ACTIONS(35),
    [anon_sym_endPushOnce] = ACTIONS(35),
    [anon_sym_prependOnce] = ACTIONS(35),
    [anon_sym_endPrependOnce] = ACTIONS(35),
    [anon_sym_error] = ACTIONS(35),
    [anon_sym_enderror] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(44), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(50), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(56), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(59), 1,
      sym_attribute_name,
    STATE(21), 1,
      sym__alpine_attribute_name,
    STATE(26), 1,
      sym_alpine_attribute_name,
    ACTIONS(39), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(38), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(37), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(4), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(53), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [65] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_GT,
    ACTIONS(64), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(70), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(72), 1,
      anon_sym_SLASH_GT,
    ACTIONS(76), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(78), 1,
      sym_attribute_name,
    STATE(21), 1,
      sym__alpine_attribute_name,
    STATE(26), 1,
      sym_alpine_attribute_name,
    STATE(38), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(37), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(6), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(74), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [132] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(70), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(76), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(78), 1,
      sym_attribute_name,
    ACTIONS(80), 1,
      anon_sym_GT,
    ACTIONS(82), 1,
      anon_sym_SLASH_GT,
    STATE(21), 1,
      sym__alpine_attribute_name,
    STATE(26), 1,
      sym_alpine_attribute_name,
    STATE(38), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(37), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(4), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(74), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [199] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_GT,
    ACTIONS(64), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(70), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(76), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(78), 1,
      sym_attribute_name,
    ACTIONS(84), 1,
      anon_sym_SLASH_GT,
    STATE(21), 1,
      sym__alpine_attribute_name,
    STATE(26), 1,
      sym_alpine_attribute_name,
    STATE(38), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(37), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(8), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(74), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [266] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(70), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(76), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(78), 1,
      sym_attribute_name,
    ACTIONS(80), 1,
      anon_sym_GT,
    ACTIONS(86), 1,
      anon_sym_SLASH_GT,
    STATE(21), 1,
      sym__alpine_attribute_name,
    STATE(26), 1,
      sym_alpine_attribute_name,
    STATE(38), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(37), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(4), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(74), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [333] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LT_BANG,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      anon_sym_LT_SLASH,
    ACTIONS(102), 1,
      sym_entity,
    ACTIONS(108), 1,
      sym__implicit_end_tag,
    STATE(9), 1,
      sym_start_tag,
    STATE(108), 1,
      sym_php_directive,
    STATE(110), 1,
      sym_self_closing_tag,
    STATE(117), 1,
      sym_end_tag,
    STATE(196), 1,
      sym_script_start_tag,
    STATE(197), 1,
      sym_style_start_tag,
    ACTIONS(104), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(106), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(68), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(11), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [411] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(110), 1,
      anon_sym_AT,
    ACTIONS(113), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(119), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(125), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(128), 1,
      sym_attribute_name,
    STATE(24), 1,
      sym__alpine_attribute_name,
    STATE(43), 1,
      sym_alpine_attribute_name,
    STATE(54), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(48), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(10), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(122), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [475] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LT_BANG,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      anon_sym_LT_SLASH,
    ACTIONS(131), 1,
      sym_entity,
    ACTIONS(133), 1,
      sym__implicit_end_tag,
    STATE(9), 1,
      sym_start_tag,
    STATE(108), 1,
      sym_php_directive,
    STATE(110), 1,
      sym_self_closing_tag,
    STATE(112), 1,
      sym_end_tag,
    STATE(196), 1,
      sym_script_start_tag,
    STATE(197), 1,
      sym_style_start_tag,
    ACTIONS(104), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(106), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(68), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(18), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [553] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LT_BANG,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(135), 1,
      anon_sym_LT_SLASH,
    ACTIONS(137), 1,
      sym_entity,
    ACTIONS(139), 1,
      sym__implicit_end_tag,
    STATE(9), 1,
      sym_start_tag,
    STATE(89), 1,
      sym_end_tag,
    STATE(108), 1,
      sym_php_directive,
    STATE(110), 1,
      sym_self_closing_tag,
    STATE(196), 1,
      sym_script_start_tag,
    STATE(197), 1,
      sym_style_start_tag,
    ACTIONS(104), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(106), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(68), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(13), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [631] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LT_BANG,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      sym_entity,
    ACTIONS(135), 1,
      anon_sym_LT_SLASH,
    ACTIONS(141), 1,
      sym__implicit_end_tag,
    STATE(9), 1,
      sym_start_tag,
    STATE(78), 1,
      sym_end_tag,
    STATE(108), 1,
      sym_php_directive,
    STATE(110), 1,
      sym_self_closing_tag,
    STATE(196), 1,
      sym_script_start_tag,
    STATE(197), 1,
      sym_style_start_tag,
    ACTIONS(104), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(106), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(68), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(18), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [709] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_GT,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(151), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(155), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(157), 1,
      sym_attribute_name,
    STATE(24), 1,
      sym__alpine_attribute_name,
    STATE(43), 1,
      sym_alpine_attribute_name,
    STATE(54), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(48), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(10), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(153), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [773] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(151), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(155), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(157), 1,
      sym_attribute_name,
    ACTIONS(159), 1,
      anon_sym_GT,
    STATE(24), 1,
      sym__alpine_attribute_name,
    STATE(43), 1,
      sym_alpine_attribute_name,
    STATE(54), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(48), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(10), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(153), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [837] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(151), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(155), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(157), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      anon_sym_GT,
    STATE(24), 1,
      sym__alpine_attribute_name,
    STATE(43), 1,
      sym_alpine_attribute_name,
    STATE(54), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(48), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(14), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(153), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [901] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(151), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(155), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(157), 1,
      sym_attribute_name,
    ACTIONS(163), 1,
      anon_sym_GT,
    STATE(24), 1,
      sym__alpine_attribute_name,
    STATE(43), 1,
      sym_alpine_attribute_name,
    STATE(54), 2,
      sym_alpine_attribute,
      sym_expression_attribute,
    STATE(48), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(15), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(153), 15,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [965] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LT_BANG,
    ACTIONS(168), 1,
      anon_sym_AT,
    ACTIONS(171), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(177), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(180), 1,
      anon_sym_LT,
    ACTIONS(183), 1,
      anon_sym_LT_SLASH,
    ACTIONS(186), 1,
      sym_entity,
    ACTIONS(195), 1,
      sym__implicit_end_tag,
    STATE(9), 1,
      sym_start_tag,
    STATE(108), 1,
      sym_php_directive,
    STATE(110), 1,
      sym_self_closing_tag,
    STATE(196), 1,
      sym_script_start_tag,
    STATE(197), 1,
      sym_style_start_tag,
    ACTIONS(189), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(192), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(68), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(18), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [1040] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      anon_sym_LT_BANG,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(206), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(209), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(212), 1,
      anon_sym_LT,
    ACTIONS(215), 1,
      anon_sym_LT_SLASH,
    ACTIONS(218), 1,
      sym_entity,
    STATE(12), 1,
      sym_start_tag,
    STATE(83), 1,
      sym_self_closing_tag,
    STATE(93), 1,
      sym_php_directive,
    STATE(157), 1,
      sym_style_start_tag,
    STATE(170), 1,
      sym_script_start_tag,
    ACTIONS(221), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(224), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(65), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(19), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [1115] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      sym_entity,
    STATE(12), 1,
      sym_start_tag,
    STATE(83), 1,
      sym_self_closing_tag,
    STATE(93), 1,
      sym_php_directive,
    STATE(157), 1,
      sym_style_start_tag,
    STATE(170), 1,
      sym_script_start_tag,
    ACTIONS(23), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(25), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(65), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(19), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [1190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(233), 3,
      anon_sym_LBRACE_LBRACE,
      aux_sym_expression_attribute_token1,
      sym_attribute_name,
    ACTIONS(231), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [1225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_directive_argument,
    ACTIONS(241), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(237), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(243), 22,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(233), 3,
      anon_sym_LBRACE_LBRACE,
      aux_sym_expression_attribute_token1,
      sym_attribute_name,
    ACTIONS(231), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_EQ,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
  [1328] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_directive_argument,
    ACTIONS(241), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(237), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_EQ,
    ACTIONS(253), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(251), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_EQ,
    ACTIONS(259), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(257), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(263), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(267), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(271), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(275), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(279), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(283), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(287), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(243), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_EQ,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(291), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(295), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(257), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(299), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(303), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(307), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(311), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(253), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(251), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(259), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(257), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(319), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [1994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(323), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(327), 21,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SLASH_GT,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(295), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(327), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(279), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(271), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(287), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(299), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(257), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(291), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(275), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(303), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(283), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(323), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(263), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(319), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(267), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(311), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_LBRACE_LBRACE,
      sym_attribute_name,
    ACTIONS(307), 20,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_x_DASHdata,
      anon_sym_x_DASHbind,
      anon_sym_x_DASHon,
      anon_sym_x_DASHtext,
      anon_sym_x_DASHhtml,
      anon_sym_x_DASHmodel,
      anon_sym_x_DASHshow,
      anon_sym_x_DASHtransition,
      anon_sym_x_DASHfor,
      anon_sym_x_DASHif,
      anon_sym_x_DASHinit,
      anon_sym_x_DASHeffect,
      anon_sym_x_DASHref,
      anon_sym_x_DASHcloak,
      anon_sym_x_DASHignore,
      aux_sym_expression_attribute_token1,
  [2566] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(333), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(335), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(337), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(67), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(331), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [2607] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(346), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(349), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(341), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(352), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(355), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(66), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(339), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [2648] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(361), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(364), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(341), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(367), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(370), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(67), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(339), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [2689] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(333), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(373), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(375), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(66), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(109), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(331), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [2730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_directive_argument,
    ACTIONS(379), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(377), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_directive_argument,
    ACTIONS(379), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(377), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(385), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(385), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2826] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_AT,
    ACTIONS(391), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(395), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(106), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(139), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(144), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2861] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_AT,
    ACTIONS(403), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(405), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(407), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(409), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(105), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(141), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(149), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2896] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_AT,
    ACTIONS(391), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(395), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(399), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(139), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(144), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(413), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2952] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_AT,
    ACTIONS(403), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(405), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(407), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(409), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(141), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(149), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(417), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(421), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(425), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(429), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(433), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(437), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(307), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(323), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(441), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(445), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(449), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(453), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(457), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(275), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(461), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(465), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3344] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_AT,
    ACTIONS(403), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(405), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(407), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(409), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(141), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(149), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [3379] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_AT,
    ACTIONS(391), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(395), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(399), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(139), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(144), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [3414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(471), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(275), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(457), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(445), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3498] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_AT,
    ACTIONS(403), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(405), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(407), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(409), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(141), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(149), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [3533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(429), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3554] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_AT,
    ACTIONS(391), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(395), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(399), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(139), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(144), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [3589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(425), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3610] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_AT,
    ACTIONS(480), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(483), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(486), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(105), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(141), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(149), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [3645] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_AT,
    ACTIONS(497), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(500), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(503), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(508), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(106), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(139), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(144), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [3680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(421), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(461), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(295), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(437), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(295), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(417), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(413), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(307), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(311), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(323), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(449), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(453), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(465), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(511), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [3995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(471), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(515), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(291), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(515), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(287), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(271), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(433), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(287), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(291), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [4184] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(519), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(521), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_alpine_attribute_name_token1,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_echo_statement,
    STATE(33), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
    STATE(37), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [4218] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(531), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(533), 1,
      aux_sym_alpine_attribute_name_token1,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_echo_statement,
    STATE(58), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
    STATE(48), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [4252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_directive_argument,
    ACTIONS(539), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_directive_argument,
    ACTIONS(539), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym__directive_attribute,
    ACTIONS(545), 7,
      anon_sym_style,
      anon_sym_class,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [4304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym__directive_attribute,
    ACTIONS(547), 7,
      anon_sym_style,
      anon_sym_class,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [4320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [4560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LT_SLASH,
    ACTIONS(557), 1,
      sym_raw_text,
    STATE(94), 1,
      sym_end_tag,
  [4573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(561), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      aux_sym_php_directive_repeat1,
  [4586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(565), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym_php_directive_repeat1,
  [4599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(567), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(211), 1,
      aux_sym_php_directive_repeat1,
  [4612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_php_directive_token1,
    ACTIONS(572), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [4625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(574), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      aux_sym_php_directive_repeat1,
  [4638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(576), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(158), 1,
      aux_sym_php_directive_repeat1,
  [4651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(580), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [4664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_php_directive_token1,
    ACTIONS(584), 1,
      anon_sym_ATendphp,
    STATE(177), 1,
      aux_sym_php_directive_repeat1,
  [4677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(586), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym_php_directive_repeat1,
  [4690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(588), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      aux_sym_php_directive_repeat1,
  [4703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(590), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(164), 1,
      aux_sym_php_directive_repeat1,
  [4716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(592), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_php_directive_repeat1,
  [4729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LT_SLASH,
    ACTIONS(594), 1,
      sym_raw_text,
    STATE(90), 1,
      sym_end_tag,
  [4742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_ATendphp,
    ACTIONS(596), 1,
      aux_sym_php_directive_token1,
    STATE(171), 1,
      aux_sym_php_directive_repeat1,
  [4755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(599), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [4768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(601), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(167), 1,
      aux_sym_php_directive_repeat1,
  [4781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(603), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [4794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(605), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym_php_directive_repeat1,
  [4807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(607), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      aux_sym_php_directive_repeat1,
  [4820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_php_directive_token1,
    ACTIONS(609), 1,
      anon_sym_ATendphp,
    STATE(171), 1,
      aux_sym_php_directive_repeat1,
  [4833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(611), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(174), 1,
      aux_sym_php_directive_repeat1,
  [4846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(613), 1,
      aux_sym_php_directive_token1,
    STATE(179), 1,
      aux_sym_php_directive_repeat1,
  [4859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(616), 1,
      aux_sym_php_directive_token1,
    STATE(180), 1,
      aux_sym_php_directive_repeat1,
  [4872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(619), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(175), 1,
      aux_sym_php_directive_repeat1,
  [4885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(621), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(176), 1,
      aux_sym_php_directive_repeat1,
  [4898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(134), 1,
      sym__directive_attribute_value,
    ACTIONS(623), 2,
      anon_sym_error,
      anon_sym_enderror,
  [4909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__start_tag_name,
    ACTIONS(627), 1,
      sym__script_start_tag_name,
    ACTIONS(629), 1,
      sym__style_start_tag_name,
  [4922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(631), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [4935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(633), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym_php_directive_repeat1,
  [4948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(635), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      aux_sym_php_directive_repeat1,
  [4961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(133), 1,
      sym__directive_attribute_value,
    ACTIONS(637), 2,
      anon_sym_error,
      anon_sym_enderror,
  [4972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_quoted_attribute_value,
  [4985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(639), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(185), 1,
      aux_sym_php_directive_repeat1,
  [4998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(641), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(186), 1,
      aux_sym_php_directive_repeat1,
  [5011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(643), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(199), 1,
      aux_sym_php_directive_repeat1,
  [5024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(645), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(200), 1,
      aux_sym_php_directive_repeat1,
  [5037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(647), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(201), 1,
      aux_sym_php_directive_repeat1,
  [5050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__script_start_tag_name,
    ACTIONS(629), 1,
      sym__style_start_tag_name,
    ACTIONS(649), 1,
      sym__start_tag_name,
  [5063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LT_SLASH,
    ACTIONS(653), 1,
      sym_raw_text,
    STATE(118), 1,
      sym_end_tag,
  [5076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LT_SLASH,
    ACTIONS(655), 1,
      sym_raw_text,
    STATE(119), 1,
      sym_end_tag,
  [5089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_php_directive_token1,
    ACTIONS(657), 1,
      anon_sym_ATendphp,
    STATE(208), 1,
      aux_sym_php_directive_repeat1,
  [5102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(659), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      aux_sym_php_directive_repeat1,
  [5115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(661), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym_php_directive_repeat1,
  [5128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(663), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [5141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(665), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(172), 1,
      aux_sym_php_directive_repeat1,
  [5154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(667), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(187), 1,
      aux_sym_php_directive_repeat1,
  [5167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(669), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(159), 1,
      aux_sym_php_directive_repeat1,
  [5180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(673), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__expression_attribute_value,
  [5193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SQUOTE,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym__expression_attribute_value,
  [5206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(679), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [5219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      aux_sym_php_directive_token1,
    ACTIONS(681), 1,
      anon_sym_ATendphp,
    STATE(171), 1,
      aux_sym_php_directive_repeat1,
  [5232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_quoted_attribute_value,
  [5245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_php_directive_token1,
    ACTIONS(683), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(162), 1,
      aux_sym_php_directive_repeat1,
  [5258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    ACTIONS(685), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym_php_directive_repeat1,
  [5271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      aux_sym_php_directive_token1,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(207), 1,
      aux_sym_php_directive_repeat1,
  [5284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LT_SLASH,
    STATE(107), 1,
      sym_end_tag,
  [5294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_LT_SLASH,
    STATE(72), 1,
      sym_end_tag,
  [5304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [5312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [5328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [5336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym__end_tag_name,
    ACTIONS(699), 1,
      sym_erroneous_end_tag_name,
  [5346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym_php_directive_token1,
    ACTIONS(703), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [5356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_argument_php_text,
    STATE(240), 1,
      sym__directive_argument,
  [5366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_argument_php_text,
    STATE(242), 1,
      sym__directive_argument,
  [5376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LT_SLASH,
    STATE(79), 1,
      sym_end_tag,
  [5386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_argument_php_text,
    STATE(236), 1,
      sym__directive_argument,
  [5396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym_argument_php_text,
    STATE(237), 1,
      sym__directive_argument,
  [5406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym_php_directive_token1,
    ACTIONS(703), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
  [5416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_argument_php_text,
    STATE(244), 1,
      sym__directive_argument,
  [5426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_argument_php_text,
    STATE(251), 1,
      sym__directive_argument,
  [5436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym_php_directive_token1,
    ACTIONS(703), 1,
      anon_sym_ATendphp,
  [5446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      aux_sym_php_directive_token1,
    ACTIONS(703), 1,
      anon_sym_RBRACE_RBRACE,
  [5456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(717), 1,
      sym__end_tag_name,
  [5466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LT_SLASH,
    STATE(71), 1,
      sym_end_tag,
  [5476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SQUOTE,
  [5483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_GT,
  [5490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SQUOTE,
  [5497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
  [5504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [5511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
  [5518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      aux_sym_alpine_attribute_name_token1,
  [5525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
  [5532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_doctype_token1,
  [5539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [5546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_GT,
  [5553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [5560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_GT,
  [5567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_GT,
  [5574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      sym_erroneous_end_tag_name,
  [5581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      aux_sym_alpine_attribute_name_token1,
  [5588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym__expression_attribute_value_token1,
  [5595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym__expression_attribute_value_token2,
  [5602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
  [5609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym__end_tag_name,
  [5616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_erroneous_end_tag_name,
  [5623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      aux_sym_doctype_token1,
  [5630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DQUOTE,
  [5637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym__end_tag_name,
  [5644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym__doctype,
  [5651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_EQ,
  [5658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym__expression_attribute_value_token1,
  [5665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym__expression_attribute_value_token2,
  [5672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_GT,
  [5679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      ts_builtin_sym_end,
  [5686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_EQ,
  [5693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_GT,
  [5700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 411,
  [SMALL_STATE(11)] = 475,
  [SMALL_STATE(12)] = 553,
  [SMALL_STATE(13)] = 631,
  [SMALL_STATE(14)] = 709,
  [SMALL_STATE(15)] = 773,
  [SMALL_STATE(16)] = 837,
  [SMALL_STATE(17)] = 901,
  [SMALL_STATE(18)] = 965,
  [SMALL_STATE(19)] = 1040,
  [SMALL_STATE(20)] = 1115,
  [SMALL_STATE(21)] = 1190,
  [SMALL_STATE(22)] = 1225,
  [SMALL_STATE(23)] = 1262,
  [SMALL_STATE(24)] = 1294,
  [SMALL_STATE(25)] = 1328,
  [SMALL_STATE(26)] = 1364,
  [SMALL_STATE(27)] = 1398,
  [SMALL_STATE(28)] = 1432,
  [SMALL_STATE(29)] = 1463,
  [SMALL_STATE(30)] = 1494,
  [SMALL_STATE(31)] = 1525,
  [SMALL_STATE(32)] = 1556,
  [SMALL_STATE(33)] = 1587,
  [SMALL_STATE(34)] = 1618,
  [SMALL_STATE(35)] = 1649,
  [SMALL_STATE(36)] = 1680,
  [SMALL_STATE(37)] = 1711,
  [SMALL_STATE(38)] = 1742,
  [SMALL_STATE(39)] = 1773,
  [SMALL_STATE(40)] = 1804,
  [SMALL_STATE(41)] = 1835,
  [SMALL_STATE(42)] = 1866,
  [SMALL_STATE(43)] = 1897,
  [SMALL_STATE(44)] = 1930,
  [SMALL_STATE(45)] = 1963,
  [SMALL_STATE(46)] = 1994,
  [SMALL_STATE(47)] = 2025,
  [SMALL_STATE(48)] = 2056,
  [SMALL_STATE(49)] = 2086,
  [SMALL_STATE(50)] = 2116,
  [SMALL_STATE(51)] = 2146,
  [SMALL_STATE(52)] = 2176,
  [SMALL_STATE(53)] = 2206,
  [SMALL_STATE(54)] = 2236,
  [SMALL_STATE(55)] = 2266,
  [SMALL_STATE(56)] = 2296,
  [SMALL_STATE(57)] = 2326,
  [SMALL_STATE(58)] = 2356,
  [SMALL_STATE(59)] = 2386,
  [SMALL_STATE(60)] = 2416,
  [SMALL_STATE(61)] = 2446,
  [SMALL_STATE(62)] = 2476,
  [SMALL_STATE(63)] = 2506,
  [SMALL_STATE(64)] = 2536,
  [SMALL_STATE(65)] = 2566,
  [SMALL_STATE(66)] = 2607,
  [SMALL_STATE(67)] = 2648,
  [SMALL_STATE(68)] = 2689,
  [SMALL_STATE(69)] = 2730,
  [SMALL_STATE(70)] = 2757,
  [SMALL_STATE(71)] = 2784,
  [SMALL_STATE(72)] = 2805,
  [SMALL_STATE(73)] = 2826,
  [SMALL_STATE(74)] = 2861,
  [SMALL_STATE(75)] = 2896,
  [SMALL_STATE(76)] = 2931,
  [SMALL_STATE(77)] = 2952,
  [SMALL_STATE(78)] = 2987,
  [SMALL_STATE(79)] = 3008,
  [SMALL_STATE(80)] = 3029,
  [SMALL_STATE(81)] = 3050,
  [SMALL_STATE(82)] = 3071,
  [SMALL_STATE(83)] = 3092,
  [SMALL_STATE(84)] = 3113,
  [SMALL_STATE(85)] = 3134,
  [SMALL_STATE(86)] = 3155,
  [SMALL_STATE(87)] = 3176,
  [SMALL_STATE(88)] = 3197,
  [SMALL_STATE(89)] = 3218,
  [SMALL_STATE(90)] = 3239,
  [SMALL_STATE(91)] = 3260,
  [SMALL_STATE(92)] = 3281,
  [SMALL_STATE(93)] = 3302,
  [SMALL_STATE(94)] = 3323,
  [SMALL_STATE(95)] = 3344,
  [SMALL_STATE(96)] = 3379,
  [SMALL_STATE(97)] = 3414,
  [SMALL_STATE(98)] = 3435,
  [SMALL_STATE(99)] = 3456,
  [SMALL_STATE(100)] = 3477,
  [SMALL_STATE(101)] = 3498,
  [SMALL_STATE(102)] = 3533,
  [SMALL_STATE(103)] = 3554,
  [SMALL_STATE(104)] = 3589,
  [SMALL_STATE(105)] = 3610,
  [SMALL_STATE(106)] = 3645,
  [SMALL_STATE(107)] = 3680,
  [SMALL_STATE(108)] = 3701,
  [SMALL_STATE(109)] = 3722,
  [SMALL_STATE(110)] = 3743,
  [SMALL_STATE(111)] = 3764,
  [SMALL_STATE(112)] = 3785,
  [SMALL_STATE(113)] = 3806,
  [SMALL_STATE(114)] = 3827,
  [SMALL_STATE(115)] = 3848,
  [SMALL_STATE(116)] = 3869,
  [SMALL_STATE(117)] = 3890,
  [SMALL_STATE(118)] = 3911,
  [SMALL_STATE(119)] = 3932,
  [SMALL_STATE(120)] = 3953,
  [SMALL_STATE(121)] = 3974,
  [SMALL_STATE(122)] = 3995,
  [SMALL_STATE(123)] = 4016,
  [SMALL_STATE(124)] = 4037,
  [SMALL_STATE(125)] = 4058,
  [SMALL_STATE(126)] = 4079,
  [SMALL_STATE(127)] = 4100,
  [SMALL_STATE(128)] = 4121,
  [SMALL_STATE(129)] = 4142,
  [SMALL_STATE(130)] = 4163,
  [SMALL_STATE(131)] = 4184,
  [SMALL_STATE(132)] = 4218,
  [SMALL_STATE(133)] = 4252,
  [SMALL_STATE(134)] = 4270,
  [SMALL_STATE(135)] = 4288,
  [SMALL_STATE(136)] = 4304,
  [SMALL_STATE(137)] = 4320,
  [SMALL_STATE(138)] = 4332,
  [SMALL_STATE(139)] = 4344,
  [SMALL_STATE(140)] = 4356,
  [SMALL_STATE(141)] = 4368,
  [SMALL_STATE(142)] = 4380,
  [SMALL_STATE(143)] = 4392,
  [SMALL_STATE(144)] = 4404,
  [SMALL_STATE(145)] = 4416,
  [SMALL_STATE(146)] = 4428,
  [SMALL_STATE(147)] = 4440,
  [SMALL_STATE(148)] = 4452,
  [SMALL_STATE(149)] = 4464,
  [SMALL_STATE(150)] = 4476,
  [SMALL_STATE(151)] = 4488,
  [SMALL_STATE(152)] = 4500,
  [SMALL_STATE(153)] = 4512,
  [SMALL_STATE(154)] = 4524,
  [SMALL_STATE(155)] = 4536,
  [SMALL_STATE(156)] = 4548,
  [SMALL_STATE(157)] = 4560,
  [SMALL_STATE(158)] = 4573,
  [SMALL_STATE(159)] = 4586,
  [SMALL_STATE(160)] = 4599,
  [SMALL_STATE(161)] = 4612,
  [SMALL_STATE(162)] = 4625,
  [SMALL_STATE(163)] = 4638,
  [SMALL_STATE(164)] = 4651,
  [SMALL_STATE(165)] = 4664,
  [SMALL_STATE(166)] = 4677,
  [SMALL_STATE(167)] = 4690,
  [SMALL_STATE(168)] = 4703,
  [SMALL_STATE(169)] = 4716,
  [SMALL_STATE(170)] = 4729,
  [SMALL_STATE(171)] = 4742,
  [SMALL_STATE(172)] = 4755,
  [SMALL_STATE(173)] = 4768,
  [SMALL_STATE(174)] = 4781,
  [SMALL_STATE(175)] = 4794,
  [SMALL_STATE(176)] = 4807,
  [SMALL_STATE(177)] = 4820,
  [SMALL_STATE(178)] = 4833,
  [SMALL_STATE(179)] = 4846,
  [SMALL_STATE(180)] = 4859,
  [SMALL_STATE(181)] = 4872,
  [SMALL_STATE(182)] = 4885,
  [SMALL_STATE(183)] = 4898,
  [SMALL_STATE(184)] = 4909,
  [SMALL_STATE(185)] = 4922,
  [SMALL_STATE(186)] = 4935,
  [SMALL_STATE(187)] = 4948,
  [SMALL_STATE(188)] = 4961,
  [SMALL_STATE(189)] = 4972,
  [SMALL_STATE(190)] = 4985,
  [SMALL_STATE(191)] = 4998,
  [SMALL_STATE(192)] = 5011,
  [SMALL_STATE(193)] = 5024,
  [SMALL_STATE(194)] = 5037,
  [SMALL_STATE(195)] = 5050,
  [SMALL_STATE(196)] = 5063,
  [SMALL_STATE(197)] = 5076,
  [SMALL_STATE(198)] = 5089,
  [SMALL_STATE(199)] = 5102,
  [SMALL_STATE(200)] = 5115,
  [SMALL_STATE(201)] = 5128,
  [SMALL_STATE(202)] = 5141,
  [SMALL_STATE(203)] = 5154,
  [SMALL_STATE(204)] = 5167,
  [SMALL_STATE(205)] = 5180,
  [SMALL_STATE(206)] = 5193,
  [SMALL_STATE(207)] = 5206,
  [SMALL_STATE(208)] = 5219,
  [SMALL_STATE(209)] = 5232,
  [SMALL_STATE(210)] = 5245,
  [SMALL_STATE(211)] = 5258,
  [SMALL_STATE(212)] = 5271,
  [SMALL_STATE(213)] = 5284,
  [SMALL_STATE(214)] = 5294,
  [SMALL_STATE(215)] = 5304,
  [SMALL_STATE(216)] = 5312,
  [SMALL_STATE(217)] = 5320,
  [SMALL_STATE(218)] = 5328,
  [SMALL_STATE(219)] = 5336,
  [SMALL_STATE(220)] = 5346,
  [SMALL_STATE(221)] = 5356,
  [SMALL_STATE(222)] = 5366,
  [SMALL_STATE(223)] = 5376,
  [SMALL_STATE(224)] = 5386,
  [SMALL_STATE(225)] = 5396,
  [SMALL_STATE(226)] = 5406,
  [SMALL_STATE(227)] = 5416,
  [SMALL_STATE(228)] = 5426,
  [SMALL_STATE(229)] = 5436,
  [SMALL_STATE(230)] = 5446,
  [SMALL_STATE(231)] = 5456,
  [SMALL_STATE(232)] = 5466,
  [SMALL_STATE(233)] = 5476,
  [SMALL_STATE(234)] = 5483,
  [SMALL_STATE(235)] = 5490,
  [SMALL_STATE(236)] = 5497,
  [SMALL_STATE(237)] = 5504,
  [SMALL_STATE(238)] = 5511,
  [SMALL_STATE(239)] = 5518,
  [SMALL_STATE(240)] = 5525,
  [SMALL_STATE(241)] = 5532,
  [SMALL_STATE(242)] = 5539,
  [SMALL_STATE(243)] = 5546,
  [SMALL_STATE(244)] = 5553,
  [SMALL_STATE(245)] = 5560,
  [SMALL_STATE(246)] = 5567,
  [SMALL_STATE(247)] = 5574,
  [SMALL_STATE(248)] = 5581,
  [SMALL_STATE(249)] = 5588,
  [SMALL_STATE(250)] = 5595,
  [SMALL_STATE(251)] = 5602,
  [SMALL_STATE(252)] = 5609,
  [SMALL_STATE(253)] = 5616,
  [SMALL_STATE(254)] = 5623,
  [SMALL_STATE(255)] = 5630,
  [SMALL_STATE(256)] = 5637,
  [SMALL_STATE(257)] = 5644,
  [SMALL_STATE(258)] = 5651,
  [SMALL_STATE(259)] = 5658,
  [SMALL_STATE(260)] = 5665,
  [SMALL_STATE(261)] = 5672,
  [SMALL_STATE(262)] = 5679,
  [SMALL_STATE(263)] = 5686,
  [SMALL_STATE(264)] = 5693,
  [SMALL_STATE(265)] = 5700,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alpine_attribute_name, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alpine_attribute_name, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alpine_attribute_name, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alpine_attribute_name, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alpine_attribute, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alpine_attribute, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, 0, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blade_comment, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blade_comment, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_argument, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 3, 0, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 3, 0, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blade_comment, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blade_comment, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alpine_attribute, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alpine_attribute, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php_directive, 4, 0, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php_directive, 4, 0, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php_directive, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php_directive, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(188),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(203),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(191),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(190),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(139),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute_value, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute_value, 3, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 1, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_directive_repeat1, 1, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [767] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_argument_php_text = 0,
  ts_external_token__start_tag_name = 1,
  ts_external_token__script_start_tag_name = 2,
  ts_external_token__style_start_tag_name = 3,
  ts_external_token__end_tag_name = 4,
  ts_external_token_erroneous_end_tag_name = 5,
  ts_external_token_SLASH_GT = 6,
  ts_external_token__implicit_end_tag = 7,
  ts_external_token_raw_text = 8,
  ts_external_token_comment = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_argument_php_text] = sym_argument_php_text,
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_argument_php_text] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_argument_php_text] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_blade_external_scanner_create(void);
void tree_sitter_blade_external_scanner_destroy(void *);
bool tree_sitter_blade_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_blade_external_scanner_serialize(void *, char *);
void tree_sitter_blade_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_blade(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_blade_external_scanner_create,
      tree_sitter_blade_external_scanner_destroy,
      tree_sitter_blade_external_scanner_scan,
      tree_sitter_blade_external_scanner_serialize,
      tree_sitter_blade_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
