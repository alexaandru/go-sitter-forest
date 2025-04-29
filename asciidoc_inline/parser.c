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
#define STATE_COUNT 283
#define LARGE_STATE_COUNT 58
#define SYMBOL_COUNT 223
#define ALIAS_COUNT 1
#define TOKEN_COUNT 175
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_DQUOTE = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  aux_sym_uri_label_token1 = 4,
  anon_sym_BSLASH_RBRACK = 5,
  aux_sym_link_url_token1 = 6,
  aux_sym_link_url_token2 = 7,
  anon_sym_DOT = 8,
  sym__uri_segment = 9,
  sym_email = 10,
  anon_sym_LBRACK_POUND = 11,
  anon_sym_LBRACK_LBRACK = 12,
  anon_sym_RBRACK_RBRACK = 13,
  anon_sym_kbd = 14,
  anon_sym_btn = 15,
  anon_sym_image = 16,
  anon_sym_audio = 17,
  anon_sym_video = 18,
  anon_sym_icon = 19,
  anon_sym_link = 20,
  anon_sym_mailto = 21,
  anon_sym_menu = 22,
  anon_sym_anchor = 23,
  anon_sym_xref = 24,
  anon_sym_ifdef = 25,
  anon_sym_ifndef = 26,
  anon_sym_ifeval = 27,
  anon_sym_endif = 28,
  anon_sym_indexterm2 = 29,
  anon_sym_indexterm = 30,
  anon_sym_a2s = 31,
  anon_sym_barcode = 32,
  anon_sym_blockdiag = 33,
  anon_sym_bpmn = 34,
  anon_sym_bytefield = 35,
  anon_sym_d2 = 36,
  anon_sym_dbml = 37,
  anon_sym_diagrams = 38,
  anon_sym_ditaa = 39,
  anon_sym_dpic = 40,
  anon_sym_erd = 41,
  anon_sym_gnuplot = 42,
  anon_sym_graphviz = 43,
  anon_sym_lilypond = 44,
  anon_sym_meme = 45,
  anon_sym_mermaid = 46,
  anon_sym_msc = 47,
  anon_sym_nomnoml = 48,
  anon_sym_pikchr = 49,
  anon_sym_plantuml = 50,
  anon_sym_shaape = 51,
  anon_sym_smcat = 52,
  anon_sym_structurizr = 53,
  anon_sym_svgbob = 54,
  anon_sym_symbolator = 55,
  anon_sym_syntrax = 56,
  anon_sym_tikz = 57,
  anon_sym_umlet = 58,
  anon_sym_vega = 59,
  anon_sym_wavedrom = 60,
  anon_sym_COLON = 61,
  aux_sym_target_token1 = 62,
  anon_sym_BSLASH_LBRACK = 63,
  anon_sym_footnote = 64,
  anon_sym_footnoteref = 65,
  anon_sym_latexmath = 66,
  anon_sym_stem = 67,
  anon_sym_asciimath = 68,
  anon_sym_pass = 69,
  sym_replacement = 70,
  anon_sym_LBRACE = 71,
  anon_sym_RBRACE = 72,
  sym_intrinsic_attributes = 73,
  anon_sym_f = 74,
  sym_super_escape = 75,
  sym__character = 76,
  anon_sym_BSLASH_PLUS_PLUS_PLUS = 77,
  anon_sym_BSLASH_BQUOTE_BQUOTE = 78,
  anon_sym_BSLASH_STAR_STAR = 79,
  anon_sym_BSLASH_DOLLAR_DOLLAR = 80,
  anon_sym_BSLASH_POUND_POUND = 81,
  anon_sym_BSLASH__ = 82,
  anon_sym_BSLASH_LT_LT = 83,
  anon_sym_BSLASH_LBRACK_LBRACK = 84,
  anon_sym_BSLASH_PLUS_PLUS = 85,
  anon_sym_BSLASHkbd = 86,
  anon_sym_BSLASHbtn = 87,
  anon_sym_BSLASHimage = 88,
  anon_sym_BSLASHaudio = 89,
  anon_sym_BSLASHvideo = 90,
  anon_sym_BSLASHicon = 91,
  anon_sym_BSLASHpass = 92,
  anon_sym_BSLASHlink = 93,
  anon_sym_BSLASHmailto = 94,
  anon_sym_BSLASHmenu = 95,
  anon_sym_BSLASHstem = 96,
  anon_sym_BSLASHlatexmath = 97,
  anon_sym_BSLASHasciimath = 98,
  anon_sym_BSLASHfootnote = 99,
  anon_sym_BSLASHfootnoteref = 100,
  anon_sym_BSLASHanchor = 101,
  anon_sym_BSLASHxref = 102,
  anon_sym_BSLASHifdef = 103,
  anon_sym_BSLASHifndef = 104,
  anon_sym_BSLASHifeval = 105,
  anon_sym_BSLASHendif = 106,
  aux_sym_escaped_sequence_token1 = 107,
  anon_sym_BANG = 108,
  anon_sym_POUND = 109,
  anon_sym_DOLLAR = 110,
  anon_sym_PERCENT = 111,
  anon_sym_AMP = 112,
  anon_sym_SQUOTE = 113,
  anon_sym_LPAREN = 114,
  anon_sym_RPAREN = 115,
  anon_sym_STAR = 116,
  anon_sym_PLUS = 117,
  anon_sym_COMMA = 118,
  anon_sym_DASH = 119,
  anon_sym_SLASH = 120,
  anon_sym_COLON2 = 121,
  anon_sym_SEMI = 122,
  anon_sym_LT = 123,
  anon_sym_EQ = 124,
  anon_sym_GT = 125,
  anon_sym_QMARK = 126,
  anon_sym_AT = 127,
  anon_sym_BSLASH = 128,
  anon_sym_CARET = 129,
  anon_sym__ = 130,
  anon_sym_BQUOTE = 131,
  anon_sym_PIPE = 132,
  anon_sym_TILDE = 133,
  anon_sym_PLUS2 = 134,
  aux_sym_passthrough_token1 = 135,
  anon_sym_BSLASH_PLUS = 136,
  anon_sym_PLUS_PLUS = 137,
  anon_sym_PLUS_PLUS2 = 138,
  anon_sym_DOLLAR_DOLLAR = 139,
  aux_sym_passthrough_token2 = 140,
  anon_sym_BSLASH_DOLLAR = 141,
  anon_sym_LT_LT = 142,
  aux_sym_xref_token1 = 143,
  anon_sym_BSLASH_COMMA = 144,
  anon_sym_BSLASH_GT = 145,
  aux_sym_xref_token2 = 146,
  anon_sym_GT_GT = 147,
  anon_sym_STAR2 = 148,
  aux_sym_emphasis_token1 = 149,
  anon_sym_BSLASH_STAR = 150,
  anon_sym_STAR_STAR = 151,
  anon_sym_STAR_STAR2 = 152,
  anon_sym__2 = 153,
  aux_sym_ltalic_token1 = 154,
  anon_sym_BSLASH_ = 155,
  anon_sym___ = 156,
  anon_sym___2 = 157,
  anon_sym_BQUOTE2 = 158,
  aux_sym_monospace_token1 = 159,
  anon_sym_BSLASH_BQUOTE = 160,
  anon_sym_BQUOTE_BQUOTE = 161,
  anon_sym_BQUOTE_BQUOTE2 = 162,
  anon_sym_POUND2 = 163,
  aux_sym_highlight_token1 = 164,
  anon_sym_BSLASH_POUND = 165,
  anon_sym_POUND_POUND = 166,
  anon_sym_POUND_POUND2 = 167,
  anon_sym_LPAREN_LPAREN = 168,
  anon_sym_RPAREN_RPAREN = 169,
  anon_sym_LPAREN_LPAREN_LPAREN = 170,
  anon_sym_RPAREN_RPAREN_RPAREN = 171,
  aux_sym_term_token1 = 172,
  anon_sym_BSLASH_RPAREN = 173,
  sym__eof = 174,
  sym_inline = 175,
  sym_inline_element = 176,
  sym_autolink = 177,
  sym_labled_uri = 178,
  sym_uri_label = 179,
  sym_uri = 180,
  sym_link_url = 181,
  sym_id_assignment = 182,
  sym_id = 183,
  sym_macro_name = 184,
  sym_inline_macro = 185,
  sym_target = 186,
  sym_attr = 187,
  sym__footnotename = 188,
  sym_footnote = 189,
  aux_sym__stem_attr = 190,
  sym__stem_name = 191,
  sym_stem_macro = 192,
  sym_macro_passthrough = 193,
  sym_intrinsic_attributes_pair = 194,
  sym_word = 195,
  sym__fallback_token = 196,
  sym_escaped_sequence = 197,
  sym__punctuation = 198,
  sym_passthrough = 199,
  sym_xref = 200,
  sym_emphasis = 201,
  sym_ltalic = 202,
  sym_monospace = 203,
  sym_highlight = 204,
  sym_index_term2 = 205,
  sym_index_term = 206,
  sym_term = 207,
  aux_sym_inline_repeat1 = 208,
  aux_sym_uri_label_repeat1 = 209,
  aux_sym_link_url_repeat1 = 210,
  aux_sym_id_repeat1 = 211,
  aux_sym_target_repeat1 = 212,
  aux_sym_attr_repeat1 = 213,
  aux_sym_passthrough_repeat1 = 214,
  aux_sym_passthrough_repeat2 = 215,
  aux_sym_xref_repeat1 = 216,
  aux_sym_xref_repeat2 = 217,
  aux_sym_emphasis_repeat1 = 218,
  aux_sym_ltalic_repeat1 = 219,
  aux_sym_monospace_repeat1 = 220,
  aux_sym_highlight_repeat1 = 221,
  aux_sym_term_repeat1 = 222,
  alias_sym_reftext = 223,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_uri_label_token1] = "uri_label_token1",
  [anon_sym_BSLASH_RBRACK] = "\\]",
  [aux_sym_link_url_token1] = "link_url_token1",
  [aux_sym_link_url_token2] = "link_url_token2",
  [anon_sym_DOT] = ".",
  [sym__uri_segment] = "_uri_segment",
  [sym_email] = "email",
  [anon_sym_LBRACK_POUND] = "[#",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_kbd] = "kbd",
  [anon_sym_btn] = "btn",
  [anon_sym_image] = "image",
  [anon_sym_audio] = "audio",
  [anon_sym_video] = "video",
  [anon_sym_icon] = "icon",
  [anon_sym_link] = "link",
  [anon_sym_mailto] = "mailto",
  [anon_sym_menu] = "menu",
  [anon_sym_anchor] = "anchor",
  [anon_sym_xref] = "xref",
  [anon_sym_ifdef] = "ifdef",
  [anon_sym_ifndef] = "ifndef",
  [anon_sym_ifeval] = "ifeval",
  [anon_sym_endif] = "endif",
  [anon_sym_indexterm2] = "indexterm2",
  [anon_sym_indexterm] = "indexterm",
  [anon_sym_a2s] = "a2s",
  [anon_sym_barcode] = "barcode",
  [anon_sym_blockdiag] = "blockdiag",
  [anon_sym_bpmn] = "bpmn",
  [anon_sym_bytefield] = "bytefield",
  [anon_sym_d2] = "d2",
  [anon_sym_dbml] = "dbml",
  [anon_sym_diagrams] = "diagrams",
  [anon_sym_ditaa] = "ditaa",
  [anon_sym_dpic] = "dpic",
  [anon_sym_erd] = "erd",
  [anon_sym_gnuplot] = "gnuplot",
  [anon_sym_graphviz] = "graphviz",
  [anon_sym_lilypond] = "lilypond",
  [anon_sym_meme] = "meme",
  [anon_sym_mermaid] = "mermaid",
  [anon_sym_msc] = "msc",
  [anon_sym_nomnoml] = "nomnoml",
  [anon_sym_pikchr] = "pikchr",
  [anon_sym_plantuml] = "plantuml",
  [anon_sym_shaape] = "shaape",
  [anon_sym_smcat] = "smcat",
  [anon_sym_structurizr] = "structurizr",
  [anon_sym_svgbob] = "svgbob",
  [anon_sym_symbolator] = "symbolator",
  [anon_sym_syntrax] = "syntrax",
  [anon_sym_tikz] = "tikz",
  [anon_sym_umlet] = "umlet",
  [anon_sym_vega] = "vega",
  [anon_sym_wavedrom] = "wavedrom",
  [anon_sym_COLON] = ":",
  [aux_sym_target_token1] = "target_token1",
  [anon_sym_BSLASH_LBRACK] = "\\[",
  [anon_sym_footnote] = "footnote",
  [anon_sym_footnoteref] = "footnoteref",
  [anon_sym_latexmath] = "latexmath",
  [anon_sym_stem] = "stem",
  [anon_sym_asciimath] = "asciimath",
  [anon_sym_pass] = "macro_name",
  [sym_replacement] = "replacement",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_intrinsic_attributes] = "intrinsic_attributes",
  [anon_sym_f] = "f",
  [sym_super_escape] = "super_escape",
  [sym__character] = "_character",
  [anon_sym_BSLASH_PLUS_PLUS_PLUS] = "\\+++",
  [anon_sym_BSLASH_BQUOTE_BQUOTE] = "\\``",
  [anon_sym_BSLASH_STAR_STAR] = "\\**",
  [anon_sym_BSLASH_DOLLAR_DOLLAR] = "\\$$",
  [anon_sym_BSLASH_POUND_POUND] = "\\##",
  [anon_sym_BSLASH__] = "\\__",
  [anon_sym_BSLASH_LT_LT] = "\\<<",
  [anon_sym_BSLASH_LBRACK_LBRACK] = "\\[[",
  [anon_sym_BSLASH_PLUS_PLUS] = "\\++",
  [anon_sym_BSLASHkbd] = "\\kbd",
  [anon_sym_BSLASHbtn] = "\\btn",
  [anon_sym_BSLASHimage] = "\\image",
  [anon_sym_BSLASHaudio] = "\\audio",
  [anon_sym_BSLASHvideo] = "\\video",
  [anon_sym_BSLASHicon] = "\\icon",
  [anon_sym_BSLASHpass] = "\\pass",
  [anon_sym_BSLASHlink] = "\\link",
  [anon_sym_BSLASHmailto] = "\\mailto",
  [anon_sym_BSLASHmenu] = "\\menu",
  [anon_sym_BSLASHstem] = "\\stem",
  [anon_sym_BSLASHlatexmath] = "\\latexmath",
  [anon_sym_BSLASHasciimath] = "\\asciimath",
  [anon_sym_BSLASHfootnote] = "\\footnote",
  [anon_sym_BSLASHfootnoteref] = "\\footnoteref",
  [anon_sym_BSLASHanchor] = "\\anchor",
  [anon_sym_BSLASHxref] = "\\xref",
  [anon_sym_BSLASHifdef] = "\\ifdef",
  [anon_sym_BSLASHifndef] = "\\ifndef",
  [anon_sym_BSLASHifeval] = "\\ifeval",
  [anon_sym_BSLASHendif] = "\\endif",
  [aux_sym_escaped_sequence_token1] = "escaped_sequence_token1",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON2] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS2] = "+",
  [aux_sym_passthrough_token1] = "passthrough_token1",
  [anon_sym_BSLASH_PLUS] = "\\+",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS_PLUS2] = "++",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [aux_sym_passthrough_token2] = "passthrough_token2",
  [anon_sym_BSLASH_DOLLAR] = "\\$",
  [anon_sym_LT_LT] = "<<",
  [aux_sym_xref_token1] = "xref_token1",
  [anon_sym_BSLASH_COMMA] = "\\,",
  [anon_sym_BSLASH_GT] = "\\>",
  [aux_sym_xref_token2] = "xref_token2",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_STAR2] = "*",
  [aux_sym_emphasis_token1] = "emphasis_token1",
  [anon_sym_BSLASH_STAR] = "\\*",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR_STAR2] = "**",
  [anon_sym__2] = "_",
  [aux_sym_ltalic_token1] = "ltalic_token1",
  [anon_sym_BSLASH_] = "\\_",
  [anon_sym___] = "__",
  [anon_sym___2] = "__",
  [anon_sym_BQUOTE2] = "`",
  [aux_sym_monospace_token1] = "monospace_token1",
  [anon_sym_BSLASH_BQUOTE] = "\\`",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [anon_sym_BQUOTE_BQUOTE2] = "``",
  [anon_sym_POUND2] = "#",
  [aux_sym_highlight_token1] = "highlight_token1",
  [anon_sym_BSLASH_POUND] = "\\#",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND_POUND2] = "##",
  [anon_sym_LPAREN_LPAREN] = "((",
  [anon_sym_RPAREN_RPAREN] = "))",
  [anon_sym_LPAREN_LPAREN_LPAREN] = "(((",
  [anon_sym_RPAREN_RPAREN_RPAREN] = ")))",
  [aux_sym_term_token1] = "term_token1",
  [anon_sym_BSLASH_RPAREN] = "\\)",
  [sym__eof] = "_eof",
  [sym_inline] = "inline",
  [sym_inline_element] = "inline_element",
  [sym_autolink] = "autolink",
  [sym_labled_uri] = "labled_uri",
  [sym_uri_label] = "uri_label",
  [sym_uri] = "uri",
  [sym_link_url] = "link_url",
  [sym_id_assignment] = "id_assignment",
  [sym_id] = "id",
  [sym_macro_name] = "macro_name",
  [sym_inline_macro] = "inline_macro",
  [sym_target] = "target",
  [sym_attr] = "attr",
  [sym__footnotename] = "_footnotename",
  [sym_footnote] = "footnote",
  [aux_sym__stem_attr] = "_stem_attr",
  [sym__stem_name] = "_stem_name",
  [sym_stem_macro] = "stem_macro",
  [sym_macro_passthrough] = "macro_passthrough",
  [sym_intrinsic_attributes_pair] = "intrinsic_attributes_pair",
  [sym_word] = "word",
  [sym__fallback_token] = "_fallback_token",
  [sym_escaped_sequence] = "escaped_sequence",
  [sym__punctuation] = "_punctuation",
  [sym_passthrough] = "passthrough",
  [sym_xref] = "xref",
  [sym_emphasis] = "emphasis",
  [sym_ltalic] = "ltalic",
  [sym_monospace] = "monospace",
  [sym_highlight] = "highlight",
  [sym_index_term2] = "index_term2",
  [sym_index_term] = "index_term",
  [sym_term] = "term",
  [aux_sym_inline_repeat1] = "inline_repeat1",
  [aux_sym_uri_label_repeat1] = "uri_label_repeat1",
  [aux_sym_link_url_repeat1] = "link_url_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_attr_repeat1] = "attr_repeat1",
  [aux_sym_passthrough_repeat1] = "passthrough_repeat1",
  [aux_sym_passthrough_repeat2] = "passthrough_repeat2",
  [aux_sym_xref_repeat1] = "xref_repeat1",
  [aux_sym_xref_repeat2] = "xref_repeat2",
  [aux_sym_emphasis_repeat1] = "emphasis_repeat1",
  [aux_sym_ltalic_repeat1] = "ltalic_repeat1",
  [aux_sym_monospace_repeat1] = "monospace_repeat1",
  [aux_sym_highlight_repeat1] = "highlight_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [alias_sym_reftext] = "reftext",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_uri_label_token1] = aux_sym_uri_label_token1,
  [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
  [aux_sym_link_url_token1] = aux_sym_link_url_token1,
  [aux_sym_link_url_token2] = aux_sym_link_url_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__uri_segment] = sym__uri_segment,
  [sym_email] = sym_email,
  [anon_sym_LBRACK_POUND] = anon_sym_LBRACK_POUND,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_kbd] = anon_sym_kbd,
  [anon_sym_btn] = anon_sym_btn,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_audio] = anon_sym_audio,
  [anon_sym_video] = anon_sym_video,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_mailto] = anon_sym_mailto,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_anchor] = anon_sym_anchor,
  [anon_sym_xref] = anon_sym_xref,
  [anon_sym_ifdef] = anon_sym_ifdef,
  [anon_sym_ifndef] = anon_sym_ifndef,
  [anon_sym_ifeval] = anon_sym_ifeval,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_indexterm2] = anon_sym_indexterm2,
  [anon_sym_indexterm] = anon_sym_indexterm,
  [anon_sym_a2s] = anon_sym_a2s,
  [anon_sym_barcode] = anon_sym_barcode,
  [anon_sym_blockdiag] = anon_sym_blockdiag,
  [anon_sym_bpmn] = anon_sym_bpmn,
  [anon_sym_bytefield] = anon_sym_bytefield,
  [anon_sym_d2] = anon_sym_d2,
  [anon_sym_dbml] = anon_sym_dbml,
  [anon_sym_diagrams] = anon_sym_diagrams,
  [anon_sym_ditaa] = anon_sym_ditaa,
  [anon_sym_dpic] = anon_sym_dpic,
  [anon_sym_erd] = anon_sym_erd,
  [anon_sym_gnuplot] = anon_sym_gnuplot,
  [anon_sym_graphviz] = anon_sym_graphviz,
  [anon_sym_lilypond] = anon_sym_lilypond,
  [anon_sym_meme] = anon_sym_meme,
  [anon_sym_mermaid] = anon_sym_mermaid,
  [anon_sym_msc] = anon_sym_msc,
  [anon_sym_nomnoml] = anon_sym_nomnoml,
  [anon_sym_pikchr] = anon_sym_pikchr,
  [anon_sym_plantuml] = anon_sym_plantuml,
  [anon_sym_shaape] = anon_sym_shaape,
  [anon_sym_smcat] = anon_sym_smcat,
  [anon_sym_structurizr] = anon_sym_structurizr,
  [anon_sym_svgbob] = anon_sym_svgbob,
  [anon_sym_symbolator] = anon_sym_symbolator,
  [anon_sym_syntrax] = anon_sym_syntrax,
  [anon_sym_tikz] = anon_sym_tikz,
  [anon_sym_umlet] = anon_sym_umlet,
  [anon_sym_vega] = anon_sym_vega,
  [anon_sym_wavedrom] = anon_sym_wavedrom,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_target_token1] = aux_sym_target_token1,
  [anon_sym_BSLASH_LBRACK] = anon_sym_BSLASH_LBRACK,
  [anon_sym_footnote] = anon_sym_footnote,
  [anon_sym_footnoteref] = anon_sym_footnoteref,
  [anon_sym_latexmath] = anon_sym_latexmath,
  [anon_sym_stem] = anon_sym_stem,
  [anon_sym_asciimath] = anon_sym_asciimath,
  [anon_sym_pass] = sym_macro_name,
  [sym_replacement] = sym_replacement,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_intrinsic_attributes] = sym_intrinsic_attributes,
  [anon_sym_f] = anon_sym_f,
  [sym_super_escape] = sym_super_escape,
  [sym__character] = sym__character,
  [anon_sym_BSLASH_PLUS_PLUS_PLUS] = anon_sym_BSLASH_PLUS_PLUS_PLUS,
  [anon_sym_BSLASH_BQUOTE_BQUOTE] = anon_sym_BSLASH_BQUOTE_BQUOTE,
  [anon_sym_BSLASH_STAR_STAR] = anon_sym_BSLASH_STAR_STAR,
  [anon_sym_BSLASH_DOLLAR_DOLLAR] = anon_sym_BSLASH_DOLLAR_DOLLAR,
  [anon_sym_BSLASH_POUND_POUND] = anon_sym_BSLASH_POUND_POUND,
  [anon_sym_BSLASH__] = anon_sym_BSLASH__,
  [anon_sym_BSLASH_LT_LT] = anon_sym_BSLASH_LT_LT,
  [anon_sym_BSLASH_LBRACK_LBRACK] = anon_sym_BSLASH_LBRACK_LBRACK,
  [anon_sym_BSLASH_PLUS_PLUS] = anon_sym_BSLASH_PLUS_PLUS,
  [anon_sym_BSLASHkbd] = anon_sym_BSLASHkbd,
  [anon_sym_BSLASHbtn] = anon_sym_BSLASHbtn,
  [anon_sym_BSLASHimage] = anon_sym_BSLASHimage,
  [anon_sym_BSLASHaudio] = anon_sym_BSLASHaudio,
  [anon_sym_BSLASHvideo] = anon_sym_BSLASHvideo,
  [anon_sym_BSLASHicon] = anon_sym_BSLASHicon,
  [anon_sym_BSLASHpass] = anon_sym_BSLASHpass,
  [anon_sym_BSLASHlink] = anon_sym_BSLASHlink,
  [anon_sym_BSLASHmailto] = anon_sym_BSLASHmailto,
  [anon_sym_BSLASHmenu] = anon_sym_BSLASHmenu,
  [anon_sym_BSLASHstem] = anon_sym_BSLASHstem,
  [anon_sym_BSLASHlatexmath] = anon_sym_BSLASHlatexmath,
  [anon_sym_BSLASHasciimath] = anon_sym_BSLASHasciimath,
  [anon_sym_BSLASHfootnote] = anon_sym_BSLASHfootnote,
  [anon_sym_BSLASHfootnoteref] = anon_sym_BSLASHfootnoteref,
  [anon_sym_BSLASHanchor] = anon_sym_BSLASHanchor,
  [anon_sym_BSLASHxref] = anon_sym_BSLASHxref,
  [anon_sym_BSLASHifdef] = anon_sym_BSLASHifdef,
  [anon_sym_BSLASHifndef] = anon_sym_BSLASHifndef,
  [anon_sym_BSLASHifeval] = anon_sym_BSLASHifeval,
  [anon_sym_BSLASHendif] = anon_sym_BSLASHendif,
  [aux_sym_escaped_sequence_token1] = aux_sym_escaped_sequence_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS2] = anon_sym_PLUS,
  [aux_sym_passthrough_token1] = aux_sym_passthrough_token1,
  [anon_sym_BSLASH_PLUS] = anon_sym_BSLASH_PLUS,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS_PLUS2] = anon_sym_PLUS_PLUS,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [aux_sym_passthrough_token2] = aux_sym_passthrough_token2,
  [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_DOLLAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [aux_sym_xref_token1] = aux_sym_xref_token1,
  [anon_sym_BSLASH_COMMA] = anon_sym_BSLASH_COMMA,
  [anon_sym_BSLASH_GT] = anon_sym_BSLASH_GT,
  [aux_sym_xref_token2] = aux_sym_xref_token2,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_STAR2] = anon_sym_STAR,
  [aux_sym_emphasis_token1] = aux_sym_emphasis_token1,
  [anon_sym_BSLASH_STAR] = anon_sym_BSLASH_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR_STAR2] = anon_sym_STAR_STAR,
  [anon_sym__2] = anon_sym__,
  [aux_sym_ltalic_token1] = aux_sym_ltalic_token1,
  [anon_sym_BSLASH_] = anon_sym_BSLASH_,
  [anon_sym___] = anon_sym___,
  [anon_sym___2] = anon_sym___,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [aux_sym_monospace_token1] = aux_sym_monospace_token1,
  [anon_sym_BSLASH_BQUOTE] = anon_sym_BSLASH_BQUOTE,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [anon_sym_BQUOTE_BQUOTE2] = anon_sym_BQUOTE_BQUOTE,
  [anon_sym_POUND2] = anon_sym_POUND,
  [aux_sym_highlight_token1] = aux_sym_highlight_token1,
  [anon_sym_BSLASH_POUND] = anon_sym_BSLASH_POUND,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND_POUND2] = anon_sym_POUND_POUND,
  [anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN,
  [anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN,
  [anon_sym_LPAREN_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN_LPAREN,
  [anon_sym_RPAREN_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN_RPAREN,
  [aux_sym_term_token1] = aux_sym_term_token1,
  [anon_sym_BSLASH_RPAREN] = anon_sym_BSLASH_RPAREN,
  [sym__eof] = sym__eof,
  [sym_inline] = sym_inline,
  [sym_inline_element] = sym_inline_element,
  [sym_autolink] = sym_autolink,
  [sym_labled_uri] = sym_labled_uri,
  [sym_uri_label] = sym_uri_label,
  [sym_uri] = sym_uri,
  [sym_link_url] = sym_link_url,
  [sym_id_assignment] = sym_id_assignment,
  [sym_id] = sym_id,
  [sym_macro_name] = sym_macro_name,
  [sym_inline_macro] = sym_inline_macro,
  [sym_target] = sym_target,
  [sym_attr] = sym_attr,
  [sym__footnotename] = sym__footnotename,
  [sym_footnote] = sym_footnote,
  [aux_sym__stem_attr] = aux_sym__stem_attr,
  [sym__stem_name] = sym__stem_name,
  [sym_stem_macro] = sym_stem_macro,
  [sym_macro_passthrough] = sym_macro_passthrough,
  [sym_intrinsic_attributes_pair] = sym_intrinsic_attributes_pair,
  [sym_word] = sym_word,
  [sym__fallback_token] = sym__fallback_token,
  [sym_escaped_sequence] = sym_escaped_sequence,
  [sym__punctuation] = sym__punctuation,
  [sym_passthrough] = sym_passthrough,
  [sym_xref] = sym_xref,
  [sym_emphasis] = sym_emphasis,
  [sym_ltalic] = sym_ltalic,
  [sym_monospace] = sym_monospace,
  [sym_highlight] = sym_highlight,
  [sym_index_term2] = sym_index_term2,
  [sym_index_term] = sym_index_term,
  [sym_term] = sym_term,
  [aux_sym_inline_repeat1] = aux_sym_inline_repeat1,
  [aux_sym_uri_label_repeat1] = aux_sym_uri_label_repeat1,
  [aux_sym_link_url_repeat1] = aux_sym_link_url_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_attr_repeat1] = aux_sym_attr_repeat1,
  [aux_sym_passthrough_repeat1] = aux_sym_passthrough_repeat1,
  [aux_sym_passthrough_repeat2] = aux_sym_passthrough_repeat2,
  [aux_sym_xref_repeat1] = aux_sym_xref_repeat1,
  [aux_sym_xref_repeat2] = aux_sym_xref_repeat2,
  [aux_sym_emphasis_repeat1] = aux_sym_emphasis_repeat1,
  [aux_sym_ltalic_repeat1] = aux_sym_ltalic_repeat1,
  [aux_sym_monospace_repeat1] = aux_sym_monospace_repeat1,
  [aux_sym_highlight_repeat1] = aux_sym_highlight_repeat1,
  [aux_sym_term_repeat1] = aux_sym_term_repeat1,
  [alias_sym_reftext] = alias_sym_reftext,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
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
  [aux_sym_uri_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_url_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_link_url_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__uri_segment] = {
    .visible = false,
    .named = true,
  },
  [sym_email] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kbd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_video] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mailto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anchor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifndef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifeval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexterm2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexterm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a2s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_barcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockdiag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bpmn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytefield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dbml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diagrams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ditaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dpic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_erd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gnuplot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_graphviz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lilypond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mermaid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomnoml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pikchr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plantuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shaape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smcat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_structurizr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_svgbob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbolator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntrax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tikz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_umlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vega] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wavedrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_target_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_footnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_footnoteref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_latexmath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asciimath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_intrinsic_attributes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [sym_super_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__character] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHkbd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHbtn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHimage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHaudio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHvideo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHicon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHpass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHlink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHmailto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHmenu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHlatexmath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHasciimath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHfootnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHfootnoteref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHanchor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHxref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHifdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHifndef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHifeval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHendif] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escaped_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_passthrough_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_passthrough_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xref_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xref_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_emphasis_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ltalic_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_monospace_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_highlight_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_term_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_element] = {
    .visible = true,
    .named = true,
  },
  [sym_autolink] = {
    .visible = true,
    .named = true,
  },
  [sym_labled_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_uri_label] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_link_url] = {
    .visible = true,
    .named = true,
  },
  [sym_id_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__footnotename] = {
    .visible = false,
    .named = true,
  },
  [sym_footnote] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__stem_attr] = {
    .visible = false,
    .named = false,
  },
  [sym__stem_name] = {
    .visible = false,
    .named = true,
  },
  [sym_stem_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_passthrough] = {
    .visible = true,
    .named = true,
  },
  [sym_intrinsic_attributes_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__fallback_token] = {
    .visible = false,
    .named = true,
  },
  [sym_escaped_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__punctuation] = {
    .visible = false,
    .named = true,
  },
  [sym_passthrough] = {
    .visible = true,
    .named = true,
  },
  [sym_xref] = {
    .visible = true,
    .named = true,
  },
  [sym_emphasis] = {
    .visible = true,
    .named = true,
  },
  [sym_ltalic] = {
    .visible = true,
    .named = true,
  },
  [sym_monospace] = {
    .visible = true,
    .named = true,
  },
  [sym_highlight] = {
    .visible = true,
    .named = true,
  },
  [sym_index_term2] = {
    .visible = true,
    .named = true,
  },
  [sym_index_term] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_inline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uri_label_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_link_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_passthrough_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_passthrough_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xref_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xref_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_emphasis_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ltalic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_monospace_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_highlight_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_reftext] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_id,
  },
  [2] = {
    [0] = sym_macro_name,
  },
  [3] = {
    [3] = sym_attr,
  },
  [4] = {
    [1] = sym_id,
    [3] = alias_sym_reftext,
  },
  [5] = {
    [0] = sym_macro_name,
    [3] = sym_attr,
  },
  [6] = {
    [4] = sym_attr,
  },
  [7] = {
    [0] = sym_macro_name,
    [4] = sym_attr,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__footnotename, 2,
    sym__footnotename,
    sym_macro_name,
  aux_sym__stem_attr, 2,
    aux_sym__stem_attr,
    sym_attr,
  sym__stem_name, 2,
    sym__stem_name,
    sym_macro_name,
  aux_sym_xref_repeat1, 2,
    aux_sym_xref_repeat1,
    sym_id,
  aux_sym_xref_repeat2, 2,
    aux_sym_xref_repeat2,
    alias_sym_reftext,
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 14,
  [73] = 11,
  [74] = 13,
  [75] = 35,
  [76] = 56,
  [77] = 18,
  [78] = 17,
  [79] = 43,
  [80] = 57,
  [81] = 42,
  [82] = 26,
  [83] = 15,
  [84] = 17,
  [85] = 37,
  [86] = 34,
  [87] = 51,
  [88] = 23,
  [89] = 38,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 90,
  [95] = 92,
  [96] = 96,
  [97] = 93,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 91,
  [103] = 103,
  [104] = 103,
  [105] = 98,
  [106] = 99,
  [107] = 101,
  [108] = 96,
  [109] = 100,
  [110] = 91,
  [111] = 103,
  [112] = 98,
  [113] = 99,
  [114] = 101,
  [115] = 90,
  [116] = 96,
  [117] = 100,
  [118] = 20,
  [119] = 21,
  [120] = 31,
  [121] = 21,
  [122] = 30,
  [123] = 30,
  [124] = 21,
  [125] = 22,
  [126] = 31,
  [127] = 31,
  [128] = 22,
  [129] = 28,
  [130] = 22,
  [131] = 29,
  [132] = 28,
  [133] = 30,
  [134] = 20,
  [135] = 19,
  [136] = 29,
  [137] = 30,
  [138] = 21,
  [139] = 22,
  [140] = 31,
  [141] = 19,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 142,
  [147] = 147,
  [148] = 147,
  [149] = 144,
  [150] = 144,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 152,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 14,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 11,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 170,
  [189] = 163,
  [190] = 190,
  [191] = 191,
  [192] = 166,
  [193] = 193,
  [194] = 190,
  [195] = 162,
  [196] = 165,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 184,
  [201] = 201,
  [202] = 172,
  [203] = 169,
  [204] = 171,
  [205] = 176,
  [206] = 177,
  [207] = 162,
  [208] = 201,
  [209] = 178,
  [210] = 179,
  [211] = 191,
  [212] = 198,
  [213] = 168,
  [214] = 190,
  [215] = 162,
  [216] = 165,
  [217] = 197,
  [218] = 218,
  [219] = 169,
  [220] = 171,
  [221] = 176,
  [222] = 177,
  [223] = 199,
  [224] = 190,
  [225] = 162,
  [226] = 165,
  [227] = 197,
  [228] = 169,
  [229] = 171,
  [230] = 176,
  [231] = 177,
  [232] = 190,
  [233] = 173,
  [234] = 165,
  [235] = 197,
  [236] = 169,
  [237] = 171,
  [238] = 176,
  [239] = 177,
  [240] = 164,
  [241] = 197,
  [242] = 13,
  [243] = 243,
  [244] = 244,
  [245] = 35,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 18,
  [251] = 251,
  [252] = 251,
  [253] = 38,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 259,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 261,
  [274] = 263,
  [275] = 261,
  [276] = 262,
  [277] = 262,
  [278] = 278,
  [279] = 34,
  [280] = 263,
  [281] = 268,
  [282] = 267,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '!', 632,
        '"', 206,
        '#', 702,
        '$', 634,
        '%', 635,
        '&', 636,
        '\'', 637,
        '(', 638,
        ')', 639,
        '*', 681,
        '+', 658,
        ',', 642,
        '-', 643,
        '.', 238,
        '/', 644,
        ':', 293,
        ';', 646,
        '<', 647,
        '=', 648,
        '>', 649,
        '?', 650,
        '@', 651,
        'W', 578,
        '[', 208,
        '\\', 652,
        ']', 209,
        '^', 653,
        '_', 688,
        '`', 695,
        'a', 323,
        'b', 546,
        'c', 547,
        'd', 325,
        'e', 565,
        'f', 320,
        'g', 566,
        'i', 557,
        'k', 556,
        'l', 552,
        'm', 548,
        'n', 554,
        'p', 549,
        'q', 571,
        'r', 558,
        's', 560,
        't', 562,
        'u', 564,
        'v', 555,
        'w', 544,
        'x', 570,
        'z', 572,
        '{', 315,
        '|', 656,
        '}', 317,
        '~', 657,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(579);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 206,
        '&', 222,
        '(', 227,
        '-', 215,
        '.', 238,
        '=', 217,
        'W', 231,
        '[', 207,
        '\\', 214,
        ']', 209,
        '`', 221,
        'w', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(211);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '?' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 206,
        '&', 222,
        '(', 227,
        '-', 215,
        '.', 224,
        '=', 217,
        'W', 231,
        '[', 207,
        '\\', 214,
        ']', 209,
        '`', 221,
        'w', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '?' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 206,
        '&', 222,
        '(', 227,
        '-', 215,
        '.', 224,
        '=', 217,
        'W', 231,
        '\\', 214,
        ']', 209,
        '`', 221,
        'w', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(213);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '?' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(200);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(642);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == ']') ADVANCE(121);
      if (lookahead == '}') ADVANCE(316);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(702);
      if (lookahead == '*') ADVANCE(681);
      if (lookahead == '\\') ADVANCE(691);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == '`') ADVANCE(695);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(702);
      if (lookahead == '*') ADVANCE(681);
      if (lookahead == '\\') ADVANCE(691);
      if (lookahead == '_') ADVANCE(654);
      if (lookahead == '`') ADVANCE(695);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(702);
      if (lookahead == '*') ADVANCE(640);
      if (lookahead == '\\') ADVANCE(684);
      if (lookahead == '_') ADVANCE(688);
      if (lookahead == '`') ADVANCE(695);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0) ADVANCE(682);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(702);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(684);
      if (lookahead == '_') ADVANCE(688);
      if (lookahead == '`') ADVANCE(695);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0) ADVANCE(682);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(633);
      if (lookahead == '\\') ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(705);
      if (lookahead != 0) ADVANCE(703);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(705);
      if (lookahead != 0) ADVANCE(703);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(708);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '$', 297,
        '&', 304,
        '(', 302,
        '+', 658,
        '-', 298,
        '.', 301,
        '=', 299,
        '[', 207,
        '\\', 295,
        '`', 300,
        'p', 303,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(665);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(668);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0) ADVANCE(667);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '&', 230,
        '(', 227,
        '-', 218,
        '.', 224,
        '=', 219,
        '\\', 229,
        ']', 209,
        '`', 220,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(313);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(712);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(710);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(642);
      if (lookahead == '\\') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(715);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(642);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(642);
      if (lookahead == '\\') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(715);
      if (lookahead != 0) ADVANCE(713);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(687);
      END_STATE();
    case 25:
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(660);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0) ADVANCE(659);
      END_STATE();
    case 26:
      if (lookahead == '+') ADVANCE(664);
      END_STATE();
    case 27:
      if (lookahead == '+') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(660);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0) ADVANCE(659);
      END_STATE();
    case 28:
      if (lookahead == ',') ADVANCE(642);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(673);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead != 0) ADVANCE(672);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '2') ADVANCE(33);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '5') ADVANCE(34);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ']') ADVANCE(240);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ']') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(37);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ']') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ']') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ']') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ';') ADVANCE(313);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(83);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(49);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(313);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == '.') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '5') ADVANCE(86);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(87);
      END_STATE();
    case 86:
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == '.') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '5') ADVANCE(91);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(89);
      END_STATE();
    case 92:
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == '.') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '5') ADVANCE(96);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == '.') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == '.') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == '.') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == '/') ADVANCE(234);
      END_STATE();
    case 100:
      if (lookahead == '/') ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(95);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 102:
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == '2') ADVANCE(85);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 103:
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == '2') ADVANCE(90);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == ';') ADVANCE(313);
      END_STATE();
    case 108:
      if (lookahead == ';') ADVANCE(196);
      END_STATE();
    case 109:
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(678);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 110:
      if (lookahead == '>') ADVANCE(680);
      END_STATE();
    case 111:
      if (lookahead == '@') ADVANCE(113);
      END_STATE();
    case 112:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 113:
      if (lookahead == '[') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 114:
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(242);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(242);
      if ((0x01 <= lookahead && lookahead <= '\t') ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x7f)) ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == '\\') ADVANCE(115);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(114);
      END_STATE();
    case 117:
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == ']') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 118:
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == ']') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 119:
      if (lookahead == '\\') ADVANCE(698);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(119);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0) ADVANCE(696);
      END_STATE();
    case 120:
      if (lookahead == '\\') ADVANCE(698);
      if (lookahead == '`') ADVANCE(655);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(120);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0) ADVANCE(696);
      END_STATE();
    case 121:
      if (lookahead == ']') ADVANCE(245);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(694);
      END_STATE();
    case 123:
      if (lookahead == '`') ADVANCE(701);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(606);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(610);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(607);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(608);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(604);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(602);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(601);
      END_STATE();
    case 155:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 161:
      if (lookahead == 'k') ADVANCE(597);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(609);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(600);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(599);
      END_STATE();
    case 194:
      if (lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 195:
      if (lookahead == 'x') ADVANCE(166);
      END_STATE();
    case 196:
      if (lookahead == '-' ||
          lookahead == '=') ADVANCE(313);
      END_STATE();
    case 197:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(197);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '.' &&
          lookahead != '[') ADVANCE(239);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 199:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 200:
      if ((0x01 <= lookahead && lookahead <= '\t') ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x7f)) ADVANCE(4);
      END_STATE();
    case 201:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '!', 632,
        '"', 206,
        '#', 702,
        '$', 634,
        '%', 635,
        '&', 636,
        '\'', 637,
        '(', 638,
        ')', 639,
        '*', 681,
        '+', 658,
        ',', 642,
        '-', 643,
        '.', 238,
        '/', 644,
        ':', 293,
        ';', 646,
        '<', 647,
        '=', 648,
        '>', 649,
        '?', 650,
        '@', 651,
        'W', 578,
        '[', 208,
        '\\', 652,
        ']', 209,
        '^', 653,
        '_', 688,
        '`', 695,
        'a', 324,
        'b', 551,
        'd', 326,
        'e', 568,
        'f', 320,
        'g', 567,
        'i', 557,
        'k', 556,
        'l', 553,
        'm', 548,
        'n', 569,
        'p', 550,
        's', 561,
        't', 563,
        'u', 564,
        'v', 559,
        'w', 545,
        'x', 570,
        '{', 315,
        '|', 656,
        '}', 317,
        '~', 657,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(579);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 202:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '!', 632,
        '"', 206,
        '#', 702,
        '$', 634,
        '%', 635,
        '&', 636,
        '\'', 637,
        '(', 638,
        ')', 639,
        '*', 681,
        '+', 658,
        ',', 642,
        '-', 643,
        '.', 238,
        '/', 644,
        ':', 645,
        ';', 646,
        '<', 647,
        '=', 648,
        '>', 649,
        '?', 650,
        '@', 651,
        'W', 578,
        '[', 208,
        '\\', 652,
        ']', 209,
        '^', 653,
        '_', 688,
        '`', 695,
        'a', 323,
        'b', 546,
        'c', 547,
        'd', 325,
        'e', 565,
        'f', 320,
        'g', 566,
        'i', 557,
        'k', 556,
        'l', 552,
        'm', 548,
        'n', 554,
        'p', 549,
        'q', 571,
        'r', 558,
        's', 560,
        't', 562,
        'u', 564,
        'v', 555,
        'w', 544,
        'x', 570,
        'z', 572,
        '{', 315,
        '|', 656,
        '}', 317,
        '~', 657,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('h' <= lookahead && lookahead <= 'y')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(579);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 203:
      if (eof) ADVANCE(204);
      ADVANCE_MAP(
        '!', 632,
        '"', 206,
        '#', 702,
        '$', 634,
        '%', 635,
        '&', 636,
        '\'', 637,
        '(', 638,
        ')', 639,
        '*', 681,
        '+', 658,
        ',', 642,
        '-', 643,
        '.', 238,
        '/', 644,
        ':', 645,
        ';', 646,
        '<', 647,
        '=', 648,
        '>', 649,
        '?', 650,
        '@', 651,
        'W', 578,
        '[', 208,
        '\\', 652,
        ']', 209,
        '^', 653,
        '_', 688,
        '`', 695,
        'a', 324,
        'b', 551,
        'd', 326,
        'e', 568,
        'f', 320,
        'g', 567,
        'i', 557,
        'k', 556,
        'l', 553,
        'm', 548,
        'n', 569,
        'p', 550,
        's', 561,
        't', 563,
        'u', 564,
        'v', 559,
        'w', 545,
        'x', 570,
        '{', 315,
        '|', 656,
        '}', 317,
        '~', 657,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(579);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(200);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(4);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '[') ADVANCE(244);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      ADVANCE_MAP(
        '"', 206,
        '&', 222,
        '(', 227,
        '-', 215,
        '.', 238,
        '=', 217,
        'W', 231,
        '[', 207,
        '\\', 214,
        '`', 221,
        'w', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(211);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '?' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < 'A' || '~' < lookahead)) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      ADVANCE_MAP(
        '"', 206,
        '&', 222,
        '(', 227,
        '-', 215,
        '.', 224,
        '=', 217,
        'W', 231,
        '[', 207,
        '\\', 214,
        '`', 221,
        'w', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '?' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < 'A' || '~' < lookahead)) ADVANCE(210);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      ADVANCE_MAP(
        '"', 206,
        '&', 222,
        '(', 227,
        '-', 215,
        '.', 224,
        '=', 217,
        'W', 231,
        '\\', 214,
        '`', 221,
        'w', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(213);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          lookahead == '?' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\\' || '~' < lookahead)) ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      ADVANCE_MAP(
        '#', 612,
        '$', 613,
        '*', 614,
        '+', 615,
        '<', 616,
        '[', 617,
        ']', 233,
        '_', 618,
        '`', 619,
        'a', 626,
        'b', 630,
        'e', 627,
        'f', 628,
        'i', 624,
        'k', 623,
        'l', 620,
        'm', 621,
        'p', 622,
        's', 631,
        'v', 625,
        'x', 629,
      );
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(611);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '&') ADVANCE(230);
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '`') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(210);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '&') ADVANCE(152);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '&') ADVANCE(150);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '\'') ADVANCE(313);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(48);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == 'C') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '\\') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(210);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == ']') ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_uri_label_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_link_url_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_link_url_token2);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_link_url_token2);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__uri_segment);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '.' &&
          lookahead != '[') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_email);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead == ']') ADVANCE(242);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(114);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACK_POUND);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_kbd);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_btn);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_audio);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_video);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_icon);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_mailto);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_anchor);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_xref);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ifdef);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_ifndef);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ifeval);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_endif);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_indexterm2);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_indexterm);
      ADVANCE_MAP(
        '.', 105,
        '2', 261,
        ':', 100,
        '@', 113,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_a2s);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_barcode);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_blockdiag);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_bpmn);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_bytefield);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_d2);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_dbml);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_diagrams);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_ditaa);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_dpic);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_erd);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_gnuplot);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_graphviz);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_lilypond);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_meme);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_mermaid);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_msc);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_nomnoml);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_pikchr);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_plantuml);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_shaape);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_smcat);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_structurizr);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_svgbob);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_symbolator);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_syntrax);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_tikz);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_umlet);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_vega);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_wavedrom);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_target_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_target_token1);
      ADVANCE_MAP(
        '#', 612,
        '$', 613,
        '*', 614,
        '+', 615,
        '<', 616,
        '[', 305,
        '_', 618,
        '`', 619,
        'a', 626,
        'b', 630,
        'e', 627,
        'f', 628,
        'i', 624,
        'k', 623,
        'l', 620,
        'm', 621,
        'p', 622,
        's', 631,
        'v', 625,
        'x', 629,
      );
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(611);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_target_token1);
      ADVANCE_MAP(
        '$', 297,
        '&', 304,
        '(', 302,
        '+', 658,
        '-', 298,
        '.', 301,
        '=', 299,
        '\\', 295,
        '`', 300,
        'p', 303,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '$') ADVANCE(665);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '&') ADVANCE(152);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '&') ADVANCE(150);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '\'') ADVANCE(313);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'C') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_target_token1);
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
      if (lookahead == '[') ADVANCE(588);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_footnote);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_footnoteref);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_latexmath);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_stem);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_asciimath);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_pass);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_replacement);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_replacement);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_intrinsic_attributes);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_intrinsic_attributes);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_super_escape);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '2', 502,
        '@', 113,
        'm', 479,
        'n', 355,
        'p', 467,
        's', 359,
        'u', 372,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '2', 502,
        '@', 113,
        'n', 355,
        's', 360,
        'u', 372,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '2', 268,
        '@', 113,
        'b', 443,
        'e', 399,
        'i', 335,
        'p', 417,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '2', 268,
        '@', 113,
        'b', 443,
        'i', 335,
        'p', 417,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'W', 574,
        'w', 575,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 291,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 271,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 457,
        'o', 363,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 495,
        'e', 440,
        'r', 528,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 486,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 535,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 481,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 402,
        't', 345,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 449,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 404,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 483,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 458,
        'u', 501,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 458,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 400,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 511,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 420,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 509,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 329,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 515,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 520,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 524,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'a', 338,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'b', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'b', 286,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'b', 332,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'b', 469,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'b', 477,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 409,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 279,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 272,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 427,
        'r', 365,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 416,
        't', 391,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 416,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 410,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 424,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 430,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 342,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 478,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'c', 519,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 414,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 273,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 246,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 278,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 276,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 418,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 382,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 499,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 422,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 395,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 415,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 380,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'd', 386,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 396,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 536,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 277,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 248,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 283,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 264,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 397,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 537,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 510,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 440,
        'r', 528,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 493,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 374,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 512,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 494,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'e', 464,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'g', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'g', 265,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'g', 353,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'g', 497,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'g', 328,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'g', 384,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'h', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'h', 310,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'h', 308,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'h', 533,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'h', 472,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'h', 488,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 541,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 435,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 542,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 398,
        's', 350,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 398,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 423,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 357,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 463,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 506,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 370,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 362,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 341,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'i', 452,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'k', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'k', 540,
        'l', 378,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'k', 540,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'k', 508,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'k', 252,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'k', 361,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'k', 375,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 539,
        'n', 428,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 269,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 280,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 282,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 521,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 393,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 344,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 475,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'l', 348,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 309,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 292,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 262,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 432,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 455,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 460,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 433,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 383,
        'n', 526,
        'r', 450,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 434,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 504,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 343,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 354,
        'n', 525,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 346,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'm', 347,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'n', 247,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'n', 266,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'n', 251,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'n', 424,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'n', 516,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'n', 371,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'n', 476,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 322,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 249,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 250,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 253,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 510,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 501,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 456,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 351,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 363,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 441,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 487,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 459,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 489,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 513,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 446,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 439,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'o', 379,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'p', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'p', 514,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'p', 408,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'p', 438,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'p', 385,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'p', 473,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'q', 529,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 255,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 281,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 287,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 285,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 389,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 365,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 419,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 442,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 518,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 413,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 336,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 333,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'r', 471,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 479,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 263,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 312,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 270,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 350,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 424,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 503,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 437,
        't', 421,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        's', 405,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 284,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 290,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 274,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 538,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 406,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 531,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 388,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 505,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 530,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 407,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 465,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 387,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 394,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 474,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        't', 498,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'u', 254,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'u', 482,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'u', 366,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'u', 461,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'u', 496,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'u', 448,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'v', 352,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'v', 411,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'v', 392,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'x', 288,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'x', 523,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'x', 453,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'y', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'y', 484,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'z', 289,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'z', 275,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        ':', 100,
        '@', 113,
        'z', 490,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'W', 576,
        'a', 534,
        'j', 318,
        'w', 327,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'W', 576,
        'a', 534,
        'w', 327,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'a', 358,
        'l', 330,
        'p', 444,
        'r', 532,
        't', 454,
        'y', 522,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'a', 491,
        'p', 479,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'a', 412,
        'e', 447,
        's', 356,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'a', 507,
        'i', 429,
        'l', 339,
        'p', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'a', 507,
        'i', 429,
        'l', 340,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'a', 492,
        'l', 470,
        'p', 444,
        't', 454,
        'y', 522,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'a', 517,
        'd', 485,
        'i', 431,
        's', 485,
        't', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'a', 517,
        'i', 431,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'b', 500,
        'o', 445,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'b', 332,
        'e', 403,
        'i', 376,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(369);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'c', 468,
        'f', 52,
        'm', 337,
        'n', 373,
        '+', 80,
        '-', 80,
        '_', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'd', 485,
        's', 485,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'e', 403,
        'i', 376,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'h', 349,
        'm', 364,
        'p', 318,
        't', 331,
        'v', 401,
        'y', 451,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'h', 349,
        'm', 364,
        't', 390,
        'v', 401,
        'y', 451,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'i', 425,
        'w', 462,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(436);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'm', 480,
        'n', 367,
        'r', 368,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'n', 527,
        'r', 334,
        't', 318,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'n', 527,
        'r', 334,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__character);
      ADVANCE_MAP(
        '.', 105,
        '@', 113,
        'n', 377,
        'r', 368,
        '+', 80,
        '-', 80,
        '_', 80,
        'f', 80,
      );
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(466);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'w') ADVANCE(500);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          (lookahead < '^' || '~' < lookahead)) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\') ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(574);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          (lookahead < '^' || '~' < lookahead)) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          (lookahead < '^' || '~' < lookahead)) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(576);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          (lookahead < '^' || '~' < lookahead)) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__character);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_' ||
          lookahead == 'f') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          (lookahead < '^' || '~' < lookahead)) ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__character);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          lookahead != '\\' &&
          (lookahead < '^' || '`' < lookahead) &&
          lookahead != 'f' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS_PLUS_PLUS);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE_BQUOTE);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_BSLASH_STAR_STAR);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_DOLLAR);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND_POUND);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_BSLASH__);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT_LT);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK_LBRACK);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(581);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_BSLASHkbd);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_BSLASHbtn);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_BSLASHimage);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_BSLASHaudio);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_BSLASHvideo);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_BSLASHicon);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_BSLASHpass);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_BSLASHlink);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_BSLASHmailto);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_BSLASHmenu);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_BSLASHstem);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_BSLASHlatexmath);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_BSLASHasciimath);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_BSLASHfootnote);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_BSLASHfootnoteref);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_BSLASHanchor);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_BSLASHxref);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_BSLASHifdef);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_BSLASHifndef);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_BSLASHifeval);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_BSLASHendif);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == '#') ADVANCE(585);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == '$') ADVANCE(584);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == '*') ADVANCE(583);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == '+') ADVANCE(589);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == '<') ADVANCE(587);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == '[') ADVANCE(588);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == '_') ADVANCE(586);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == '`') ADVANCE(582);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(666);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(709);
      if (lookahead == 'C') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(671);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      ADVANCE_MAP(
        '#', 612,
        '$', 613,
        '*', 614,
        '+', 615,
        '<', 616,
        '[', 617,
        '\\', 321,
        '_', 618,
        '`', 619,
        'a', 626,
        'b', 630,
        'e', 627,
        'f', 628,
        'i', 624,
        'k', 623,
        'l', 620,
        'm', 621,
        'p', 622,
        's', 631,
        'v', 625,
        'x', 629,
      );
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(611);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      if (lookahead == '+') ADVANCE(663);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      if (lookahead == '+') ADVANCE(662);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_passthrough_token1);
      if (lookahead == '\\') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '+') ADVANCE(659);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_BSLASH_PLUS);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS2);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(47);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_passthrough_token2);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_passthrough_token2);
      if (lookahead == '$') ADVANCE(670);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_passthrough_token2);
      if (lookahead == '\\') ADVANCE(668);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(667);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      if (lookahead == '$') ADVANCE(584);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_xref_token1);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_xref_token1);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '>') ADVANCE(676);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_xref_token1);
      if (lookahead == '\\') ADVANCE(673);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(672);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_BSLASH_GT);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_xref_token2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_xref_token2);
      if (lookahead == '>') ADVANCE(676);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_xref_token2);
      if (lookahead == '\\') ADVANCE(678);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(677);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_STAR2);
      if (lookahead == '*') ADVANCE(686);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_emphasis_token1);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_emphasis_token1);
      if (lookahead == '#') ADVANCE(702);
      if (lookahead == '\\') ADVANCE(684);
      if (lookahead == '_') ADVANCE(688);
      if (lookahead == '`') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*') ADVANCE(682);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_emphasis_token1);
      if (lookahead == '*') ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_STAR_STAR2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym__2);
      if (lookahead == '_') ADVANCE(693);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_ltalic_token1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_ltalic_token1);
      if (lookahead == '#') ADVANCE(702);
      if (lookahead == '*') ADVANCE(681);
      if (lookahead == '\\') ADVANCE(691);
      if (lookahead == '`') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(690);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '_' &&
          lookahead != '`') ADVANCE(689);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_ltalic_token1);
      if (lookahead == '_') ADVANCE(692);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BSLASH_);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym___);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym___2);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (lookahead == '`') ADVANCE(700);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_monospace_token1);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_monospace_token1);
      if (lookahead == '\\') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '`') ADVANCE(696);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_monospace_token1);
      if (lookahead == '`') ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BSLASH_BQUOTE);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE2);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_POUND2);
      if (lookahead == '#') ADVANCE(707);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_highlight_token1);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_highlight_token1);
      if (lookahead == '#') ADVANCE(706);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_highlight_token1);
      if (lookahead == '\\') ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(705);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(703);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_BSLASH_POUND);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_POUND_POUND2);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      if (lookahead == '(') ADVANCE(711);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN_LPAREN);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN_RPAREN);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_term_token1);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == ')') ADVANCE(716);
      if (lookahead == ',') ADVANCE(675);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_term_token1);
      if (lookahead == '\\') ADVANCE(714);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(713);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_BSLASH_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 203},
  [2] = {.lex_state = 203},
  [3] = {.lex_state = 203},
  [4] = {.lex_state = 203},
  [5] = {.lex_state = 201},
  [6] = {.lex_state = 201},
  [7] = {.lex_state = 201},
  [8] = {.lex_state = 201},
  [9] = {.lex_state = 201},
  [10] = {.lex_state = 201},
  [11] = {.lex_state = 203},
  [12] = {.lex_state = 202},
  [13] = {.lex_state = 203},
  [14] = {.lex_state = 203},
  [15] = {.lex_state = 203},
  [16] = {.lex_state = 203},
  [17] = {.lex_state = 203},
  [18] = {.lex_state = 203},
  [19] = {.lex_state = 203},
  [20] = {.lex_state = 203},
  [21] = {.lex_state = 203},
  [22] = {.lex_state = 203},
  [23] = {.lex_state = 203},
  [24] = {.lex_state = 203},
  [25] = {.lex_state = 203},
  [26] = {.lex_state = 203},
  [27] = {.lex_state = 203},
  [28] = {.lex_state = 203},
  [29] = {.lex_state = 203},
  [30] = {.lex_state = 203},
  [31] = {.lex_state = 203},
  [32] = {.lex_state = 203},
  [33] = {.lex_state = 203},
  [34] = {.lex_state = 203},
  [35] = {.lex_state = 203},
  [36] = {.lex_state = 203},
  [37] = {.lex_state = 203},
  [38] = {.lex_state = 203},
  [39] = {.lex_state = 203},
  [40] = {.lex_state = 203},
  [41] = {.lex_state = 203},
  [42] = {.lex_state = 203},
  [43] = {.lex_state = 203},
  [44] = {.lex_state = 203},
  [45] = {.lex_state = 203},
  [46] = {.lex_state = 203},
  [47] = {.lex_state = 203},
  [48] = {.lex_state = 203},
  [49] = {.lex_state = 203},
  [50] = {.lex_state = 203},
  [51] = {.lex_state = 203},
  [52] = {.lex_state = 203},
  [53] = {.lex_state = 203},
  [54] = {.lex_state = 203},
  [55] = {.lex_state = 203},
  [56] = {.lex_state = 203},
  [57] = {.lex_state = 203},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 28},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 28},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 20},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 119},
  [163] = {.lex_state = 25},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 118},
  [167] = {.lex_state = 28},
  [168] = {.lex_state = 25},
  [169] = {.lex_state = 120},
  [170] = {.lex_state = 27},
  [171] = {.lex_state = 119},
  [172] = {.lex_state = 119},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 117},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 117},
  [179] = {.lex_state = 117},
  [180] = {.lex_state = 118},
  [181] = {.lex_state = 109},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 118},
  [184] = {.lex_state = 117},
  [185] = {.lex_state = 117},
  [186] = {.lex_state = 117},
  [187] = {.lex_state = 117},
  [188] = {.lex_state = 27},
  [189] = {.lex_state = 25},
  [190] = {.lex_state = 120},
  [191] = {.lex_state = 117},
  [192] = {.lex_state = 117},
  [193] = {.lex_state = 109},
  [194] = {.lex_state = 120},
  [195] = {.lex_state = 119},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 11},
  [198] = {.lex_state = 27},
  [199] = {.lex_state = 25},
  [200] = {.lex_state = 118},
  [201] = {.lex_state = 117},
  [202] = {.lex_state = 120},
  [203] = {.lex_state = 120},
  [204] = {.lex_state = 119},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 119},
  [208] = {.lex_state = 117},
  [209] = {.lex_state = 117},
  [210] = {.lex_state = 117},
  [211] = {.lex_state = 117},
  [212] = {.lex_state = 27},
  [213] = {.lex_state = 27},
  [214] = {.lex_state = 120},
  [215] = {.lex_state = 119},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 117},
  [219] = {.lex_state = 120},
  [220] = {.lex_state = 119},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 25},
  [224] = {.lex_state = 120},
  [225] = {.lex_state = 119},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 120},
  [229] = {.lex_state = 119},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 11},
  [232] = {.lex_state = 120},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 11},
  [236] = {.lex_state = 120},
  [237] = {.lex_state = 119},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 15},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 109},
  [244] = {.lex_state = 117},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 109},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 21},
  [249] = {.lex_state = 21},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 21},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 197},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 197},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 197},
  [274] = {.lex_state = 197},
  [275] = {.lex_state = 197},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 197},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_link_url_token1] = ACTIONS(1),
    [aux_sym_link_url_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_email] = ACTIONS(1),
    [anon_sym_LBRACK_POUND] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_kbd] = ACTIONS(1),
    [anon_sym_btn] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_audio] = ACTIONS(1),
    [anon_sym_video] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_mailto] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_anchor] = ACTIONS(1),
    [anon_sym_xref] = ACTIONS(1),
    [anon_sym_ifdef] = ACTIONS(1),
    [anon_sym_ifndef] = ACTIONS(1),
    [anon_sym_ifeval] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_indexterm2] = ACTIONS(1),
    [anon_sym_indexterm] = ACTIONS(1),
    [anon_sym_a2s] = ACTIONS(1),
    [anon_sym_barcode] = ACTIONS(1),
    [anon_sym_blockdiag] = ACTIONS(1),
    [anon_sym_bpmn] = ACTIONS(1),
    [anon_sym_bytefield] = ACTIONS(1),
    [anon_sym_d2] = ACTIONS(1),
    [anon_sym_dbml] = ACTIONS(1),
    [anon_sym_diagrams] = ACTIONS(1),
    [anon_sym_ditaa] = ACTIONS(1),
    [anon_sym_dpic] = ACTIONS(1),
    [anon_sym_erd] = ACTIONS(1),
    [anon_sym_gnuplot] = ACTIONS(1),
    [anon_sym_graphviz] = ACTIONS(1),
    [anon_sym_lilypond] = ACTIONS(1),
    [anon_sym_meme] = ACTIONS(1),
    [anon_sym_mermaid] = ACTIONS(1),
    [anon_sym_msc] = ACTIONS(1),
    [anon_sym_nomnoml] = ACTIONS(1),
    [anon_sym_pikchr] = ACTIONS(1),
    [anon_sym_plantuml] = ACTIONS(1),
    [anon_sym_shaape] = ACTIONS(1),
    [anon_sym_smcat] = ACTIONS(1),
    [anon_sym_structurizr] = ACTIONS(1),
    [anon_sym_svgbob] = ACTIONS(1),
    [anon_sym_symbolator] = ACTIONS(1),
    [anon_sym_syntrax] = ACTIONS(1),
    [anon_sym_tikz] = ACTIONS(1),
    [anon_sym_umlet] = ACTIONS(1),
    [anon_sym_vega] = ACTIONS(1),
    [anon_sym_wavedrom] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_footnote] = ACTIONS(1),
    [anon_sym_footnoteref] = ACTIONS(1),
    [anon_sym_latexmath] = ACTIONS(1),
    [anon_sym_stem] = ACTIONS(1),
    [anon_sym_asciimath] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [sym_replacement] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_intrinsic_attributes] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [sym_super_escape] = ACTIONS(1),
    [sym__character] = ACTIONS(1),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(1),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(1),
    [anon_sym_BSLASH__] = ACTIONS(1),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_BSLASHkbd] = ACTIONS(1),
    [anon_sym_BSLASHbtn] = ACTIONS(1),
    [anon_sym_BSLASHimage] = ACTIONS(1),
    [anon_sym_BSLASHaudio] = ACTIONS(1),
    [anon_sym_BSLASHvideo] = ACTIONS(1),
    [anon_sym_BSLASHicon] = ACTIONS(1),
    [anon_sym_BSLASHpass] = ACTIONS(1),
    [anon_sym_BSLASHlink] = ACTIONS(1),
    [anon_sym_BSLASHmailto] = ACTIONS(1),
    [anon_sym_BSLASHmenu] = ACTIONS(1),
    [anon_sym_BSLASHstem] = ACTIONS(1),
    [anon_sym_BSLASHlatexmath] = ACTIONS(1),
    [anon_sym_BSLASHasciimath] = ACTIONS(1),
    [anon_sym_BSLASHfootnote] = ACTIONS(1),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(1),
    [anon_sym_BSLASHanchor] = ACTIONS(1),
    [anon_sym_BSLASHxref] = ACTIONS(1),
    [anon_sym_BSLASHifdef] = ACTIONS(1),
    [anon_sym_BSLASHifndef] = ACTIONS(1),
    [anon_sym_BSLASHifeval] = ACTIONS(1),
    [anon_sym_BSLASHendif] = ACTIONS(1),
    [aux_sym_escaped_sequence_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS2] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym__2] = ACTIONS(1),
    [anon_sym___] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_inline] = STATE(260),
    [sym_inline_element] = STATE(2),
    [sym_autolink] = STATE(36),
    [sym_labled_uri] = STATE(43),
    [sym_uri] = STATE(56),
    [sym_link_url] = STATE(18),
    [sym_id_assignment] = STATE(36),
    [sym_macro_name] = STATE(7),
    [sym_inline_macro] = STATE(36),
    [sym__footnotename] = STATE(8),
    [sym_footnote] = STATE(36),
    [sym__stem_name] = STATE(9),
    [sym_stem_macro] = STATE(36),
    [sym_macro_passthrough] = STATE(36),
    [sym_intrinsic_attributes_pair] = STATE(36),
    [sym_word] = STATE(36),
    [sym__fallback_token] = STATE(16),
    [sym_escaped_sequence] = STATE(16),
    [sym__punctuation] = STATE(36),
    [sym_passthrough] = STATE(36),
    [sym_xref] = STATE(36),
    [sym_emphasis] = STATE(36),
    [sym_ltalic] = STATE(36),
    [sym_monospace] = STATE(36),
    [sym_highlight] = STATE(36),
    [sym_index_term2] = STATE(36),
    [sym_index_term] = STATE(36),
    [aux_sym_inline_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(9),
    [aux_sym_link_url_token1] = ACTIONS(11),
    [aux_sym_link_url_token2] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_email] = ACTIONS(13),
    [anon_sym_LBRACK_POUND] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [anon_sym_kbd] = ACTIONS(19),
    [anon_sym_btn] = ACTIONS(19),
    [anon_sym_image] = ACTIONS(19),
    [anon_sym_audio] = ACTIONS(19),
    [anon_sym_video] = ACTIONS(19),
    [anon_sym_icon] = ACTIONS(19),
    [anon_sym_link] = ACTIONS(19),
    [anon_sym_mailto] = ACTIONS(19),
    [anon_sym_menu] = ACTIONS(19),
    [anon_sym_anchor] = ACTIONS(19),
    [anon_sym_xref] = ACTIONS(19),
    [anon_sym_ifdef] = ACTIONS(19),
    [anon_sym_ifndef] = ACTIONS(19),
    [anon_sym_ifeval] = ACTIONS(19),
    [anon_sym_endif] = ACTIONS(19),
    [anon_sym_indexterm2] = ACTIONS(19),
    [anon_sym_indexterm] = ACTIONS(19),
    [anon_sym_a2s] = ACTIONS(19),
    [anon_sym_barcode] = ACTIONS(19),
    [anon_sym_blockdiag] = ACTIONS(19),
    [anon_sym_bpmn] = ACTIONS(19),
    [anon_sym_bytefield] = ACTIONS(19),
    [anon_sym_d2] = ACTIONS(19),
    [anon_sym_dbml] = ACTIONS(19),
    [anon_sym_diagrams] = ACTIONS(19),
    [anon_sym_ditaa] = ACTIONS(19),
    [anon_sym_dpic] = ACTIONS(19),
    [anon_sym_erd] = ACTIONS(19),
    [anon_sym_gnuplot] = ACTIONS(19),
    [anon_sym_graphviz] = ACTIONS(19),
    [anon_sym_lilypond] = ACTIONS(19),
    [anon_sym_meme] = ACTIONS(19),
    [anon_sym_mermaid] = ACTIONS(19),
    [anon_sym_msc] = ACTIONS(19),
    [anon_sym_nomnoml] = ACTIONS(19),
    [anon_sym_pikchr] = ACTIONS(19),
    [anon_sym_plantuml] = ACTIONS(19),
    [anon_sym_shaape] = ACTIONS(19),
    [anon_sym_smcat] = ACTIONS(19),
    [anon_sym_structurizr] = ACTIONS(19),
    [anon_sym_svgbob] = ACTIONS(19),
    [anon_sym_symbolator] = ACTIONS(19),
    [anon_sym_syntrax] = ACTIONS(19),
    [anon_sym_tikz] = ACTIONS(19),
    [anon_sym_umlet] = ACTIONS(19),
    [anon_sym_vega] = ACTIONS(19),
    [anon_sym_wavedrom] = ACTIONS(19),
    [anon_sym_footnote] = ACTIONS(21),
    [anon_sym_footnoteref] = ACTIONS(21),
    [anon_sym_latexmath] = ACTIONS(23),
    [anon_sym_stem] = ACTIONS(23),
    [anon_sym_asciimath] = ACTIONS(23),
    [anon_sym_pass] = ACTIONS(25),
    [sym_replacement] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_f] = ACTIONS(29),
    [sym_super_escape] = ACTIONS(31),
    [sym__character] = ACTIONS(29),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(33),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(33),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(33),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(33),
    [anon_sym_BSLASH__] = ACTIONS(33),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(33),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(33),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_BSLASHkbd] = ACTIONS(33),
    [anon_sym_BSLASHbtn] = ACTIONS(33),
    [anon_sym_BSLASHimage] = ACTIONS(33),
    [anon_sym_BSLASHaudio] = ACTIONS(33),
    [anon_sym_BSLASHvideo] = ACTIONS(33),
    [anon_sym_BSLASHicon] = ACTIONS(33),
    [anon_sym_BSLASHpass] = ACTIONS(33),
    [anon_sym_BSLASHlink] = ACTIONS(33),
    [anon_sym_BSLASHmailto] = ACTIONS(33),
    [anon_sym_BSLASHmenu] = ACTIONS(33),
    [anon_sym_BSLASHstem] = ACTIONS(33),
    [anon_sym_BSLASHlatexmath] = ACTIONS(33),
    [anon_sym_BSLASHasciimath] = ACTIONS(33),
    [anon_sym_BSLASHfootnote] = ACTIONS(35),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(33),
    [anon_sym_BSLASHanchor] = ACTIONS(33),
    [anon_sym_BSLASHxref] = ACTIONS(33),
    [anon_sym_BSLASHifdef] = ACTIONS(33),
    [anon_sym_BSLASHifndef] = ACTIONS(33),
    [anon_sym_BSLASHifeval] = ACTIONS(33),
    [anon_sym_BSLASHendif] = ACTIONS(33),
    [aux_sym_escaped_sequence_token1] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_COLON2] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_PLUS2] = ACTIONS(37),
    [anon_sym_PLUS_PLUS] = ACTIONS(39),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_STAR2] = ACTIONS(45),
    [anon_sym_STAR_STAR] = ACTIONS(47),
    [anon_sym__2] = ACTIONS(49),
    [anon_sym___] = ACTIONS(51),
    [anon_sym_BQUOTE2] = ACTIONS(53),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(55),
    [anon_sym_POUND2] = ACTIONS(57),
    [anon_sym_POUND_POUND] = ACTIONS(59),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(61),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(63),
  },
  [2] = {
    [sym_inline_element] = STATE(3),
    [sym_autolink] = STATE(36),
    [sym_labled_uri] = STATE(43),
    [sym_uri] = STATE(56),
    [sym_link_url] = STATE(18),
    [sym_id_assignment] = STATE(36),
    [sym_macro_name] = STATE(7),
    [sym_inline_macro] = STATE(36),
    [sym__footnotename] = STATE(8),
    [sym_footnote] = STATE(36),
    [sym__stem_name] = STATE(9),
    [sym_stem_macro] = STATE(36),
    [sym_macro_passthrough] = STATE(36),
    [sym_intrinsic_attributes_pair] = STATE(36),
    [sym_word] = STATE(36),
    [sym__fallback_token] = STATE(16),
    [sym_escaped_sequence] = STATE(16),
    [sym__punctuation] = STATE(36),
    [sym_passthrough] = STATE(36),
    [sym_xref] = STATE(36),
    [sym_emphasis] = STATE(36),
    [sym_ltalic] = STATE(36),
    [sym_monospace] = STATE(36),
    [sym_highlight] = STATE(36),
    [sym_index_term2] = STATE(36),
    [sym_index_term] = STATE(36),
    [aux_sym_inline_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(9),
    [aux_sym_link_url_token1] = ACTIONS(11),
    [aux_sym_link_url_token2] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(7),
    [sym_email] = ACTIONS(13),
    [anon_sym_LBRACK_POUND] = ACTIONS(15),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(17),
    [anon_sym_kbd] = ACTIONS(19),
    [anon_sym_btn] = ACTIONS(19),
    [anon_sym_image] = ACTIONS(19),
    [anon_sym_audio] = ACTIONS(19),
    [anon_sym_video] = ACTIONS(19),
    [anon_sym_icon] = ACTIONS(19),
    [anon_sym_link] = ACTIONS(19),
    [anon_sym_mailto] = ACTIONS(19),
    [anon_sym_menu] = ACTIONS(19),
    [anon_sym_anchor] = ACTIONS(19),
    [anon_sym_xref] = ACTIONS(19),
    [anon_sym_ifdef] = ACTIONS(19),
    [anon_sym_ifndef] = ACTIONS(19),
    [anon_sym_ifeval] = ACTIONS(19),
    [anon_sym_endif] = ACTIONS(19),
    [anon_sym_indexterm2] = ACTIONS(19),
    [anon_sym_indexterm] = ACTIONS(19),
    [anon_sym_a2s] = ACTIONS(19),
    [anon_sym_barcode] = ACTIONS(19),
    [anon_sym_blockdiag] = ACTIONS(19),
    [anon_sym_bpmn] = ACTIONS(19),
    [anon_sym_bytefield] = ACTIONS(19),
    [anon_sym_d2] = ACTIONS(19),
    [anon_sym_dbml] = ACTIONS(19),
    [anon_sym_diagrams] = ACTIONS(19),
    [anon_sym_ditaa] = ACTIONS(19),
    [anon_sym_dpic] = ACTIONS(19),
    [anon_sym_erd] = ACTIONS(19),
    [anon_sym_gnuplot] = ACTIONS(19),
    [anon_sym_graphviz] = ACTIONS(19),
    [anon_sym_lilypond] = ACTIONS(19),
    [anon_sym_meme] = ACTIONS(19),
    [anon_sym_mermaid] = ACTIONS(19),
    [anon_sym_msc] = ACTIONS(19),
    [anon_sym_nomnoml] = ACTIONS(19),
    [anon_sym_pikchr] = ACTIONS(19),
    [anon_sym_plantuml] = ACTIONS(19),
    [anon_sym_shaape] = ACTIONS(19),
    [anon_sym_smcat] = ACTIONS(19),
    [anon_sym_structurizr] = ACTIONS(19),
    [anon_sym_svgbob] = ACTIONS(19),
    [anon_sym_symbolator] = ACTIONS(19),
    [anon_sym_syntrax] = ACTIONS(19),
    [anon_sym_tikz] = ACTIONS(19),
    [anon_sym_umlet] = ACTIONS(19),
    [anon_sym_vega] = ACTIONS(19),
    [anon_sym_wavedrom] = ACTIONS(19),
    [anon_sym_footnote] = ACTIONS(21),
    [anon_sym_footnoteref] = ACTIONS(21),
    [anon_sym_latexmath] = ACTIONS(23),
    [anon_sym_stem] = ACTIONS(23),
    [anon_sym_asciimath] = ACTIONS(23),
    [anon_sym_pass] = ACTIONS(25),
    [sym_replacement] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_f] = ACTIONS(29),
    [sym_super_escape] = ACTIONS(31),
    [sym__character] = ACTIONS(29),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(33),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(33),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(33),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(33),
    [anon_sym_BSLASH__] = ACTIONS(33),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(33),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(33),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_BSLASHkbd] = ACTIONS(33),
    [anon_sym_BSLASHbtn] = ACTIONS(33),
    [anon_sym_BSLASHimage] = ACTIONS(33),
    [anon_sym_BSLASHaudio] = ACTIONS(33),
    [anon_sym_BSLASHvideo] = ACTIONS(33),
    [anon_sym_BSLASHicon] = ACTIONS(33),
    [anon_sym_BSLASHpass] = ACTIONS(33),
    [anon_sym_BSLASHlink] = ACTIONS(33),
    [anon_sym_BSLASHmailto] = ACTIONS(33),
    [anon_sym_BSLASHmenu] = ACTIONS(33),
    [anon_sym_BSLASHstem] = ACTIONS(33),
    [anon_sym_BSLASHlatexmath] = ACTIONS(33),
    [anon_sym_BSLASHasciimath] = ACTIONS(33),
    [anon_sym_BSLASHfootnote] = ACTIONS(35),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(33),
    [anon_sym_BSLASHanchor] = ACTIONS(33),
    [anon_sym_BSLASHxref] = ACTIONS(33),
    [anon_sym_BSLASHifdef] = ACTIONS(33),
    [anon_sym_BSLASHifndef] = ACTIONS(33),
    [anon_sym_BSLASHifeval] = ACTIONS(33),
    [anon_sym_BSLASHendif] = ACTIONS(33),
    [aux_sym_escaped_sequence_token1] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_COLON2] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_CARET] = ACTIONS(7),
    [anon_sym__] = ACTIONS(7),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_TILDE] = ACTIONS(7),
    [anon_sym_PLUS2] = ACTIONS(37),
    [anon_sym_PLUS_PLUS] = ACTIONS(39),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_STAR2] = ACTIONS(45),
    [anon_sym_STAR_STAR] = ACTIONS(47),
    [anon_sym__2] = ACTIONS(49),
    [anon_sym___] = ACTIONS(51),
    [anon_sym_BQUOTE2] = ACTIONS(53),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(55),
    [anon_sym_POUND2] = ACTIONS(57),
    [anon_sym_POUND_POUND] = ACTIONS(59),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(61),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(63),
  },
  [3] = {
    [sym_inline_element] = STATE(3),
    [sym_autolink] = STATE(36),
    [sym_labled_uri] = STATE(43),
    [sym_uri] = STATE(56),
    [sym_link_url] = STATE(18),
    [sym_id_assignment] = STATE(36),
    [sym_macro_name] = STATE(7),
    [sym_inline_macro] = STATE(36),
    [sym__footnotename] = STATE(8),
    [sym_footnote] = STATE(36),
    [sym__stem_name] = STATE(9),
    [sym_stem_macro] = STATE(36),
    [sym_macro_passthrough] = STATE(36),
    [sym_intrinsic_attributes_pair] = STATE(36),
    [sym_word] = STATE(36),
    [sym__fallback_token] = STATE(16),
    [sym_escaped_sequence] = STATE(16),
    [sym__punctuation] = STATE(36),
    [sym_passthrough] = STATE(36),
    [sym_xref] = STATE(36),
    [sym_emphasis] = STATE(36),
    [sym_ltalic] = STATE(36),
    [sym_monospace] = STATE(36),
    [sym_highlight] = STATE(36),
    [sym_index_term2] = STATE(36),
    [sym_index_term] = STATE(36),
    [aux_sym_inline_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(75),
    [aux_sym_link_url_token1] = ACTIONS(78),
    [aux_sym_link_url_token2] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(72),
    [sym_email] = ACTIONS(81),
    [anon_sym_LBRACK_POUND] = ACTIONS(84),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_kbd] = ACTIONS(90),
    [anon_sym_btn] = ACTIONS(90),
    [anon_sym_image] = ACTIONS(90),
    [anon_sym_audio] = ACTIONS(90),
    [anon_sym_video] = ACTIONS(90),
    [anon_sym_icon] = ACTIONS(90),
    [anon_sym_link] = ACTIONS(90),
    [anon_sym_mailto] = ACTIONS(90),
    [anon_sym_menu] = ACTIONS(90),
    [anon_sym_anchor] = ACTIONS(90),
    [anon_sym_xref] = ACTIONS(90),
    [anon_sym_ifdef] = ACTIONS(90),
    [anon_sym_ifndef] = ACTIONS(90),
    [anon_sym_ifeval] = ACTIONS(90),
    [anon_sym_endif] = ACTIONS(90),
    [anon_sym_indexterm2] = ACTIONS(90),
    [anon_sym_indexterm] = ACTIONS(90),
    [anon_sym_a2s] = ACTIONS(90),
    [anon_sym_barcode] = ACTIONS(90),
    [anon_sym_blockdiag] = ACTIONS(90),
    [anon_sym_bpmn] = ACTIONS(90),
    [anon_sym_bytefield] = ACTIONS(90),
    [anon_sym_d2] = ACTIONS(90),
    [anon_sym_dbml] = ACTIONS(90),
    [anon_sym_diagrams] = ACTIONS(90),
    [anon_sym_ditaa] = ACTIONS(90),
    [anon_sym_dpic] = ACTIONS(90),
    [anon_sym_erd] = ACTIONS(90),
    [anon_sym_gnuplot] = ACTIONS(90),
    [anon_sym_graphviz] = ACTIONS(90),
    [anon_sym_lilypond] = ACTIONS(90),
    [anon_sym_meme] = ACTIONS(90),
    [anon_sym_mermaid] = ACTIONS(90),
    [anon_sym_msc] = ACTIONS(90),
    [anon_sym_nomnoml] = ACTIONS(90),
    [anon_sym_pikchr] = ACTIONS(90),
    [anon_sym_plantuml] = ACTIONS(90),
    [anon_sym_shaape] = ACTIONS(90),
    [anon_sym_smcat] = ACTIONS(90),
    [anon_sym_structurizr] = ACTIONS(90),
    [anon_sym_svgbob] = ACTIONS(90),
    [anon_sym_symbolator] = ACTIONS(90),
    [anon_sym_syntrax] = ACTIONS(90),
    [anon_sym_tikz] = ACTIONS(90),
    [anon_sym_umlet] = ACTIONS(90),
    [anon_sym_vega] = ACTIONS(90),
    [anon_sym_wavedrom] = ACTIONS(90),
    [anon_sym_footnote] = ACTIONS(93),
    [anon_sym_footnoteref] = ACTIONS(93),
    [anon_sym_latexmath] = ACTIONS(96),
    [anon_sym_stem] = ACTIONS(96),
    [anon_sym_asciimath] = ACTIONS(96),
    [anon_sym_pass] = ACTIONS(99),
    [sym_replacement] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_f] = ACTIONS(105),
    [sym_super_escape] = ACTIONS(108),
    [sym__character] = ACTIONS(105),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(111),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(111),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(111),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(111),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(111),
    [anon_sym_BSLASH__] = ACTIONS(111),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(111),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(111),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_BSLASHkbd] = ACTIONS(111),
    [anon_sym_BSLASHbtn] = ACTIONS(111),
    [anon_sym_BSLASHimage] = ACTIONS(111),
    [anon_sym_BSLASHaudio] = ACTIONS(111),
    [anon_sym_BSLASHvideo] = ACTIONS(111),
    [anon_sym_BSLASHicon] = ACTIONS(111),
    [anon_sym_BSLASHpass] = ACTIONS(111),
    [anon_sym_BSLASHlink] = ACTIONS(111),
    [anon_sym_BSLASHmailto] = ACTIONS(111),
    [anon_sym_BSLASHmenu] = ACTIONS(111),
    [anon_sym_BSLASHstem] = ACTIONS(111),
    [anon_sym_BSLASHlatexmath] = ACTIONS(111),
    [anon_sym_BSLASHasciimath] = ACTIONS(111),
    [anon_sym_BSLASHfootnote] = ACTIONS(114),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(111),
    [anon_sym_BSLASHanchor] = ACTIONS(111),
    [anon_sym_BSLASHxref] = ACTIONS(111),
    [anon_sym_BSLASHifdef] = ACTIONS(111),
    [anon_sym_BSLASHifndef] = ACTIONS(111),
    [anon_sym_BSLASHifeval] = ACTIONS(111),
    [anon_sym_BSLASHendif] = ACTIONS(111),
    [aux_sym_escaped_sequence_token1] = ACTIONS(114),
    [anon_sym_BANG] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_COLON2] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(72),
    [anon_sym_CARET] = ACTIONS(72),
    [anon_sym__] = ACTIONS(72),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_TILDE] = ACTIONS(72),
    [anon_sym_PLUS2] = ACTIONS(117),
    [anon_sym_PLUS_PLUS] = ACTIONS(120),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(123),
    [anon_sym_LT_LT] = ACTIONS(126),
    [anon_sym_STAR2] = ACTIONS(129),
    [anon_sym_STAR_STAR] = ACTIONS(132),
    [anon_sym__2] = ACTIONS(135),
    [anon_sym___] = ACTIONS(138),
    [anon_sym_BQUOTE2] = ACTIONS(141),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(144),
    [anon_sym_POUND2] = ACTIONS(147),
    [anon_sym_POUND_POUND] = ACTIONS(150),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(153),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(156),
  },
  [4] = {
    [sym_labled_uri] = STATE(264),
    [sym_uri] = STATE(252),
    [sym_link_url] = STATE(250),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(159),
    [aux_sym_link_url_token1] = ACTIONS(163),
    [aux_sym_link_url_token2] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(161),
    [sym_email] = ACTIONS(165),
    [anon_sym_LBRACK_POUND] = ACTIONS(159),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(159),
    [anon_sym_kbd] = ACTIONS(161),
    [anon_sym_btn] = ACTIONS(161),
    [anon_sym_image] = ACTIONS(161),
    [anon_sym_audio] = ACTIONS(161),
    [anon_sym_video] = ACTIONS(161),
    [anon_sym_icon] = ACTIONS(161),
    [anon_sym_link] = ACTIONS(161),
    [anon_sym_mailto] = ACTIONS(161),
    [anon_sym_menu] = ACTIONS(161),
    [anon_sym_anchor] = ACTIONS(161),
    [anon_sym_xref] = ACTIONS(161),
    [anon_sym_ifdef] = ACTIONS(161),
    [anon_sym_ifndef] = ACTIONS(161),
    [anon_sym_ifeval] = ACTIONS(161),
    [anon_sym_endif] = ACTIONS(161),
    [anon_sym_indexterm2] = ACTIONS(161),
    [anon_sym_indexterm] = ACTIONS(161),
    [anon_sym_a2s] = ACTIONS(161),
    [anon_sym_barcode] = ACTIONS(161),
    [anon_sym_blockdiag] = ACTIONS(161),
    [anon_sym_bpmn] = ACTIONS(161),
    [anon_sym_bytefield] = ACTIONS(161),
    [anon_sym_d2] = ACTIONS(161),
    [anon_sym_dbml] = ACTIONS(161),
    [anon_sym_diagrams] = ACTIONS(161),
    [anon_sym_ditaa] = ACTIONS(161),
    [anon_sym_dpic] = ACTIONS(161),
    [anon_sym_erd] = ACTIONS(161),
    [anon_sym_gnuplot] = ACTIONS(161),
    [anon_sym_graphviz] = ACTIONS(161),
    [anon_sym_lilypond] = ACTIONS(161),
    [anon_sym_meme] = ACTIONS(161),
    [anon_sym_mermaid] = ACTIONS(161),
    [anon_sym_msc] = ACTIONS(161),
    [anon_sym_nomnoml] = ACTIONS(161),
    [anon_sym_pikchr] = ACTIONS(161),
    [anon_sym_plantuml] = ACTIONS(161),
    [anon_sym_shaape] = ACTIONS(161),
    [anon_sym_smcat] = ACTIONS(161),
    [anon_sym_structurizr] = ACTIONS(161),
    [anon_sym_svgbob] = ACTIONS(161),
    [anon_sym_symbolator] = ACTIONS(161),
    [anon_sym_syntrax] = ACTIONS(161),
    [anon_sym_tikz] = ACTIONS(161),
    [anon_sym_umlet] = ACTIONS(161),
    [anon_sym_vega] = ACTIONS(161),
    [anon_sym_wavedrom] = ACTIONS(161),
    [anon_sym_footnote] = ACTIONS(161),
    [anon_sym_footnoteref] = ACTIONS(161),
    [anon_sym_latexmath] = ACTIONS(161),
    [anon_sym_stem] = ACTIONS(161),
    [anon_sym_asciimath] = ACTIONS(161),
    [anon_sym_pass] = ACTIONS(161),
    [sym_replacement] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_f] = ACTIONS(161),
    [sym_super_escape] = ACTIONS(159),
    [sym__character] = ACTIONS(161),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(159),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(159),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(159),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(159),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(159),
    [anon_sym_BSLASH__] = ACTIONS(159),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(159),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(159),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(161),
    [anon_sym_BSLASHkbd] = ACTIONS(159),
    [anon_sym_BSLASHbtn] = ACTIONS(159),
    [anon_sym_BSLASHimage] = ACTIONS(159),
    [anon_sym_BSLASHaudio] = ACTIONS(159),
    [anon_sym_BSLASHvideo] = ACTIONS(159),
    [anon_sym_BSLASHicon] = ACTIONS(159),
    [anon_sym_BSLASHpass] = ACTIONS(159),
    [anon_sym_BSLASHlink] = ACTIONS(159),
    [anon_sym_BSLASHmailto] = ACTIONS(159),
    [anon_sym_BSLASHmenu] = ACTIONS(159),
    [anon_sym_BSLASHstem] = ACTIONS(159),
    [anon_sym_BSLASHlatexmath] = ACTIONS(159),
    [anon_sym_BSLASHasciimath] = ACTIONS(159),
    [anon_sym_BSLASHfootnote] = ACTIONS(161),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(159),
    [anon_sym_BSLASHanchor] = ACTIONS(159),
    [anon_sym_BSLASHxref] = ACTIONS(159),
    [anon_sym_BSLASHifdef] = ACTIONS(159),
    [anon_sym_BSLASHifndef] = ACTIONS(159),
    [anon_sym_BSLASHifeval] = ACTIONS(159),
    [anon_sym_BSLASHendif] = ACTIONS(159),
    [aux_sym_escaped_sequence_token1] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_COLON2] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_QMARK] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [anon_sym_BSLASH] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(161),
    [anon_sym__] = ACTIONS(161),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_PLUS2] = ACTIONS(161),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(161),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_STAR2] = ACTIONS(161),
    [anon_sym_STAR_STAR] = ACTIONS(159),
    [anon_sym__2] = ACTIONS(161),
    [anon_sym___] = ACTIONS(159),
    [anon_sym_BQUOTE2] = ACTIONS(161),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(159),
    [anon_sym_POUND2] = ACTIONS(161),
    [anon_sym_POUND_POUND] = ACTIONS(159),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(161),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(159),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(167),
    [aux_sym_link_url_token1] = ACTIONS(169),
    [aux_sym_link_url_token2] = ACTIONS(169),
    [anon_sym_DOT] = ACTIONS(169),
    [sym_email] = ACTIONS(169),
    [anon_sym_LBRACK_POUND] = ACTIONS(167),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(167),
    [anon_sym_kbd] = ACTIONS(169),
    [anon_sym_btn] = ACTIONS(169),
    [anon_sym_image] = ACTIONS(169),
    [anon_sym_audio] = ACTIONS(169),
    [anon_sym_video] = ACTIONS(169),
    [anon_sym_icon] = ACTIONS(169),
    [anon_sym_link] = ACTIONS(169),
    [anon_sym_mailto] = ACTIONS(169),
    [anon_sym_menu] = ACTIONS(169),
    [anon_sym_anchor] = ACTIONS(169),
    [anon_sym_xref] = ACTIONS(169),
    [anon_sym_ifdef] = ACTIONS(169),
    [anon_sym_ifndef] = ACTIONS(169),
    [anon_sym_ifeval] = ACTIONS(169),
    [anon_sym_endif] = ACTIONS(169),
    [anon_sym_indexterm2] = ACTIONS(169),
    [anon_sym_indexterm] = ACTIONS(169),
    [anon_sym_a2s] = ACTIONS(169),
    [anon_sym_barcode] = ACTIONS(169),
    [anon_sym_blockdiag] = ACTIONS(169),
    [anon_sym_bpmn] = ACTIONS(169),
    [anon_sym_bytefield] = ACTIONS(169),
    [anon_sym_d2] = ACTIONS(169),
    [anon_sym_dbml] = ACTIONS(169),
    [anon_sym_diagrams] = ACTIONS(169),
    [anon_sym_ditaa] = ACTIONS(169),
    [anon_sym_dpic] = ACTIONS(169),
    [anon_sym_erd] = ACTIONS(169),
    [anon_sym_gnuplot] = ACTIONS(169),
    [anon_sym_graphviz] = ACTIONS(169),
    [anon_sym_lilypond] = ACTIONS(169),
    [anon_sym_meme] = ACTIONS(169),
    [anon_sym_mermaid] = ACTIONS(169),
    [anon_sym_msc] = ACTIONS(169),
    [anon_sym_nomnoml] = ACTIONS(169),
    [anon_sym_pikchr] = ACTIONS(169),
    [anon_sym_plantuml] = ACTIONS(169),
    [anon_sym_shaape] = ACTIONS(169),
    [anon_sym_smcat] = ACTIONS(169),
    [anon_sym_structurizr] = ACTIONS(169),
    [anon_sym_svgbob] = ACTIONS(169),
    [anon_sym_symbolator] = ACTIONS(169),
    [anon_sym_syntrax] = ACTIONS(169),
    [anon_sym_tikz] = ACTIONS(169),
    [anon_sym_umlet] = ACTIONS(169),
    [anon_sym_vega] = ACTIONS(169),
    [anon_sym_wavedrom] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_footnote] = ACTIONS(169),
    [anon_sym_footnoteref] = ACTIONS(169),
    [anon_sym_latexmath] = ACTIONS(169),
    [anon_sym_stem] = ACTIONS(169),
    [anon_sym_asciimath] = ACTIONS(169),
    [anon_sym_pass] = ACTIONS(169),
    [sym_replacement] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_f] = ACTIONS(169),
    [sym_super_escape] = ACTIONS(167),
    [sym__character] = ACTIONS(169),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(167),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(167),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(167),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(167),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(167),
    [anon_sym_BSLASH__] = ACTIONS(167),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(167),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(167),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(169),
    [anon_sym_BSLASHkbd] = ACTIONS(167),
    [anon_sym_BSLASHbtn] = ACTIONS(167),
    [anon_sym_BSLASHimage] = ACTIONS(167),
    [anon_sym_BSLASHaudio] = ACTIONS(167),
    [anon_sym_BSLASHvideo] = ACTIONS(167),
    [anon_sym_BSLASHicon] = ACTIONS(167),
    [anon_sym_BSLASHpass] = ACTIONS(167),
    [anon_sym_BSLASHlink] = ACTIONS(167),
    [anon_sym_BSLASHmailto] = ACTIONS(167),
    [anon_sym_BSLASHmenu] = ACTIONS(167),
    [anon_sym_BSLASHstem] = ACTIONS(167),
    [anon_sym_BSLASHlatexmath] = ACTIONS(167),
    [anon_sym_BSLASHasciimath] = ACTIONS(167),
    [anon_sym_BSLASHfootnote] = ACTIONS(169),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(167),
    [anon_sym_BSLASHanchor] = ACTIONS(167),
    [anon_sym_BSLASHxref] = ACTIONS(167),
    [anon_sym_BSLASHifdef] = ACTIONS(167),
    [anon_sym_BSLASHifndef] = ACTIONS(167),
    [anon_sym_BSLASHifeval] = ACTIONS(167),
    [anon_sym_BSLASHendif] = ACTIONS(167),
    [aux_sym_escaped_sequence_token1] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_AMP] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_COLON2] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_BSLASH] = ACTIONS(169),
    [anon_sym_CARET] = ACTIONS(169),
    [anon_sym__] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_PLUS2] = ACTIONS(169),
    [anon_sym_PLUS_PLUS] = ACTIONS(167),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_STAR2] = ACTIONS(169),
    [anon_sym_STAR_STAR] = ACTIONS(167),
    [anon_sym__2] = ACTIONS(169),
    [anon_sym___] = ACTIONS(167),
    [anon_sym_BQUOTE2] = ACTIONS(169),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(167),
    [anon_sym_POUND2] = ACTIONS(169),
    [anon_sym_POUND_POUND] = ACTIONS(167),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(169),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(167),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(171),
    [aux_sym_link_url_token1] = ACTIONS(173),
    [aux_sym_link_url_token2] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_email] = ACTIONS(173),
    [anon_sym_LBRACK_POUND] = ACTIONS(171),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(171),
    [anon_sym_kbd] = ACTIONS(173),
    [anon_sym_btn] = ACTIONS(173),
    [anon_sym_image] = ACTIONS(173),
    [anon_sym_audio] = ACTIONS(173),
    [anon_sym_video] = ACTIONS(173),
    [anon_sym_icon] = ACTIONS(173),
    [anon_sym_link] = ACTIONS(173),
    [anon_sym_mailto] = ACTIONS(173),
    [anon_sym_menu] = ACTIONS(173),
    [anon_sym_anchor] = ACTIONS(173),
    [anon_sym_xref] = ACTIONS(173),
    [anon_sym_ifdef] = ACTIONS(173),
    [anon_sym_ifndef] = ACTIONS(173),
    [anon_sym_ifeval] = ACTIONS(173),
    [anon_sym_endif] = ACTIONS(173),
    [anon_sym_indexterm2] = ACTIONS(173),
    [anon_sym_indexterm] = ACTIONS(173),
    [anon_sym_a2s] = ACTIONS(173),
    [anon_sym_barcode] = ACTIONS(173),
    [anon_sym_blockdiag] = ACTIONS(173),
    [anon_sym_bpmn] = ACTIONS(173),
    [anon_sym_bytefield] = ACTIONS(173),
    [anon_sym_d2] = ACTIONS(173),
    [anon_sym_dbml] = ACTIONS(173),
    [anon_sym_diagrams] = ACTIONS(173),
    [anon_sym_ditaa] = ACTIONS(173),
    [anon_sym_dpic] = ACTIONS(173),
    [anon_sym_erd] = ACTIONS(173),
    [anon_sym_gnuplot] = ACTIONS(173),
    [anon_sym_graphviz] = ACTIONS(173),
    [anon_sym_lilypond] = ACTIONS(173),
    [anon_sym_meme] = ACTIONS(173),
    [anon_sym_mermaid] = ACTIONS(173),
    [anon_sym_msc] = ACTIONS(173),
    [anon_sym_nomnoml] = ACTIONS(173),
    [anon_sym_pikchr] = ACTIONS(173),
    [anon_sym_plantuml] = ACTIONS(173),
    [anon_sym_shaape] = ACTIONS(173),
    [anon_sym_smcat] = ACTIONS(173),
    [anon_sym_structurizr] = ACTIONS(173),
    [anon_sym_svgbob] = ACTIONS(173),
    [anon_sym_symbolator] = ACTIONS(173),
    [anon_sym_syntrax] = ACTIONS(173),
    [anon_sym_tikz] = ACTIONS(173),
    [anon_sym_umlet] = ACTIONS(173),
    [anon_sym_vega] = ACTIONS(173),
    [anon_sym_wavedrom] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_footnote] = ACTIONS(173),
    [anon_sym_footnoteref] = ACTIONS(173),
    [anon_sym_latexmath] = ACTIONS(173),
    [anon_sym_stem] = ACTIONS(173),
    [anon_sym_asciimath] = ACTIONS(173),
    [anon_sym_pass] = ACTIONS(173),
    [sym_replacement] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_f] = ACTIONS(173),
    [sym_super_escape] = ACTIONS(171),
    [sym__character] = ACTIONS(173),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(171),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(171),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(171),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(171),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(171),
    [anon_sym_BSLASH__] = ACTIONS(171),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(171),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(171),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_BSLASHkbd] = ACTIONS(171),
    [anon_sym_BSLASHbtn] = ACTIONS(171),
    [anon_sym_BSLASHimage] = ACTIONS(171),
    [anon_sym_BSLASHaudio] = ACTIONS(171),
    [anon_sym_BSLASHvideo] = ACTIONS(171),
    [anon_sym_BSLASHicon] = ACTIONS(171),
    [anon_sym_BSLASHpass] = ACTIONS(171),
    [anon_sym_BSLASHlink] = ACTIONS(171),
    [anon_sym_BSLASHmailto] = ACTIONS(171),
    [anon_sym_BSLASHmenu] = ACTIONS(171),
    [anon_sym_BSLASHstem] = ACTIONS(171),
    [anon_sym_BSLASHlatexmath] = ACTIONS(171),
    [anon_sym_BSLASHasciimath] = ACTIONS(171),
    [anon_sym_BSLASHfootnote] = ACTIONS(173),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(171),
    [anon_sym_BSLASHanchor] = ACTIONS(171),
    [anon_sym_BSLASHxref] = ACTIONS(171),
    [anon_sym_BSLASHifdef] = ACTIONS(171),
    [anon_sym_BSLASHifndef] = ACTIONS(171),
    [anon_sym_BSLASHifeval] = ACTIONS(171),
    [anon_sym_BSLASHendif] = ACTIONS(171),
    [aux_sym_escaped_sequence_token1] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_COLON2] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_BSLASH] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_PLUS2] = ACTIONS(173),
    [anon_sym_PLUS_PLUS] = ACTIONS(171),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_STAR2] = ACTIONS(173),
    [anon_sym_STAR_STAR] = ACTIONS(171),
    [anon_sym__2] = ACTIONS(173),
    [anon_sym___] = ACTIONS(171),
    [anon_sym_BQUOTE2] = ACTIONS(173),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(171),
    [anon_sym_POUND2] = ACTIONS(173),
    [anon_sym_POUND_POUND] = ACTIONS(171),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(173),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(171),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(175),
    [aux_sym_link_url_token1] = ACTIONS(177),
    [aux_sym_link_url_token2] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [sym_email] = ACTIONS(177),
    [anon_sym_LBRACK_POUND] = ACTIONS(175),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(175),
    [anon_sym_kbd] = ACTIONS(177),
    [anon_sym_btn] = ACTIONS(177),
    [anon_sym_image] = ACTIONS(177),
    [anon_sym_audio] = ACTIONS(177),
    [anon_sym_video] = ACTIONS(177),
    [anon_sym_icon] = ACTIONS(177),
    [anon_sym_link] = ACTIONS(177),
    [anon_sym_mailto] = ACTIONS(177),
    [anon_sym_menu] = ACTIONS(177),
    [anon_sym_anchor] = ACTIONS(177),
    [anon_sym_xref] = ACTIONS(177),
    [anon_sym_ifdef] = ACTIONS(177),
    [anon_sym_ifndef] = ACTIONS(177),
    [anon_sym_ifeval] = ACTIONS(177),
    [anon_sym_endif] = ACTIONS(177),
    [anon_sym_indexterm2] = ACTIONS(177),
    [anon_sym_indexterm] = ACTIONS(177),
    [anon_sym_a2s] = ACTIONS(177),
    [anon_sym_barcode] = ACTIONS(177),
    [anon_sym_blockdiag] = ACTIONS(177),
    [anon_sym_bpmn] = ACTIONS(177),
    [anon_sym_bytefield] = ACTIONS(177),
    [anon_sym_d2] = ACTIONS(177),
    [anon_sym_dbml] = ACTIONS(177),
    [anon_sym_diagrams] = ACTIONS(177),
    [anon_sym_ditaa] = ACTIONS(177),
    [anon_sym_dpic] = ACTIONS(177),
    [anon_sym_erd] = ACTIONS(177),
    [anon_sym_gnuplot] = ACTIONS(177),
    [anon_sym_graphviz] = ACTIONS(177),
    [anon_sym_lilypond] = ACTIONS(177),
    [anon_sym_meme] = ACTIONS(177),
    [anon_sym_mermaid] = ACTIONS(177),
    [anon_sym_msc] = ACTIONS(177),
    [anon_sym_nomnoml] = ACTIONS(177),
    [anon_sym_pikchr] = ACTIONS(177),
    [anon_sym_plantuml] = ACTIONS(177),
    [anon_sym_shaape] = ACTIONS(177),
    [anon_sym_smcat] = ACTIONS(177),
    [anon_sym_structurizr] = ACTIONS(177),
    [anon_sym_svgbob] = ACTIONS(177),
    [anon_sym_symbolator] = ACTIONS(177),
    [anon_sym_syntrax] = ACTIONS(177),
    [anon_sym_tikz] = ACTIONS(177),
    [anon_sym_umlet] = ACTIONS(177),
    [anon_sym_vega] = ACTIONS(177),
    [anon_sym_wavedrom] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_footnote] = ACTIONS(177),
    [anon_sym_footnoteref] = ACTIONS(177),
    [anon_sym_latexmath] = ACTIONS(177),
    [anon_sym_stem] = ACTIONS(177),
    [anon_sym_asciimath] = ACTIONS(177),
    [anon_sym_pass] = ACTIONS(177),
    [sym_replacement] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_f] = ACTIONS(177),
    [sym_super_escape] = ACTIONS(175),
    [sym__character] = ACTIONS(177),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(175),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(175),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(175),
    [anon_sym_BSLASH__] = ACTIONS(175),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(175),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(175),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(177),
    [anon_sym_BSLASHkbd] = ACTIONS(175),
    [anon_sym_BSLASHbtn] = ACTIONS(175),
    [anon_sym_BSLASHimage] = ACTIONS(175),
    [anon_sym_BSLASHaudio] = ACTIONS(175),
    [anon_sym_BSLASHvideo] = ACTIONS(175),
    [anon_sym_BSLASHicon] = ACTIONS(175),
    [anon_sym_BSLASHpass] = ACTIONS(175),
    [anon_sym_BSLASHlink] = ACTIONS(175),
    [anon_sym_BSLASHmailto] = ACTIONS(175),
    [anon_sym_BSLASHmenu] = ACTIONS(175),
    [anon_sym_BSLASHstem] = ACTIONS(175),
    [anon_sym_BSLASHlatexmath] = ACTIONS(175),
    [anon_sym_BSLASHasciimath] = ACTIONS(175),
    [anon_sym_BSLASHfootnote] = ACTIONS(177),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(175),
    [anon_sym_BSLASHanchor] = ACTIONS(175),
    [anon_sym_BSLASHxref] = ACTIONS(175),
    [anon_sym_BSLASHifdef] = ACTIONS(175),
    [anon_sym_BSLASHifndef] = ACTIONS(175),
    [anon_sym_BSLASHifeval] = ACTIONS(175),
    [anon_sym_BSLASHendif] = ACTIONS(175),
    [aux_sym_escaped_sequence_token1] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_COLON2] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_BSLASH] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(177),
    [anon_sym__] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PLUS2] = ACTIONS(177),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(177),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_STAR2] = ACTIONS(177),
    [anon_sym_STAR_STAR] = ACTIONS(175),
    [anon_sym__2] = ACTIONS(177),
    [anon_sym___] = ACTIONS(175),
    [anon_sym_BQUOTE2] = ACTIONS(177),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_POUND2] = ACTIONS(177),
    [anon_sym_POUND_POUND] = ACTIONS(175),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(177),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(175),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(175),
    [aux_sym_link_url_token1] = ACTIONS(177),
    [aux_sym_link_url_token2] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [sym_email] = ACTIONS(177),
    [anon_sym_LBRACK_POUND] = ACTIONS(175),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(175),
    [anon_sym_kbd] = ACTIONS(177),
    [anon_sym_btn] = ACTIONS(177),
    [anon_sym_image] = ACTIONS(177),
    [anon_sym_audio] = ACTIONS(177),
    [anon_sym_video] = ACTIONS(177),
    [anon_sym_icon] = ACTIONS(177),
    [anon_sym_link] = ACTIONS(177),
    [anon_sym_mailto] = ACTIONS(177),
    [anon_sym_menu] = ACTIONS(177),
    [anon_sym_anchor] = ACTIONS(177),
    [anon_sym_xref] = ACTIONS(177),
    [anon_sym_ifdef] = ACTIONS(177),
    [anon_sym_ifndef] = ACTIONS(177),
    [anon_sym_ifeval] = ACTIONS(177),
    [anon_sym_endif] = ACTIONS(177),
    [anon_sym_indexterm2] = ACTIONS(177),
    [anon_sym_indexterm] = ACTIONS(177),
    [anon_sym_a2s] = ACTIONS(177),
    [anon_sym_barcode] = ACTIONS(177),
    [anon_sym_blockdiag] = ACTIONS(177),
    [anon_sym_bpmn] = ACTIONS(177),
    [anon_sym_bytefield] = ACTIONS(177),
    [anon_sym_d2] = ACTIONS(177),
    [anon_sym_dbml] = ACTIONS(177),
    [anon_sym_diagrams] = ACTIONS(177),
    [anon_sym_ditaa] = ACTIONS(177),
    [anon_sym_dpic] = ACTIONS(177),
    [anon_sym_erd] = ACTIONS(177),
    [anon_sym_gnuplot] = ACTIONS(177),
    [anon_sym_graphviz] = ACTIONS(177),
    [anon_sym_lilypond] = ACTIONS(177),
    [anon_sym_meme] = ACTIONS(177),
    [anon_sym_mermaid] = ACTIONS(177),
    [anon_sym_msc] = ACTIONS(177),
    [anon_sym_nomnoml] = ACTIONS(177),
    [anon_sym_pikchr] = ACTIONS(177),
    [anon_sym_plantuml] = ACTIONS(177),
    [anon_sym_shaape] = ACTIONS(177),
    [anon_sym_smcat] = ACTIONS(177),
    [anon_sym_structurizr] = ACTIONS(177),
    [anon_sym_svgbob] = ACTIONS(177),
    [anon_sym_symbolator] = ACTIONS(177),
    [anon_sym_syntrax] = ACTIONS(177),
    [anon_sym_tikz] = ACTIONS(177),
    [anon_sym_umlet] = ACTIONS(177),
    [anon_sym_vega] = ACTIONS(177),
    [anon_sym_wavedrom] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_footnote] = ACTIONS(177),
    [anon_sym_footnoteref] = ACTIONS(177),
    [anon_sym_latexmath] = ACTIONS(177),
    [anon_sym_stem] = ACTIONS(177),
    [anon_sym_asciimath] = ACTIONS(177),
    [anon_sym_pass] = ACTIONS(177),
    [sym_replacement] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_f] = ACTIONS(177),
    [sym_super_escape] = ACTIONS(175),
    [sym__character] = ACTIONS(177),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(175),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(175),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(175),
    [anon_sym_BSLASH__] = ACTIONS(175),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(175),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(175),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(177),
    [anon_sym_BSLASHkbd] = ACTIONS(175),
    [anon_sym_BSLASHbtn] = ACTIONS(175),
    [anon_sym_BSLASHimage] = ACTIONS(175),
    [anon_sym_BSLASHaudio] = ACTIONS(175),
    [anon_sym_BSLASHvideo] = ACTIONS(175),
    [anon_sym_BSLASHicon] = ACTIONS(175),
    [anon_sym_BSLASHpass] = ACTIONS(175),
    [anon_sym_BSLASHlink] = ACTIONS(175),
    [anon_sym_BSLASHmailto] = ACTIONS(175),
    [anon_sym_BSLASHmenu] = ACTIONS(175),
    [anon_sym_BSLASHstem] = ACTIONS(175),
    [anon_sym_BSLASHlatexmath] = ACTIONS(175),
    [anon_sym_BSLASHasciimath] = ACTIONS(175),
    [anon_sym_BSLASHfootnote] = ACTIONS(177),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(175),
    [anon_sym_BSLASHanchor] = ACTIONS(175),
    [anon_sym_BSLASHxref] = ACTIONS(175),
    [anon_sym_BSLASHifdef] = ACTIONS(175),
    [anon_sym_BSLASHifndef] = ACTIONS(175),
    [anon_sym_BSLASHifeval] = ACTIONS(175),
    [anon_sym_BSLASHendif] = ACTIONS(175),
    [aux_sym_escaped_sequence_token1] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_COLON2] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_BSLASH] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(177),
    [anon_sym__] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PLUS2] = ACTIONS(177),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(177),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_STAR2] = ACTIONS(177),
    [anon_sym_STAR_STAR] = ACTIONS(175),
    [anon_sym__2] = ACTIONS(177),
    [anon_sym___] = ACTIONS(175),
    [anon_sym_BQUOTE2] = ACTIONS(177),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_POUND2] = ACTIONS(177),
    [anon_sym_POUND_POUND] = ACTIONS(175),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(177),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(175),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(175),
    [aux_sym_link_url_token1] = ACTIONS(177),
    [aux_sym_link_url_token2] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [sym_email] = ACTIONS(177),
    [anon_sym_LBRACK_POUND] = ACTIONS(175),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(175),
    [anon_sym_kbd] = ACTIONS(177),
    [anon_sym_btn] = ACTIONS(177),
    [anon_sym_image] = ACTIONS(177),
    [anon_sym_audio] = ACTIONS(177),
    [anon_sym_video] = ACTIONS(177),
    [anon_sym_icon] = ACTIONS(177),
    [anon_sym_link] = ACTIONS(177),
    [anon_sym_mailto] = ACTIONS(177),
    [anon_sym_menu] = ACTIONS(177),
    [anon_sym_anchor] = ACTIONS(177),
    [anon_sym_xref] = ACTIONS(177),
    [anon_sym_ifdef] = ACTIONS(177),
    [anon_sym_ifndef] = ACTIONS(177),
    [anon_sym_ifeval] = ACTIONS(177),
    [anon_sym_endif] = ACTIONS(177),
    [anon_sym_indexterm2] = ACTIONS(177),
    [anon_sym_indexterm] = ACTIONS(177),
    [anon_sym_a2s] = ACTIONS(177),
    [anon_sym_barcode] = ACTIONS(177),
    [anon_sym_blockdiag] = ACTIONS(177),
    [anon_sym_bpmn] = ACTIONS(177),
    [anon_sym_bytefield] = ACTIONS(177),
    [anon_sym_d2] = ACTIONS(177),
    [anon_sym_dbml] = ACTIONS(177),
    [anon_sym_diagrams] = ACTIONS(177),
    [anon_sym_ditaa] = ACTIONS(177),
    [anon_sym_dpic] = ACTIONS(177),
    [anon_sym_erd] = ACTIONS(177),
    [anon_sym_gnuplot] = ACTIONS(177),
    [anon_sym_graphviz] = ACTIONS(177),
    [anon_sym_lilypond] = ACTIONS(177),
    [anon_sym_meme] = ACTIONS(177),
    [anon_sym_mermaid] = ACTIONS(177),
    [anon_sym_msc] = ACTIONS(177),
    [anon_sym_nomnoml] = ACTIONS(177),
    [anon_sym_pikchr] = ACTIONS(177),
    [anon_sym_plantuml] = ACTIONS(177),
    [anon_sym_shaape] = ACTIONS(177),
    [anon_sym_smcat] = ACTIONS(177),
    [anon_sym_structurizr] = ACTIONS(177),
    [anon_sym_svgbob] = ACTIONS(177),
    [anon_sym_symbolator] = ACTIONS(177),
    [anon_sym_syntrax] = ACTIONS(177),
    [anon_sym_tikz] = ACTIONS(177),
    [anon_sym_umlet] = ACTIONS(177),
    [anon_sym_vega] = ACTIONS(177),
    [anon_sym_wavedrom] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_footnote] = ACTIONS(177),
    [anon_sym_footnoteref] = ACTIONS(177),
    [anon_sym_latexmath] = ACTIONS(177),
    [anon_sym_stem] = ACTIONS(177),
    [anon_sym_asciimath] = ACTIONS(177),
    [anon_sym_pass] = ACTIONS(177),
    [sym_replacement] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_f] = ACTIONS(177),
    [sym_super_escape] = ACTIONS(175),
    [sym__character] = ACTIONS(177),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(175),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(175),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(175),
    [anon_sym_BSLASH__] = ACTIONS(175),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(175),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(175),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(177),
    [anon_sym_BSLASHkbd] = ACTIONS(175),
    [anon_sym_BSLASHbtn] = ACTIONS(175),
    [anon_sym_BSLASHimage] = ACTIONS(175),
    [anon_sym_BSLASHaudio] = ACTIONS(175),
    [anon_sym_BSLASHvideo] = ACTIONS(175),
    [anon_sym_BSLASHicon] = ACTIONS(175),
    [anon_sym_BSLASHpass] = ACTIONS(175),
    [anon_sym_BSLASHlink] = ACTIONS(175),
    [anon_sym_BSLASHmailto] = ACTIONS(175),
    [anon_sym_BSLASHmenu] = ACTIONS(175),
    [anon_sym_BSLASHstem] = ACTIONS(175),
    [anon_sym_BSLASHlatexmath] = ACTIONS(175),
    [anon_sym_BSLASHasciimath] = ACTIONS(175),
    [anon_sym_BSLASHfootnote] = ACTIONS(177),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(175),
    [anon_sym_BSLASHanchor] = ACTIONS(175),
    [anon_sym_BSLASHxref] = ACTIONS(175),
    [anon_sym_BSLASHifdef] = ACTIONS(175),
    [anon_sym_BSLASHifndef] = ACTIONS(175),
    [anon_sym_BSLASHifeval] = ACTIONS(175),
    [anon_sym_BSLASHendif] = ACTIONS(175),
    [aux_sym_escaped_sequence_token1] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_COLON2] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_BSLASH] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(177),
    [anon_sym__] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PLUS2] = ACTIONS(177),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(177),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_STAR2] = ACTIONS(177),
    [anon_sym_STAR_STAR] = ACTIONS(175),
    [anon_sym__2] = ACTIONS(177),
    [anon_sym___] = ACTIONS(175),
    [anon_sym_BQUOTE2] = ACTIONS(177),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(175),
    [anon_sym_POUND2] = ACTIONS(177),
    [anon_sym_POUND_POUND] = ACTIONS(175),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(177),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(175),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(185),
    [aux_sym_link_url_token1] = ACTIONS(187),
    [aux_sym_link_url_token2] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
    [sym_email] = ACTIONS(187),
    [anon_sym_LBRACK_POUND] = ACTIONS(185),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(185),
    [anon_sym_kbd] = ACTIONS(187),
    [anon_sym_btn] = ACTIONS(187),
    [anon_sym_image] = ACTIONS(187),
    [anon_sym_audio] = ACTIONS(187),
    [anon_sym_video] = ACTIONS(187),
    [anon_sym_icon] = ACTIONS(187),
    [anon_sym_link] = ACTIONS(187),
    [anon_sym_mailto] = ACTIONS(187),
    [anon_sym_menu] = ACTIONS(187),
    [anon_sym_anchor] = ACTIONS(187),
    [anon_sym_xref] = ACTIONS(187),
    [anon_sym_ifdef] = ACTIONS(187),
    [anon_sym_ifndef] = ACTIONS(187),
    [anon_sym_ifeval] = ACTIONS(187),
    [anon_sym_endif] = ACTIONS(187),
    [anon_sym_indexterm2] = ACTIONS(187),
    [anon_sym_indexterm] = ACTIONS(187),
    [anon_sym_a2s] = ACTIONS(187),
    [anon_sym_barcode] = ACTIONS(187),
    [anon_sym_blockdiag] = ACTIONS(187),
    [anon_sym_bpmn] = ACTIONS(187),
    [anon_sym_bytefield] = ACTIONS(187),
    [anon_sym_d2] = ACTIONS(187),
    [anon_sym_dbml] = ACTIONS(187),
    [anon_sym_diagrams] = ACTIONS(187),
    [anon_sym_ditaa] = ACTIONS(187),
    [anon_sym_dpic] = ACTIONS(187),
    [anon_sym_erd] = ACTIONS(187),
    [anon_sym_gnuplot] = ACTIONS(187),
    [anon_sym_graphviz] = ACTIONS(187),
    [anon_sym_lilypond] = ACTIONS(187),
    [anon_sym_meme] = ACTIONS(187),
    [anon_sym_mermaid] = ACTIONS(187),
    [anon_sym_msc] = ACTIONS(187),
    [anon_sym_nomnoml] = ACTIONS(187),
    [anon_sym_pikchr] = ACTIONS(187),
    [anon_sym_plantuml] = ACTIONS(187),
    [anon_sym_shaape] = ACTIONS(187),
    [anon_sym_smcat] = ACTIONS(187),
    [anon_sym_structurizr] = ACTIONS(187),
    [anon_sym_svgbob] = ACTIONS(187),
    [anon_sym_symbolator] = ACTIONS(187),
    [anon_sym_syntrax] = ACTIONS(187),
    [anon_sym_tikz] = ACTIONS(187),
    [anon_sym_umlet] = ACTIONS(187),
    [anon_sym_vega] = ACTIONS(187),
    [anon_sym_wavedrom] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(185),
    [anon_sym_footnote] = ACTIONS(187),
    [anon_sym_footnoteref] = ACTIONS(187),
    [anon_sym_latexmath] = ACTIONS(187),
    [anon_sym_stem] = ACTIONS(187),
    [anon_sym_asciimath] = ACTIONS(187),
    [anon_sym_pass] = ACTIONS(187),
    [sym_replacement] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_f] = ACTIONS(187),
    [sym_super_escape] = ACTIONS(185),
    [sym__character] = ACTIONS(187),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(185),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(185),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(185),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(185),
    [anon_sym_BSLASH__] = ACTIONS(185),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(185),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(185),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_BSLASHkbd] = ACTIONS(185),
    [anon_sym_BSLASHbtn] = ACTIONS(185),
    [anon_sym_BSLASHimage] = ACTIONS(185),
    [anon_sym_BSLASHaudio] = ACTIONS(185),
    [anon_sym_BSLASHvideo] = ACTIONS(185),
    [anon_sym_BSLASHicon] = ACTIONS(185),
    [anon_sym_BSLASHpass] = ACTIONS(185),
    [anon_sym_BSLASHlink] = ACTIONS(185),
    [anon_sym_BSLASHmailto] = ACTIONS(185),
    [anon_sym_BSLASHmenu] = ACTIONS(185),
    [anon_sym_BSLASHstem] = ACTIONS(185),
    [anon_sym_BSLASHlatexmath] = ACTIONS(185),
    [anon_sym_BSLASHasciimath] = ACTIONS(185),
    [anon_sym_BSLASHfootnote] = ACTIONS(187),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(185),
    [anon_sym_BSLASHanchor] = ACTIONS(185),
    [anon_sym_BSLASHxref] = ACTIONS(185),
    [anon_sym_BSLASHifdef] = ACTIONS(185),
    [anon_sym_BSLASHifndef] = ACTIONS(185),
    [anon_sym_BSLASHifeval] = ACTIONS(185),
    [anon_sym_BSLASHendif] = ACTIONS(185),
    [aux_sym_escaped_sequence_token1] = ACTIONS(187),
    [anon_sym_BANG] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_COLON2] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_QMARK] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_BSLASH] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(187),
    [anon_sym__] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_PLUS2] = ACTIONS(187),
    [anon_sym_PLUS_PLUS] = ACTIONS(185),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(185),
    [anon_sym_STAR2] = ACTIONS(187),
    [anon_sym_STAR_STAR] = ACTIONS(185),
    [anon_sym__2] = ACTIONS(187),
    [anon_sym___] = ACTIONS(185),
    [anon_sym_BQUOTE2] = ACTIONS(187),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_POUND2] = ACTIONS(187),
    [anon_sym_POUND_POUND] = ACTIONS(185),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(187),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(185),
  },
  [11] = {
    [aux_sym_link_url_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(189),
    [aux_sym_link_url_token1] = ACTIONS(191),
    [aux_sym_link_url_token2] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(193),
    [sym_email] = ACTIONS(191),
    [anon_sym_LBRACK_POUND] = ACTIONS(189),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(189),
    [anon_sym_kbd] = ACTIONS(191),
    [anon_sym_btn] = ACTIONS(191),
    [anon_sym_image] = ACTIONS(191),
    [anon_sym_audio] = ACTIONS(191),
    [anon_sym_video] = ACTIONS(191),
    [anon_sym_icon] = ACTIONS(191),
    [anon_sym_link] = ACTIONS(191),
    [anon_sym_mailto] = ACTIONS(191),
    [anon_sym_menu] = ACTIONS(191),
    [anon_sym_anchor] = ACTIONS(191),
    [anon_sym_xref] = ACTIONS(191),
    [anon_sym_ifdef] = ACTIONS(191),
    [anon_sym_ifndef] = ACTIONS(191),
    [anon_sym_ifeval] = ACTIONS(191),
    [anon_sym_endif] = ACTIONS(191),
    [anon_sym_indexterm2] = ACTIONS(191),
    [anon_sym_indexterm] = ACTIONS(191),
    [anon_sym_a2s] = ACTIONS(191),
    [anon_sym_barcode] = ACTIONS(191),
    [anon_sym_blockdiag] = ACTIONS(191),
    [anon_sym_bpmn] = ACTIONS(191),
    [anon_sym_bytefield] = ACTIONS(191),
    [anon_sym_d2] = ACTIONS(191),
    [anon_sym_dbml] = ACTIONS(191),
    [anon_sym_diagrams] = ACTIONS(191),
    [anon_sym_ditaa] = ACTIONS(191),
    [anon_sym_dpic] = ACTIONS(191),
    [anon_sym_erd] = ACTIONS(191),
    [anon_sym_gnuplot] = ACTIONS(191),
    [anon_sym_graphviz] = ACTIONS(191),
    [anon_sym_lilypond] = ACTIONS(191),
    [anon_sym_meme] = ACTIONS(191),
    [anon_sym_mermaid] = ACTIONS(191),
    [anon_sym_msc] = ACTIONS(191),
    [anon_sym_nomnoml] = ACTIONS(191),
    [anon_sym_pikchr] = ACTIONS(191),
    [anon_sym_plantuml] = ACTIONS(191),
    [anon_sym_shaape] = ACTIONS(191),
    [anon_sym_smcat] = ACTIONS(191),
    [anon_sym_structurizr] = ACTIONS(191),
    [anon_sym_svgbob] = ACTIONS(191),
    [anon_sym_symbolator] = ACTIONS(191),
    [anon_sym_syntrax] = ACTIONS(191),
    [anon_sym_tikz] = ACTIONS(191),
    [anon_sym_umlet] = ACTIONS(191),
    [anon_sym_vega] = ACTIONS(191),
    [anon_sym_wavedrom] = ACTIONS(191),
    [anon_sym_footnote] = ACTIONS(191),
    [anon_sym_footnoteref] = ACTIONS(191),
    [anon_sym_latexmath] = ACTIONS(191),
    [anon_sym_stem] = ACTIONS(191),
    [anon_sym_asciimath] = ACTIONS(191),
    [anon_sym_pass] = ACTIONS(191),
    [sym_replacement] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_f] = ACTIONS(191),
    [sym_super_escape] = ACTIONS(189),
    [sym__character] = ACTIONS(191),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(189),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(189),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(189),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(189),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(189),
    [anon_sym_BSLASH__] = ACTIONS(189),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(189),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(189),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(191),
    [anon_sym_BSLASHkbd] = ACTIONS(189),
    [anon_sym_BSLASHbtn] = ACTIONS(189),
    [anon_sym_BSLASHimage] = ACTIONS(189),
    [anon_sym_BSLASHaudio] = ACTIONS(189),
    [anon_sym_BSLASHvideo] = ACTIONS(189),
    [anon_sym_BSLASHicon] = ACTIONS(189),
    [anon_sym_BSLASHpass] = ACTIONS(189),
    [anon_sym_BSLASHlink] = ACTIONS(189),
    [anon_sym_BSLASHmailto] = ACTIONS(189),
    [anon_sym_BSLASHmenu] = ACTIONS(189),
    [anon_sym_BSLASHstem] = ACTIONS(189),
    [anon_sym_BSLASHlatexmath] = ACTIONS(189),
    [anon_sym_BSLASHasciimath] = ACTIONS(189),
    [anon_sym_BSLASHfootnote] = ACTIONS(191),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(189),
    [anon_sym_BSLASHanchor] = ACTIONS(189),
    [anon_sym_BSLASHxref] = ACTIONS(189),
    [anon_sym_BSLASHifdef] = ACTIONS(189),
    [anon_sym_BSLASHifndef] = ACTIONS(189),
    [anon_sym_BSLASHifeval] = ACTIONS(189),
    [anon_sym_BSLASHendif] = ACTIONS(189),
    [aux_sym_escaped_sequence_token1] = ACTIONS(191),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(191),
    [anon_sym_AMP] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_COLON2] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_QMARK] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_BSLASH] = ACTIONS(191),
    [anon_sym_CARET] = ACTIONS(191),
    [anon_sym__] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_PLUS2] = ACTIONS(191),
    [anon_sym_PLUS_PLUS] = ACTIONS(189),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_STAR2] = ACTIONS(191),
    [anon_sym_STAR_STAR] = ACTIONS(189),
    [anon_sym__2] = ACTIONS(191),
    [anon_sym___] = ACTIONS(189),
    [anon_sym_BQUOTE2] = ACTIONS(191),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(189),
    [anon_sym_POUND2] = ACTIONS(191),
    [anon_sym_POUND_POUND] = ACTIONS(189),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(191),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(189),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(159),
    [aux_sym_link_url_token1] = ACTIONS(161),
    [aux_sym_link_url_token2] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(161),
    [sym_email] = ACTIONS(161),
    [anon_sym_LBRACK_POUND] = ACTIONS(159),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(159),
    [anon_sym_kbd] = ACTIONS(161),
    [anon_sym_btn] = ACTIONS(161),
    [anon_sym_image] = ACTIONS(161),
    [anon_sym_audio] = ACTIONS(161),
    [anon_sym_video] = ACTIONS(161),
    [anon_sym_icon] = ACTIONS(161),
    [anon_sym_link] = ACTIONS(161),
    [anon_sym_mailto] = ACTIONS(161),
    [anon_sym_menu] = ACTIONS(161),
    [anon_sym_anchor] = ACTIONS(161),
    [anon_sym_xref] = ACTIONS(161),
    [anon_sym_ifdef] = ACTIONS(161),
    [anon_sym_ifndef] = ACTIONS(161),
    [anon_sym_ifeval] = ACTIONS(161),
    [anon_sym_endif] = ACTIONS(161),
    [anon_sym_indexterm2] = ACTIONS(161),
    [anon_sym_indexterm] = ACTIONS(161),
    [anon_sym_a2s] = ACTIONS(161),
    [anon_sym_barcode] = ACTIONS(161),
    [anon_sym_blockdiag] = ACTIONS(161),
    [anon_sym_bpmn] = ACTIONS(161),
    [anon_sym_bytefield] = ACTIONS(161),
    [anon_sym_d2] = ACTIONS(161),
    [anon_sym_dbml] = ACTIONS(161),
    [anon_sym_diagrams] = ACTIONS(161),
    [anon_sym_ditaa] = ACTIONS(161),
    [anon_sym_dpic] = ACTIONS(161),
    [anon_sym_erd] = ACTIONS(161),
    [anon_sym_gnuplot] = ACTIONS(161),
    [anon_sym_graphviz] = ACTIONS(161),
    [anon_sym_lilypond] = ACTIONS(161),
    [anon_sym_meme] = ACTIONS(161),
    [anon_sym_mermaid] = ACTIONS(161),
    [anon_sym_msc] = ACTIONS(161),
    [anon_sym_nomnoml] = ACTIONS(161),
    [anon_sym_pikchr] = ACTIONS(161),
    [anon_sym_plantuml] = ACTIONS(161),
    [anon_sym_shaape] = ACTIONS(161),
    [anon_sym_smcat] = ACTIONS(161),
    [anon_sym_structurizr] = ACTIONS(161),
    [anon_sym_svgbob] = ACTIONS(161),
    [anon_sym_symbolator] = ACTIONS(161),
    [anon_sym_syntrax] = ACTIONS(161),
    [anon_sym_tikz] = ACTIONS(161),
    [anon_sym_umlet] = ACTIONS(161),
    [anon_sym_vega] = ACTIONS(161),
    [anon_sym_wavedrom] = ACTIONS(161),
    [anon_sym_footnote] = ACTIONS(161),
    [anon_sym_footnoteref] = ACTIONS(161),
    [anon_sym_latexmath] = ACTIONS(161),
    [anon_sym_stem] = ACTIONS(161),
    [anon_sym_asciimath] = ACTIONS(161),
    [anon_sym_pass] = ACTIONS(161),
    [sym_replacement] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [sym_intrinsic_attributes] = ACTIONS(195),
    [anon_sym_f] = ACTIONS(161),
    [sym_super_escape] = ACTIONS(159),
    [sym__character] = ACTIONS(161),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(159),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(159),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(159),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(159),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(159),
    [anon_sym_BSLASH__] = ACTIONS(159),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(159),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(159),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(161),
    [anon_sym_BSLASHkbd] = ACTIONS(159),
    [anon_sym_BSLASHbtn] = ACTIONS(159),
    [anon_sym_BSLASHimage] = ACTIONS(159),
    [anon_sym_BSLASHaudio] = ACTIONS(159),
    [anon_sym_BSLASHvideo] = ACTIONS(159),
    [anon_sym_BSLASHicon] = ACTIONS(159),
    [anon_sym_BSLASHpass] = ACTIONS(159),
    [anon_sym_BSLASHlink] = ACTIONS(159),
    [anon_sym_BSLASHmailto] = ACTIONS(159),
    [anon_sym_BSLASHmenu] = ACTIONS(159),
    [anon_sym_BSLASHstem] = ACTIONS(159),
    [anon_sym_BSLASHlatexmath] = ACTIONS(159),
    [anon_sym_BSLASHasciimath] = ACTIONS(159),
    [anon_sym_BSLASHfootnote] = ACTIONS(161),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(159),
    [anon_sym_BSLASHanchor] = ACTIONS(159),
    [anon_sym_BSLASHxref] = ACTIONS(159),
    [anon_sym_BSLASHifdef] = ACTIONS(159),
    [anon_sym_BSLASHifndef] = ACTIONS(159),
    [anon_sym_BSLASHifeval] = ACTIONS(159),
    [anon_sym_BSLASHendif] = ACTIONS(159),
    [aux_sym_escaped_sequence_token1] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_COLON2] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_QMARK] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [anon_sym_BSLASH] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(161),
    [anon_sym__] = ACTIONS(161),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_PLUS2] = ACTIONS(161),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(161),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_STAR2] = ACTIONS(161),
    [anon_sym_STAR_STAR] = ACTIONS(159),
    [anon_sym__2] = ACTIONS(161),
    [anon_sym___] = ACTIONS(159),
    [anon_sym_BQUOTE2] = ACTIONS(161),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(159),
    [anon_sym_POUND2] = ACTIONS(161),
    [anon_sym_POUND_POUND] = ACTIONS(159),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(161),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(159),
  },
  [13] = {
    [aux_sym_link_url_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(197),
    [aux_sym_link_url_token1] = ACTIONS(199),
    [aux_sym_link_url_token2] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(193),
    [sym_email] = ACTIONS(199),
    [anon_sym_LBRACK_POUND] = ACTIONS(197),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(197),
    [anon_sym_kbd] = ACTIONS(199),
    [anon_sym_btn] = ACTIONS(199),
    [anon_sym_image] = ACTIONS(199),
    [anon_sym_audio] = ACTIONS(199),
    [anon_sym_video] = ACTIONS(199),
    [anon_sym_icon] = ACTIONS(199),
    [anon_sym_link] = ACTIONS(199),
    [anon_sym_mailto] = ACTIONS(199),
    [anon_sym_menu] = ACTIONS(199),
    [anon_sym_anchor] = ACTIONS(199),
    [anon_sym_xref] = ACTIONS(199),
    [anon_sym_ifdef] = ACTIONS(199),
    [anon_sym_ifndef] = ACTIONS(199),
    [anon_sym_ifeval] = ACTIONS(199),
    [anon_sym_endif] = ACTIONS(199),
    [anon_sym_indexterm2] = ACTIONS(199),
    [anon_sym_indexterm] = ACTIONS(199),
    [anon_sym_a2s] = ACTIONS(199),
    [anon_sym_barcode] = ACTIONS(199),
    [anon_sym_blockdiag] = ACTIONS(199),
    [anon_sym_bpmn] = ACTIONS(199),
    [anon_sym_bytefield] = ACTIONS(199),
    [anon_sym_d2] = ACTIONS(199),
    [anon_sym_dbml] = ACTIONS(199),
    [anon_sym_diagrams] = ACTIONS(199),
    [anon_sym_ditaa] = ACTIONS(199),
    [anon_sym_dpic] = ACTIONS(199),
    [anon_sym_erd] = ACTIONS(199),
    [anon_sym_gnuplot] = ACTIONS(199),
    [anon_sym_graphviz] = ACTIONS(199),
    [anon_sym_lilypond] = ACTIONS(199),
    [anon_sym_meme] = ACTIONS(199),
    [anon_sym_mermaid] = ACTIONS(199),
    [anon_sym_msc] = ACTIONS(199),
    [anon_sym_nomnoml] = ACTIONS(199),
    [anon_sym_pikchr] = ACTIONS(199),
    [anon_sym_plantuml] = ACTIONS(199),
    [anon_sym_shaape] = ACTIONS(199),
    [anon_sym_smcat] = ACTIONS(199),
    [anon_sym_structurizr] = ACTIONS(199),
    [anon_sym_svgbob] = ACTIONS(199),
    [anon_sym_symbolator] = ACTIONS(199),
    [anon_sym_syntrax] = ACTIONS(199),
    [anon_sym_tikz] = ACTIONS(199),
    [anon_sym_umlet] = ACTIONS(199),
    [anon_sym_vega] = ACTIONS(199),
    [anon_sym_wavedrom] = ACTIONS(199),
    [anon_sym_footnote] = ACTIONS(199),
    [anon_sym_footnoteref] = ACTIONS(199),
    [anon_sym_latexmath] = ACTIONS(199),
    [anon_sym_stem] = ACTIONS(199),
    [anon_sym_asciimath] = ACTIONS(199),
    [anon_sym_pass] = ACTIONS(199),
    [sym_replacement] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_f] = ACTIONS(199),
    [sym_super_escape] = ACTIONS(197),
    [sym__character] = ACTIONS(199),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(197),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(197),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(197),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(197),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(197),
    [anon_sym_BSLASH__] = ACTIONS(197),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(197),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(197),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(199),
    [anon_sym_BSLASHkbd] = ACTIONS(197),
    [anon_sym_BSLASHbtn] = ACTIONS(197),
    [anon_sym_BSLASHimage] = ACTIONS(197),
    [anon_sym_BSLASHaudio] = ACTIONS(197),
    [anon_sym_BSLASHvideo] = ACTIONS(197),
    [anon_sym_BSLASHicon] = ACTIONS(197),
    [anon_sym_BSLASHpass] = ACTIONS(197),
    [anon_sym_BSLASHlink] = ACTIONS(197),
    [anon_sym_BSLASHmailto] = ACTIONS(197),
    [anon_sym_BSLASHmenu] = ACTIONS(197),
    [anon_sym_BSLASHstem] = ACTIONS(197),
    [anon_sym_BSLASHlatexmath] = ACTIONS(197),
    [anon_sym_BSLASHasciimath] = ACTIONS(197),
    [anon_sym_BSLASHfootnote] = ACTIONS(199),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(197),
    [anon_sym_BSLASHanchor] = ACTIONS(197),
    [anon_sym_BSLASHxref] = ACTIONS(197),
    [anon_sym_BSLASHifdef] = ACTIONS(197),
    [anon_sym_BSLASHifndef] = ACTIONS(197),
    [anon_sym_BSLASHifeval] = ACTIONS(197),
    [anon_sym_BSLASHendif] = ACTIONS(197),
    [aux_sym_escaped_sequence_token1] = ACTIONS(199),
    [anon_sym_BANG] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_PERCENT] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_COLON2] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(199),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_PLUS2] = ACTIONS(199),
    [anon_sym_PLUS_PLUS] = ACTIONS(197),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(199),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_STAR2] = ACTIONS(199),
    [anon_sym_STAR_STAR] = ACTIONS(197),
    [anon_sym__2] = ACTIONS(199),
    [anon_sym___] = ACTIONS(197),
    [anon_sym_BQUOTE2] = ACTIONS(199),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(197),
    [anon_sym_POUND2] = ACTIONS(199),
    [anon_sym_POUND_POUND] = ACTIONS(197),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(199),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(197),
  },
  [14] = {
    [aux_sym_link_url_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(201),
    [aux_sym_link_url_token1] = ACTIONS(203),
    [aux_sym_link_url_token2] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(205),
    [sym_email] = ACTIONS(203),
    [anon_sym_LBRACK_POUND] = ACTIONS(201),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(201),
    [anon_sym_kbd] = ACTIONS(203),
    [anon_sym_btn] = ACTIONS(203),
    [anon_sym_image] = ACTIONS(203),
    [anon_sym_audio] = ACTIONS(203),
    [anon_sym_video] = ACTIONS(203),
    [anon_sym_icon] = ACTIONS(203),
    [anon_sym_link] = ACTIONS(203),
    [anon_sym_mailto] = ACTIONS(203),
    [anon_sym_menu] = ACTIONS(203),
    [anon_sym_anchor] = ACTIONS(203),
    [anon_sym_xref] = ACTIONS(203),
    [anon_sym_ifdef] = ACTIONS(203),
    [anon_sym_ifndef] = ACTIONS(203),
    [anon_sym_ifeval] = ACTIONS(203),
    [anon_sym_endif] = ACTIONS(203),
    [anon_sym_indexterm2] = ACTIONS(203),
    [anon_sym_indexterm] = ACTIONS(203),
    [anon_sym_a2s] = ACTIONS(203),
    [anon_sym_barcode] = ACTIONS(203),
    [anon_sym_blockdiag] = ACTIONS(203),
    [anon_sym_bpmn] = ACTIONS(203),
    [anon_sym_bytefield] = ACTIONS(203),
    [anon_sym_d2] = ACTIONS(203),
    [anon_sym_dbml] = ACTIONS(203),
    [anon_sym_diagrams] = ACTIONS(203),
    [anon_sym_ditaa] = ACTIONS(203),
    [anon_sym_dpic] = ACTIONS(203),
    [anon_sym_erd] = ACTIONS(203),
    [anon_sym_gnuplot] = ACTIONS(203),
    [anon_sym_graphviz] = ACTIONS(203),
    [anon_sym_lilypond] = ACTIONS(203),
    [anon_sym_meme] = ACTIONS(203),
    [anon_sym_mermaid] = ACTIONS(203),
    [anon_sym_msc] = ACTIONS(203),
    [anon_sym_nomnoml] = ACTIONS(203),
    [anon_sym_pikchr] = ACTIONS(203),
    [anon_sym_plantuml] = ACTIONS(203),
    [anon_sym_shaape] = ACTIONS(203),
    [anon_sym_smcat] = ACTIONS(203),
    [anon_sym_structurizr] = ACTIONS(203),
    [anon_sym_svgbob] = ACTIONS(203),
    [anon_sym_symbolator] = ACTIONS(203),
    [anon_sym_syntrax] = ACTIONS(203),
    [anon_sym_tikz] = ACTIONS(203),
    [anon_sym_umlet] = ACTIONS(203),
    [anon_sym_vega] = ACTIONS(203),
    [anon_sym_wavedrom] = ACTIONS(203),
    [anon_sym_footnote] = ACTIONS(203),
    [anon_sym_footnoteref] = ACTIONS(203),
    [anon_sym_latexmath] = ACTIONS(203),
    [anon_sym_stem] = ACTIONS(203),
    [anon_sym_asciimath] = ACTIONS(203),
    [anon_sym_pass] = ACTIONS(203),
    [sym_replacement] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_f] = ACTIONS(203),
    [sym_super_escape] = ACTIONS(201),
    [sym__character] = ACTIONS(203),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(201),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(201),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(201),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(201),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(201),
    [anon_sym_BSLASH__] = ACTIONS(201),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(201),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(201),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(203),
    [anon_sym_BSLASHkbd] = ACTIONS(201),
    [anon_sym_BSLASHbtn] = ACTIONS(201),
    [anon_sym_BSLASHimage] = ACTIONS(201),
    [anon_sym_BSLASHaudio] = ACTIONS(201),
    [anon_sym_BSLASHvideo] = ACTIONS(201),
    [anon_sym_BSLASHicon] = ACTIONS(201),
    [anon_sym_BSLASHpass] = ACTIONS(201),
    [anon_sym_BSLASHlink] = ACTIONS(201),
    [anon_sym_BSLASHmailto] = ACTIONS(201),
    [anon_sym_BSLASHmenu] = ACTIONS(201),
    [anon_sym_BSLASHstem] = ACTIONS(201),
    [anon_sym_BSLASHlatexmath] = ACTIONS(201),
    [anon_sym_BSLASHasciimath] = ACTIONS(201),
    [anon_sym_BSLASHfootnote] = ACTIONS(203),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(201),
    [anon_sym_BSLASHanchor] = ACTIONS(201),
    [anon_sym_BSLASHxref] = ACTIONS(201),
    [anon_sym_BSLASHifdef] = ACTIONS(201),
    [anon_sym_BSLASHifndef] = ACTIONS(201),
    [anon_sym_BSLASHifeval] = ACTIONS(201),
    [anon_sym_BSLASHendif] = ACTIONS(201),
    [aux_sym_escaped_sequence_token1] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_COLON2] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_PLUS2] = ACTIONS(203),
    [anon_sym_PLUS_PLUS] = ACTIONS(201),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_STAR2] = ACTIONS(203),
    [anon_sym_STAR_STAR] = ACTIONS(201),
    [anon_sym__2] = ACTIONS(203),
    [anon_sym___] = ACTIONS(201),
    [anon_sym_BQUOTE2] = ACTIONS(203),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND2] = ACTIONS(203),
    [anon_sym_POUND_POUND] = ACTIONS(201),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(203),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(201),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(208),
    [aux_sym_link_url_token1] = ACTIONS(210),
    [aux_sym_link_url_token2] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
    [sym_email] = ACTIONS(210),
    [anon_sym_LBRACK_POUND] = ACTIONS(208),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(208),
    [anon_sym_kbd] = ACTIONS(210),
    [anon_sym_btn] = ACTIONS(210),
    [anon_sym_image] = ACTIONS(210),
    [anon_sym_audio] = ACTIONS(210),
    [anon_sym_video] = ACTIONS(210),
    [anon_sym_icon] = ACTIONS(210),
    [anon_sym_link] = ACTIONS(210),
    [anon_sym_mailto] = ACTIONS(210),
    [anon_sym_menu] = ACTIONS(210),
    [anon_sym_anchor] = ACTIONS(210),
    [anon_sym_xref] = ACTIONS(210),
    [anon_sym_ifdef] = ACTIONS(210),
    [anon_sym_ifndef] = ACTIONS(210),
    [anon_sym_ifeval] = ACTIONS(210),
    [anon_sym_endif] = ACTIONS(210),
    [anon_sym_indexterm2] = ACTIONS(210),
    [anon_sym_indexterm] = ACTIONS(210),
    [anon_sym_a2s] = ACTIONS(210),
    [anon_sym_barcode] = ACTIONS(210),
    [anon_sym_blockdiag] = ACTIONS(210),
    [anon_sym_bpmn] = ACTIONS(210),
    [anon_sym_bytefield] = ACTIONS(210),
    [anon_sym_d2] = ACTIONS(210),
    [anon_sym_dbml] = ACTIONS(210),
    [anon_sym_diagrams] = ACTIONS(210),
    [anon_sym_ditaa] = ACTIONS(210),
    [anon_sym_dpic] = ACTIONS(210),
    [anon_sym_erd] = ACTIONS(210),
    [anon_sym_gnuplot] = ACTIONS(210),
    [anon_sym_graphviz] = ACTIONS(210),
    [anon_sym_lilypond] = ACTIONS(210),
    [anon_sym_meme] = ACTIONS(210),
    [anon_sym_mermaid] = ACTIONS(210),
    [anon_sym_msc] = ACTIONS(210),
    [anon_sym_nomnoml] = ACTIONS(210),
    [anon_sym_pikchr] = ACTIONS(210),
    [anon_sym_plantuml] = ACTIONS(210),
    [anon_sym_shaape] = ACTIONS(210),
    [anon_sym_smcat] = ACTIONS(210),
    [anon_sym_structurizr] = ACTIONS(210),
    [anon_sym_svgbob] = ACTIONS(210),
    [anon_sym_symbolator] = ACTIONS(210),
    [anon_sym_syntrax] = ACTIONS(210),
    [anon_sym_tikz] = ACTIONS(210),
    [anon_sym_umlet] = ACTIONS(210),
    [anon_sym_vega] = ACTIONS(210),
    [anon_sym_wavedrom] = ACTIONS(210),
    [anon_sym_footnote] = ACTIONS(210),
    [anon_sym_footnoteref] = ACTIONS(210),
    [anon_sym_latexmath] = ACTIONS(210),
    [anon_sym_stem] = ACTIONS(210),
    [anon_sym_asciimath] = ACTIONS(210),
    [anon_sym_pass] = ACTIONS(210),
    [sym_replacement] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_f] = ACTIONS(210),
    [sym_super_escape] = ACTIONS(208),
    [sym__character] = ACTIONS(210),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(208),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(208),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(208),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(208),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(208),
    [anon_sym_BSLASH__] = ACTIONS(208),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(208),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(208),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(210),
    [anon_sym_BSLASHkbd] = ACTIONS(208),
    [anon_sym_BSLASHbtn] = ACTIONS(208),
    [anon_sym_BSLASHimage] = ACTIONS(208),
    [anon_sym_BSLASHaudio] = ACTIONS(208),
    [anon_sym_BSLASHvideo] = ACTIONS(208),
    [anon_sym_BSLASHicon] = ACTIONS(208),
    [anon_sym_BSLASHpass] = ACTIONS(208),
    [anon_sym_BSLASHlink] = ACTIONS(208),
    [anon_sym_BSLASHmailto] = ACTIONS(208),
    [anon_sym_BSLASHmenu] = ACTIONS(208),
    [anon_sym_BSLASHstem] = ACTIONS(208),
    [anon_sym_BSLASHlatexmath] = ACTIONS(208),
    [anon_sym_BSLASHasciimath] = ACTIONS(208),
    [anon_sym_BSLASHfootnote] = ACTIONS(210),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(208),
    [anon_sym_BSLASHanchor] = ACTIONS(208),
    [anon_sym_BSLASHxref] = ACTIONS(208),
    [anon_sym_BSLASHifdef] = ACTIONS(208),
    [anon_sym_BSLASHifndef] = ACTIONS(208),
    [anon_sym_BSLASHifeval] = ACTIONS(208),
    [anon_sym_BSLASHendif] = ACTIONS(208),
    [aux_sym_escaped_sequence_token1] = ACTIONS(210),
    [anon_sym_BANG] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(210),
    [anon_sym_DOLLAR] = ACTIONS(210),
    [anon_sym_PERCENT] = ACTIONS(210),
    [anon_sym_AMP] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(210),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_COLON2] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_EQ] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(210),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(210),
    [anon_sym__] = ACTIONS(210),
    [anon_sym_BQUOTE] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_PLUS2] = ACTIONS(210),
    [anon_sym_PLUS_PLUS] = ACTIONS(208),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(210),
    [anon_sym_LT_LT] = ACTIONS(208),
    [anon_sym_STAR2] = ACTIONS(210),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym__2] = ACTIONS(210),
    [anon_sym___] = ACTIONS(208),
    [anon_sym_BQUOTE2] = ACTIONS(210),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(208),
    [anon_sym_POUND2] = ACTIONS(210),
    [anon_sym_POUND_POUND] = ACTIONS(208),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(210),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(208),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(212),
    [aux_sym_link_url_token1] = ACTIONS(214),
    [aux_sym_link_url_token2] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [sym_email] = ACTIONS(214),
    [anon_sym_LBRACK_POUND] = ACTIONS(212),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(212),
    [anon_sym_kbd] = ACTIONS(214),
    [anon_sym_btn] = ACTIONS(214),
    [anon_sym_image] = ACTIONS(214),
    [anon_sym_audio] = ACTIONS(214),
    [anon_sym_video] = ACTIONS(214),
    [anon_sym_icon] = ACTIONS(214),
    [anon_sym_link] = ACTIONS(214),
    [anon_sym_mailto] = ACTIONS(214),
    [anon_sym_menu] = ACTIONS(214),
    [anon_sym_anchor] = ACTIONS(214),
    [anon_sym_xref] = ACTIONS(214),
    [anon_sym_ifdef] = ACTIONS(214),
    [anon_sym_ifndef] = ACTIONS(214),
    [anon_sym_ifeval] = ACTIONS(214),
    [anon_sym_endif] = ACTIONS(214),
    [anon_sym_indexterm2] = ACTIONS(214),
    [anon_sym_indexterm] = ACTIONS(214),
    [anon_sym_a2s] = ACTIONS(214),
    [anon_sym_barcode] = ACTIONS(214),
    [anon_sym_blockdiag] = ACTIONS(214),
    [anon_sym_bpmn] = ACTIONS(214),
    [anon_sym_bytefield] = ACTIONS(214),
    [anon_sym_d2] = ACTIONS(214),
    [anon_sym_dbml] = ACTIONS(214),
    [anon_sym_diagrams] = ACTIONS(214),
    [anon_sym_ditaa] = ACTIONS(214),
    [anon_sym_dpic] = ACTIONS(214),
    [anon_sym_erd] = ACTIONS(214),
    [anon_sym_gnuplot] = ACTIONS(214),
    [anon_sym_graphviz] = ACTIONS(214),
    [anon_sym_lilypond] = ACTIONS(214),
    [anon_sym_meme] = ACTIONS(214),
    [anon_sym_mermaid] = ACTIONS(214),
    [anon_sym_msc] = ACTIONS(214),
    [anon_sym_nomnoml] = ACTIONS(214),
    [anon_sym_pikchr] = ACTIONS(214),
    [anon_sym_plantuml] = ACTIONS(214),
    [anon_sym_shaape] = ACTIONS(214),
    [anon_sym_smcat] = ACTIONS(214),
    [anon_sym_structurizr] = ACTIONS(214),
    [anon_sym_svgbob] = ACTIONS(214),
    [anon_sym_symbolator] = ACTIONS(214),
    [anon_sym_syntrax] = ACTIONS(214),
    [anon_sym_tikz] = ACTIONS(214),
    [anon_sym_umlet] = ACTIONS(214),
    [anon_sym_vega] = ACTIONS(214),
    [anon_sym_wavedrom] = ACTIONS(214),
    [anon_sym_footnote] = ACTIONS(214),
    [anon_sym_footnoteref] = ACTIONS(214),
    [anon_sym_latexmath] = ACTIONS(214),
    [anon_sym_stem] = ACTIONS(214),
    [anon_sym_asciimath] = ACTIONS(214),
    [anon_sym_pass] = ACTIONS(214),
    [sym_replacement] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_f] = ACTIONS(214),
    [sym_super_escape] = ACTIONS(212),
    [sym__character] = ACTIONS(214),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(212),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(212),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(212),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(212),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(212),
    [anon_sym_BSLASH__] = ACTIONS(212),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(212),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(212),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(214),
    [anon_sym_BSLASHkbd] = ACTIONS(212),
    [anon_sym_BSLASHbtn] = ACTIONS(212),
    [anon_sym_BSLASHimage] = ACTIONS(212),
    [anon_sym_BSLASHaudio] = ACTIONS(212),
    [anon_sym_BSLASHvideo] = ACTIONS(212),
    [anon_sym_BSLASHicon] = ACTIONS(212),
    [anon_sym_BSLASHpass] = ACTIONS(212),
    [anon_sym_BSLASHlink] = ACTIONS(212),
    [anon_sym_BSLASHmailto] = ACTIONS(212),
    [anon_sym_BSLASHmenu] = ACTIONS(212),
    [anon_sym_BSLASHstem] = ACTIONS(212),
    [anon_sym_BSLASHlatexmath] = ACTIONS(212),
    [anon_sym_BSLASHasciimath] = ACTIONS(212),
    [anon_sym_BSLASHfootnote] = ACTIONS(214),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(212),
    [anon_sym_BSLASHanchor] = ACTIONS(212),
    [anon_sym_BSLASHxref] = ACTIONS(212),
    [anon_sym_BSLASHifdef] = ACTIONS(212),
    [anon_sym_BSLASHifndef] = ACTIONS(212),
    [anon_sym_BSLASHifeval] = ACTIONS(212),
    [anon_sym_BSLASHendif] = ACTIONS(212),
    [aux_sym_escaped_sequence_token1] = ACTIONS(214),
    [anon_sym_BANG] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_DOLLAR] = ACTIONS(214),
    [anon_sym_PERCENT] = ACTIONS(214),
    [anon_sym_AMP] = ACTIONS(214),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_STAR] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_COLON2] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_QMARK] = ACTIONS(214),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym__] = ACTIONS(214),
    [anon_sym_BQUOTE] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_TILDE] = ACTIONS(214),
    [anon_sym_PLUS2] = ACTIONS(214),
    [anon_sym_PLUS_PLUS] = ACTIONS(212),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(214),
    [anon_sym_LT_LT] = ACTIONS(212),
    [anon_sym_STAR2] = ACTIONS(214),
    [anon_sym_STAR_STAR] = ACTIONS(212),
    [anon_sym__2] = ACTIONS(214),
    [anon_sym___] = ACTIONS(212),
    [anon_sym_BQUOTE2] = ACTIONS(214),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(212),
    [anon_sym_POUND2] = ACTIONS(214),
    [anon_sym_POUND_POUND] = ACTIONS(212),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(214),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(212),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(216),
    [aux_sym_link_url_token1] = ACTIONS(218),
    [aux_sym_link_url_token2] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(218),
    [sym_email] = ACTIONS(218),
    [anon_sym_LBRACK_POUND] = ACTIONS(216),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(216),
    [anon_sym_kbd] = ACTIONS(218),
    [anon_sym_btn] = ACTIONS(218),
    [anon_sym_image] = ACTIONS(218),
    [anon_sym_audio] = ACTIONS(218),
    [anon_sym_video] = ACTIONS(218),
    [anon_sym_icon] = ACTIONS(218),
    [anon_sym_link] = ACTIONS(218),
    [anon_sym_mailto] = ACTIONS(218),
    [anon_sym_menu] = ACTIONS(218),
    [anon_sym_anchor] = ACTIONS(218),
    [anon_sym_xref] = ACTIONS(218),
    [anon_sym_ifdef] = ACTIONS(218),
    [anon_sym_ifndef] = ACTIONS(218),
    [anon_sym_ifeval] = ACTIONS(218),
    [anon_sym_endif] = ACTIONS(218),
    [anon_sym_indexterm2] = ACTIONS(218),
    [anon_sym_indexterm] = ACTIONS(218),
    [anon_sym_a2s] = ACTIONS(218),
    [anon_sym_barcode] = ACTIONS(218),
    [anon_sym_blockdiag] = ACTIONS(218),
    [anon_sym_bpmn] = ACTIONS(218),
    [anon_sym_bytefield] = ACTIONS(218),
    [anon_sym_d2] = ACTIONS(218),
    [anon_sym_dbml] = ACTIONS(218),
    [anon_sym_diagrams] = ACTIONS(218),
    [anon_sym_ditaa] = ACTIONS(218),
    [anon_sym_dpic] = ACTIONS(218),
    [anon_sym_erd] = ACTIONS(218),
    [anon_sym_gnuplot] = ACTIONS(218),
    [anon_sym_graphviz] = ACTIONS(218),
    [anon_sym_lilypond] = ACTIONS(218),
    [anon_sym_meme] = ACTIONS(218),
    [anon_sym_mermaid] = ACTIONS(218),
    [anon_sym_msc] = ACTIONS(218),
    [anon_sym_nomnoml] = ACTIONS(218),
    [anon_sym_pikchr] = ACTIONS(218),
    [anon_sym_plantuml] = ACTIONS(218),
    [anon_sym_shaape] = ACTIONS(218),
    [anon_sym_smcat] = ACTIONS(218),
    [anon_sym_structurizr] = ACTIONS(218),
    [anon_sym_svgbob] = ACTIONS(218),
    [anon_sym_symbolator] = ACTIONS(218),
    [anon_sym_syntrax] = ACTIONS(218),
    [anon_sym_tikz] = ACTIONS(218),
    [anon_sym_umlet] = ACTIONS(218),
    [anon_sym_vega] = ACTIONS(218),
    [anon_sym_wavedrom] = ACTIONS(218),
    [anon_sym_footnote] = ACTIONS(218),
    [anon_sym_footnoteref] = ACTIONS(218),
    [anon_sym_latexmath] = ACTIONS(218),
    [anon_sym_stem] = ACTIONS(218),
    [anon_sym_asciimath] = ACTIONS(218),
    [anon_sym_pass] = ACTIONS(218),
    [sym_replacement] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_f] = ACTIONS(218),
    [sym_super_escape] = ACTIONS(216),
    [sym__character] = ACTIONS(218),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(216),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(216),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(216),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(216),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(216),
    [anon_sym_BSLASH__] = ACTIONS(216),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(216),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(216),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(218),
    [anon_sym_BSLASHkbd] = ACTIONS(216),
    [anon_sym_BSLASHbtn] = ACTIONS(216),
    [anon_sym_BSLASHimage] = ACTIONS(216),
    [anon_sym_BSLASHaudio] = ACTIONS(216),
    [anon_sym_BSLASHvideo] = ACTIONS(216),
    [anon_sym_BSLASHicon] = ACTIONS(216),
    [anon_sym_BSLASHpass] = ACTIONS(216),
    [anon_sym_BSLASHlink] = ACTIONS(216),
    [anon_sym_BSLASHmailto] = ACTIONS(216),
    [anon_sym_BSLASHmenu] = ACTIONS(216),
    [anon_sym_BSLASHstem] = ACTIONS(216),
    [anon_sym_BSLASHlatexmath] = ACTIONS(216),
    [anon_sym_BSLASHasciimath] = ACTIONS(216),
    [anon_sym_BSLASHfootnote] = ACTIONS(218),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(216),
    [anon_sym_BSLASHanchor] = ACTIONS(216),
    [anon_sym_BSLASHxref] = ACTIONS(216),
    [anon_sym_BSLASHifdef] = ACTIONS(216),
    [anon_sym_BSLASHifndef] = ACTIONS(216),
    [anon_sym_BSLASHifeval] = ACTIONS(216),
    [anon_sym_BSLASHendif] = ACTIONS(216),
    [aux_sym_escaped_sequence_token1] = ACTIONS(218),
    [anon_sym_BANG] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(218),
    [anon_sym_AMP] = ACTIONS(218),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_STAR] = ACTIONS(218),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(218),
    [anon_sym_COLON2] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_LT] = ACTIONS(218),
    [anon_sym_EQ] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(216),
    [anon_sym_QMARK] = ACTIONS(218),
    [anon_sym_AT] = ACTIONS(216),
    [anon_sym_BSLASH] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(218),
    [anon_sym__] = ACTIONS(218),
    [anon_sym_BQUOTE] = ACTIONS(218),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_TILDE] = ACTIONS(218),
    [anon_sym_PLUS2] = ACTIONS(218),
    [anon_sym_PLUS_PLUS] = ACTIONS(216),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(218),
    [anon_sym_LT_LT] = ACTIONS(216),
    [anon_sym_STAR2] = ACTIONS(218),
    [anon_sym_STAR_STAR] = ACTIONS(216),
    [anon_sym__2] = ACTIONS(218),
    [anon_sym___] = ACTIONS(216),
    [anon_sym_BQUOTE2] = ACTIONS(218),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(216),
    [anon_sym_POUND2] = ACTIONS(218),
    [anon_sym_POUND_POUND] = ACTIONS(216),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(218),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(216),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(220),
    [aux_sym_link_url_token1] = ACTIONS(222),
    [aux_sym_link_url_token2] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [sym_email] = ACTIONS(222),
    [anon_sym_LBRACK_POUND] = ACTIONS(220),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(220),
    [anon_sym_kbd] = ACTIONS(222),
    [anon_sym_btn] = ACTIONS(222),
    [anon_sym_image] = ACTIONS(222),
    [anon_sym_audio] = ACTIONS(222),
    [anon_sym_video] = ACTIONS(222),
    [anon_sym_icon] = ACTIONS(222),
    [anon_sym_link] = ACTIONS(222),
    [anon_sym_mailto] = ACTIONS(222),
    [anon_sym_menu] = ACTIONS(222),
    [anon_sym_anchor] = ACTIONS(222),
    [anon_sym_xref] = ACTIONS(222),
    [anon_sym_ifdef] = ACTIONS(222),
    [anon_sym_ifndef] = ACTIONS(222),
    [anon_sym_ifeval] = ACTIONS(222),
    [anon_sym_endif] = ACTIONS(222),
    [anon_sym_indexterm2] = ACTIONS(222),
    [anon_sym_indexterm] = ACTIONS(222),
    [anon_sym_a2s] = ACTIONS(222),
    [anon_sym_barcode] = ACTIONS(222),
    [anon_sym_blockdiag] = ACTIONS(222),
    [anon_sym_bpmn] = ACTIONS(222),
    [anon_sym_bytefield] = ACTIONS(222),
    [anon_sym_d2] = ACTIONS(222),
    [anon_sym_dbml] = ACTIONS(222),
    [anon_sym_diagrams] = ACTIONS(222),
    [anon_sym_ditaa] = ACTIONS(222),
    [anon_sym_dpic] = ACTIONS(222),
    [anon_sym_erd] = ACTIONS(222),
    [anon_sym_gnuplot] = ACTIONS(222),
    [anon_sym_graphviz] = ACTIONS(222),
    [anon_sym_lilypond] = ACTIONS(222),
    [anon_sym_meme] = ACTIONS(222),
    [anon_sym_mermaid] = ACTIONS(222),
    [anon_sym_msc] = ACTIONS(222),
    [anon_sym_nomnoml] = ACTIONS(222),
    [anon_sym_pikchr] = ACTIONS(222),
    [anon_sym_plantuml] = ACTIONS(222),
    [anon_sym_shaape] = ACTIONS(222),
    [anon_sym_smcat] = ACTIONS(222),
    [anon_sym_structurizr] = ACTIONS(222),
    [anon_sym_svgbob] = ACTIONS(222),
    [anon_sym_symbolator] = ACTIONS(222),
    [anon_sym_syntrax] = ACTIONS(222),
    [anon_sym_tikz] = ACTIONS(222),
    [anon_sym_umlet] = ACTIONS(222),
    [anon_sym_vega] = ACTIONS(222),
    [anon_sym_wavedrom] = ACTIONS(222),
    [anon_sym_footnote] = ACTIONS(222),
    [anon_sym_footnoteref] = ACTIONS(222),
    [anon_sym_latexmath] = ACTIONS(222),
    [anon_sym_stem] = ACTIONS(222),
    [anon_sym_asciimath] = ACTIONS(222),
    [anon_sym_pass] = ACTIONS(222),
    [sym_replacement] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_f] = ACTIONS(222),
    [sym_super_escape] = ACTIONS(220),
    [sym__character] = ACTIONS(222),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(220),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(220),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(220),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(220),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(220),
    [anon_sym_BSLASH__] = ACTIONS(220),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(220),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(220),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(222),
    [anon_sym_BSLASHkbd] = ACTIONS(220),
    [anon_sym_BSLASHbtn] = ACTIONS(220),
    [anon_sym_BSLASHimage] = ACTIONS(220),
    [anon_sym_BSLASHaudio] = ACTIONS(220),
    [anon_sym_BSLASHvideo] = ACTIONS(220),
    [anon_sym_BSLASHicon] = ACTIONS(220),
    [anon_sym_BSLASHpass] = ACTIONS(220),
    [anon_sym_BSLASHlink] = ACTIONS(220),
    [anon_sym_BSLASHmailto] = ACTIONS(220),
    [anon_sym_BSLASHmenu] = ACTIONS(220),
    [anon_sym_BSLASHstem] = ACTIONS(220),
    [anon_sym_BSLASHlatexmath] = ACTIONS(220),
    [anon_sym_BSLASHasciimath] = ACTIONS(220),
    [anon_sym_BSLASHfootnote] = ACTIONS(222),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(220),
    [anon_sym_BSLASHanchor] = ACTIONS(220),
    [anon_sym_BSLASHxref] = ACTIONS(220),
    [anon_sym_BSLASHifdef] = ACTIONS(220),
    [anon_sym_BSLASHifndef] = ACTIONS(220),
    [anon_sym_BSLASHifeval] = ACTIONS(220),
    [anon_sym_BSLASHendif] = ACTIONS(220),
    [aux_sym_escaped_sequence_token1] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym_POUND] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_AMP] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_COLON2] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_PLUS2] = ACTIONS(222),
    [anon_sym_PLUS_PLUS] = ACTIONS(220),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(222),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_STAR2] = ACTIONS(222),
    [anon_sym_STAR_STAR] = ACTIONS(220),
    [anon_sym__2] = ACTIONS(222),
    [anon_sym___] = ACTIONS(220),
    [anon_sym_BQUOTE2] = ACTIONS(222),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(220),
    [anon_sym_POUND2] = ACTIONS(222),
    [anon_sym_POUND_POUND] = ACTIONS(220),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(222),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(220),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(224),
    [aux_sym_link_url_token1] = ACTIONS(226),
    [aux_sym_link_url_token2] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [sym_email] = ACTIONS(226),
    [anon_sym_LBRACK_POUND] = ACTIONS(224),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(224),
    [anon_sym_kbd] = ACTIONS(226),
    [anon_sym_btn] = ACTIONS(226),
    [anon_sym_image] = ACTIONS(226),
    [anon_sym_audio] = ACTIONS(226),
    [anon_sym_video] = ACTIONS(226),
    [anon_sym_icon] = ACTIONS(226),
    [anon_sym_link] = ACTIONS(226),
    [anon_sym_mailto] = ACTIONS(226),
    [anon_sym_menu] = ACTIONS(226),
    [anon_sym_anchor] = ACTIONS(226),
    [anon_sym_xref] = ACTIONS(226),
    [anon_sym_ifdef] = ACTIONS(226),
    [anon_sym_ifndef] = ACTIONS(226),
    [anon_sym_ifeval] = ACTIONS(226),
    [anon_sym_endif] = ACTIONS(226),
    [anon_sym_indexterm2] = ACTIONS(226),
    [anon_sym_indexterm] = ACTIONS(226),
    [anon_sym_a2s] = ACTIONS(226),
    [anon_sym_barcode] = ACTIONS(226),
    [anon_sym_blockdiag] = ACTIONS(226),
    [anon_sym_bpmn] = ACTIONS(226),
    [anon_sym_bytefield] = ACTIONS(226),
    [anon_sym_d2] = ACTIONS(226),
    [anon_sym_dbml] = ACTIONS(226),
    [anon_sym_diagrams] = ACTIONS(226),
    [anon_sym_ditaa] = ACTIONS(226),
    [anon_sym_dpic] = ACTIONS(226),
    [anon_sym_erd] = ACTIONS(226),
    [anon_sym_gnuplot] = ACTIONS(226),
    [anon_sym_graphviz] = ACTIONS(226),
    [anon_sym_lilypond] = ACTIONS(226),
    [anon_sym_meme] = ACTIONS(226),
    [anon_sym_mermaid] = ACTIONS(226),
    [anon_sym_msc] = ACTIONS(226),
    [anon_sym_nomnoml] = ACTIONS(226),
    [anon_sym_pikchr] = ACTIONS(226),
    [anon_sym_plantuml] = ACTIONS(226),
    [anon_sym_shaape] = ACTIONS(226),
    [anon_sym_smcat] = ACTIONS(226),
    [anon_sym_structurizr] = ACTIONS(226),
    [anon_sym_svgbob] = ACTIONS(226),
    [anon_sym_symbolator] = ACTIONS(226),
    [anon_sym_syntrax] = ACTIONS(226),
    [anon_sym_tikz] = ACTIONS(226),
    [anon_sym_umlet] = ACTIONS(226),
    [anon_sym_vega] = ACTIONS(226),
    [anon_sym_wavedrom] = ACTIONS(226),
    [anon_sym_footnote] = ACTIONS(226),
    [anon_sym_footnoteref] = ACTIONS(226),
    [anon_sym_latexmath] = ACTIONS(226),
    [anon_sym_stem] = ACTIONS(226),
    [anon_sym_asciimath] = ACTIONS(226),
    [anon_sym_pass] = ACTIONS(226),
    [sym_replacement] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
    [anon_sym_f] = ACTIONS(226),
    [sym_super_escape] = ACTIONS(224),
    [sym__character] = ACTIONS(226),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(224),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(224),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(224),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(224),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(224),
    [anon_sym_BSLASH__] = ACTIONS(224),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(224),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(224),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(226),
    [anon_sym_BSLASHkbd] = ACTIONS(224),
    [anon_sym_BSLASHbtn] = ACTIONS(224),
    [anon_sym_BSLASHimage] = ACTIONS(224),
    [anon_sym_BSLASHaudio] = ACTIONS(224),
    [anon_sym_BSLASHvideo] = ACTIONS(224),
    [anon_sym_BSLASHicon] = ACTIONS(224),
    [anon_sym_BSLASHpass] = ACTIONS(224),
    [anon_sym_BSLASHlink] = ACTIONS(224),
    [anon_sym_BSLASHmailto] = ACTIONS(224),
    [anon_sym_BSLASHmenu] = ACTIONS(224),
    [anon_sym_BSLASHstem] = ACTIONS(224),
    [anon_sym_BSLASHlatexmath] = ACTIONS(224),
    [anon_sym_BSLASHasciimath] = ACTIONS(224),
    [anon_sym_BSLASHfootnote] = ACTIONS(226),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(224),
    [anon_sym_BSLASHanchor] = ACTIONS(224),
    [anon_sym_BSLASHxref] = ACTIONS(224),
    [anon_sym_BSLASHifdef] = ACTIONS(224),
    [anon_sym_BSLASHifndef] = ACTIONS(224),
    [anon_sym_BSLASHifeval] = ACTIONS(224),
    [anon_sym_BSLASHendif] = ACTIONS(224),
    [aux_sym_escaped_sequence_token1] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(226),
    [anon_sym_POUND] = ACTIONS(226),
    [anon_sym_DOLLAR] = ACTIONS(226),
    [anon_sym_PERCENT] = ACTIONS(226),
    [anon_sym_AMP] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_COLON2] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_LT] = ACTIONS(226),
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_GT] = ACTIONS(224),
    [anon_sym_QMARK] = ACTIONS(226),
    [anon_sym_AT] = ACTIONS(224),
    [anon_sym_BSLASH] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym__] = ACTIONS(226),
    [anon_sym_BQUOTE] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_TILDE] = ACTIONS(226),
    [anon_sym_PLUS2] = ACTIONS(226),
    [anon_sym_PLUS_PLUS] = ACTIONS(224),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(226),
    [anon_sym_LT_LT] = ACTIONS(224),
    [anon_sym_STAR2] = ACTIONS(226),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [anon_sym__2] = ACTIONS(226),
    [anon_sym___] = ACTIONS(224),
    [anon_sym_BQUOTE2] = ACTIONS(226),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(224),
    [anon_sym_POUND2] = ACTIONS(226),
    [anon_sym_POUND_POUND] = ACTIONS(224),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(226),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(224),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(228),
    [aux_sym_link_url_token1] = ACTIONS(230),
    [aux_sym_link_url_token2] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(230),
    [sym_email] = ACTIONS(230),
    [anon_sym_LBRACK_POUND] = ACTIONS(228),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(228),
    [anon_sym_kbd] = ACTIONS(230),
    [anon_sym_btn] = ACTIONS(230),
    [anon_sym_image] = ACTIONS(230),
    [anon_sym_audio] = ACTIONS(230),
    [anon_sym_video] = ACTIONS(230),
    [anon_sym_icon] = ACTIONS(230),
    [anon_sym_link] = ACTIONS(230),
    [anon_sym_mailto] = ACTIONS(230),
    [anon_sym_menu] = ACTIONS(230),
    [anon_sym_anchor] = ACTIONS(230),
    [anon_sym_xref] = ACTIONS(230),
    [anon_sym_ifdef] = ACTIONS(230),
    [anon_sym_ifndef] = ACTIONS(230),
    [anon_sym_ifeval] = ACTIONS(230),
    [anon_sym_endif] = ACTIONS(230),
    [anon_sym_indexterm2] = ACTIONS(230),
    [anon_sym_indexterm] = ACTIONS(230),
    [anon_sym_a2s] = ACTIONS(230),
    [anon_sym_barcode] = ACTIONS(230),
    [anon_sym_blockdiag] = ACTIONS(230),
    [anon_sym_bpmn] = ACTIONS(230),
    [anon_sym_bytefield] = ACTIONS(230),
    [anon_sym_d2] = ACTIONS(230),
    [anon_sym_dbml] = ACTIONS(230),
    [anon_sym_diagrams] = ACTIONS(230),
    [anon_sym_ditaa] = ACTIONS(230),
    [anon_sym_dpic] = ACTIONS(230),
    [anon_sym_erd] = ACTIONS(230),
    [anon_sym_gnuplot] = ACTIONS(230),
    [anon_sym_graphviz] = ACTIONS(230),
    [anon_sym_lilypond] = ACTIONS(230),
    [anon_sym_meme] = ACTIONS(230),
    [anon_sym_mermaid] = ACTIONS(230),
    [anon_sym_msc] = ACTIONS(230),
    [anon_sym_nomnoml] = ACTIONS(230),
    [anon_sym_pikchr] = ACTIONS(230),
    [anon_sym_plantuml] = ACTIONS(230),
    [anon_sym_shaape] = ACTIONS(230),
    [anon_sym_smcat] = ACTIONS(230),
    [anon_sym_structurizr] = ACTIONS(230),
    [anon_sym_svgbob] = ACTIONS(230),
    [anon_sym_symbolator] = ACTIONS(230),
    [anon_sym_syntrax] = ACTIONS(230),
    [anon_sym_tikz] = ACTIONS(230),
    [anon_sym_umlet] = ACTIONS(230),
    [anon_sym_vega] = ACTIONS(230),
    [anon_sym_wavedrom] = ACTIONS(230),
    [anon_sym_footnote] = ACTIONS(230),
    [anon_sym_footnoteref] = ACTIONS(230),
    [anon_sym_latexmath] = ACTIONS(230),
    [anon_sym_stem] = ACTIONS(230),
    [anon_sym_asciimath] = ACTIONS(230),
    [anon_sym_pass] = ACTIONS(230),
    [sym_replacement] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_f] = ACTIONS(230),
    [sym_super_escape] = ACTIONS(228),
    [sym__character] = ACTIONS(230),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(228),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(228),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(228),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(228),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(228),
    [anon_sym_BSLASH__] = ACTIONS(228),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(228),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(228),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(230),
    [anon_sym_BSLASHkbd] = ACTIONS(228),
    [anon_sym_BSLASHbtn] = ACTIONS(228),
    [anon_sym_BSLASHimage] = ACTIONS(228),
    [anon_sym_BSLASHaudio] = ACTIONS(228),
    [anon_sym_BSLASHvideo] = ACTIONS(228),
    [anon_sym_BSLASHicon] = ACTIONS(228),
    [anon_sym_BSLASHpass] = ACTIONS(228),
    [anon_sym_BSLASHlink] = ACTIONS(228),
    [anon_sym_BSLASHmailto] = ACTIONS(228),
    [anon_sym_BSLASHmenu] = ACTIONS(228),
    [anon_sym_BSLASHstem] = ACTIONS(228),
    [anon_sym_BSLASHlatexmath] = ACTIONS(228),
    [anon_sym_BSLASHasciimath] = ACTIONS(228),
    [anon_sym_BSLASHfootnote] = ACTIONS(230),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(228),
    [anon_sym_BSLASHanchor] = ACTIONS(228),
    [anon_sym_BSLASHxref] = ACTIONS(228),
    [anon_sym_BSLASHifdef] = ACTIONS(228),
    [anon_sym_BSLASHifndef] = ACTIONS(228),
    [anon_sym_BSLASHifeval] = ACTIONS(228),
    [anon_sym_BSLASHendif] = ACTIONS(228),
    [aux_sym_escaped_sequence_token1] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(230),
    [anon_sym_DOLLAR] = ACTIONS(230),
    [anon_sym_PERCENT] = ACTIONS(230),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_STAR] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_COLON2] = ACTIONS(228),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(228),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(228),
    [anon_sym_BSLASH] = ACTIONS(230),
    [anon_sym_CARET] = ACTIONS(230),
    [anon_sym__] = ACTIONS(230),
    [anon_sym_BQUOTE] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_TILDE] = ACTIONS(230),
    [anon_sym_PLUS2] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(228),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(230),
    [anon_sym_LT_LT] = ACTIONS(228),
    [anon_sym_STAR2] = ACTIONS(230),
    [anon_sym_STAR_STAR] = ACTIONS(228),
    [anon_sym__2] = ACTIONS(230),
    [anon_sym___] = ACTIONS(228),
    [anon_sym_BQUOTE2] = ACTIONS(230),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(228),
    [anon_sym_POUND2] = ACTIONS(230),
    [anon_sym_POUND_POUND] = ACTIONS(228),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(230),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(228),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_RBRACK] = ACTIONS(232),
    [aux_sym_link_url_token1] = ACTIONS(234),
    [aux_sym_link_url_token2] = ACTIONS(234),
    [anon_sym_DOT] = ACTIONS(234),
    [sym_email] = ACTIONS(234),
    [anon_sym_LBRACK_POUND] = ACTIONS(232),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(232),
    [anon_sym_kbd] = ACTIONS(234),
    [anon_sym_btn] = ACTIONS(234),
    [anon_sym_image] = ACTIONS(234),
    [anon_sym_audio] = ACTIONS(234),
    [anon_sym_video] = ACTIONS(234),
    [anon_sym_icon] = ACTIONS(234),
    [anon_sym_link] = ACTIONS(234),
    [anon_sym_mailto] = ACTIONS(234),
    [anon_sym_menu] = ACTIONS(234),
    [anon_sym_anchor] = ACTIONS(234),
    [anon_sym_xref] = ACTIONS(234),
    [anon_sym_ifdef] = ACTIONS(234),
    [anon_sym_ifndef] = ACTIONS(234),
    [anon_sym_ifeval] = ACTIONS(234),
    [anon_sym_endif] = ACTIONS(234),
    [anon_sym_indexterm2] = ACTIONS(234),
    [anon_sym_indexterm] = ACTIONS(234),
    [anon_sym_a2s] = ACTIONS(234),
    [anon_sym_barcode] = ACTIONS(234),
    [anon_sym_blockdiag] = ACTIONS(234),
    [anon_sym_bpmn] = ACTIONS(234),
    [anon_sym_bytefield] = ACTIONS(234),
    [anon_sym_d2] = ACTIONS(234),
    [anon_sym_dbml] = ACTIONS(234),
    [anon_sym_diagrams] = ACTIONS(234),
    [anon_sym_ditaa] = ACTIONS(234),
    [anon_sym_dpic] = ACTIONS(234),
    [anon_sym_erd] = ACTIONS(234),
    [anon_sym_gnuplot] = ACTIONS(234),
    [anon_sym_graphviz] = ACTIONS(234),
    [anon_sym_lilypond] = ACTIONS(234),
    [anon_sym_meme] = ACTIONS(234),
    [anon_sym_mermaid] = ACTIONS(234),
    [anon_sym_msc] = ACTIONS(234),
    [anon_sym_nomnoml] = ACTIONS(234),
    [anon_sym_pikchr] = ACTIONS(234),
    [anon_sym_plantuml] = ACTIONS(234),
    [anon_sym_shaape] = ACTIONS(234),
    [anon_sym_smcat] = ACTIONS(234),
    [anon_sym_structurizr] = ACTIONS(234),
    [anon_sym_svgbob] = ACTIONS(234),
    [anon_sym_symbolator] = ACTIONS(234),
    [anon_sym_syntrax] = ACTIONS(234),
    [anon_sym_tikz] = ACTIONS(234),
    [anon_sym_umlet] = ACTIONS(234),
    [anon_sym_vega] = ACTIONS(234),
    [anon_sym_wavedrom] = ACTIONS(234),
    [anon_sym_footnote] = ACTIONS(234),
    [anon_sym_footnoteref] = ACTIONS(234),
    [anon_sym_latexmath] = ACTIONS(234),
    [anon_sym_stem] = ACTIONS(234),
    [anon_sym_asciimath] = ACTIONS(234),
    [anon_sym_pass] = ACTIONS(234),
    [sym_replacement] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_f] = ACTIONS(234),
    [sym_super_escape] = ACTIONS(232),
    [sym__character] = ACTIONS(234),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(232),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(232),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(232),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(232),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(232),
    [anon_sym_BSLASH__] = ACTIONS(232),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(232),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(232),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_BSLASHkbd] = ACTIONS(232),
    [anon_sym_BSLASHbtn] = ACTIONS(232),
    [anon_sym_BSLASHimage] = ACTIONS(232),
    [anon_sym_BSLASHaudio] = ACTIONS(232),
    [anon_sym_BSLASHvideo] = ACTIONS(232),
    [anon_sym_BSLASHicon] = ACTIONS(232),
    [anon_sym_BSLASHpass] = ACTIONS(232),
    [anon_sym_BSLASHlink] = ACTIONS(232),
    [anon_sym_BSLASHmailto] = ACTIONS(232),
    [anon_sym_BSLASHmenu] = ACTIONS(232),
    [anon_sym_BSLASHstem] = ACTIONS(232),
    [anon_sym_BSLASHlatexmath] = ACTIONS(232),
    [anon_sym_BSLASHasciimath] = ACTIONS(232),
    [anon_sym_BSLASHfootnote] = ACTIONS(234),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(232),
    [anon_sym_BSLASHanchor] = ACTIONS(232),
    [anon_sym_BSLASHxref] = ACTIONS(232),
    [anon_sym_BSLASHifdef] = ACTIONS(232),
    [anon_sym_BSLASHifndef] = ACTIONS(232),
    [anon_sym_BSLASHifeval] = ACTIONS(232),
    [anon_sym_BSLASHendif] = ACTIONS(232),
    [aux_sym_escaped_sequence_token1] = ACTIONS(234),
    [anon_sym_BANG] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(234),
    [anon_sym_DOLLAR] = ACTIONS(234),
    [anon_sym_PERCENT] = ACTIONS(234),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_COLON2] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(234),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_QMARK] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_BSLASH] = ACTIONS(234),
    [anon_sym_CARET] = ACTIONS(234),
    [anon_sym__] = ACTIONS(234),
    [anon_sym_BQUOTE] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(234),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_PLUS2] = ACTIONS(234),
    [anon_sym_PLUS_PLUS] = ACTIONS(232),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(234),
    [anon_sym_LT_LT] = ACTIONS(232),
    [anon_sym_STAR2] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(232),
    [anon_sym__2] = ACTIONS(234),
    [anon_sym___] = ACTIONS(232),
    [anon_sym_BQUOTE2] = ACTIONS(234),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(232),
    [anon_sym_POUND2] = ACTIONS(234),
    [anon_sym_POUND_POUND] = ACTIONS(232),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(234),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(232),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_RBRACK] = ACTIONS(236),
    [aux_sym_link_url_token1] = ACTIONS(238),
    [aux_sym_link_url_token2] = ACTIONS(238),
    [anon_sym_DOT] = ACTIONS(238),
    [sym_email] = ACTIONS(238),
    [anon_sym_LBRACK_POUND] = ACTIONS(236),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(236),
    [anon_sym_kbd] = ACTIONS(238),
    [anon_sym_btn] = ACTIONS(238),
    [anon_sym_image] = ACTIONS(238),
    [anon_sym_audio] = ACTIONS(238),
    [anon_sym_video] = ACTIONS(238),
    [anon_sym_icon] = ACTIONS(238),
    [anon_sym_link] = ACTIONS(238),
    [anon_sym_mailto] = ACTIONS(238),
    [anon_sym_menu] = ACTIONS(238),
    [anon_sym_anchor] = ACTIONS(238),
    [anon_sym_xref] = ACTIONS(238),
    [anon_sym_ifdef] = ACTIONS(238),
    [anon_sym_ifndef] = ACTIONS(238),
    [anon_sym_ifeval] = ACTIONS(238),
    [anon_sym_endif] = ACTIONS(238),
    [anon_sym_indexterm2] = ACTIONS(238),
    [anon_sym_indexterm] = ACTIONS(238),
    [anon_sym_a2s] = ACTIONS(238),
    [anon_sym_barcode] = ACTIONS(238),
    [anon_sym_blockdiag] = ACTIONS(238),
    [anon_sym_bpmn] = ACTIONS(238),
    [anon_sym_bytefield] = ACTIONS(238),
    [anon_sym_d2] = ACTIONS(238),
    [anon_sym_dbml] = ACTIONS(238),
    [anon_sym_diagrams] = ACTIONS(238),
    [anon_sym_ditaa] = ACTIONS(238),
    [anon_sym_dpic] = ACTIONS(238),
    [anon_sym_erd] = ACTIONS(238),
    [anon_sym_gnuplot] = ACTIONS(238),
    [anon_sym_graphviz] = ACTIONS(238),
    [anon_sym_lilypond] = ACTIONS(238),
    [anon_sym_meme] = ACTIONS(238),
    [anon_sym_mermaid] = ACTIONS(238),
    [anon_sym_msc] = ACTIONS(238),
    [anon_sym_nomnoml] = ACTIONS(238),
    [anon_sym_pikchr] = ACTIONS(238),
    [anon_sym_plantuml] = ACTIONS(238),
    [anon_sym_shaape] = ACTIONS(238),
    [anon_sym_smcat] = ACTIONS(238),
    [anon_sym_structurizr] = ACTIONS(238),
    [anon_sym_svgbob] = ACTIONS(238),
    [anon_sym_symbolator] = ACTIONS(238),
    [anon_sym_syntrax] = ACTIONS(238),
    [anon_sym_tikz] = ACTIONS(238),
    [anon_sym_umlet] = ACTIONS(238),
    [anon_sym_vega] = ACTIONS(238),
    [anon_sym_wavedrom] = ACTIONS(238),
    [anon_sym_footnote] = ACTIONS(238),
    [anon_sym_footnoteref] = ACTIONS(238),
    [anon_sym_latexmath] = ACTIONS(238),
    [anon_sym_stem] = ACTIONS(238),
    [anon_sym_asciimath] = ACTIONS(238),
    [anon_sym_pass] = ACTIONS(238),
    [sym_replacement] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_f] = ACTIONS(238),
    [sym_super_escape] = ACTIONS(236),
    [sym__character] = ACTIONS(238),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(236),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(236),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(236),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(236),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(236),
    [anon_sym_BSLASH__] = ACTIONS(236),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(236),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(236),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(238),
    [anon_sym_BSLASHkbd] = ACTIONS(236),
    [anon_sym_BSLASHbtn] = ACTIONS(236),
    [anon_sym_BSLASHimage] = ACTIONS(236),
    [anon_sym_BSLASHaudio] = ACTIONS(236),
    [anon_sym_BSLASHvideo] = ACTIONS(236),
    [anon_sym_BSLASHicon] = ACTIONS(236),
    [anon_sym_BSLASHpass] = ACTIONS(236),
    [anon_sym_BSLASHlink] = ACTIONS(236),
    [anon_sym_BSLASHmailto] = ACTIONS(236),
    [anon_sym_BSLASHmenu] = ACTIONS(236),
    [anon_sym_BSLASHstem] = ACTIONS(236),
    [anon_sym_BSLASHlatexmath] = ACTIONS(236),
    [anon_sym_BSLASHasciimath] = ACTIONS(236),
    [anon_sym_BSLASHfootnote] = ACTIONS(238),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(236),
    [anon_sym_BSLASHanchor] = ACTIONS(236),
    [anon_sym_BSLASHxref] = ACTIONS(236),
    [anon_sym_BSLASHifdef] = ACTIONS(236),
    [anon_sym_BSLASHifndef] = ACTIONS(236),
    [anon_sym_BSLASHifeval] = ACTIONS(236),
    [anon_sym_BSLASHendif] = ACTIONS(236),
    [aux_sym_escaped_sequence_token1] = ACTIONS(238),
    [anon_sym_BANG] = ACTIONS(238),
    [anon_sym_POUND] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(238),
    [anon_sym_AMP] = ACTIONS(238),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_COLON2] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(238),
    [anon_sym_GT] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(238),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(238),
    [anon_sym_CARET] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [anon_sym_BQUOTE] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_TILDE] = ACTIONS(238),
    [anon_sym_PLUS2] = ACTIONS(238),
    [anon_sym_PLUS_PLUS] = ACTIONS(236),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(238),
    [anon_sym_LT_LT] = ACTIONS(236),
    [anon_sym_STAR2] = ACTIONS(238),
    [anon_sym_STAR_STAR] = ACTIONS(236),
    [anon_sym__2] = ACTIONS(238),
    [anon_sym___] = ACTIONS(236),
    [anon_sym_BQUOTE2] = ACTIONS(238),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(236),
    [anon_sym_POUND2] = ACTIONS(238),
    [anon_sym_POUND_POUND] = ACTIONS(236),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(238),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(236),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_RBRACK] = ACTIONS(240),
    [aux_sym_link_url_token1] = ACTIONS(242),
    [aux_sym_link_url_token2] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(242),
    [sym_email] = ACTIONS(242),
    [anon_sym_LBRACK_POUND] = ACTIONS(240),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(240),
    [anon_sym_kbd] = ACTIONS(242),
    [anon_sym_btn] = ACTIONS(242),
    [anon_sym_image] = ACTIONS(242),
    [anon_sym_audio] = ACTIONS(242),
    [anon_sym_video] = ACTIONS(242),
    [anon_sym_icon] = ACTIONS(242),
    [anon_sym_link] = ACTIONS(242),
    [anon_sym_mailto] = ACTIONS(242),
    [anon_sym_menu] = ACTIONS(242),
    [anon_sym_anchor] = ACTIONS(242),
    [anon_sym_xref] = ACTIONS(242),
    [anon_sym_ifdef] = ACTIONS(242),
    [anon_sym_ifndef] = ACTIONS(242),
    [anon_sym_ifeval] = ACTIONS(242),
    [anon_sym_endif] = ACTIONS(242),
    [anon_sym_indexterm2] = ACTIONS(242),
    [anon_sym_indexterm] = ACTIONS(242),
    [anon_sym_a2s] = ACTIONS(242),
    [anon_sym_barcode] = ACTIONS(242),
    [anon_sym_blockdiag] = ACTIONS(242),
    [anon_sym_bpmn] = ACTIONS(242),
    [anon_sym_bytefield] = ACTIONS(242),
    [anon_sym_d2] = ACTIONS(242),
    [anon_sym_dbml] = ACTIONS(242),
    [anon_sym_diagrams] = ACTIONS(242),
    [anon_sym_ditaa] = ACTIONS(242),
    [anon_sym_dpic] = ACTIONS(242),
    [anon_sym_erd] = ACTIONS(242),
    [anon_sym_gnuplot] = ACTIONS(242),
    [anon_sym_graphviz] = ACTIONS(242),
    [anon_sym_lilypond] = ACTIONS(242),
    [anon_sym_meme] = ACTIONS(242),
    [anon_sym_mermaid] = ACTIONS(242),
    [anon_sym_msc] = ACTIONS(242),
    [anon_sym_nomnoml] = ACTIONS(242),
    [anon_sym_pikchr] = ACTIONS(242),
    [anon_sym_plantuml] = ACTIONS(242),
    [anon_sym_shaape] = ACTIONS(242),
    [anon_sym_smcat] = ACTIONS(242),
    [anon_sym_structurizr] = ACTIONS(242),
    [anon_sym_svgbob] = ACTIONS(242),
    [anon_sym_symbolator] = ACTIONS(242),
    [anon_sym_syntrax] = ACTIONS(242),
    [anon_sym_tikz] = ACTIONS(242),
    [anon_sym_umlet] = ACTIONS(242),
    [anon_sym_vega] = ACTIONS(242),
    [anon_sym_wavedrom] = ACTIONS(242),
    [anon_sym_footnote] = ACTIONS(242),
    [anon_sym_footnoteref] = ACTIONS(242),
    [anon_sym_latexmath] = ACTIONS(242),
    [anon_sym_stem] = ACTIONS(242),
    [anon_sym_asciimath] = ACTIONS(242),
    [anon_sym_pass] = ACTIONS(242),
    [sym_replacement] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_f] = ACTIONS(242),
    [sym_super_escape] = ACTIONS(240),
    [sym__character] = ACTIONS(242),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(240),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(240),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(240),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(240),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(240),
    [anon_sym_BSLASH__] = ACTIONS(240),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(240),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(240),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(242),
    [anon_sym_BSLASHkbd] = ACTIONS(240),
    [anon_sym_BSLASHbtn] = ACTIONS(240),
    [anon_sym_BSLASHimage] = ACTIONS(240),
    [anon_sym_BSLASHaudio] = ACTIONS(240),
    [anon_sym_BSLASHvideo] = ACTIONS(240),
    [anon_sym_BSLASHicon] = ACTIONS(240),
    [anon_sym_BSLASHpass] = ACTIONS(240),
    [anon_sym_BSLASHlink] = ACTIONS(240),
    [anon_sym_BSLASHmailto] = ACTIONS(240),
    [anon_sym_BSLASHmenu] = ACTIONS(240),
    [anon_sym_BSLASHstem] = ACTIONS(240),
    [anon_sym_BSLASHlatexmath] = ACTIONS(240),
    [anon_sym_BSLASHasciimath] = ACTIONS(240),
    [anon_sym_BSLASHfootnote] = ACTIONS(242),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(240),
    [anon_sym_BSLASHanchor] = ACTIONS(240),
    [anon_sym_BSLASHxref] = ACTIONS(240),
    [anon_sym_BSLASHifdef] = ACTIONS(240),
    [anon_sym_BSLASHifndef] = ACTIONS(240),
    [anon_sym_BSLASHifeval] = ACTIONS(240),
    [anon_sym_BSLASHendif] = ACTIONS(240),
    [aux_sym_escaped_sequence_token1] = ACTIONS(242),
    [anon_sym_BANG] = ACTIONS(242),
    [anon_sym_POUND] = ACTIONS(242),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(242),
    [anon_sym_AMP] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(242),
    [anon_sym_COLON2] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(242),
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_AT] = ACTIONS(240),
    [anon_sym_BSLASH] = ACTIONS(242),
    [anon_sym_CARET] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [anon_sym_BQUOTE] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(242),
    [anon_sym_PLUS2] = ACTIONS(242),
    [anon_sym_PLUS_PLUS] = ACTIONS(240),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(242),
    [anon_sym_LT_LT] = ACTIONS(240),
    [anon_sym_STAR2] = ACTIONS(242),
    [anon_sym_STAR_STAR] = ACTIONS(240),
    [anon_sym__2] = ACTIONS(242),
    [anon_sym___] = ACTIONS(240),
    [anon_sym_BQUOTE2] = ACTIONS(242),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(240),
    [anon_sym_POUND2] = ACTIONS(242),
    [anon_sym_POUND_POUND] = ACTIONS(240),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(242),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(240),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_RBRACK] = ACTIONS(244),
    [aux_sym_link_url_token1] = ACTIONS(246),
    [aux_sym_link_url_token2] = ACTIONS(246),
    [anon_sym_DOT] = ACTIONS(246),
    [sym_email] = ACTIONS(246),
    [anon_sym_LBRACK_POUND] = ACTIONS(244),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(244),
    [anon_sym_kbd] = ACTIONS(246),
    [anon_sym_btn] = ACTIONS(246),
    [anon_sym_image] = ACTIONS(246),
    [anon_sym_audio] = ACTIONS(246),
    [anon_sym_video] = ACTIONS(246),
    [anon_sym_icon] = ACTIONS(246),
    [anon_sym_link] = ACTIONS(246),
    [anon_sym_mailto] = ACTIONS(246),
    [anon_sym_menu] = ACTIONS(246),
    [anon_sym_anchor] = ACTIONS(246),
    [anon_sym_xref] = ACTIONS(246),
    [anon_sym_ifdef] = ACTIONS(246),
    [anon_sym_ifndef] = ACTIONS(246),
    [anon_sym_ifeval] = ACTIONS(246),
    [anon_sym_endif] = ACTIONS(246),
    [anon_sym_indexterm2] = ACTIONS(246),
    [anon_sym_indexterm] = ACTIONS(246),
    [anon_sym_a2s] = ACTIONS(246),
    [anon_sym_barcode] = ACTIONS(246),
    [anon_sym_blockdiag] = ACTIONS(246),
    [anon_sym_bpmn] = ACTIONS(246),
    [anon_sym_bytefield] = ACTIONS(246),
    [anon_sym_d2] = ACTIONS(246),
    [anon_sym_dbml] = ACTIONS(246),
    [anon_sym_diagrams] = ACTIONS(246),
    [anon_sym_ditaa] = ACTIONS(246),
    [anon_sym_dpic] = ACTIONS(246),
    [anon_sym_erd] = ACTIONS(246),
    [anon_sym_gnuplot] = ACTIONS(246),
    [anon_sym_graphviz] = ACTIONS(246),
    [anon_sym_lilypond] = ACTIONS(246),
    [anon_sym_meme] = ACTIONS(246),
    [anon_sym_mermaid] = ACTIONS(246),
    [anon_sym_msc] = ACTIONS(246),
    [anon_sym_nomnoml] = ACTIONS(246),
    [anon_sym_pikchr] = ACTIONS(246),
    [anon_sym_plantuml] = ACTIONS(246),
    [anon_sym_shaape] = ACTIONS(246),
    [anon_sym_smcat] = ACTIONS(246),
    [anon_sym_structurizr] = ACTIONS(246),
    [anon_sym_svgbob] = ACTIONS(246),
    [anon_sym_symbolator] = ACTIONS(246),
    [anon_sym_syntrax] = ACTIONS(246),
    [anon_sym_tikz] = ACTIONS(246),
    [anon_sym_umlet] = ACTIONS(246),
    [anon_sym_vega] = ACTIONS(246),
    [anon_sym_wavedrom] = ACTIONS(246),
    [anon_sym_footnote] = ACTIONS(246),
    [anon_sym_footnoteref] = ACTIONS(246),
    [anon_sym_latexmath] = ACTIONS(246),
    [anon_sym_stem] = ACTIONS(246),
    [anon_sym_asciimath] = ACTIONS(246),
    [anon_sym_pass] = ACTIONS(246),
    [sym_replacement] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_f] = ACTIONS(246),
    [sym_super_escape] = ACTIONS(244),
    [sym__character] = ACTIONS(246),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(244),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(244),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(244),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(244),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(244),
    [anon_sym_BSLASH__] = ACTIONS(244),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(244),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(244),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_BSLASHkbd] = ACTIONS(244),
    [anon_sym_BSLASHbtn] = ACTIONS(244),
    [anon_sym_BSLASHimage] = ACTIONS(244),
    [anon_sym_BSLASHaudio] = ACTIONS(244),
    [anon_sym_BSLASHvideo] = ACTIONS(244),
    [anon_sym_BSLASHicon] = ACTIONS(244),
    [anon_sym_BSLASHpass] = ACTIONS(244),
    [anon_sym_BSLASHlink] = ACTIONS(244),
    [anon_sym_BSLASHmailto] = ACTIONS(244),
    [anon_sym_BSLASHmenu] = ACTIONS(244),
    [anon_sym_BSLASHstem] = ACTIONS(244),
    [anon_sym_BSLASHlatexmath] = ACTIONS(244),
    [anon_sym_BSLASHasciimath] = ACTIONS(244),
    [anon_sym_BSLASHfootnote] = ACTIONS(246),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(244),
    [anon_sym_BSLASHanchor] = ACTIONS(244),
    [anon_sym_BSLASHxref] = ACTIONS(244),
    [anon_sym_BSLASHifdef] = ACTIONS(244),
    [anon_sym_BSLASHifndef] = ACTIONS(244),
    [anon_sym_BSLASHifeval] = ACTIONS(244),
    [anon_sym_BSLASHendif] = ACTIONS(244),
    [aux_sym_escaped_sequence_token1] = ACTIONS(246),
    [anon_sym_BANG] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(246),
    [anon_sym_DOLLAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(246),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_COLON2] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(244),
    [anon_sym_QMARK] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_CARET] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_TILDE] = ACTIONS(246),
    [anon_sym_PLUS2] = ACTIONS(246),
    [anon_sym_PLUS_PLUS] = ACTIONS(244),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(244),
    [anon_sym_STAR2] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(244),
    [anon_sym__2] = ACTIONS(246),
    [anon_sym___] = ACTIONS(244),
    [anon_sym_BQUOTE2] = ACTIONS(246),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(244),
    [anon_sym_POUND2] = ACTIONS(246),
    [anon_sym_POUND_POUND] = ACTIONS(244),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(246),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(244),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(248),
    [aux_sym_link_url_token1] = ACTIONS(250),
    [aux_sym_link_url_token2] = ACTIONS(250),
    [anon_sym_DOT] = ACTIONS(250),
    [sym_email] = ACTIONS(250),
    [anon_sym_LBRACK_POUND] = ACTIONS(248),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(248),
    [anon_sym_kbd] = ACTIONS(250),
    [anon_sym_btn] = ACTIONS(250),
    [anon_sym_image] = ACTIONS(250),
    [anon_sym_audio] = ACTIONS(250),
    [anon_sym_video] = ACTIONS(250),
    [anon_sym_icon] = ACTIONS(250),
    [anon_sym_link] = ACTIONS(250),
    [anon_sym_mailto] = ACTIONS(250),
    [anon_sym_menu] = ACTIONS(250),
    [anon_sym_anchor] = ACTIONS(250),
    [anon_sym_xref] = ACTIONS(250),
    [anon_sym_ifdef] = ACTIONS(250),
    [anon_sym_ifndef] = ACTIONS(250),
    [anon_sym_ifeval] = ACTIONS(250),
    [anon_sym_endif] = ACTIONS(250),
    [anon_sym_indexterm2] = ACTIONS(250),
    [anon_sym_indexterm] = ACTIONS(250),
    [anon_sym_a2s] = ACTIONS(250),
    [anon_sym_barcode] = ACTIONS(250),
    [anon_sym_blockdiag] = ACTIONS(250),
    [anon_sym_bpmn] = ACTIONS(250),
    [anon_sym_bytefield] = ACTIONS(250),
    [anon_sym_d2] = ACTIONS(250),
    [anon_sym_dbml] = ACTIONS(250),
    [anon_sym_diagrams] = ACTIONS(250),
    [anon_sym_ditaa] = ACTIONS(250),
    [anon_sym_dpic] = ACTIONS(250),
    [anon_sym_erd] = ACTIONS(250),
    [anon_sym_gnuplot] = ACTIONS(250),
    [anon_sym_graphviz] = ACTIONS(250),
    [anon_sym_lilypond] = ACTIONS(250),
    [anon_sym_meme] = ACTIONS(250),
    [anon_sym_mermaid] = ACTIONS(250),
    [anon_sym_msc] = ACTIONS(250),
    [anon_sym_nomnoml] = ACTIONS(250),
    [anon_sym_pikchr] = ACTIONS(250),
    [anon_sym_plantuml] = ACTIONS(250),
    [anon_sym_shaape] = ACTIONS(250),
    [anon_sym_smcat] = ACTIONS(250),
    [anon_sym_structurizr] = ACTIONS(250),
    [anon_sym_svgbob] = ACTIONS(250),
    [anon_sym_symbolator] = ACTIONS(250),
    [anon_sym_syntrax] = ACTIONS(250),
    [anon_sym_tikz] = ACTIONS(250),
    [anon_sym_umlet] = ACTIONS(250),
    [anon_sym_vega] = ACTIONS(250),
    [anon_sym_wavedrom] = ACTIONS(250),
    [anon_sym_footnote] = ACTIONS(250),
    [anon_sym_footnoteref] = ACTIONS(250),
    [anon_sym_latexmath] = ACTIONS(250),
    [anon_sym_stem] = ACTIONS(250),
    [anon_sym_asciimath] = ACTIONS(250),
    [anon_sym_pass] = ACTIONS(250),
    [sym_replacement] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_f] = ACTIONS(250),
    [sym_super_escape] = ACTIONS(248),
    [sym__character] = ACTIONS(250),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(248),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(248),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(248),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(248),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(248),
    [anon_sym_BSLASH__] = ACTIONS(248),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(248),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(248),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(250),
    [anon_sym_BSLASHkbd] = ACTIONS(248),
    [anon_sym_BSLASHbtn] = ACTIONS(248),
    [anon_sym_BSLASHimage] = ACTIONS(248),
    [anon_sym_BSLASHaudio] = ACTIONS(248),
    [anon_sym_BSLASHvideo] = ACTIONS(248),
    [anon_sym_BSLASHicon] = ACTIONS(248),
    [anon_sym_BSLASHpass] = ACTIONS(248),
    [anon_sym_BSLASHlink] = ACTIONS(248),
    [anon_sym_BSLASHmailto] = ACTIONS(248),
    [anon_sym_BSLASHmenu] = ACTIONS(248),
    [anon_sym_BSLASHstem] = ACTIONS(248),
    [anon_sym_BSLASHlatexmath] = ACTIONS(248),
    [anon_sym_BSLASHasciimath] = ACTIONS(248),
    [anon_sym_BSLASHfootnote] = ACTIONS(250),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(248),
    [anon_sym_BSLASHanchor] = ACTIONS(248),
    [anon_sym_BSLASHxref] = ACTIONS(248),
    [anon_sym_BSLASHifdef] = ACTIONS(248),
    [anon_sym_BSLASHifndef] = ACTIONS(248),
    [anon_sym_BSLASHifeval] = ACTIONS(248),
    [anon_sym_BSLASHendif] = ACTIONS(248),
    [aux_sym_escaped_sequence_token1] = ACTIONS(250),
    [anon_sym_BANG] = ACTIONS(250),
    [anon_sym_POUND] = ACTIONS(250),
    [anon_sym_DOLLAR] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_COLON2] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(250),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_BSLASH] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [anon_sym_BQUOTE] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_TILDE] = ACTIONS(250),
    [anon_sym_PLUS2] = ACTIONS(250),
    [anon_sym_PLUS_PLUS] = ACTIONS(248),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_STAR2] = ACTIONS(250),
    [anon_sym_STAR_STAR] = ACTIONS(248),
    [anon_sym__2] = ACTIONS(250),
    [anon_sym___] = ACTIONS(248),
    [anon_sym_BQUOTE2] = ACTIONS(250),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(248),
    [anon_sym_POUND2] = ACTIONS(250),
    [anon_sym_POUND_POUND] = ACTIONS(248),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(250),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(248),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(252),
    [aux_sym_link_url_token1] = ACTIONS(254),
    [aux_sym_link_url_token2] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(254),
    [sym_email] = ACTIONS(254),
    [anon_sym_LBRACK_POUND] = ACTIONS(252),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(252),
    [anon_sym_kbd] = ACTIONS(254),
    [anon_sym_btn] = ACTIONS(254),
    [anon_sym_image] = ACTIONS(254),
    [anon_sym_audio] = ACTIONS(254),
    [anon_sym_video] = ACTIONS(254),
    [anon_sym_icon] = ACTIONS(254),
    [anon_sym_link] = ACTIONS(254),
    [anon_sym_mailto] = ACTIONS(254),
    [anon_sym_menu] = ACTIONS(254),
    [anon_sym_anchor] = ACTIONS(254),
    [anon_sym_xref] = ACTIONS(254),
    [anon_sym_ifdef] = ACTIONS(254),
    [anon_sym_ifndef] = ACTIONS(254),
    [anon_sym_ifeval] = ACTIONS(254),
    [anon_sym_endif] = ACTIONS(254),
    [anon_sym_indexterm2] = ACTIONS(254),
    [anon_sym_indexterm] = ACTIONS(254),
    [anon_sym_a2s] = ACTIONS(254),
    [anon_sym_barcode] = ACTIONS(254),
    [anon_sym_blockdiag] = ACTIONS(254),
    [anon_sym_bpmn] = ACTIONS(254),
    [anon_sym_bytefield] = ACTIONS(254),
    [anon_sym_d2] = ACTIONS(254),
    [anon_sym_dbml] = ACTIONS(254),
    [anon_sym_diagrams] = ACTIONS(254),
    [anon_sym_ditaa] = ACTIONS(254),
    [anon_sym_dpic] = ACTIONS(254),
    [anon_sym_erd] = ACTIONS(254),
    [anon_sym_gnuplot] = ACTIONS(254),
    [anon_sym_graphviz] = ACTIONS(254),
    [anon_sym_lilypond] = ACTIONS(254),
    [anon_sym_meme] = ACTIONS(254),
    [anon_sym_mermaid] = ACTIONS(254),
    [anon_sym_msc] = ACTIONS(254),
    [anon_sym_nomnoml] = ACTIONS(254),
    [anon_sym_pikchr] = ACTIONS(254),
    [anon_sym_plantuml] = ACTIONS(254),
    [anon_sym_shaape] = ACTIONS(254),
    [anon_sym_smcat] = ACTIONS(254),
    [anon_sym_structurizr] = ACTIONS(254),
    [anon_sym_svgbob] = ACTIONS(254),
    [anon_sym_symbolator] = ACTIONS(254),
    [anon_sym_syntrax] = ACTIONS(254),
    [anon_sym_tikz] = ACTIONS(254),
    [anon_sym_umlet] = ACTIONS(254),
    [anon_sym_vega] = ACTIONS(254),
    [anon_sym_wavedrom] = ACTIONS(254),
    [anon_sym_footnote] = ACTIONS(254),
    [anon_sym_footnoteref] = ACTIONS(254),
    [anon_sym_latexmath] = ACTIONS(254),
    [anon_sym_stem] = ACTIONS(254),
    [anon_sym_asciimath] = ACTIONS(254),
    [anon_sym_pass] = ACTIONS(254),
    [sym_replacement] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_f] = ACTIONS(254),
    [sym_super_escape] = ACTIONS(252),
    [sym__character] = ACTIONS(254),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(252),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(252),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(252),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(252),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(252),
    [anon_sym_BSLASH__] = ACTIONS(252),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(252),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(252),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_BSLASHkbd] = ACTIONS(252),
    [anon_sym_BSLASHbtn] = ACTIONS(252),
    [anon_sym_BSLASHimage] = ACTIONS(252),
    [anon_sym_BSLASHaudio] = ACTIONS(252),
    [anon_sym_BSLASHvideo] = ACTIONS(252),
    [anon_sym_BSLASHicon] = ACTIONS(252),
    [anon_sym_BSLASHpass] = ACTIONS(252),
    [anon_sym_BSLASHlink] = ACTIONS(252),
    [anon_sym_BSLASHmailto] = ACTIONS(252),
    [anon_sym_BSLASHmenu] = ACTIONS(252),
    [anon_sym_BSLASHstem] = ACTIONS(252),
    [anon_sym_BSLASHlatexmath] = ACTIONS(252),
    [anon_sym_BSLASHasciimath] = ACTIONS(252),
    [anon_sym_BSLASHfootnote] = ACTIONS(254),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(252),
    [anon_sym_BSLASHanchor] = ACTIONS(252),
    [anon_sym_BSLASHxref] = ACTIONS(252),
    [anon_sym_BSLASHifdef] = ACTIONS(252),
    [anon_sym_BSLASHifndef] = ACTIONS(252),
    [anon_sym_BSLASHifeval] = ACTIONS(252),
    [anon_sym_BSLASHendif] = ACTIONS(252),
    [aux_sym_escaped_sequence_token1] = ACTIONS(254),
    [anon_sym_BANG] = ACTIONS(254),
    [anon_sym_POUND] = ACTIONS(254),
    [anon_sym_DOLLAR] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_SQUOTE] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_COLON2] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_GT] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(252),
    [anon_sym_BSLASH] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym__] = ACTIONS(254),
    [anon_sym_BQUOTE] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_TILDE] = ACTIONS(254),
    [anon_sym_PLUS2] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_STAR2] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(252),
    [anon_sym__2] = ACTIONS(254),
    [anon_sym___] = ACTIONS(252),
    [anon_sym_BQUOTE2] = ACTIONS(254),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(252),
    [anon_sym_POUND2] = ACTIONS(254),
    [anon_sym_POUND_POUND] = ACTIONS(252),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(254),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(252),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(258),
    [anon_sym_RBRACK] = ACTIONS(256),
    [aux_sym_link_url_token1] = ACTIONS(258),
    [aux_sym_link_url_token2] = ACTIONS(258),
    [anon_sym_DOT] = ACTIONS(258),
    [sym_email] = ACTIONS(258),
    [anon_sym_LBRACK_POUND] = ACTIONS(256),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(256),
    [anon_sym_kbd] = ACTIONS(258),
    [anon_sym_btn] = ACTIONS(258),
    [anon_sym_image] = ACTIONS(258),
    [anon_sym_audio] = ACTIONS(258),
    [anon_sym_video] = ACTIONS(258),
    [anon_sym_icon] = ACTIONS(258),
    [anon_sym_link] = ACTIONS(258),
    [anon_sym_mailto] = ACTIONS(258),
    [anon_sym_menu] = ACTIONS(258),
    [anon_sym_anchor] = ACTIONS(258),
    [anon_sym_xref] = ACTIONS(258),
    [anon_sym_ifdef] = ACTIONS(258),
    [anon_sym_ifndef] = ACTIONS(258),
    [anon_sym_ifeval] = ACTIONS(258),
    [anon_sym_endif] = ACTIONS(258),
    [anon_sym_indexterm2] = ACTIONS(258),
    [anon_sym_indexterm] = ACTIONS(258),
    [anon_sym_a2s] = ACTIONS(258),
    [anon_sym_barcode] = ACTIONS(258),
    [anon_sym_blockdiag] = ACTIONS(258),
    [anon_sym_bpmn] = ACTIONS(258),
    [anon_sym_bytefield] = ACTIONS(258),
    [anon_sym_d2] = ACTIONS(258),
    [anon_sym_dbml] = ACTIONS(258),
    [anon_sym_diagrams] = ACTIONS(258),
    [anon_sym_ditaa] = ACTIONS(258),
    [anon_sym_dpic] = ACTIONS(258),
    [anon_sym_erd] = ACTIONS(258),
    [anon_sym_gnuplot] = ACTIONS(258),
    [anon_sym_graphviz] = ACTIONS(258),
    [anon_sym_lilypond] = ACTIONS(258),
    [anon_sym_meme] = ACTIONS(258),
    [anon_sym_mermaid] = ACTIONS(258),
    [anon_sym_msc] = ACTIONS(258),
    [anon_sym_nomnoml] = ACTIONS(258),
    [anon_sym_pikchr] = ACTIONS(258),
    [anon_sym_plantuml] = ACTIONS(258),
    [anon_sym_shaape] = ACTIONS(258),
    [anon_sym_smcat] = ACTIONS(258),
    [anon_sym_structurizr] = ACTIONS(258),
    [anon_sym_svgbob] = ACTIONS(258),
    [anon_sym_symbolator] = ACTIONS(258),
    [anon_sym_syntrax] = ACTIONS(258),
    [anon_sym_tikz] = ACTIONS(258),
    [anon_sym_umlet] = ACTIONS(258),
    [anon_sym_vega] = ACTIONS(258),
    [anon_sym_wavedrom] = ACTIONS(258),
    [anon_sym_footnote] = ACTIONS(258),
    [anon_sym_footnoteref] = ACTIONS(258),
    [anon_sym_latexmath] = ACTIONS(258),
    [anon_sym_stem] = ACTIONS(258),
    [anon_sym_asciimath] = ACTIONS(258),
    [anon_sym_pass] = ACTIONS(258),
    [sym_replacement] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_f] = ACTIONS(258),
    [sym_super_escape] = ACTIONS(256),
    [sym__character] = ACTIONS(258),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(256),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(256),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(256),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(256),
    [anon_sym_BSLASH__] = ACTIONS(256),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(256),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(256),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(258),
    [anon_sym_BSLASHkbd] = ACTIONS(256),
    [anon_sym_BSLASHbtn] = ACTIONS(256),
    [anon_sym_BSLASHimage] = ACTIONS(256),
    [anon_sym_BSLASHaudio] = ACTIONS(256),
    [anon_sym_BSLASHvideo] = ACTIONS(256),
    [anon_sym_BSLASHicon] = ACTIONS(256),
    [anon_sym_BSLASHpass] = ACTIONS(256),
    [anon_sym_BSLASHlink] = ACTIONS(256),
    [anon_sym_BSLASHmailto] = ACTIONS(256),
    [anon_sym_BSLASHmenu] = ACTIONS(256),
    [anon_sym_BSLASHstem] = ACTIONS(256),
    [anon_sym_BSLASHlatexmath] = ACTIONS(256),
    [anon_sym_BSLASHasciimath] = ACTIONS(256),
    [anon_sym_BSLASHfootnote] = ACTIONS(258),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(256),
    [anon_sym_BSLASHanchor] = ACTIONS(256),
    [anon_sym_BSLASHxref] = ACTIONS(256),
    [anon_sym_BSLASHifdef] = ACTIONS(256),
    [anon_sym_BSLASHifndef] = ACTIONS(256),
    [anon_sym_BSLASHifeval] = ACTIONS(256),
    [anon_sym_BSLASHendif] = ACTIONS(256),
    [aux_sym_escaped_sequence_token1] = ACTIONS(258),
    [anon_sym_BANG] = ACTIONS(258),
    [anon_sym_POUND] = ACTIONS(258),
    [anon_sym_DOLLAR] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_AMP] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_STAR] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_SLASH] = ACTIONS(258),
    [anon_sym_COLON2] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym__] = ACTIONS(258),
    [anon_sym_BQUOTE] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_TILDE] = ACTIONS(258),
    [anon_sym_PLUS2] = ACTIONS(258),
    [anon_sym_PLUS_PLUS] = ACTIONS(256),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(256),
    [anon_sym_STAR2] = ACTIONS(258),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [anon_sym__2] = ACTIONS(258),
    [anon_sym___] = ACTIONS(256),
    [anon_sym_BQUOTE2] = ACTIONS(258),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(256),
    [anon_sym_POUND2] = ACTIONS(258),
    [anon_sym_POUND_POUND] = ACTIONS(256),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(258),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(256),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(260),
    [aux_sym_link_url_token1] = ACTIONS(262),
    [aux_sym_link_url_token2] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(262),
    [sym_email] = ACTIONS(262),
    [anon_sym_LBRACK_POUND] = ACTIONS(260),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(260),
    [anon_sym_kbd] = ACTIONS(262),
    [anon_sym_btn] = ACTIONS(262),
    [anon_sym_image] = ACTIONS(262),
    [anon_sym_audio] = ACTIONS(262),
    [anon_sym_video] = ACTIONS(262),
    [anon_sym_icon] = ACTIONS(262),
    [anon_sym_link] = ACTIONS(262),
    [anon_sym_mailto] = ACTIONS(262),
    [anon_sym_menu] = ACTIONS(262),
    [anon_sym_anchor] = ACTIONS(262),
    [anon_sym_xref] = ACTIONS(262),
    [anon_sym_ifdef] = ACTIONS(262),
    [anon_sym_ifndef] = ACTIONS(262),
    [anon_sym_ifeval] = ACTIONS(262),
    [anon_sym_endif] = ACTIONS(262),
    [anon_sym_indexterm2] = ACTIONS(262),
    [anon_sym_indexterm] = ACTIONS(262),
    [anon_sym_a2s] = ACTIONS(262),
    [anon_sym_barcode] = ACTIONS(262),
    [anon_sym_blockdiag] = ACTIONS(262),
    [anon_sym_bpmn] = ACTIONS(262),
    [anon_sym_bytefield] = ACTIONS(262),
    [anon_sym_d2] = ACTIONS(262),
    [anon_sym_dbml] = ACTIONS(262),
    [anon_sym_diagrams] = ACTIONS(262),
    [anon_sym_ditaa] = ACTIONS(262),
    [anon_sym_dpic] = ACTIONS(262),
    [anon_sym_erd] = ACTIONS(262),
    [anon_sym_gnuplot] = ACTIONS(262),
    [anon_sym_graphviz] = ACTIONS(262),
    [anon_sym_lilypond] = ACTIONS(262),
    [anon_sym_meme] = ACTIONS(262),
    [anon_sym_mermaid] = ACTIONS(262),
    [anon_sym_msc] = ACTIONS(262),
    [anon_sym_nomnoml] = ACTIONS(262),
    [anon_sym_pikchr] = ACTIONS(262),
    [anon_sym_plantuml] = ACTIONS(262),
    [anon_sym_shaape] = ACTIONS(262),
    [anon_sym_smcat] = ACTIONS(262),
    [anon_sym_structurizr] = ACTIONS(262),
    [anon_sym_svgbob] = ACTIONS(262),
    [anon_sym_symbolator] = ACTIONS(262),
    [anon_sym_syntrax] = ACTIONS(262),
    [anon_sym_tikz] = ACTIONS(262),
    [anon_sym_umlet] = ACTIONS(262),
    [anon_sym_vega] = ACTIONS(262),
    [anon_sym_wavedrom] = ACTIONS(262),
    [anon_sym_footnote] = ACTIONS(262),
    [anon_sym_footnoteref] = ACTIONS(262),
    [anon_sym_latexmath] = ACTIONS(262),
    [anon_sym_stem] = ACTIONS(262),
    [anon_sym_asciimath] = ACTIONS(262),
    [anon_sym_pass] = ACTIONS(262),
    [sym_replacement] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_f] = ACTIONS(262),
    [sym_super_escape] = ACTIONS(260),
    [sym__character] = ACTIONS(262),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(260),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(260),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(260),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(260),
    [anon_sym_BSLASH__] = ACTIONS(260),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(260),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(260),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(262),
    [anon_sym_BSLASHkbd] = ACTIONS(260),
    [anon_sym_BSLASHbtn] = ACTIONS(260),
    [anon_sym_BSLASHimage] = ACTIONS(260),
    [anon_sym_BSLASHaudio] = ACTIONS(260),
    [anon_sym_BSLASHvideo] = ACTIONS(260),
    [anon_sym_BSLASHicon] = ACTIONS(260),
    [anon_sym_BSLASHpass] = ACTIONS(260),
    [anon_sym_BSLASHlink] = ACTIONS(260),
    [anon_sym_BSLASHmailto] = ACTIONS(260),
    [anon_sym_BSLASHmenu] = ACTIONS(260),
    [anon_sym_BSLASHstem] = ACTIONS(260),
    [anon_sym_BSLASHlatexmath] = ACTIONS(260),
    [anon_sym_BSLASHasciimath] = ACTIONS(260),
    [anon_sym_BSLASHfootnote] = ACTIONS(262),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(260),
    [anon_sym_BSLASHanchor] = ACTIONS(260),
    [anon_sym_BSLASHxref] = ACTIONS(260),
    [anon_sym_BSLASHifdef] = ACTIONS(260),
    [anon_sym_BSLASHifndef] = ACTIONS(260),
    [anon_sym_BSLASHifeval] = ACTIONS(260),
    [anon_sym_BSLASHendif] = ACTIONS(260),
    [aux_sym_escaped_sequence_token1] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(262),
    [anon_sym_POUND] = ACTIONS(262),
    [anon_sym_DOLLAR] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_STAR] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(262),
    [anon_sym_COLON2] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_BSLASH] = ACTIONS(262),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym__] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_PLUS2] = ACTIONS(262),
    [anon_sym_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_STAR2] = ACTIONS(262),
    [anon_sym_STAR_STAR] = ACTIONS(260),
    [anon_sym__2] = ACTIONS(262),
    [anon_sym___] = ACTIONS(260),
    [anon_sym_BQUOTE2] = ACTIONS(262),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(260),
    [anon_sym_POUND2] = ACTIONS(262),
    [anon_sym_POUND_POUND] = ACTIONS(260),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(262),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(260),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(264),
    [aux_sym_link_url_token1] = ACTIONS(266),
    [aux_sym_link_url_token2] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(266),
    [sym_email] = ACTIONS(266),
    [anon_sym_LBRACK_POUND] = ACTIONS(264),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(264),
    [anon_sym_kbd] = ACTIONS(266),
    [anon_sym_btn] = ACTIONS(266),
    [anon_sym_image] = ACTIONS(266),
    [anon_sym_audio] = ACTIONS(266),
    [anon_sym_video] = ACTIONS(266),
    [anon_sym_icon] = ACTIONS(266),
    [anon_sym_link] = ACTIONS(266),
    [anon_sym_mailto] = ACTIONS(266),
    [anon_sym_menu] = ACTIONS(266),
    [anon_sym_anchor] = ACTIONS(266),
    [anon_sym_xref] = ACTIONS(266),
    [anon_sym_ifdef] = ACTIONS(266),
    [anon_sym_ifndef] = ACTIONS(266),
    [anon_sym_ifeval] = ACTIONS(266),
    [anon_sym_endif] = ACTIONS(266),
    [anon_sym_indexterm2] = ACTIONS(266),
    [anon_sym_indexterm] = ACTIONS(266),
    [anon_sym_a2s] = ACTIONS(266),
    [anon_sym_barcode] = ACTIONS(266),
    [anon_sym_blockdiag] = ACTIONS(266),
    [anon_sym_bpmn] = ACTIONS(266),
    [anon_sym_bytefield] = ACTIONS(266),
    [anon_sym_d2] = ACTIONS(266),
    [anon_sym_dbml] = ACTIONS(266),
    [anon_sym_diagrams] = ACTIONS(266),
    [anon_sym_ditaa] = ACTIONS(266),
    [anon_sym_dpic] = ACTIONS(266),
    [anon_sym_erd] = ACTIONS(266),
    [anon_sym_gnuplot] = ACTIONS(266),
    [anon_sym_graphviz] = ACTIONS(266),
    [anon_sym_lilypond] = ACTIONS(266),
    [anon_sym_meme] = ACTIONS(266),
    [anon_sym_mermaid] = ACTIONS(266),
    [anon_sym_msc] = ACTIONS(266),
    [anon_sym_nomnoml] = ACTIONS(266),
    [anon_sym_pikchr] = ACTIONS(266),
    [anon_sym_plantuml] = ACTIONS(266),
    [anon_sym_shaape] = ACTIONS(266),
    [anon_sym_smcat] = ACTIONS(266),
    [anon_sym_structurizr] = ACTIONS(266),
    [anon_sym_svgbob] = ACTIONS(266),
    [anon_sym_symbolator] = ACTIONS(266),
    [anon_sym_syntrax] = ACTIONS(266),
    [anon_sym_tikz] = ACTIONS(266),
    [anon_sym_umlet] = ACTIONS(266),
    [anon_sym_vega] = ACTIONS(266),
    [anon_sym_wavedrom] = ACTIONS(266),
    [anon_sym_footnote] = ACTIONS(266),
    [anon_sym_footnoteref] = ACTIONS(266),
    [anon_sym_latexmath] = ACTIONS(266),
    [anon_sym_stem] = ACTIONS(266),
    [anon_sym_asciimath] = ACTIONS(266),
    [anon_sym_pass] = ACTIONS(266),
    [sym_replacement] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_f] = ACTIONS(266),
    [sym_super_escape] = ACTIONS(264),
    [sym__character] = ACTIONS(266),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(264),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(264),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(264),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(264),
    [anon_sym_BSLASH__] = ACTIONS(264),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(264),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(264),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(266),
    [anon_sym_BSLASHkbd] = ACTIONS(264),
    [anon_sym_BSLASHbtn] = ACTIONS(264),
    [anon_sym_BSLASHimage] = ACTIONS(264),
    [anon_sym_BSLASHaudio] = ACTIONS(264),
    [anon_sym_BSLASHvideo] = ACTIONS(264),
    [anon_sym_BSLASHicon] = ACTIONS(264),
    [anon_sym_BSLASHpass] = ACTIONS(264),
    [anon_sym_BSLASHlink] = ACTIONS(264),
    [anon_sym_BSLASHmailto] = ACTIONS(264),
    [anon_sym_BSLASHmenu] = ACTIONS(264),
    [anon_sym_BSLASHstem] = ACTIONS(264),
    [anon_sym_BSLASHlatexmath] = ACTIONS(264),
    [anon_sym_BSLASHasciimath] = ACTIONS(264),
    [anon_sym_BSLASHfootnote] = ACTIONS(266),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(264),
    [anon_sym_BSLASHanchor] = ACTIONS(264),
    [anon_sym_BSLASHxref] = ACTIONS(264),
    [anon_sym_BSLASHifdef] = ACTIONS(264),
    [anon_sym_BSLASHifndef] = ACTIONS(264),
    [anon_sym_BSLASHifeval] = ACTIONS(264),
    [anon_sym_BSLASHendif] = ACTIONS(264),
    [aux_sym_escaped_sequence_token1] = ACTIONS(266),
    [anon_sym_BANG] = ACTIONS(266),
    [anon_sym_POUND] = ACTIONS(266),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_COLON2] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(266),
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(264),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [anon_sym_BQUOTE] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_PLUS2] = ACTIONS(266),
    [anon_sym_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_STAR2] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(264),
    [anon_sym__2] = ACTIONS(266),
    [anon_sym___] = ACTIONS(264),
    [anon_sym_BQUOTE2] = ACTIONS(266),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(264),
    [anon_sym_POUND2] = ACTIONS(266),
    [anon_sym_POUND_POUND] = ACTIONS(264),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(266),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(264),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(268),
    [aux_sym_link_url_token1] = ACTIONS(270),
    [aux_sym_link_url_token2] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(270),
    [sym_email] = ACTIONS(270),
    [anon_sym_LBRACK_POUND] = ACTIONS(268),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(268),
    [anon_sym_kbd] = ACTIONS(270),
    [anon_sym_btn] = ACTIONS(270),
    [anon_sym_image] = ACTIONS(270),
    [anon_sym_audio] = ACTIONS(270),
    [anon_sym_video] = ACTIONS(270),
    [anon_sym_icon] = ACTIONS(270),
    [anon_sym_link] = ACTIONS(270),
    [anon_sym_mailto] = ACTIONS(270),
    [anon_sym_menu] = ACTIONS(270),
    [anon_sym_anchor] = ACTIONS(270),
    [anon_sym_xref] = ACTIONS(270),
    [anon_sym_ifdef] = ACTIONS(270),
    [anon_sym_ifndef] = ACTIONS(270),
    [anon_sym_ifeval] = ACTIONS(270),
    [anon_sym_endif] = ACTIONS(270),
    [anon_sym_indexterm2] = ACTIONS(270),
    [anon_sym_indexterm] = ACTIONS(270),
    [anon_sym_a2s] = ACTIONS(270),
    [anon_sym_barcode] = ACTIONS(270),
    [anon_sym_blockdiag] = ACTIONS(270),
    [anon_sym_bpmn] = ACTIONS(270),
    [anon_sym_bytefield] = ACTIONS(270),
    [anon_sym_d2] = ACTIONS(270),
    [anon_sym_dbml] = ACTIONS(270),
    [anon_sym_diagrams] = ACTIONS(270),
    [anon_sym_ditaa] = ACTIONS(270),
    [anon_sym_dpic] = ACTIONS(270),
    [anon_sym_erd] = ACTIONS(270),
    [anon_sym_gnuplot] = ACTIONS(270),
    [anon_sym_graphviz] = ACTIONS(270),
    [anon_sym_lilypond] = ACTIONS(270),
    [anon_sym_meme] = ACTIONS(270),
    [anon_sym_mermaid] = ACTIONS(270),
    [anon_sym_msc] = ACTIONS(270),
    [anon_sym_nomnoml] = ACTIONS(270),
    [anon_sym_pikchr] = ACTIONS(270),
    [anon_sym_plantuml] = ACTIONS(270),
    [anon_sym_shaape] = ACTIONS(270),
    [anon_sym_smcat] = ACTIONS(270),
    [anon_sym_structurizr] = ACTIONS(270),
    [anon_sym_svgbob] = ACTIONS(270),
    [anon_sym_symbolator] = ACTIONS(270),
    [anon_sym_syntrax] = ACTIONS(270),
    [anon_sym_tikz] = ACTIONS(270),
    [anon_sym_umlet] = ACTIONS(270),
    [anon_sym_vega] = ACTIONS(270),
    [anon_sym_wavedrom] = ACTIONS(270),
    [anon_sym_footnote] = ACTIONS(270),
    [anon_sym_footnoteref] = ACTIONS(270),
    [anon_sym_latexmath] = ACTIONS(270),
    [anon_sym_stem] = ACTIONS(270),
    [anon_sym_asciimath] = ACTIONS(270),
    [anon_sym_pass] = ACTIONS(270),
    [sym_replacement] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_f] = ACTIONS(270),
    [sym_super_escape] = ACTIONS(268),
    [sym__character] = ACTIONS(270),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(268),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(268),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(268),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(268),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(268),
    [anon_sym_BSLASH__] = ACTIONS(268),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(268),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(268),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(270),
    [anon_sym_BSLASHkbd] = ACTIONS(268),
    [anon_sym_BSLASHbtn] = ACTIONS(268),
    [anon_sym_BSLASHimage] = ACTIONS(268),
    [anon_sym_BSLASHaudio] = ACTIONS(268),
    [anon_sym_BSLASHvideo] = ACTIONS(268),
    [anon_sym_BSLASHicon] = ACTIONS(268),
    [anon_sym_BSLASHpass] = ACTIONS(268),
    [anon_sym_BSLASHlink] = ACTIONS(268),
    [anon_sym_BSLASHmailto] = ACTIONS(268),
    [anon_sym_BSLASHmenu] = ACTIONS(268),
    [anon_sym_BSLASHstem] = ACTIONS(268),
    [anon_sym_BSLASHlatexmath] = ACTIONS(268),
    [anon_sym_BSLASHasciimath] = ACTIONS(268),
    [anon_sym_BSLASHfootnote] = ACTIONS(270),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(268),
    [anon_sym_BSLASHanchor] = ACTIONS(268),
    [anon_sym_BSLASHxref] = ACTIONS(268),
    [anon_sym_BSLASHifdef] = ACTIONS(268),
    [anon_sym_BSLASHifndef] = ACTIONS(268),
    [anon_sym_BSLASHifeval] = ACTIONS(268),
    [anon_sym_BSLASHendif] = ACTIONS(268),
    [aux_sym_escaped_sequence_token1] = ACTIONS(270),
    [anon_sym_BANG] = ACTIONS(270),
    [anon_sym_POUND] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(270),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_COLON2] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(268),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_CARET] = ACTIONS(270),
    [anon_sym__] = ACTIONS(270),
    [anon_sym_BQUOTE] = ACTIONS(270),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(270),
    [anon_sym_PLUS2] = ACTIONS(270),
    [anon_sym_PLUS_PLUS] = ACTIONS(268),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_STAR2] = ACTIONS(270),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [anon_sym__2] = ACTIONS(270),
    [anon_sym___] = ACTIONS(268),
    [anon_sym_BQUOTE2] = ACTIONS(270),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(268),
    [anon_sym_POUND2] = ACTIONS(270),
    [anon_sym_POUND_POUND] = ACTIONS(268),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(270),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(268),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_RBRACK] = ACTIONS(272),
    [aux_sym_link_url_token1] = ACTIONS(274),
    [aux_sym_link_url_token2] = ACTIONS(274),
    [anon_sym_DOT] = ACTIONS(274),
    [sym_email] = ACTIONS(274),
    [anon_sym_LBRACK_POUND] = ACTIONS(272),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(272),
    [anon_sym_kbd] = ACTIONS(274),
    [anon_sym_btn] = ACTIONS(274),
    [anon_sym_image] = ACTIONS(274),
    [anon_sym_audio] = ACTIONS(274),
    [anon_sym_video] = ACTIONS(274),
    [anon_sym_icon] = ACTIONS(274),
    [anon_sym_link] = ACTIONS(274),
    [anon_sym_mailto] = ACTIONS(274),
    [anon_sym_menu] = ACTIONS(274),
    [anon_sym_anchor] = ACTIONS(274),
    [anon_sym_xref] = ACTIONS(274),
    [anon_sym_ifdef] = ACTIONS(274),
    [anon_sym_ifndef] = ACTIONS(274),
    [anon_sym_ifeval] = ACTIONS(274),
    [anon_sym_endif] = ACTIONS(274),
    [anon_sym_indexterm2] = ACTIONS(274),
    [anon_sym_indexterm] = ACTIONS(274),
    [anon_sym_a2s] = ACTIONS(274),
    [anon_sym_barcode] = ACTIONS(274),
    [anon_sym_blockdiag] = ACTIONS(274),
    [anon_sym_bpmn] = ACTIONS(274),
    [anon_sym_bytefield] = ACTIONS(274),
    [anon_sym_d2] = ACTIONS(274),
    [anon_sym_dbml] = ACTIONS(274),
    [anon_sym_diagrams] = ACTIONS(274),
    [anon_sym_ditaa] = ACTIONS(274),
    [anon_sym_dpic] = ACTIONS(274),
    [anon_sym_erd] = ACTIONS(274),
    [anon_sym_gnuplot] = ACTIONS(274),
    [anon_sym_graphviz] = ACTIONS(274),
    [anon_sym_lilypond] = ACTIONS(274),
    [anon_sym_meme] = ACTIONS(274),
    [anon_sym_mermaid] = ACTIONS(274),
    [anon_sym_msc] = ACTIONS(274),
    [anon_sym_nomnoml] = ACTIONS(274),
    [anon_sym_pikchr] = ACTIONS(274),
    [anon_sym_plantuml] = ACTIONS(274),
    [anon_sym_shaape] = ACTIONS(274),
    [anon_sym_smcat] = ACTIONS(274),
    [anon_sym_structurizr] = ACTIONS(274),
    [anon_sym_svgbob] = ACTIONS(274),
    [anon_sym_symbolator] = ACTIONS(274),
    [anon_sym_syntrax] = ACTIONS(274),
    [anon_sym_tikz] = ACTIONS(274),
    [anon_sym_umlet] = ACTIONS(274),
    [anon_sym_vega] = ACTIONS(274),
    [anon_sym_wavedrom] = ACTIONS(274),
    [anon_sym_footnote] = ACTIONS(274),
    [anon_sym_footnoteref] = ACTIONS(274),
    [anon_sym_latexmath] = ACTIONS(274),
    [anon_sym_stem] = ACTIONS(274),
    [anon_sym_asciimath] = ACTIONS(274),
    [anon_sym_pass] = ACTIONS(274),
    [sym_replacement] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_f] = ACTIONS(274),
    [sym_super_escape] = ACTIONS(272),
    [sym__character] = ACTIONS(274),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(272),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(272),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(272),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(272),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(272),
    [anon_sym_BSLASH__] = ACTIONS(272),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(272),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(272),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(274),
    [anon_sym_BSLASHkbd] = ACTIONS(272),
    [anon_sym_BSLASHbtn] = ACTIONS(272),
    [anon_sym_BSLASHimage] = ACTIONS(272),
    [anon_sym_BSLASHaudio] = ACTIONS(272),
    [anon_sym_BSLASHvideo] = ACTIONS(272),
    [anon_sym_BSLASHicon] = ACTIONS(272),
    [anon_sym_BSLASHpass] = ACTIONS(272),
    [anon_sym_BSLASHlink] = ACTIONS(272),
    [anon_sym_BSLASHmailto] = ACTIONS(272),
    [anon_sym_BSLASHmenu] = ACTIONS(272),
    [anon_sym_BSLASHstem] = ACTIONS(272),
    [anon_sym_BSLASHlatexmath] = ACTIONS(272),
    [anon_sym_BSLASHasciimath] = ACTIONS(272),
    [anon_sym_BSLASHfootnote] = ACTIONS(274),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(272),
    [anon_sym_BSLASHanchor] = ACTIONS(272),
    [anon_sym_BSLASHxref] = ACTIONS(272),
    [anon_sym_BSLASHifdef] = ACTIONS(272),
    [anon_sym_BSLASHifndef] = ACTIONS(272),
    [anon_sym_BSLASHifeval] = ACTIONS(272),
    [anon_sym_BSLASHendif] = ACTIONS(272),
    [aux_sym_escaped_sequence_token1] = ACTIONS(274),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_POUND] = ACTIONS(274),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [anon_sym_PERCENT] = ACTIONS(274),
    [anon_sym_AMP] = ACTIONS(274),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_COLON2] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_GT] = ACTIONS(272),
    [anon_sym_QMARK] = ACTIONS(274),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(274),
    [anon_sym_CARET] = ACTIONS(274),
    [anon_sym__] = ACTIONS(274),
    [anon_sym_BQUOTE] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_PLUS2] = ACTIONS(274),
    [anon_sym_PLUS_PLUS] = ACTIONS(272),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(274),
    [anon_sym_LT_LT] = ACTIONS(272),
    [anon_sym_STAR2] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(272),
    [anon_sym__2] = ACTIONS(274),
    [anon_sym___] = ACTIONS(272),
    [anon_sym_BQUOTE2] = ACTIONS(274),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(272),
    [anon_sym_POUND2] = ACTIONS(274),
    [anon_sym_POUND_POUND] = ACTIONS(272),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(274),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(272),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(276),
    [aux_sym_link_url_token1] = ACTIONS(278),
    [aux_sym_link_url_token2] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(278),
    [sym_email] = ACTIONS(278),
    [anon_sym_LBRACK_POUND] = ACTIONS(276),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(276),
    [anon_sym_kbd] = ACTIONS(278),
    [anon_sym_btn] = ACTIONS(278),
    [anon_sym_image] = ACTIONS(278),
    [anon_sym_audio] = ACTIONS(278),
    [anon_sym_video] = ACTIONS(278),
    [anon_sym_icon] = ACTIONS(278),
    [anon_sym_link] = ACTIONS(278),
    [anon_sym_mailto] = ACTIONS(278),
    [anon_sym_menu] = ACTIONS(278),
    [anon_sym_anchor] = ACTIONS(278),
    [anon_sym_xref] = ACTIONS(278),
    [anon_sym_ifdef] = ACTIONS(278),
    [anon_sym_ifndef] = ACTIONS(278),
    [anon_sym_ifeval] = ACTIONS(278),
    [anon_sym_endif] = ACTIONS(278),
    [anon_sym_indexterm2] = ACTIONS(278),
    [anon_sym_indexterm] = ACTIONS(278),
    [anon_sym_a2s] = ACTIONS(278),
    [anon_sym_barcode] = ACTIONS(278),
    [anon_sym_blockdiag] = ACTIONS(278),
    [anon_sym_bpmn] = ACTIONS(278),
    [anon_sym_bytefield] = ACTIONS(278),
    [anon_sym_d2] = ACTIONS(278),
    [anon_sym_dbml] = ACTIONS(278),
    [anon_sym_diagrams] = ACTIONS(278),
    [anon_sym_ditaa] = ACTIONS(278),
    [anon_sym_dpic] = ACTIONS(278),
    [anon_sym_erd] = ACTIONS(278),
    [anon_sym_gnuplot] = ACTIONS(278),
    [anon_sym_graphviz] = ACTIONS(278),
    [anon_sym_lilypond] = ACTIONS(278),
    [anon_sym_meme] = ACTIONS(278),
    [anon_sym_mermaid] = ACTIONS(278),
    [anon_sym_msc] = ACTIONS(278),
    [anon_sym_nomnoml] = ACTIONS(278),
    [anon_sym_pikchr] = ACTIONS(278),
    [anon_sym_plantuml] = ACTIONS(278),
    [anon_sym_shaape] = ACTIONS(278),
    [anon_sym_smcat] = ACTIONS(278),
    [anon_sym_structurizr] = ACTIONS(278),
    [anon_sym_svgbob] = ACTIONS(278),
    [anon_sym_symbolator] = ACTIONS(278),
    [anon_sym_syntrax] = ACTIONS(278),
    [anon_sym_tikz] = ACTIONS(278),
    [anon_sym_umlet] = ACTIONS(278),
    [anon_sym_vega] = ACTIONS(278),
    [anon_sym_wavedrom] = ACTIONS(278),
    [anon_sym_footnote] = ACTIONS(278),
    [anon_sym_footnoteref] = ACTIONS(278),
    [anon_sym_latexmath] = ACTIONS(278),
    [anon_sym_stem] = ACTIONS(278),
    [anon_sym_asciimath] = ACTIONS(278),
    [anon_sym_pass] = ACTIONS(278),
    [sym_replacement] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_f] = ACTIONS(278),
    [sym_super_escape] = ACTIONS(276),
    [sym__character] = ACTIONS(278),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(276),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(276),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(276),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(276),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(276),
    [anon_sym_BSLASH__] = ACTIONS(276),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(276),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(276),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(278),
    [anon_sym_BSLASHkbd] = ACTIONS(276),
    [anon_sym_BSLASHbtn] = ACTIONS(276),
    [anon_sym_BSLASHimage] = ACTIONS(276),
    [anon_sym_BSLASHaudio] = ACTIONS(276),
    [anon_sym_BSLASHvideo] = ACTIONS(276),
    [anon_sym_BSLASHicon] = ACTIONS(276),
    [anon_sym_BSLASHpass] = ACTIONS(276),
    [anon_sym_BSLASHlink] = ACTIONS(276),
    [anon_sym_BSLASHmailto] = ACTIONS(276),
    [anon_sym_BSLASHmenu] = ACTIONS(276),
    [anon_sym_BSLASHstem] = ACTIONS(276),
    [anon_sym_BSLASHlatexmath] = ACTIONS(276),
    [anon_sym_BSLASHasciimath] = ACTIONS(276),
    [anon_sym_BSLASHfootnote] = ACTIONS(278),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(276),
    [anon_sym_BSLASHanchor] = ACTIONS(276),
    [anon_sym_BSLASHxref] = ACTIONS(276),
    [anon_sym_BSLASHifdef] = ACTIONS(276),
    [anon_sym_BSLASHifndef] = ACTIONS(276),
    [anon_sym_BSLASHifeval] = ACTIONS(276),
    [anon_sym_BSLASHendif] = ACTIONS(276),
    [aux_sym_escaped_sequence_token1] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(278),
    [anon_sym_POUND] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(278),
    [anon_sym_PERCENT] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_SLASH] = ACTIONS(278),
    [anon_sym_COLON2] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(276),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [anon_sym_BQUOTE] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_TILDE] = ACTIONS(278),
    [anon_sym_PLUS2] = ACTIONS(278),
    [anon_sym_PLUS_PLUS] = ACTIONS(276),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(276),
    [anon_sym_STAR2] = ACTIONS(278),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym__2] = ACTIONS(278),
    [anon_sym___] = ACTIONS(276),
    [anon_sym_BQUOTE2] = ACTIONS(278),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(276),
    [anon_sym_POUND2] = ACTIONS(278),
    [anon_sym_POUND_POUND] = ACTIONS(276),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(278),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(276),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(280),
    [aux_sym_link_url_token1] = ACTIONS(282),
    [aux_sym_link_url_token2] = ACTIONS(282),
    [anon_sym_DOT] = ACTIONS(282),
    [sym_email] = ACTIONS(282),
    [anon_sym_LBRACK_POUND] = ACTIONS(280),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(280),
    [anon_sym_kbd] = ACTIONS(282),
    [anon_sym_btn] = ACTIONS(282),
    [anon_sym_image] = ACTIONS(282),
    [anon_sym_audio] = ACTIONS(282),
    [anon_sym_video] = ACTIONS(282),
    [anon_sym_icon] = ACTIONS(282),
    [anon_sym_link] = ACTIONS(282),
    [anon_sym_mailto] = ACTIONS(282),
    [anon_sym_menu] = ACTIONS(282),
    [anon_sym_anchor] = ACTIONS(282),
    [anon_sym_xref] = ACTIONS(282),
    [anon_sym_ifdef] = ACTIONS(282),
    [anon_sym_ifndef] = ACTIONS(282),
    [anon_sym_ifeval] = ACTIONS(282),
    [anon_sym_endif] = ACTIONS(282),
    [anon_sym_indexterm2] = ACTIONS(282),
    [anon_sym_indexterm] = ACTIONS(282),
    [anon_sym_a2s] = ACTIONS(282),
    [anon_sym_barcode] = ACTIONS(282),
    [anon_sym_blockdiag] = ACTIONS(282),
    [anon_sym_bpmn] = ACTIONS(282),
    [anon_sym_bytefield] = ACTIONS(282),
    [anon_sym_d2] = ACTIONS(282),
    [anon_sym_dbml] = ACTIONS(282),
    [anon_sym_diagrams] = ACTIONS(282),
    [anon_sym_ditaa] = ACTIONS(282),
    [anon_sym_dpic] = ACTIONS(282),
    [anon_sym_erd] = ACTIONS(282),
    [anon_sym_gnuplot] = ACTIONS(282),
    [anon_sym_graphviz] = ACTIONS(282),
    [anon_sym_lilypond] = ACTIONS(282),
    [anon_sym_meme] = ACTIONS(282),
    [anon_sym_mermaid] = ACTIONS(282),
    [anon_sym_msc] = ACTIONS(282),
    [anon_sym_nomnoml] = ACTIONS(282),
    [anon_sym_pikchr] = ACTIONS(282),
    [anon_sym_plantuml] = ACTIONS(282),
    [anon_sym_shaape] = ACTIONS(282),
    [anon_sym_smcat] = ACTIONS(282),
    [anon_sym_structurizr] = ACTIONS(282),
    [anon_sym_svgbob] = ACTIONS(282),
    [anon_sym_symbolator] = ACTIONS(282),
    [anon_sym_syntrax] = ACTIONS(282),
    [anon_sym_tikz] = ACTIONS(282),
    [anon_sym_umlet] = ACTIONS(282),
    [anon_sym_vega] = ACTIONS(282),
    [anon_sym_wavedrom] = ACTIONS(282),
    [anon_sym_footnote] = ACTIONS(282),
    [anon_sym_footnoteref] = ACTIONS(282),
    [anon_sym_latexmath] = ACTIONS(282),
    [anon_sym_stem] = ACTIONS(282),
    [anon_sym_asciimath] = ACTIONS(282),
    [anon_sym_pass] = ACTIONS(282),
    [sym_replacement] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(282),
    [anon_sym_f] = ACTIONS(282),
    [sym_super_escape] = ACTIONS(280),
    [sym__character] = ACTIONS(282),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(280),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(280),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(280),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(280),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(280),
    [anon_sym_BSLASH__] = ACTIONS(280),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(280),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(280),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(282),
    [anon_sym_BSLASHkbd] = ACTIONS(280),
    [anon_sym_BSLASHbtn] = ACTIONS(280),
    [anon_sym_BSLASHimage] = ACTIONS(280),
    [anon_sym_BSLASHaudio] = ACTIONS(280),
    [anon_sym_BSLASHvideo] = ACTIONS(280),
    [anon_sym_BSLASHicon] = ACTIONS(280),
    [anon_sym_BSLASHpass] = ACTIONS(280),
    [anon_sym_BSLASHlink] = ACTIONS(280),
    [anon_sym_BSLASHmailto] = ACTIONS(280),
    [anon_sym_BSLASHmenu] = ACTIONS(280),
    [anon_sym_BSLASHstem] = ACTIONS(280),
    [anon_sym_BSLASHlatexmath] = ACTIONS(280),
    [anon_sym_BSLASHasciimath] = ACTIONS(280),
    [anon_sym_BSLASHfootnote] = ACTIONS(282),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(280),
    [anon_sym_BSLASHanchor] = ACTIONS(280),
    [anon_sym_BSLASHxref] = ACTIONS(280),
    [anon_sym_BSLASHifdef] = ACTIONS(280),
    [anon_sym_BSLASHifndef] = ACTIONS(280),
    [anon_sym_BSLASHifeval] = ACTIONS(280),
    [anon_sym_BSLASHendif] = ACTIONS(280),
    [aux_sym_escaped_sequence_token1] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(282),
    [anon_sym_POUND] = ACTIONS(282),
    [anon_sym_DOLLAR] = ACTIONS(282),
    [anon_sym_PERCENT] = ACTIONS(282),
    [anon_sym_AMP] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(282),
    [anon_sym_PLUS] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(282),
    [anon_sym_SLASH] = ACTIONS(282),
    [anon_sym_COLON2] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(282),
    [anon_sym_EQ] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(282),
    [anon_sym_AT] = ACTIONS(280),
    [anon_sym_BSLASH] = ACTIONS(282),
    [anon_sym_CARET] = ACTIONS(282),
    [anon_sym__] = ACTIONS(282),
    [anon_sym_BQUOTE] = ACTIONS(282),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_TILDE] = ACTIONS(282),
    [anon_sym_PLUS2] = ACTIONS(282),
    [anon_sym_PLUS_PLUS] = ACTIONS(280),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(280),
    [anon_sym_STAR2] = ACTIONS(282),
    [anon_sym_STAR_STAR] = ACTIONS(280),
    [anon_sym__2] = ACTIONS(282),
    [anon_sym___] = ACTIONS(280),
    [anon_sym_BQUOTE2] = ACTIONS(282),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(280),
    [anon_sym_POUND2] = ACTIONS(282),
    [anon_sym_POUND_POUND] = ACTIONS(280),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(282),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(280),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(284),
    [aux_sym_link_url_token1] = ACTIONS(286),
    [aux_sym_link_url_token2] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(286),
    [sym_email] = ACTIONS(286),
    [anon_sym_LBRACK_POUND] = ACTIONS(284),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(284),
    [anon_sym_kbd] = ACTIONS(286),
    [anon_sym_btn] = ACTIONS(286),
    [anon_sym_image] = ACTIONS(286),
    [anon_sym_audio] = ACTIONS(286),
    [anon_sym_video] = ACTIONS(286),
    [anon_sym_icon] = ACTIONS(286),
    [anon_sym_link] = ACTIONS(286),
    [anon_sym_mailto] = ACTIONS(286),
    [anon_sym_menu] = ACTIONS(286),
    [anon_sym_anchor] = ACTIONS(286),
    [anon_sym_xref] = ACTIONS(286),
    [anon_sym_ifdef] = ACTIONS(286),
    [anon_sym_ifndef] = ACTIONS(286),
    [anon_sym_ifeval] = ACTIONS(286),
    [anon_sym_endif] = ACTIONS(286),
    [anon_sym_indexterm2] = ACTIONS(286),
    [anon_sym_indexterm] = ACTIONS(286),
    [anon_sym_a2s] = ACTIONS(286),
    [anon_sym_barcode] = ACTIONS(286),
    [anon_sym_blockdiag] = ACTIONS(286),
    [anon_sym_bpmn] = ACTIONS(286),
    [anon_sym_bytefield] = ACTIONS(286),
    [anon_sym_d2] = ACTIONS(286),
    [anon_sym_dbml] = ACTIONS(286),
    [anon_sym_diagrams] = ACTIONS(286),
    [anon_sym_ditaa] = ACTIONS(286),
    [anon_sym_dpic] = ACTIONS(286),
    [anon_sym_erd] = ACTIONS(286),
    [anon_sym_gnuplot] = ACTIONS(286),
    [anon_sym_graphviz] = ACTIONS(286),
    [anon_sym_lilypond] = ACTIONS(286),
    [anon_sym_meme] = ACTIONS(286),
    [anon_sym_mermaid] = ACTIONS(286),
    [anon_sym_msc] = ACTIONS(286),
    [anon_sym_nomnoml] = ACTIONS(286),
    [anon_sym_pikchr] = ACTIONS(286),
    [anon_sym_plantuml] = ACTIONS(286),
    [anon_sym_shaape] = ACTIONS(286),
    [anon_sym_smcat] = ACTIONS(286),
    [anon_sym_structurizr] = ACTIONS(286),
    [anon_sym_svgbob] = ACTIONS(286),
    [anon_sym_symbolator] = ACTIONS(286),
    [anon_sym_syntrax] = ACTIONS(286),
    [anon_sym_tikz] = ACTIONS(286),
    [anon_sym_umlet] = ACTIONS(286),
    [anon_sym_vega] = ACTIONS(286),
    [anon_sym_wavedrom] = ACTIONS(286),
    [anon_sym_footnote] = ACTIONS(286),
    [anon_sym_footnoteref] = ACTIONS(286),
    [anon_sym_latexmath] = ACTIONS(286),
    [anon_sym_stem] = ACTIONS(286),
    [anon_sym_asciimath] = ACTIONS(286),
    [anon_sym_pass] = ACTIONS(286),
    [sym_replacement] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_f] = ACTIONS(286),
    [sym_super_escape] = ACTIONS(284),
    [sym__character] = ACTIONS(286),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(284),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(284),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(284),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(284),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(284),
    [anon_sym_BSLASH__] = ACTIONS(284),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(284),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(284),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(286),
    [anon_sym_BSLASHkbd] = ACTIONS(284),
    [anon_sym_BSLASHbtn] = ACTIONS(284),
    [anon_sym_BSLASHimage] = ACTIONS(284),
    [anon_sym_BSLASHaudio] = ACTIONS(284),
    [anon_sym_BSLASHvideo] = ACTIONS(284),
    [anon_sym_BSLASHicon] = ACTIONS(284),
    [anon_sym_BSLASHpass] = ACTIONS(284),
    [anon_sym_BSLASHlink] = ACTIONS(284),
    [anon_sym_BSLASHmailto] = ACTIONS(284),
    [anon_sym_BSLASHmenu] = ACTIONS(284),
    [anon_sym_BSLASHstem] = ACTIONS(284),
    [anon_sym_BSLASHlatexmath] = ACTIONS(284),
    [anon_sym_BSLASHasciimath] = ACTIONS(284),
    [anon_sym_BSLASHfootnote] = ACTIONS(286),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(284),
    [anon_sym_BSLASHanchor] = ACTIONS(284),
    [anon_sym_BSLASHxref] = ACTIONS(284),
    [anon_sym_BSLASHifdef] = ACTIONS(284),
    [anon_sym_BSLASHifndef] = ACTIONS(284),
    [anon_sym_BSLASHifeval] = ACTIONS(284),
    [anon_sym_BSLASHendif] = ACTIONS(284),
    [aux_sym_escaped_sequence_token1] = ACTIONS(286),
    [anon_sym_BANG] = ACTIONS(286),
    [anon_sym_POUND] = ACTIONS(286),
    [anon_sym_DOLLAR] = ACTIONS(286),
    [anon_sym_PERCENT] = ACTIONS(286),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_SQUOTE] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_STAR] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(286),
    [anon_sym_COLON2] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_EQ] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(284),
    [anon_sym_QMARK] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(284),
    [anon_sym_BSLASH] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(286),
    [anon_sym__] = ACTIONS(286),
    [anon_sym_BQUOTE] = ACTIONS(286),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_TILDE] = ACTIONS(286),
    [anon_sym_PLUS2] = ACTIONS(286),
    [anon_sym_PLUS_PLUS] = ACTIONS(284),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_STAR2] = ACTIONS(286),
    [anon_sym_STAR_STAR] = ACTIONS(284),
    [anon_sym__2] = ACTIONS(286),
    [anon_sym___] = ACTIONS(284),
    [anon_sym_BQUOTE2] = ACTIONS(286),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(284),
    [anon_sym_POUND2] = ACTIONS(286),
    [anon_sym_POUND_POUND] = ACTIONS(284),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(286),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(284),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(201),
    [aux_sym_link_url_token1] = ACTIONS(203),
    [aux_sym_link_url_token2] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [sym_email] = ACTIONS(203),
    [anon_sym_LBRACK_POUND] = ACTIONS(201),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(201),
    [anon_sym_kbd] = ACTIONS(203),
    [anon_sym_btn] = ACTIONS(203),
    [anon_sym_image] = ACTIONS(203),
    [anon_sym_audio] = ACTIONS(203),
    [anon_sym_video] = ACTIONS(203),
    [anon_sym_icon] = ACTIONS(203),
    [anon_sym_link] = ACTIONS(203),
    [anon_sym_mailto] = ACTIONS(203),
    [anon_sym_menu] = ACTIONS(203),
    [anon_sym_anchor] = ACTIONS(203),
    [anon_sym_xref] = ACTIONS(203),
    [anon_sym_ifdef] = ACTIONS(203),
    [anon_sym_ifndef] = ACTIONS(203),
    [anon_sym_ifeval] = ACTIONS(203),
    [anon_sym_endif] = ACTIONS(203),
    [anon_sym_indexterm2] = ACTIONS(203),
    [anon_sym_indexterm] = ACTIONS(203),
    [anon_sym_a2s] = ACTIONS(203),
    [anon_sym_barcode] = ACTIONS(203),
    [anon_sym_blockdiag] = ACTIONS(203),
    [anon_sym_bpmn] = ACTIONS(203),
    [anon_sym_bytefield] = ACTIONS(203),
    [anon_sym_d2] = ACTIONS(203),
    [anon_sym_dbml] = ACTIONS(203),
    [anon_sym_diagrams] = ACTIONS(203),
    [anon_sym_ditaa] = ACTIONS(203),
    [anon_sym_dpic] = ACTIONS(203),
    [anon_sym_erd] = ACTIONS(203),
    [anon_sym_gnuplot] = ACTIONS(203),
    [anon_sym_graphviz] = ACTIONS(203),
    [anon_sym_lilypond] = ACTIONS(203),
    [anon_sym_meme] = ACTIONS(203),
    [anon_sym_mermaid] = ACTIONS(203),
    [anon_sym_msc] = ACTIONS(203),
    [anon_sym_nomnoml] = ACTIONS(203),
    [anon_sym_pikchr] = ACTIONS(203),
    [anon_sym_plantuml] = ACTIONS(203),
    [anon_sym_shaape] = ACTIONS(203),
    [anon_sym_smcat] = ACTIONS(203),
    [anon_sym_structurizr] = ACTIONS(203),
    [anon_sym_svgbob] = ACTIONS(203),
    [anon_sym_symbolator] = ACTIONS(203),
    [anon_sym_syntrax] = ACTIONS(203),
    [anon_sym_tikz] = ACTIONS(203),
    [anon_sym_umlet] = ACTIONS(203),
    [anon_sym_vega] = ACTIONS(203),
    [anon_sym_wavedrom] = ACTIONS(203),
    [anon_sym_footnote] = ACTIONS(203),
    [anon_sym_footnoteref] = ACTIONS(203),
    [anon_sym_latexmath] = ACTIONS(203),
    [anon_sym_stem] = ACTIONS(203),
    [anon_sym_asciimath] = ACTIONS(203),
    [anon_sym_pass] = ACTIONS(203),
    [sym_replacement] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_f] = ACTIONS(203),
    [sym_super_escape] = ACTIONS(201),
    [sym__character] = ACTIONS(203),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(201),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(201),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(201),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(201),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(201),
    [anon_sym_BSLASH__] = ACTIONS(201),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(201),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(201),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(203),
    [anon_sym_BSLASHkbd] = ACTIONS(201),
    [anon_sym_BSLASHbtn] = ACTIONS(201),
    [anon_sym_BSLASHimage] = ACTIONS(201),
    [anon_sym_BSLASHaudio] = ACTIONS(201),
    [anon_sym_BSLASHvideo] = ACTIONS(201),
    [anon_sym_BSLASHicon] = ACTIONS(201),
    [anon_sym_BSLASHpass] = ACTIONS(201),
    [anon_sym_BSLASHlink] = ACTIONS(201),
    [anon_sym_BSLASHmailto] = ACTIONS(201),
    [anon_sym_BSLASHmenu] = ACTIONS(201),
    [anon_sym_BSLASHstem] = ACTIONS(201),
    [anon_sym_BSLASHlatexmath] = ACTIONS(201),
    [anon_sym_BSLASHasciimath] = ACTIONS(201),
    [anon_sym_BSLASHfootnote] = ACTIONS(203),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(201),
    [anon_sym_BSLASHanchor] = ACTIONS(201),
    [anon_sym_BSLASHxref] = ACTIONS(201),
    [anon_sym_BSLASHifdef] = ACTIONS(201),
    [anon_sym_BSLASHifndef] = ACTIONS(201),
    [anon_sym_BSLASHifeval] = ACTIONS(201),
    [anon_sym_BSLASHendif] = ACTIONS(201),
    [aux_sym_escaped_sequence_token1] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_COLON2] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_PLUS2] = ACTIONS(203),
    [anon_sym_PLUS_PLUS] = ACTIONS(201),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_STAR2] = ACTIONS(203),
    [anon_sym_STAR_STAR] = ACTIONS(201),
    [anon_sym__2] = ACTIONS(203),
    [anon_sym___] = ACTIONS(201),
    [anon_sym_BQUOTE2] = ACTIONS(203),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(201),
    [anon_sym_POUND2] = ACTIONS(203),
    [anon_sym_POUND_POUND] = ACTIONS(201),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(203),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(201),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(288),
    [aux_sym_link_url_token1] = ACTIONS(290),
    [aux_sym_link_url_token2] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(290),
    [sym_email] = ACTIONS(290),
    [anon_sym_LBRACK_POUND] = ACTIONS(288),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(288),
    [anon_sym_kbd] = ACTIONS(290),
    [anon_sym_btn] = ACTIONS(290),
    [anon_sym_image] = ACTIONS(290),
    [anon_sym_audio] = ACTIONS(290),
    [anon_sym_video] = ACTIONS(290),
    [anon_sym_icon] = ACTIONS(290),
    [anon_sym_link] = ACTIONS(290),
    [anon_sym_mailto] = ACTIONS(290),
    [anon_sym_menu] = ACTIONS(290),
    [anon_sym_anchor] = ACTIONS(290),
    [anon_sym_xref] = ACTIONS(290),
    [anon_sym_ifdef] = ACTIONS(290),
    [anon_sym_ifndef] = ACTIONS(290),
    [anon_sym_ifeval] = ACTIONS(290),
    [anon_sym_endif] = ACTIONS(290),
    [anon_sym_indexterm2] = ACTIONS(290),
    [anon_sym_indexterm] = ACTIONS(290),
    [anon_sym_a2s] = ACTIONS(290),
    [anon_sym_barcode] = ACTIONS(290),
    [anon_sym_blockdiag] = ACTIONS(290),
    [anon_sym_bpmn] = ACTIONS(290),
    [anon_sym_bytefield] = ACTIONS(290),
    [anon_sym_d2] = ACTIONS(290),
    [anon_sym_dbml] = ACTIONS(290),
    [anon_sym_diagrams] = ACTIONS(290),
    [anon_sym_ditaa] = ACTIONS(290),
    [anon_sym_dpic] = ACTIONS(290),
    [anon_sym_erd] = ACTIONS(290),
    [anon_sym_gnuplot] = ACTIONS(290),
    [anon_sym_graphviz] = ACTIONS(290),
    [anon_sym_lilypond] = ACTIONS(290),
    [anon_sym_meme] = ACTIONS(290),
    [anon_sym_mermaid] = ACTIONS(290),
    [anon_sym_msc] = ACTIONS(290),
    [anon_sym_nomnoml] = ACTIONS(290),
    [anon_sym_pikchr] = ACTIONS(290),
    [anon_sym_plantuml] = ACTIONS(290),
    [anon_sym_shaape] = ACTIONS(290),
    [anon_sym_smcat] = ACTIONS(290),
    [anon_sym_structurizr] = ACTIONS(290),
    [anon_sym_svgbob] = ACTIONS(290),
    [anon_sym_symbolator] = ACTIONS(290),
    [anon_sym_syntrax] = ACTIONS(290),
    [anon_sym_tikz] = ACTIONS(290),
    [anon_sym_umlet] = ACTIONS(290),
    [anon_sym_vega] = ACTIONS(290),
    [anon_sym_wavedrom] = ACTIONS(290),
    [anon_sym_footnote] = ACTIONS(290),
    [anon_sym_footnoteref] = ACTIONS(290),
    [anon_sym_latexmath] = ACTIONS(290),
    [anon_sym_stem] = ACTIONS(290),
    [anon_sym_asciimath] = ACTIONS(290),
    [anon_sym_pass] = ACTIONS(290),
    [sym_replacement] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_f] = ACTIONS(290),
    [sym_super_escape] = ACTIONS(288),
    [sym__character] = ACTIONS(290),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(288),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(288),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(288),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(288),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(288),
    [anon_sym_BSLASH__] = ACTIONS(288),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(288),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(288),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(290),
    [anon_sym_BSLASHkbd] = ACTIONS(288),
    [anon_sym_BSLASHbtn] = ACTIONS(288),
    [anon_sym_BSLASHimage] = ACTIONS(288),
    [anon_sym_BSLASHaudio] = ACTIONS(288),
    [anon_sym_BSLASHvideo] = ACTIONS(288),
    [anon_sym_BSLASHicon] = ACTIONS(288),
    [anon_sym_BSLASHpass] = ACTIONS(288),
    [anon_sym_BSLASHlink] = ACTIONS(288),
    [anon_sym_BSLASHmailto] = ACTIONS(288),
    [anon_sym_BSLASHmenu] = ACTIONS(288),
    [anon_sym_BSLASHstem] = ACTIONS(288),
    [anon_sym_BSLASHlatexmath] = ACTIONS(288),
    [anon_sym_BSLASHasciimath] = ACTIONS(288),
    [anon_sym_BSLASHfootnote] = ACTIONS(290),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(288),
    [anon_sym_BSLASHanchor] = ACTIONS(288),
    [anon_sym_BSLASHxref] = ACTIONS(288),
    [anon_sym_BSLASHifdef] = ACTIONS(288),
    [anon_sym_BSLASHifndef] = ACTIONS(288),
    [anon_sym_BSLASHifeval] = ACTIONS(288),
    [anon_sym_BSLASHendif] = ACTIONS(288),
    [aux_sym_escaped_sequence_token1] = ACTIONS(290),
    [anon_sym_BANG] = ACTIONS(290),
    [anon_sym_POUND] = ACTIONS(290),
    [anon_sym_DOLLAR] = ACTIONS(290),
    [anon_sym_PERCENT] = ACTIONS(290),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(290),
    [anon_sym_COLON2] = ACTIONS(288),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_EQ] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(288),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(290),
    [anon_sym__] = ACTIONS(290),
    [anon_sym_BQUOTE] = ACTIONS(290),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(290),
    [anon_sym_PLUS2] = ACTIONS(290),
    [anon_sym_PLUS_PLUS] = ACTIONS(288),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_STAR2] = ACTIONS(290),
    [anon_sym_STAR_STAR] = ACTIONS(288),
    [anon_sym__2] = ACTIONS(290),
    [anon_sym___] = ACTIONS(288),
    [anon_sym_BQUOTE2] = ACTIONS(290),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(288),
    [anon_sym_POUND2] = ACTIONS(290),
    [anon_sym_POUND_POUND] = ACTIONS(288),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(290),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(288),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(292),
    [aux_sym_link_url_token1] = ACTIONS(294),
    [aux_sym_link_url_token2] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(294),
    [sym_email] = ACTIONS(294),
    [anon_sym_LBRACK_POUND] = ACTIONS(292),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(292),
    [anon_sym_kbd] = ACTIONS(294),
    [anon_sym_btn] = ACTIONS(294),
    [anon_sym_image] = ACTIONS(294),
    [anon_sym_audio] = ACTIONS(294),
    [anon_sym_video] = ACTIONS(294),
    [anon_sym_icon] = ACTIONS(294),
    [anon_sym_link] = ACTIONS(294),
    [anon_sym_mailto] = ACTIONS(294),
    [anon_sym_menu] = ACTIONS(294),
    [anon_sym_anchor] = ACTIONS(294),
    [anon_sym_xref] = ACTIONS(294),
    [anon_sym_ifdef] = ACTIONS(294),
    [anon_sym_ifndef] = ACTIONS(294),
    [anon_sym_ifeval] = ACTIONS(294),
    [anon_sym_endif] = ACTIONS(294),
    [anon_sym_indexterm2] = ACTIONS(294),
    [anon_sym_indexterm] = ACTIONS(294),
    [anon_sym_a2s] = ACTIONS(294),
    [anon_sym_barcode] = ACTIONS(294),
    [anon_sym_blockdiag] = ACTIONS(294),
    [anon_sym_bpmn] = ACTIONS(294),
    [anon_sym_bytefield] = ACTIONS(294),
    [anon_sym_d2] = ACTIONS(294),
    [anon_sym_dbml] = ACTIONS(294),
    [anon_sym_diagrams] = ACTIONS(294),
    [anon_sym_ditaa] = ACTIONS(294),
    [anon_sym_dpic] = ACTIONS(294),
    [anon_sym_erd] = ACTIONS(294),
    [anon_sym_gnuplot] = ACTIONS(294),
    [anon_sym_graphviz] = ACTIONS(294),
    [anon_sym_lilypond] = ACTIONS(294),
    [anon_sym_meme] = ACTIONS(294),
    [anon_sym_mermaid] = ACTIONS(294),
    [anon_sym_msc] = ACTIONS(294),
    [anon_sym_nomnoml] = ACTIONS(294),
    [anon_sym_pikchr] = ACTIONS(294),
    [anon_sym_plantuml] = ACTIONS(294),
    [anon_sym_shaape] = ACTIONS(294),
    [anon_sym_smcat] = ACTIONS(294),
    [anon_sym_structurizr] = ACTIONS(294),
    [anon_sym_svgbob] = ACTIONS(294),
    [anon_sym_symbolator] = ACTIONS(294),
    [anon_sym_syntrax] = ACTIONS(294),
    [anon_sym_tikz] = ACTIONS(294),
    [anon_sym_umlet] = ACTIONS(294),
    [anon_sym_vega] = ACTIONS(294),
    [anon_sym_wavedrom] = ACTIONS(294),
    [anon_sym_footnote] = ACTIONS(294),
    [anon_sym_footnoteref] = ACTIONS(294),
    [anon_sym_latexmath] = ACTIONS(294),
    [anon_sym_stem] = ACTIONS(294),
    [anon_sym_asciimath] = ACTIONS(294),
    [anon_sym_pass] = ACTIONS(294),
    [sym_replacement] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_f] = ACTIONS(294),
    [sym_super_escape] = ACTIONS(292),
    [sym__character] = ACTIONS(294),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(292),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(292),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(292),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(292),
    [anon_sym_BSLASH__] = ACTIONS(292),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(292),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(292),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(294),
    [anon_sym_BSLASHkbd] = ACTIONS(292),
    [anon_sym_BSLASHbtn] = ACTIONS(292),
    [anon_sym_BSLASHimage] = ACTIONS(292),
    [anon_sym_BSLASHaudio] = ACTIONS(292),
    [anon_sym_BSLASHvideo] = ACTIONS(292),
    [anon_sym_BSLASHicon] = ACTIONS(292),
    [anon_sym_BSLASHpass] = ACTIONS(292),
    [anon_sym_BSLASHlink] = ACTIONS(292),
    [anon_sym_BSLASHmailto] = ACTIONS(292),
    [anon_sym_BSLASHmenu] = ACTIONS(292),
    [anon_sym_BSLASHstem] = ACTIONS(292),
    [anon_sym_BSLASHlatexmath] = ACTIONS(292),
    [anon_sym_BSLASHasciimath] = ACTIONS(292),
    [anon_sym_BSLASHfootnote] = ACTIONS(294),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(292),
    [anon_sym_BSLASHanchor] = ACTIONS(292),
    [anon_sym_BSLASHxref] = ACTIONS(292),
    [anon_sym_BSLASHifdef] = ACTIONS(292),
    [anon_sym_BSLASHifndef] = ACTIONS(292),
    [anon_sym_BSLASHifeval] = ACTIONS(292),
    [anon_sym_BSLASHendif] = ACTIONS(292),
    [aux_sym_escaped_sequence_token1] = ACTIONS(294),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_COLON2] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(292),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_AT] = ACTIONS(292),
    [anon_sym_BSLASH] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym__] = ACTIONS(294),
    [anon_sym_BQUOTE] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(294),
    [anon_sym_PLUS2] = ACTIONS(294),
    [anon_sym_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_STAR2] = ACTIONS(294),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [anon_sym__2] = ACTIONS(294),
    [anon_sym___] = ACTIONS(292),
    [anon_sym_BQUOTE2] = ACTIONS(294),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(292),
    [anon_sym_POUND2] = ACTIONS(294),
    [anon_sym_POUND_POUND] = ACTIONS(292),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(294),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(292),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(296),
    [aux_sym_link_url_token1] = ACTIONS(298),
    [aux_sym_link_url_token2] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(298),
    [sym_email] = ACTIONS(298),
    [anon_sym_LBRACK_POUND] = ACTIONS(296),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(296),
    [anon_sym_kbd] = ACTIONS(298),
    [anon_sym_btn] = ACTIONS(298),
    [anon_sym_image] = ACTIONS(298),
    [anon_sym_audio] = ACTIONS(298),
    [anon_sym_video] = ACTIONS(298),
    [anon_sym_icon] = ACTIONS(298),
    [anon_sym_link] = ACTIONS(298),
    [anon_sym_mailto] = ACTIONS(298),
    [anon_sym_menu] = ACTIONS(298),
    [anon_sym_anchor] = ACTIONS(298),
    [anon_sym_xref] = ACTIONS(298),
    [anon_sym_ifdef] = ACTIONS(298),
    [anon_sym_ifndef] = ACTIONS(298),
    [anon_sym_ifeval] = ACTIONS(298),
    [anon_sym_endif] = ACTIONS(298),
    [anon_sym_indexterm2] = ACTIONS(298),
    [anon_sym_indexterm] = ACTIONS(298),
    [anon_sym_a2s] = ACTIONS(298),
    [anon_sym_barcode] = ACTIONS(298),
    [anon_sym_blockdiag] = ACTIONS(298),
    [anon_sym_bpmn] = ACTIONS(298),
    [anon_sym_bytefield] = ACTIONS(298),
    [anon_sym_d2] = ACTIONS(298),
    [anon_sym_dbml] = ACTIONS(298),
    [anon_sym_diagrams] = ACTIONS(298),
    [anon_sym_ditaa] = ACTIONS(298),
    [anon_sym_dpic] = ACTIONS(298),
    [anon_sym_erd] = ACTIONS(298),
    [anon_sym_gnuplot] = ACTIONS(298),
    [anon_sym_graphviz] = ACTIONS(298),
    [anon_sym_lilypond] = ACTIONS(298),
    [anon_sym_meme] = ACTIONS(298),
    [anon_sym_mermaid] = ACTIONS(298),
    [anon_sym_msc] = ACTIONS(298),
    [anon_sym_nomnoml] = ACTIONS(298),
    [anon_sym_pikchr] = ACTIONS(298),
    [anon_sym_plantuml] = ACTIONS(298),
    [anon_sym_shaape] = ACTIONS(298),
    [anon_sym_smcat] = ACTIONS(298),
    [anon_sym_structurizr] = ACTIONS(298),
    [anon_sym_svgbob] = ACTIONS(298),
    [anon_sym_symbolator] = ACTIONS(298),
    [anon_sym_syntrax] = ACTIONS(298),
    [anon_sym_tikz] = ACTIONS(298),
    [anon_sym_umlet] = ACTIONS(298),
    [anon_sym_vega] = ACTIONS(298),
    [anon_sym_wavedrom] = ACTIONS(298),
    [anon_sym_footnote] = ACTIONS(298),
    [anon_sym_footnoteref] = ACTIONS(298),
    [anon_sym_latexmath] = ACTIONS(298),
    [anon_sym_stem] = ACTIONS(298),
    [anon_sym_asciimath] = ACTIONS(298),
    [anon_sym_pass] = ACTIONS(298),
    [sym_replacement] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_f] = ACTIONS(298),
    [sym_super_escape] = ACTIONS(296),
    [sym__character] = ACTIONS(298),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(296),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(296),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(296),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(296),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(296),
    [anon_sym_BSLASH__] = ACTIONS(296),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(296),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(296),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(298),
    [anon_sym_BSLASHkbd] = ACTIONS(296),
    [anon_sym_BSLASHbtn] = ACTIONS(296),
    [anon_sym_BSLASHimage] = ACTIONS(296),
    [anon_sym_BSLASHaudio] = ACTIONS(296),
    [anon_sym_BSLASHvideo] = ACTIONS(296),
    [anon_sym_BSLASHicon] = ACTIONS(296),
    [anon_sym_BSLASHpass] = ACTIONS(296),
    [anon_sym_BSLASHlink] = ACTIONS(296),
    [anon_sym_BSLASHmailto] = ACTIONS(296),
    [anon_sym_BSLASHmenu] = ACTIONS(296),
    [anon_sym_BSLASHstem] = ACTIONS(296),
    [anon_sym_BSLASHlatexmath] = ACTIONS(296),
    [anon_sym_BSLASHasciimath] = ACTIONS(296),
    [anon_sym_BSLASHfootnote] = ACTIONS(298),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(296),
    [anon_sym_BSLASHanchor] = ACTIONS(296),
    [anon_sym_BSLASHxref] = ACTIONS(296),
    [anon_sym_BSLASHifdef] = ACTIONS(296),
    [anon_sym_BSLASHifndef] = ACTIONS(296),
    [anon_sym_BSLASHifeval] = ACTIONS(296),
    [anon_sym_BSLASHendif] = ACTIONS(296),
    [aux_sym_escaped_sequence_token1] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_POUND] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(298),
    [anon_sym_AMP] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_COLON2] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_QMARK] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(296),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(298),
    [anon_sym__] = ACTIONS(298),
    [anon_sym_BQUOTE] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [anon_sym_PLUS2] = ACTIONS(298),
    [anon_sym_PLUS_PLUS] = ACTIONS(296),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(298),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_STAR2] = ACTIONS(298),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [anon_sym__2] = ACTIONS(298),
    [anon_sym___] = ACTIONS(296),
    [anon_sym_BQUOTE2] = ACTIONS(298),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(296),
    [anon_sym_POUND2] = ACTIONS(298),
    [anon_sym_POUND_POUND] = ACTIONS(296),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(298),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(296),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(300),
    [aux_sym_link_url_token1] = ACTIONS(302),
    [aux_sym_link_url_token2] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(302),
    [sym_email] = ACTIONS(302),
    [anon_sym_LBRACK_POUND] = ACTIONS(300),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(300),
    [anon_sym_kbd] = ACTIONS(302),
    [anon_sym_btn] = ACTIONS(302),
    [anon_sym_image] = ACTIONS(302),
    [anon_sym_audio] = ACTIONS(302),
    [anon_sym_video] = ACTIONS(302),
    [anon_sym_icon] = ACTIONS(302),
    [anon_sym_link] = ACTIONS(302),
    [anon_sym_mailto] = ACTIONS(302),
    [anon_sym_menu] = ACTIONS(302),
    [anon_sym_anchor] = ACTIONS(302),
    [anon_sym_xref] = ACTIONS(302),
    [anon_sym_ifdef] = ACTIONS(302),
    [anon_sym_ifndef] = ACTIONS(302),
    [anon_sym_ifeval] = ACTIONS(302),
    [anon_sym_endif] = ACTIONS(302),
    [anon_sym_indexterm2] = ACTIONS(302),
    [anon_sym_indexterm] = ACTIONS(302),
    [anon_sym_a2s] = ACTIONS(302),
    [anon_sym_barcode] = ACTIONS(302),
    [anon_sym_blockdiag] = ACTIONS(302),
    [anon_sym_bpmn] = ACTIONS(302),
    [anon_sym_bytefield] = ACTIONS(302),
    [anon_sym_d2] = ACTIONS(302),
    [anon_sym_dbml] = ACTIONS(302),
    [anon_sym_diagrams] = ACTIONS(302),
    [anon_sym_ditaa] = ACTIONS(302),
    [anon_sym_dpic] = ACTIONS(302),
    [anon_sym_erd] = ACTIONS(302),
    [anon_sym_gnuplot] = ACTIONS(302),
    [anon_sym_graphviz] = ACTIONS(302),
    [anon_sym_lilypond] = ACTIONS(302),
    [anon_sym_meme] = ACTIONS(302),
    [anon_sym_mermaid] = ACTIONS(302),
    [anon_sym_msc] = ACTIONS(302),
    [anon_sym_nomnoml] = ACTIONS(302),
    [anon_sym_pikchr] = ACTIONS(302),
    [anon_sym_plantuml] = ACTIONS(302),
    [anon_sym_shaape] = ACTIONS(302),
    [anon_sym_smcat] = ACTIONS(302),
    [anon_sym_structurizr] = ACTIONS(302),
    [anon_sym_svgbob] = ACTIONS(302),
    [anon_sym_symbolator] = ACTIONS(302),
    [anon_sym_syntrax] = ACTIONS(302),
    [anon_sym_tikz] = ACTIONS(302),
    [anon_sym_umlet] = ACTIONS(302),
    [anon_sym_vega] = ACTIONS(302),
    [anon_sym_wavedrom] = ACTIONS(302),
    [anon_sym_footnote] = ACTIONS(302),
    [anon_sym_footnoteref] = ACTIONS(302),
    [anon_sym_latexmath] = ACTIONS(302),
    [anon_sym_stem] = ACTIONS(302),
    [anon_sym_asciimath] = ACTIONS(302),
    [anon_sym_pass] = ACTIONS(302),
    [sym_replacement] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_f] = ACTIONS(302),
    [sym_super_escape] = ACTIONS(300),
    [sym__character] = ACTIONS(302),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(300),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(300),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(300),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(300),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(300),
    [anon_sym_BSLASH__] = ACTIONS(300),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(300),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(300),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(302),
    [anon_sym_BSLASHkbd] = ACTIONS(300),
    [anon_sym_BSLASHbtn] = ACTIONS(300),
    [anon_sym_BSLASHimage] = ACTIONS(300),
    [anon_sym_BSLASHaudio] = ACTIONS(300),
    [anon_sym_BSLASHvideo] = ACTIONS(300),
    [anon_sym_BSLASHicon] = ACTIONS(300),
    [anon_sym_BSLASHpass] = ACTIONS(300),
    [anon_sym_BSLASHlink] = ACTIONS(300),
    [anon_sym_BSLASHmailto] = ACTIONS(300),
    [anon_sym_BSLASHmenu] = ACTIONS(300),
    [anon_sym_BSLASHstem] = ACTIONS(300),
    [anon_sym_BSLASHlatexmath] = ACTIONS(300),
    [anon_sym_BSLASHasciimath] = ACTIONS(300),
    [anon_sym_BSLASHfootnote] = ACTIONS(302),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(300),
    [anon_sym_BSLASHanchor] = ACTIONS(300),
    [anon_sym_BSLASHxref] = ACTIONS(300),
    [anon_sym_BSLASHifdef] = ACTIONS(300),
    [anon_sym_BSLASHifndef] = ACTIONS(300),
    [anon_sym_BSLASHifeval] = ACTIONS(300),
    [anon_sym_BSLASHendif] = ACTIONS(300),
    [aux_sym_escaped_sequence_token1] = ACTIONS(302),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_POUND] = ACTIONS(302),
    [anon_sym_DOLLAR] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_COLON2] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_EQ] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_QMARK] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(302),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym__] = ACTIONS(302),
    [anon_sym_BQUOTE] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [anon_sym_PLUS2] = ACTIONS(302),
    [anon_sym_PLUS_PLUS] = ACTIONS(300),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(302),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_STAR2] = ACTIONS(302),
    [anon_sym_STAR_STAR] = ACTIONS(300),
    [anon_sym__2] = ACTIONS(302),
    [anon_sym___] = ACTIONS(300),
    [anon_sym_BQUOTE2] = ACTIONS(302),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(300),
    [anon_sym_POUND2] = ACTIONS(302),
    [anon_sym_POUND_POUND] = ACTIONS(300),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(302),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(300),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(304),
    [aux_sym_link_url_token1] = ACTIONS(306),
    [aux_sym_link_url_token2] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [sym_email] = ACTIONS(306),
    [anon_sym_LBRACK_POUND] = ACTIONS(304),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(304),
    [anon_sym_kbd] = ACTIONS(306),
    [anon_sym_btn] = ACTIONS(306),
    [anon_sym_image] = ACTIONS(306),
    [anon_sym_audio] = ACTIONS(306),
    [anon_sym_video] = ACTIONS(306),
    [anon_sym_icon] = ACTIONS(306),
    [anon_sym_link] = ACTIONS(306),
    [anon_sym_mailto] = ACTIONS(306),
    [anon_sym_menu] = ACTIONS(306),
    [anon_sym_anchor] = ACTIONS(306),
    [anon_sym_xref] = ACTIONS(306),
    [anon_sym_ifdef] = ACTIONS(306),
    [anon_sym_ifndef] = ACTIONS(306),
    [anon_sym_ifeval] = ACTIONS(306),
    [anon_sym_endif] = ACTIONS(306),
    [anon_sym_indexterm2] = ACTIONS(306),
    [anon_sym_indexterm] = ACTIONS(306),
    [anon_sym_a2s] = ACTIONS(306),
    [anon_sym_barcode] = ACTIONS(306),
    [anon_sym_blockdiag] = ACTIONS(306),
    [anon_sym_bpmn] = ACTIONS(306),
    [anon_sym_bytefield] = ACTIONS(306),
    [anon_sym_d2] = ACTIONS(306),
    [anon_sym_dbml] = ACTIONS(306),
    [anon_sym_diagrams] = ACTIONS(306),
    [anon_sym_ditaa] = ACTIONS(306),
    [anon_sym_dpic] = ACTIONS(306),
    [anon_sym_erd] = ACTIONS(306),
    [anon_sym_gnuplot] = ACTIONS(306),
    [anon_sym_graphviz] = ACTIONS(306),
    [anon_sym_lilypond] = ACTIONS(306),
    [anon_sym_meme] = ACTIONS(306),
    [anon_sym_mermaid] = ACTIONS(306),
    [anon_sym_msc] = ACTIONS(306),
    [anon_sym_nomnoml] = ACTIONS(306),
    [anon_sym_pikchr] = ACTIONS(306),
    [anon_sym_plantuml] = ACTIONS(306),
    [anon_sym_shaape] = ACTIONS(306),
    [anon_sym_smcat] = ACTIONS(306),
    [anon_sym_structurizr] = ACTIONS(306),
    [anon_sym_svgbob] = ACTIONS(306),
    [anon_sym_symbolator] = ACTIONS(306),
    [anon_sym_syntrax] = ACTIONS(306),
    [anon_sym_tikz] = ACTIONS(306),
    [anon_sym_umlet] = ACTIONS(306),
    [anon_sym_vega] = ACTIONS(306),
    [anon_sym_wavedrom] = ACTIONS(306),
    [anon_sym_footnote] = ACTIONS(306),
    [anon_sym_footnoteref] = ACTIONS(306),
    [anon_sym_latexmath] = ACTIONS(306),
    [anon_sym_stem] = ACTIONS(306),
    [anon_sym_asciimath] = ACTIONS(306),
    [anon_sym_pass] = ACTIONS(306),
    [sym_replacement] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_f] = ACTIONS(306),
    [sym_super_escape] = ACTIONS(304),
    [sym__character] = ACTIONS(306),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(304),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(304),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(304),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(304),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(304),
    [anon_sym_BSLASH__] = ACTIONS(304),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(304),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(304),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(306),
    [anon_sym_BSLASHkbd] = ACTIONS(304),
    [anon_sym_BSLASHbtn] = ACTIONS(304),
    [anon_sym_BSLASHimage] = ACTIONS(304),
    [anon_sym_BSLASHaudio] = ACTIONS(304),
    [anon_sym_BSLASHvideo] = ACTIONS(304),
    [anon_sym_BSLASHicon] = ACTIONS(304),
    [anon_sym_BSLASHpass] = ACTIONS(304),
    [anon_sym_BSLASHlink] = ACTIONS(304),
    [anon_sym_BSLASHmailto] = ACTIONS(304),
    [anon_sym_BSLASHmenu] = ACTIONS(304),
    [anon_sym_BSLASHstem] = ACTIONS(304),
    [anon_sym_BSLASHlatexmath] = ACTIONS(304),
    [anon_sym_BSLASHasciimath] = ACTIONS(304),
    [anon_sym_BSLASHfootnote] = ACTIONS(306),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(304),
    [anon_sym_BSLASHanchor] = ACTIONS(304),
    [anon_sym_BSLASHxref] = ACTIONS(304),
    [anon_sym_BSLASHifdef] = ACTIONS(304),
    [anon_sym_BSLASHifndef] = ACTIONS(304),
    [anon_sym_BSLASHifeval] = ACTIONS(304),
    [anon_sym_BSLASHendif] = ACTIONS(304),
    [aux_sym_escaped_sequence_token1] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_COLON2] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_BQUOTE] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_PLUS2] = ACTIONS(306),
    [anon_sym_PLUS_PLUS] = ACTIONS(304),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_STAR2] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(304),
    [anon_sym__2] = ACTIONS(306),
    [anon_sym___] = ACTIONS(304),
    [anon_sym_BQUOTE2] = ACTIONS(306),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(304),
    [anon_sym_POUND2] = ACTIONS(306),
    [anon_sym_POUND_POUND] = ACTIONS(304),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(306),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(304),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(308),
    [aux_sym_link_url_token1] = ACTIONS(310),
    [aux_sym_link_url_token2] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(310),
    [sym_email] = ACTIONS(310),
    [anon_sym_LBRACK_POUND] = ACTIONS(308),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(308),
    [anon_sym_kbd] = ACTIONS(310),
    [anon_sym_btn] = ACTIONS(310),
    [anon_sym_image] = ACTIONS(310),
    [anon_sym_audio] = ACTIONS(310),
    [anon_sym_video] = ACTIONS(310),
    [anon_sym_icon] = ACTIONS(310),
    [anon_sym_link] = ACTIONS(310),
    [anon_sym_mailto] = ACTIONS(310),
    [anon_sym_menu] = ACTIONS(310),
    [anon_sym_anchor] = ACTIONS(310),
    [anon_sym_xref] = ACTIONS(310),
    [anon_sym_ifdef] = ACTIONS(310),
    [anon_sym_ifndef] = ACTIONS(310),
    [anon_sym_ifeval] = ACTIONS(310),
    [anon_sym_endif] = ACTIONS(310),
    [anon_sym_indexterm2] = ACTIONS(310),
    [anon_sym_indexterm] = ACTIONS(310),
    [anon_sym_a2s] = ACTIONS(310),
    [anon_sym_barcode] = ACTIONS(310),
    [anon_sym_blockdiag] = ACTIONS(310),
    [anon_sym_bpmn] = ACTIONS(310),
    [anon_sym_bytefield] = ACTIONS(310),
    [anon_sym_d2] = ACTIONS(310),
    [anon_sym_dbml] = ACTIONS(310),
    [anon_sym_diagrams] = ACTIONS(310),
    [anon_sym_ditaa] = ACTIONS(310),
    [anon_sym_dpic] = ACTIONS(310),
    [anon_sym_erd] = ACTIONS(310),
    [anon_sym_gnuplot] = ACTIONS(310),
    [anon_sym_graphviz] = ACTIONS(310),
    [anon_sym_lilypond] = ACTIONS(310),
    [anon_sym_meme] = ACTIONS(310),
    [anon_sym_mermaid] = ACTIONS(310),
    [anon_sym_msc] = ACTIONS(310),
    [anon_sym_nomnoml] = ACTIONS(310),
    [anon_sym_pikchr] = ACTIONS(310),
    [anon_sym_plantuml] = ACTIONS(310),
    [anon_sym_shaape] = ACTIONS(310),
    [anon_sym_smcat] = ACTIONS(310),
    [anon_sym_structurizr] = ACTIONS(310),
    [anon_sym_svgbob] = ACTIONS(310),
    [anon_sym_symbolator] = ACTIONS(310),
    [anon_sym_syntrax] = ACTIONS(310),
    [anon_sym_tikz] = ACTIONS(310),
    [anon_sym_umlet] = ACTIONS(310),
    [anon_sym_vega] = ACTIONS(310),
    [anon_sym_wavedrom] = ACTIONS(310),
    [anon_sym_footnote] = ACTIONS(310),
    [anon_sym_footnoteref] = ACTIONS(310),
    [anon_sym_latexmath] = ACTIONS(310),
    [anon_sym_stem] = ACTIONS(310),
    [anon_sym_asciimath] = ACTIONS(310),
    [anon_sym_pass] = ACTIONS(310),
    [sym_replacement] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_f] = ACTIONS(310),
    [sym_super_escape] = ACTIONS(308),
    [sym__character] = ACTIONS(310),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(308),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(308),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(308),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(308),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(308),
    [anon_sym_BSLASH__] = ACTIONS(308),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(308),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(308),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(310),
    [anon_sym_BSLASHkbd] = ACTIONS(308),
    [anon_sym_BSLASHbtn] = ACTIONS(308),
    [anon_sym_BSLASHimage] = ACTIONS(308),
    [anon_sym_BSLASHaudio] = ACTIONS(308),
    [anon_sym_BSLASHvideo] = ACTIONS(308),
    [anon_sym_BSLASHicon] = ACTIONS(308),
    [anon_sym_BSLASHpass] = ACTIONS(308),
    [anon_sym_BSLASHlink] = ACTIONS(308),
    [anon_sym_BSLASHmailto] = ACTIONS(308),
    [anon_sym_BSLASHmenu] = ACTIONS(308),
    [anon_sym_BSLASHstem] = ACTIONS(308),
    [anon_sym_BSLASHlatexmath] = ACTIONS(308),
    [anon_sym_BSLASHasciimath] = ACTIONS(308),
    [anon_sym_BSLASHfootnote] = ACTIONS(310),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(308),
    [anon_sym_BSLASHanchor] = ACTIONS(308),
    [anon_sym_BSLASHxref] = ACTIONS(308),
    [anon_sym_BSLASHifdef] = ACTIONS(308),
    [anon_sym_BSLASHifndef] = ACTIONS(308),
    [anon_sym_BSLASHifeval] = ACTIONS(308),
    [anon_sym_BSLASHendif] = ACTIONS(308),
    [aux_sym_escaped_sequence_token1] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_COLON2] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(310),
    [anon_sym__] = ACTIONS(310),
    [anon_sym_BQUOTE] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(310),
    [anon_sym_PLUS2] = ACTIONS(310),
    [anon_sym_PLUS_PLUS] = ACTIONS(308),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(310),
    [anon_sym_LT_LT] = ACTIONS(308),
    [anon_sym_STAR2] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [anon_sym__2] = ACTIONS(310),
    [anon_sym___] = ACTIONS(308),
    [anon_sym_BQUOTE2] = ACTIONS(310),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(308),
    [anon_sym_POUND2] = ACTIONS(310),
    [anon_sym_POUND_POUND] = ACTIONS(308),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(310),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(308),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_RBRACK] = ACTIONS(312),
    [aux_sym_link_url_token1] = ACTIONS(314),
    [aux_sym_link_url_token2] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [sym_email] = ACTIONS(314),
    [anon_sym_LBRACK_POUND] = ACTIONS(312),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(312),
    [anon_sym_kbd] = ACTIONS(314),
    [anon_sym_btn] = ACTIONS(314),
    [anon_sym_image] = ACTIONS(314),
    [anon_sym_audio] = ACTIONS(314),
    [anon_sym_video] = ACTIONS(314),
    [anon_sym_icon] = ACTIONS(314),
    [anon_sym_link] = ACTIONS(314),
    [anon_sym_mailto] = ACTIONS(314),
    [anon_sym_menu] = ACTIONS(314),
    [anon_sym_anchor] = ACTIONS(314),
    [anon_sym_xref] = ACTIONS(314),
    [anon_sym_ifdef] = ACTIONS(314),
    [anon_sym_ifndef] = ACTIONS(314),
    [anon_sym_ifeval] = ACTIONS(314),
    [anon_sym_endif] = ACTIONS(314),
    [anon_sym_indexterm2] = ACTIONS(314),
    [anon_sym_indexterm] = ACTIONS(314),
    [anon_sym_a2s] = ACTIONS(314),
    [anon_sym_barcode] = ACTIONS(314),
    [anon_sym_blockdiag] = ACTIONS(314),
    [anon_sym_bpmn] = ACTIONS(314),
    [anon_sym_bytefield] = ACTIONS(314),
    [anon_sym_d2] = ACTIONS(314),
    [anon_sym_dbml] = ACTIONS(314),
    [anon_sym_diagrams] = ACTIONS(314),
    [anon_sym_ditaa] = ACTIONS(314),
    [anon_sym_dpic] = ACTIONS(314),
    [anon_sym_erd] = ACTIONS(314),
    [anon_sym_gnuplot] = ACTIONS(314),
    [anon_sym_graphviz] = ACTIONS(314),
    [anon_sym_lilypond] = ACTIONS(314),
    [anon_sym_meme] = ACTIONS(314),
    [anon_sym_mermaid] = ACTIONS(314),
    [anon_sym_msc] = ACTIONS(314),
    [anon_sym_nomnoml] = ACTIONS(314),
    [anon_sym_pikchr] = ACTIONS(314),
    [anon_sym_plantuml] = ACTIONS(314),
    [anon_sym_shaape] = ACTIONS(314),
    [anon_sym_smcat] = ACTIONS(314),
    [anon_sym_structurizr] = ACTIONS(314),
    [anon_sym_svgbob] = ACTIONS(314),
    [anon_sym_symbolator] = ACTIONS(314),
    [anon_sym_syntrax] = ACTIONS(314),
    [anon_sym_tikz] = ACTIONS(314),
    [anon_sym_umlet] = ACTIONS(314),
    [anon_sym_vega] = ACTIONS(314),
    [anon_sym_wavedrom] = ACTIONS(314),
    [anon_sym_footnote] = ACTIONS(314),
    [anon_sym_footnoteref] = ACTIONS(314),
    [anon_sym_latexmath] = ACTIONS(314),
    [anon_sym_stem] = ACTIONS(314),
    [anon_sym_asciimath] = ACTIONS(314),
    [anon_sym_pass] = ACTIONS(314),
    [sym_replacement] = ACTIONS(314),
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_f] = ACTIONS(314),
    [sym_super_escape] = ACTIONS(312),
    [sym__character] = ACTIONS(314),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(312),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(312),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(312),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(312),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(312),
    [anon_sym_BSLASH__] = ACTIONS(312),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(312),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(312),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(314),
    [anon_sym_BSLASHkbd] = ACTIONS(312),
    [anon_sym_BSLASHbtn] = ACTIONS(312),
    [anon_sym_BSLASHimage] = ACTIONS(312),
    [anon_sym_BSLASHaudio] = ACTIONS(312),
    [anon_sym_BSLASHvideo] = ACTIONS(312),
    [anon_sym_BSLASHicon] = ACTIONS(312),
    [anon_sym_BSLASHpass] = ACTIONS(312),
    [anon_sym_BSLASHlink] = ACTIONS(312),
    [anon_sym_BSLASHmailto] = ACTIONS(312),
    [anon_sym_BSLASHmenu] = ACTIONS(312),
    [anon_sym_BSLASHstem] = ACTIONS(312),
    [anon_sym_BSLASHlatexmath] = ACTIONS(312),
    [anon_sym_BSLASHasciimath] = ACTIONS(312),
    [anon_sym_BSLASHfootnote] = ACTIONS(314),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(312),
    [anon_sym_BSLASHanchor] = ACTIONS(312),
    [anon_sym_BSLASHxref] = ACTIONS(312),
    [anon_sym_BSLASHifdef] = ACTIONS(312),
    [anon_sym_BSLASHifndef] = ACTIONS(312),
    [anon_sym_BSLASHifeval] = ACTIONS(312),
    [anon_sym_BSLASHendif] = ACTIONS(312),
    [aux_sym_escaped_sequence_token1] = ACTIONS(314),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [anon_sym_PERCENT] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_SLASH] = ACTIONS(314),
    [anon_sym_COLON2] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_GT] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(312),
    [anon_sym_BSLASH] = ACTIONS(314),
    [anon_sym_CARET] = ACTIONS(314),
    [anon_sym__] = ACTIONS(314),
    [anon_sym_BQUOTE] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS2] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(312),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(314),
    [anon_sym_LT_LT] = ACTIONS(312),
    [anon_sym_STAR2] = ACTIONS(314),
    [anon_sym_STAR_STAR] = ACTIONS(312),
    [anon_sym__2] = ACTIONS(314),
    [anon_sym___] = ACTIONS(312),
    [anon_sym_BQUOTE2] = ACTIONS(314),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(312),
    [anon_sym_POUND2] = ACTIONS(314),
    [anon_sym_POUND_POUND] = ACTIONS(312),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(314),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(312),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(316),
    [aux_sym_link_url_token1] = ACTIONS(318),
    [aux_sym_link_url_token2] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(318),
    [sym_email] = ACTIONS(318),
    [anon_sym_LBRACK_POUND] = ACTIONS(316),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(316),
    [anon_sym_kbd] = ACTIONS(318),
    [anon_sym_btn] = ACTIONS(318),
    [anon_sym_image] = ACTIONS(318),
    [anon_sym_audio] = ACTIONS(318),
    [anon_sym_video] = ACTIONS(318),
    [anon_sym_icon] = ACTIONS(318),
    [anon_sym_link] = ACTIONS(318),
    [anon_sym_mailto] = ACTIONS(318),
    [anon_sym_menu] = ACTIONS(318),
    [anon_sym_anchor] = ACTIONS(318),
    [anon_sym_xref] = ACTIONS(318),
    [anon_sym_ifdef] = ACTIONS(318),
    [anon_sym_ifndef] = ACTIONS(318),
    [anon_sym_ifeval] = ACTIONS(318),
    [anon_sym_endif] = ACTIONS(318),
    [anon_sym_indexterm2] = ACTIONS(318),
    [anon_sym_indexterm] = ACTIONS(318),
    [anon_sym_a2s] = ACTIONS(318),
    [anon_sym_barcode] = ACTIONS(318),
    [anon_sym_blockdiag] = ACTIONS(318),
    [anon_sym_bpmn] = ACTIONS(318),
    [anon_sym_bytefield] = ACTIONS(318),
    [anon_sym_d2] = ACTIONS(318),
    [anon_sym_dbml] = ACTIONS(318),
    [anon_sym_diagrams] = ACTIONS(318),
    [anon_sym_ditaa] = ACTIONS(318),
    [anon_sym_dpic] = ACTIONS(318),
    [anon_sym_erd] = ACTIONS(318),
    [anon_sym_gnuplot] = ACTIONS(318),
    [anon_sym_graphviz] = ACTIONS(318),
    [anon_sym_lilypond] = ACTIONS(318),
    [anon_sym_meme] = ACTIONS(318),
    [anon_sym_mermaid] = ACTIONS(318),
    [anon_sym_msc] = ACTIONS(318),
    [anon_sym_nomnoml] = ACTIONS(318),
    [anon_sym_pikchr] = ACTIONS(318),
    [anon_sym_plantuml] = ACTIONS(318),
    [anon_sym_shaape] = ACTIONS(318),
    [anon_sym_smcat] = ACTIONS(318),
    [anon_sym_structurizr] = ACTIONS(318),
    [anon_sym_svgbob] = ACTIONS(318),
    [anon_sym_symbolator] = ACTIONS(318),
    [anon_sym_syntrax] = ACTIONS(318),
    [anon_sym_tikz] = ACTIONS(318),
    [anon_sym_umlet] = ACTIONS(318),
    [anon_sym_vega] = ACTIONS(318),
    [anon_sym_wavedrom] = ACTIONS(318),
    [anon_sym_footnote] = ACTIONS(318),
    [anon_sym_footnoteref] = ACTIONS(318),
    [anon_sym_latexmath] = ACTIONS(318),
    [anon_sym_stem] = ACTIONS(318),
    [anon_sym_asciimath] = ACTIONS(318),
    [anon_sym_pass] = ACTIONS(318),
    [sym_replacement] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_f] = ACTIONS(318),
    [sym_super_escape] = ACTIONS(316),
    [sym__character] = ACTIONS(318),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(316),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(316),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(316),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(316),
    [anon_sym_BSLASH__] = ACTIONS(316),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(316),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(316),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(318),
    [anon_sym_BSLASHkbd] = ACTIONS(316),
    [anon_sym_BSLASHbtn] = ACTIONS(316),
    [anon_sym_BSLASHimage] = ACTIONS(316),
    [anon_sym_BSLASHaudio] = ACTIONS(316),
    [anon_sym_BSLASHvideo] = ACTIONS(316),
    [anon_sym_BSLASHicon] = ACTIONS(316),
    [anon_sym_BSLASHpass] = ACTIONS(316),
    [anon_sym_BSLASHlink] = ACTIONS(316),
    [anon_sym_BSLASHmailto] = ACTIONS(316),
    [anon_sym_BSLASHmenu] = ACTIONS(316),
    [anon_sym_BSLASHstem] = ACTIONS(316),
    [anon_sym_BSLASHlatexmath] = ACTIONS(316),
    [anon_sym_BSLASHasciimath] = ACTIONS(316),
    [anon_sym_BSLASHfootnote] = ACTIONS(318),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(316),
    [anon_sym_BSLASHanchor] = ACTIONS(316),
    [anon_sym_BSLASHxref] = ACTIONS(316),
    [anon_sym_BSLASHifdef] = ACTIONS(316),
    [anon_sym_BSLASHifndef] = ACTIONS(316),
    [anon_sym_BSLASHifeval] = ACTIONS(316),
    [anon_sym_BSLASHendif] = ACTIONS(316),
    [aux_sym_escaped_sequence_token1] = ACTIONS(318),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_POUND] = ACTIONS(318),
    [anon_sym_DOLLAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(318),
    [anon_sym_AMP] = ACTIONS(318),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_COLON2] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(316),
    [anon_sym_QMARK] = ACTIONS(318),
    [anon_sym_AT] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(318),
    [anon_sym_CARET] = ACTIONS(318),
    [anon_sym__] = ACTIONS(318),
    [anon_sym_BQUOTE] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS2] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(318),
    [anon_sym_LT_LT] = ACTIONS(316),
    [anon_sym_STAR2] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(316),
    [anon_sym__2] = ACTIONS(318),
    [anon_sym___] = ACTIONS(316),
    [anon_sym_BQUOTE2] = ACTIONS(318),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(316),
    [anon_sym_POUND2] = ACTIONS(318),
    [anon_sym_POUND_POUND] = ACTIONS(316),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(318),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(316),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_RBRACK] = ACTIONS(320),
    [aux_sym_link_url_token1] = ACTIONS(322),
    [aux_sym_link_url_token2] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [sym_email] = ACTIONS(322),
    [anon_sym_LBRACK_POUND] = ACTIONS(320),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(320),
    [anon_sym_kbd] = ACTIONS(322),
    [anon_sym_btn] = ACTIONS(322),
    [anon_sym_image] = ACTIONS(322),
    [anon_sym_audio] = ACTIONS(322),
    [anon_sym_video] = ACTIONS(322),
    [anon_sym_icon] = ACTIONS(322),
    [anon_sym_link] = ACTIONS(322),
    [anon_sym_mailto] = ACTIONS(322),
    [anon_sym_menu] = ACTIONS(322),
    [anon_sym_anchor] = ACTIONS(322),
    [anon_sym_xref] = ACTIONS(322),
    [anon_sym_ifdef] = ACTIONS(322),
    [anon_sym_ifndef] = ACTIONS(322),
    [anon_sym_ifeval] = ACTIONS(322),
    [anon_sym_endif] = ACTIONS(322),
    [anon_sym_indexterm2] = ACTIONS(322),
    [anon_sym_indexterm] = ACTIONS(322),
    [anon_sym_a2s] = ACTIONS(322),
    [anon_sym_barcode] = ACTIONS(322),
    [anon_sym_blockdiag] = ACTIONS(322),
    [anon_sym_bpmn] = ACTIONS(322),
    [anon_sym_bytefield] = ACTIONS(322),
    [anon_sym_d2] = ACTIONS(322),
    [anon_sym_dbml] = ACTIONS(322),
    [anon_sym_diagrams] = ACTIONS(322),
    [anon_sym_ditaa] = ACTIONS(322),
    [anon_sym_dpic] = ACTIONS(322),
    [anon_sym_erd] = ACTIONS(322),
    [anon_sym_gnuplot] = ACTIONS(322),
    [anon_sym_graphviz] = ACTIONS(322),
    [anon_sym_lilypond] = ACTIONS(322),
    [anon_sym_meme] = ACTIONS(322),
    [anon_sym_mermaid] = ACTIONS(322),
    [anon_sym_msc] = ACTIONS(322),
    [anon_sym_nomnoml] = ACTIONS(322),
    [anon_sym_pikchr] = ACTIONS(322),
    [anon_sym_plantuml] = ACTIONS(322),
    [anon_sym_shaape] = ACTIONS(322),
    [anon_sym_smcat] = ACTIONS(322),
    [anon_sym_structurizr] = ACTIONS(322),
    [anon_sym_svgbob] = ACTIONS(322),
    [anon_sym_symbolator] = ACTIONS(322),
    [anon_sym_syntrax] = ACTIONS(322),
    [anon_sym_tikz] = ACTIONS(322),
    [anon_sym_umlet] = ACTIONS(322),
    [anon_sym_vega] = ACTIONS(322),
    [anon_sym_wavedrom] = ACTIONS(322),
    [anon_sym_footnote] = ACTIONS(322),
    [anon_sym_footnoteref] = ACTIONS(322),
    [anon_sym_latexmath] = ACTIONS(322),
    [anon_sym_stem] = ACTIONS(322),
    [anon_sym_asciimath] = ACTIONS(322),
    [anon_sym_pass] = ACTIONS(322),
    [sym_replacement] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_RBRACE] = ACTIONS(322),
    [anon_sym_f] = ACTIONS(322),
    [sym_super_escape] = ACTIONS(320),
    [sym__character] = ACTIONS(322),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(320),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(320),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(320),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(320),
    [anon_sym_BSLASH__] = ACTIONS(320),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(320),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(320),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(322),
    [anon_sym_BSLASHkbd] = ACTIONS(320),
    [anon_sym_BSLASHbtn] = ACTIONS(320),
    [anon_sym_BSLASHimage] = ACTIONS(320),
    [anon_sym_BSLASHaudio] = ACTIONS(320),
    [anon_sym_BSLASHvideo] = ACTIONS(320),
    [anon_sym_BSLASHicon] = ACTIONS(320),
    [anon_sym_BSLASHpass] = ACTIONS(320),
    [anon_sym_BSLASHlink] = ACTIONS(320),
    [anon_sym_BSLASHmailto] = ACTIONS(320),
    [anon_sym_BSLASHmenu] = ACTIONS(320),
    [anon_sym_BSLASHstem] = ACTIONS(320),
    [anon_sym_BSLASHlatexmath] = ACTIONS(320),
    [anon_sym_BSLASHasciimath] = ACTIONS(320),
    [anon_sym_BSLASHfootnote] = ACTIONS(322),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(320),
    [anon_sym_BSLASHanchor] = ACTIONS(320),
    [anon_sym_BSLASHxref] = ACTIONS(320),
    [anon_sym_BSLASHifdef] = ACTIONS(320),
    [anon_sym_BSLASHifndef] = ACTIONS(320),
    [anon_sym_BSLASHifeval] = ACTIONS(320),
    [anon_sym_BSLASHendif] = ACTIONS(320),
    [aux_sym_escaped_sequence_token1] = ACTIONS(322),
    [anon_sym_BANG] = ACTIONS(322),
    [anon_sym_POUND] = ACTIONS(322),
    [anon_sym_DOLLAR] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(322),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_COLON2] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(320),
    [anon_sym_LT] = ACTIONS(322),
    [anon_sym_EQ] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(320),
    [anon_sym_QMARK] = ACTIONS(322),
    [anon_sym_AT] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_CARET] = ACTIONS(322),
    [anon_sym__] = ACTIONS(322),
    [anon_sym_BQUOTE] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_TILDE] = ACTIONS(322),
    [anon_sym_PLUS2] = ACTIONS(322),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(322),
    [anon_sym_LT_LT] = ACTIONS(320),
    [anon_sym_STAR2] = ACTIONS(322),
    [anon_sym_STAR_STAR] = ACTIONS(320),
    [anon_sym__2] = ACTIONS(322),
    [anon_sym___] = ACTIONS(320),
    [anon_sym_BQUOTE2] = ACTIONS(322),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(320),
    [anon_sym_POUND2] = ACTIONS(322),
    [anon_sym_POUND_POUND] = ACTIONS(320),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(322),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(320),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(324),
    [aux_sym_link_url_token1] = ACTIONS(326),
    [aux_sym_link_url_token2] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [sym_email] = ACTIONS(326),
    [anon_sym_LBRACK_POUND] = ACTIONS(324),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(324),
    [anon_sym_kbd] = ACTIONS(326),
    [anon_sym_btn] = ACTIONS(326),
    [anon_sym_image] = ACTIONS(326),
    [anon_sym_audio] = ACTIONS(326),
    [anon_sym_video] = ACTIONS(326),
    [anon_sym_icon] = ACTIONS(326),
    [anon_sym_link] = ACTIONS(326),
    [anon_sym_mailto] = ACTIONS(326),
    [anon_sym_menu] = ACTIONS(326),
    [anon_sym_anchor] = ACTIONS(326),
    [anon_sym_xref] = ACTIONS(326),
    [anon_sym_ifdef] = ACTIONS(326),
    [anon_sym_ifndef] = ACTIONS(326),
    [anon_sym_ifeval] = ACTIONS(326),
    [anon_sym_endif] = ACTIONS(326),
    [anon_sym_indexterm2] = ACTIONS(326),
    [anon_sym_indexterm] = ACTIONS(326),
    [anon_sym_a2s] = ACTIONS(326),
    [anon_sym_barcode] = ACTIONS(326),
    [anon_sym_blockdiag] = ACTIONS(326),
    [anon_sym_bpmn] = ACTIONS(326),
    [anon_sym_bytefield] = ACTIONS(326),
    [anon_sym_d2] = ACTIONS(326),
    [anon_sym_dbml] = ACTIONS(326),
    [anon_sym_diagrams] = ACTIONS(326),
    [anon_sym_ditaa] = ACTIONS(326),
    [anon_sym_dpic] = ACTIONS(326),
    [anon_sym_erd] = ACTIONS(326),
    [anon_sym_gnuplot] = ACTIONS(326),
    [anon_sym_graphviz] = ACTIONS(326),
    [anon_sym_lilypond] = ACTIONS(326),
    [anon_sym_meme] = ACTIONS(326),
    [anon_sym_mermaid] = ACTIONS(326),
    [anon_sym_msc] = ACTIONS(326),
    [anon_sym_nomnoml] = ACTIONS(326),
    [anon_sym_pikchr] = ACTIONS(326),
    [anon_sym_plantuml] = ACTIONS(326),
    [anon_sym_shaape] = ACTIONS(326),
    [anon_sym_smcat] = ACTIONS(326),
    [anon_sym_structurizr] = ACTIONS(326),
    [anon_sym_svgbob] = ACTIONS(326),
    [anon_sym_symbolator] = ACTIONS(326),
    [anon_sym_syntrax] = ACTIONS(326),
    [anon_sym_tikz] = ACTIONS(326),
    [anon_sym_umlet] = ACTIONS(326),
    [anon_sym_vega] = ACTIONS(326),
    [anon_sym_wavedrom] = ACTIONS(326),
    [anon_sym_footnote] = ACTIONS(326),
    [anon_sym_footnoteref] = ACTIONS(326),
    [anon_sym_latexmath] = ACTIONS(326),
    [anon_sym_stem] = ACTIONS(326),
    [anon_sym_asciimath] = ACTIONS(326),
    [anon_sym_pass] = ACTIONS(326),
    [sym_replacement] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_f] = ACTIONS(326),
    [sym_super_escape] = ACTIONS(324),
    [sym__character] = ACTIONS(326),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(324),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(324),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(324),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(324),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(324),
    [anon_sym_BSLASH__] = ACTIONS(324),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(324),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(324),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(326),
    [anon_sym_BSLASHkbd] = ACTIONS(324),
    [anon_sym_BSLASHbtn] = ACTIONS(324),
    [anon_sym_BSLASHimage] = ACTIONS(324),
    [anon_sym_BSLASHaudio] = ACTIONS(324),
    [anon_sym_BSLASHvideo] = ACTIONS(324),
    [anon_sym_BSLASHicon] = ACTIONS(324),
    [anon_sym_BSLASHpass] = ACTIONS(324),
    [anon_sym_BSLASHlink] = ACTIONS(324),
    [anon_sym_BSLASHmailto] = ACTIONS(324),
    [anon_sym_BSLASHmenu] = ACTIONS(324),
    [anon_sym_BSLASHstem] = ACTIONS(324),
    [anon_sym_BSLASHlatexmath] = ACTIONS(324),
    [anon_sym_BSLASHasciimath] = ACTIONS(324),
    [anon_sym_BSLASHfootnote] = ACTIONS(326),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(324),
    [anon_sym_BSLASHanchor] = ACTIONS(324),
    [anon_sym_BSLASHxref] = ACTIONS(324),
    [anon_sym_BSLASHifdef] = ACTIONS(324),
    [anon_sym_BSLASHifndef] = ACTIONS(324),
    [anon_sym_BSLASHifeval] = ACTIONS(324),
    [anon_sym_BSLASHendif] = ACTIONS(324),
    [aux_sym_escaped_sequence_token1] = ACTIONS(326),
    [anon_sym_BANG] = ACTIONS(326),
    [anon_sym_POUND] = ACTIONS(326),
    [anon_sym_DOLLAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_COLON2] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_LT] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_QMARK] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_CARET] = ACTIONS(326),
    [anon_sym__] = ACTIONS(326),
    [anon_sym_BQUOTE] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_PLUS2] = ACTIONS(326),
    [anon_sym_PLUS_PLUS] = ACTIONS(324),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(324),
    [anon_sym_STAR2] = ACTIONS(326),
    [anon_sym_STAR_STAR] = ACTIONS(324),
    [anon_sym__2] = ACTIONS(326),
    [anon_sym___] = ACTIONS(324),
    [anon_sym_BQUOTE2] = ACTIONS(326),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(324),
    [anon_sym_POUND2] = ACTIONS(326),
    [anon_sym_POUND_POUND] = ACTIONS(324),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(326),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(324),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(328),
    [aux_sym_link_url_token1] = ACTIONS(330),
    [aux_sym_link_url_token2] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [sym_email] = ACTIONS(330),
    [anon_sym_LBRACK_POUND] = ACTIONS(328),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(328),
    [anon_sym_kbd] = ACTIONS(330),
    [anon_sym_btn] = ACTIONS(330),
    [anon_sym_image] = ACTIONS(330),
    [anon_sym_audio] = ACTIONS(330),
    [anon_sym_video] = ACTIONS(330),
    [anon_sym_icon] = ACTIONS(330),
    [anon_sym_link] = ACTIONS(330),
    [anon_sym_mailto] = ACTIONS(330),
    [anon_sym_menu] = ACTIONS(330),
    [anon_sym_anchor] = ACTIONS(330),
    [anon_sym_xref] = ACTIONS(330),
    [anon_sym_ifdef] = ACTIONS(330),
    [anon_sym_ifndef] = ACTIONS(330),
    [anon_sym_ifeval] = ACTIONS(330),
    [anon_sym_endif] = ACTIONS(330),
    [anon_sym_indexterm2] = ACTIONS(330),
    [anon_sym_indexterm] = ACTIONS(330),
    [anon_sym_a2s] = ACTIONS(330),
    [anon_sym_barcode] = ACTIONS(330),
    [anon_sym_blockdiag] = ACTIONS(330),
    [anon_sym_bpmn] = ACTIONS(330),
    [anon_sym_bytefield] = ACTIONS(330),
    [anon_sym_d2] = ACTIONS(330),
    [anon_sym_dbml] = ACTIONS(330),
    [anon_sym_diagrams] = ACTIONS(330),
    [anon_sym_ditaa] = ACTIONS(330),
    [anon_sym_dpic] = ACTIONS(330),
    [anon_sym_erd] = ACTIONS(330),
    [anon_sym_gnuplot] = ACTIONS(330),
    [anon_sym_graphviz] = ACTIONS(330),
    [anon_sym_lilypond] = ACTIONS(330),
    [anon_sym_meme] = ACTIONS(330),
    [anon_sym_mermaid] = ACTIONS(330),
    [anon_sym_msc] = ACTIONS(330),
    [anon_sym_nomnoml] = ACTIONS(330),
    [anon_sym_pikchr] = ACTIONS(330),
    [anon_sym_plantuml] = ACTIONS(330),
    [anon_sym_shaape] = ACTIONS(330),
    [anon_sym_smcat] = ACTIONS(330),
    [anon_sym_structurizr] = ACTIONS(330),
    [anon_sym_svgbob] = ACTIONS(330),
    [anon_sym_symbolator] = ACTIONS(330),
    [anon_sym_syntrax] = ACTIONS(330),
    [anon_sym_tikz] = ACTIONS(330),
    [anon_sym_umlet] = ACTIONS(330),
    [anon_sym_vega] = ACTIONS(330),
    [anon_sym_wavedrom] = ACTIONS(330),
    [anon_sym_footnote] = ACTIONS(330),
    [anon_sym_footnoteref] = ACTIONS(330),
    [anon_sym_latexmath] = ACTIONS(330),
    [anon_sym_stem] = ACTIONS(330),
    [anon_sym_asciimath] = ACTIONS(330),
    [anon_sym_pass] = ACTIONS(330),
    [sym_replacement] = ACTIONS(330),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_f] = ACTIONS(330),
    [sym_super_escape] = ACTIONS(328),
    [sym__character] = ACTIONS(330),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(328),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(328),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(328),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(328),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(328),
    [anon_sym_BSLASH__] = ACTIONS(328),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(328),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(328),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(330),
    [anon_sym_BSLASHkbd] = ACTIONS(328),
    [anon_sym_BSLASHbtn] = ACTIONS(328),
    [anon_sym_BSLASHimage] = ACTIONS(328),
    [anon_sym_BSLASHaudio] = ACTIONS(328),
    [anon_sym_BSLASHvideo] = ACTIONS(328),
    [anon_sym_BSLASHicon] = ACTIONS(328),
    [anon_sym_BSLASHpass] = ACTIONS(328),
    [anon_sym_BSLASHlink] = ACTIONS(328),
    [anon_sym_BSLASHmailto] = ACTIONS(328),
    [anon_sym_BSLASHmenu] = ACTIONS(328),
    [anon_sym_BSLASHstem] = ACTIONS(328),
    [anon_sym_BSLASHlatexmath] = ACTIONS(328),
    [anon_sym_BSLASHasciimath] = ACTIONS(328),
    [anon_sym_BSLASHfootnote] = ACTIONS(330),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(328),
    [anon_sym_BSLASHanchor] = ACTIONS(328),
    [anon_sym_BSLASHxref] = ACTIONS(328),
    [anon_sym_BSLASHifdef] = ACTIONS(328),
    [anon_sym_BSLASHifndef] = ACTIONS(328),
    [anon_sym_BSLASHifeval] = ACTIONS(328),
    [anon_sym_BSLASHendif] = ACTIONS(328),
    [aux_sym_escaped_sequence_token1] = ACTIONS(330),
    [anon_sym_BANG] = ACTIONS(330),
    [anon_sym_POUND] = ACTIONS(330),
    [anon_sym_DOLLAR] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(330),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_COLON2] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(330),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(330),
    [anon_sym_AT] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(330),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [anon_sym_BQUOTE] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(330),
    [anon_sym_TILDE] = ACTIONS(330),
    [anon_sym_PLUS2] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(328),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(330),
    [anon_sym_LT_LT] = ACTIONS(328),
    [anon_sym_STAR2] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(328),
    [anon_sym__2] = ACTIONS(330),
    [anon_sym___] = ACTIONS(328),
    [anon_sym_BQUOTE2] = ACTIONS(330),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(328),
    [anon_sym_POUND2] = ACTIONS(330),
    [anon_sym_POUND_POUND] = ACTIONS(328),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(330),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(328),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(334),
    [anon_sym_RBRACK] = ACTIONS(332),
    [aux_sym_link_url_token1] = ACTIONS(334),
    [aux_sym_link_url_token2] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [sym_email] = ACTIONS(334),
    [anon_sym_LBRACK_POUND] = ACTIONS(332),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(332),
    [anon_sym_kbd] = ACTIONS(334),
    [anon_sym_btn] = ACTIONS(334),
    [anon_sym_image] = ACTIONS(334),
    [anon_sym_audio] = ACTIONS(334),
    [anon_sym_video] = ACTIONS(334),
    [anon_sym_icon] = ACTIONS(334),
    [anon_sym_link] = ACTIONS(334),
    [anon_sym_mailto] = ACTIONS(334),
    [anon_sym_menu] = ACTIONS(334),
    [anon_sym_anchor] = ACTIONS(334),
    [anon_sym_xref] = ACTIONS(334),
    [anon_sym_ifdef] = ACTIONS(334),
    [anon_sym_ifndef] = ACTIONS(334),
    [anon_sym_ifeval] = ACTIONS(334),
    [anon_sym_endif] = ACTIONS(334),
    [anon_sym_indexterm2] = ACTIONS(334),
    [anon_sym_indexterm] = ACTIONS(334),
    [anon_sym_a2s] = ACTIONS(334),
    [anon_sym_barcode] = ACTIONS(334),
    [anon_sym_blockdiag] = ACTIONS(334),
    [anon_sym_bpmn] = ACTIONS(334),
    [anon_sym_bytefield] = ACTIONS(334),
    [anon_sym_d2] = ACTIONS(334),
    [anon_sym_dbml] = ACTIONS(334),
    [anon_sym_diagrams] = ACTIONS(334),
    [anon_sym_ditaa] = ACTIONS(334),
    [anon_sym_dpic] = ACTIONS(334),
    [anon_sym_erd] = ACTIONS(334),
    [anon_sym_gnuplot] = ACTIONS(334),
    [anon_sym_graphviz] = ACTIONS(334),
    [anon_sym_lilypond] = ACTIONS(334),
    [anon_sym_meme] = ACTIONS(334),
    [anon_sym_mermaid] = ACTIONS(334),
    [anon_sym_msc] = ACTIONS(334),
    [anon_sym_nomnoml] = ACTIONS(334),
    [anon_sym_pikchr] = ACTIONS(334),
    [anon_sym_plantuml] = ACTIONS(334),
    [anon_sym_shaape] = ACTIONS(334),
    [anon_sym_smcat] = ACTIONS(334),
    [anon_sym_structurizr] = ACTIONS(334),
    [anon_sym_svgbob] = ACTIONS(334),
    [anon_sym_symbolator] = ACTIONS(334),
    [anon_sym_syntrax] = ACTIONS(334),
    [anon_sym_tikz] = ACTIONS(334),
    [anon_sym_umlet] = ACTIONS(334),
    [anon_sym_vega] = ACTIONS(334),
    [anon_sym_wavedrom] = ACTIONS(334),
    [anon_sym_footnote] = ACTIONS(334),
    [anon_sym_footnoteref] = ACTIONS(334),
    [anon_sym_latexmath] = ACTIONS(334),
    [anon_sym_stem] = ACTIONS(334),
    [anon_sym_asciimath] = ACTIONS(334),
    [anon_sym_pass] = ACTIONS(334),
    [sym_replacement] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(334),
    [anon_sym_f] = ACTIONS(334),
    [sym_super_escape] = ACTIONS(332),
    [sym__character] = ACTIONS(334),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(332),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(332),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(332),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(332),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(332),
    [anon_sym_BSLASH__] = ACTIONS(332),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(332),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(332),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(334),
    [anon_sym_BSLASHkbd] = ACTIONS(332),
    [anon_sym_BSLASHbtn] = ACTIONS(332),
    [anon_sym_BSLASHimage] = ACTIONS(332),
    [anon_sym_BSLASHaudio] = ACTIONS(332),
    [anon_sym_BSLASHvideo] = ACTIONS(332),
    [anon_sym_BSLASHicon] = ACTIONS(332),
    [anon_sym_BSLASHpass] = ACTIONS(332),
    [anon_sym_BSLASHlink] = ACTIONS(332),
    [anon_sym_BSLASHmailto] = ACTIONS(332),
    [anon_sym_BSLASHmenu] = ACTIONS(332),
    [anon_sym_BSLASHstem] = ACTIONS(332),
    [anon_sym_BSLASHlatexmath] = ACTIONS(332),
    [anon_sym_BSLASHasciimath] = ACTIONS(332),
    [anon_sym_BSLASHfootnote] = ACTIONS(334),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(332),
    [anon_sym_BSLASHanchor] = ACTIONS(332),
    [anon_sym_BSLASHxref] = ACTIONS(332),
    [anon_sym_BSLASHifdef] = ACTIONS(332),
    [anon_sym_BSLASHifndef] = ACTIONS(332),
    [anon_sym_BSLASHifeval] = ACTIONS(332),
    [anon_sym_BSLASHendif] = ACTIONS(332),
    [aux_sym_escaped_sequence_token1] = ACTIONS(334),
    [anon_sym_BANG] = ACTIONS(334),
    [anon_sym_POUND] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_AMP] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_COLON2] = ACTIONS(332),
    [anon_sym_SEMI] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_QMARK] = ACTIONS(334),
    [anon_sym_AT] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(334),
    [anon_sym_CARET] = ACTIONS(334),
    [anon_sym__] = ACTIONS(334),
    [anon_sym_BQUOTE] = ACTIONS(334),
    [anon_sym_PIPE] = ACTIONS(334),
    [anon_sym_TILDE] = ACTIONS(334),
    [anon_sym_PLUS2] = ACTIONS(334),
    [anon_sym_PLUS_PLUS] = ACTIONS(332),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(334),
    [anon_sym_LT_LT] = ACTIONS(332),
    [anon_sym_STAR2] = ACTIONS(334),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [anon_sym__2] = ACTIONS(334),
    [anon_sym___] = ACTIONS(332),
    [anon_sym_BQUOTE2] = ACTIONS(334),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(332),
    [anon_sym_POUND2] = ACTIONS(334),
    [anon_sym_POUND_POUND] = ACTIONS(332),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(334),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(332),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(336),
    [aux_sym_link_url_token1] = ACTIONS(338),
    [aux_sym_link_url_token2] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [sym_email] = ACTIONS(338),
    [anon_sym_LBRACK_POUND] = ACTIONS(336),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(336),
    [anon_sym_kbd] = ACTIONS(338),
    [anon_sym_btn] = ACTIONS(338),
    [anon_sym_image] = ACTIONS(338),
    [anon_sym_audio] = ACTIONS(338),
    [anon_sym_video] = ACTIONS(338),
    [anon_sym_icon] = ACTIONS(338),
    [anon_sym_link] = ACTIONS(338),
    [anon_sym_mailto] = ACTIONS(338),
    [anon_sym_menu] = ACTIONS(338),
    [anon_sym_anchor] = ACTIONS(338),
    [anon_sym_xref] = ACTIONS(338),
    [anon_sym_ifdef] = ACTIONS(338),
    [anon_sym_ifndef] = ACTIONS(338),
    [anon_sym_ifeval] = ACTIONS(338),
    [anon_sym_endif] = ACTIONS(338),
    [anon_sym_indexterm2] = ACTIONS(338),
    [anon_sym_indexterm] = ACTIONS(338),
    [anon_sym_a2s] = ACTIONS(338),
    [anon_sym_barcode] = ACTIONS(338),
    [anon_sym_blockdiag] = ACTIONS(338),
    [anon_sym_bpmn] = ACTIONS(338),
    [anon_sym_bytefield] = ACTIONS(338),
    [anon_sym_d2] = ACTIONS(338),
    [anon_sym_dbml] = ACTIONS(338),
    [anon_sym_diagrams] = ACTIONS(338),
    [anon_sym_ditaa] = ACTIONS(338),
    [anon_sym_dpic] = ACTIONS(338),
    [anon_sym_erd] = ACTIONS(338),
    [anon_sym_gnuplot] = ACTIONS(338),
    [anon_sym_graphviz] = ACTIONS(338),
    [anon_sym_lilypond] = ACTIONS(338),
    [anon_sym_meme] = ACTIONS(338),
    [anon_sym_mermaid] = ACTIONS(338),
    [anon_sym_msc] = ACTIONS(338),
    [anon_sym_nomnoml] = ACTIONS(338),
    [anon_sym_pikchr] = ACTIONS(338),
    [anon_sym_plantuml] = ACTIONS(338),
    [anon_sym_shaape] = ACTIONS(338),
    [anon_sym_smcat] = ACTIONS(338),
    [anon_sym_structurizr] = ACTIONS(338),
    [anon_sym_svgbob] = ACTIONS(338),
    [anon_sym_symbolator] = ACTIONS(338),
    [anon_sym_syntrax] = ACTIONS(338),
    [anon_sym_tikz] = ACTIONS(338),
    [anon_sym_umlet] = ACTIONS(338),
    [anon_sym_vega] = ACTIONS(338),
    [anon_sym_wavedrom] = ACTIONS(338),
    [anon_sym_footnote] = ACTIONS(338),
    [anon_sym_footnoteref] = ACTIONS(338),
    [anon_sym_latexmath] = ACTIONS(338),
    [anon_sym_stem] = ACTIONS(338),
    [anon_sym_asciimath] = ACTIONS(338),
    [anon_sym_pass] = ACTIONS(338),
    [sym_replacement] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_f] = ACTIONS(338),
    [sym_super_escape] = ACTIONS(336),
    [sym__character] = ACTIONS(338),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(336),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(336),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(336),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(336),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(336),
    [anon_sym_BSLASH__] = ACTIONS(336),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(336),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(336),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(338),
    [anon_sym_BSLASHkbd] = ACTIONS(336),
    [anon_sym_BSLASHbtn] = ACTIONS(336),
    [anon_sym_BSLASHimage] = ACTIONS(336),
    [anon_sym_BSLASHaudio] = ACTIONS(336),
    [anon_sym_BSLASHvideo] = ACTIONS(336),
    [anon_sym_BSLASHicon] = ACTIONS(336),
    [anon_sym_BSLASHpass] = ACTIONS(336),
    [anon_sym_BSLASHlink] = ACTIONS(336),
    [anon_sym_BSLASHmailto] = ACTIONS(336),
    [anon_sym_BSLASHmenu] = ACTIONS(336),
    [anon_sym_BSLASHstem] = ACTIONS(336),
    [anon_sym_BSLASHlatexmath] = ACTIONS(336),
    [anon_sym_BSLASHasciimath] = ACTIONS(336),
    [anon_sym_BSLASHfootnote] = ACTIONS(338),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(336),
    [anon_sym_BSLASHanchor] = ACTIONS(336),
    [anon_sym_BSLASHxref] = ACTIONS(336),
    [anon_sym_BSLASHifdef] = ACTIONS(336),
    [anon_sym_BSLASHifndef] = ACTIONS(336),
    [anon_sym_BSLASHifeval] = ACTIONS(336),
    [anon_sym_BSLASHendif] = ACTIONS(336),
    [aux_sym_escaped_sequence_token1] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [anon_sym_POUND] = ACTIONS(338),
    [anon_sym_DOLLAR] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_AMP] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_COLON2] = ACTIONS(336),
    [anon_sym_SEMI] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(336),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_AT] = ACTIONS(336),
    [anon_sym_BSLASH] = ACTIONS(338),
    [anon_sym_CARET] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [anon_sym_BQUOTE] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_PLUS2] = ACTIONS(338),
    [anon_sym_PLUS_PLUS] = ACTIONS(336),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_STAR2] = ACTIONS(338),
    [anon_sym_STAR_STAR] = ACTIONS(336),
    [anon_sym__2] = ACTIONS(338),
    [anon_sym___] = ACTIONS(336),
    [anon_sym_BQUOTE2] = ACTIONS(338),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(336),
    [anon_sym_POUND2] = ACTIONS(338),
    [anon_sym_POUND_POUND] = ACTIONS(336),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(338),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(336),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [anon_sym_RBRACK] = ACTIONS(340),
    [aux_sym_link_url_token1] = ACTIONS(342),
    [aux_sym_link_url_token2] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(342),
    [sym_email] = ACTIONS(342),
    [anon_sym_LBRACK_POUND] = ACTIONS(340),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(340),
    [anon_sym_kbd] = ACTIONS(342),
    [anon_sym_btn] = ACTIONS(342),
    [anon_sym_image] = ACTIONS(342),
    [anon_sym_audio] = ACTIONS(342),
    [anon_sym_video] = ACTIONS(342),
    [anon_sym_icon] = ACTIONS(342),
    [anon_sym_link] = ACTIONS(342),
    [anon_sym_mailto] = ACTIONS(342),
    [anon_sym_menu] = ACTIONS(342),
    [anon_sym_anchor] = ACTIONS(342),
    [anon_sym_xref] = ACTIONS(342),
    [anon_sym_ifdef] = ACTIONS(342),
    [anon_sym_ifndef] = ACTIONS(342),
    [anon_sym_ifeval] = ACTIONS(342),
    [anon_sym_endif] = ACTIONS(342),
    [anon_sym_indexterm2] = ACTIONS(342),
    [anon_sym_indexterm] = ACTIONS(342),
    [anon_sym_a2s] = ACTIONS(342),
    [anon_sym_barcode] = ACTIONS(342),
    [anon_sym_blockdiag] = ACTIONS(342),
    [anon_sym_bpmn] = ACTIONS(342),
    [anon_sym_bytefield] = ACTIONS(342),
    [anon_sym_d2] = ACTIONS(342),
    [anon_sym_dbml] = ACTIONS(342),
    [anon_sym_diagrams] = ACTIONS(342),
    [anon_sym_ditaa] = ACTIONS(342),
    [anon_sym_dpic] = ACTIONS(342),
    [anon_sym_erd] = ACTIONS(342),
    [anon_sym_gnuplot] = ACTIONS(342),
    [anon_sym_graphviz] = ACTIONS(342),
    [anon_sym_lilypond] = ACTIONS(342),
    [anon_sym_meme] = ACTIONS(342),
    [anon_sym_mermaid] = ACTIONS(342),
    [anon_sym_msc] = ACTIONS(342),
    [anon_sym_nomnoml] = ACTIONS(342),
    [anon_sym_pikchr] = ACTIONS(342),
    [anon_sym_plantuml] = ACTIONS(342),
    [anon_sym_shaape] = ACTIONS(342),
    [anon_sym_smcat] = ACTIONS(342),
    [anon_sym_structurizr] = ACTIONS(342),
    [anon_sym_svgbob] = ACTIONS(342),
    [anon_sym_symbolator] = ACTIONS(342),
    [anon_sym_syntrax] = ACTIONS(342),
    [anon_sym_tikz] = ACTIONS(342),
    [anon_sym_umlet] = ACTIONS(342),
    [anon_sym_vega] = ACTIONS(342),
    [anon_sym_wavedrom] = ACTIONS(342),
    [anon_sym_footnote] = ACTIONS(342),
    [anon_sym_footnoteref] = ACTIONS(342),
    [anon_sym_latexmath] = ACTIONS(342),
    [anon_sym_stem] = ACTIONS(342),
    [anon_sym_asciimath] = ACTIONS(342),
    [anon_sym_pass] = ACTIONS(342),
    [sym_replacement] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
    [anon_sym_f] = ACTIONS(342),
    [sym_super_escape] = ACTIONS(340),
    [sym__character] = ACTIONS(342),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(340),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(340),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(340),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(340),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(340),
    [anon_sym_BSLASH__] = ACTIONS(340),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(340),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(340),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_BSLASHkbd] = ACTIONS(340),
    [anon_sym_BSLASHbtn] = ACTIONS(340),
    [anon_sym_BSLASHimage] = ACTIONS(340),
    [anon_sym_BSLASHaudio] = ACTIONS(340),
    [anon_sym_BSLASHvideo] = ACTIONS(340),
    [anon_sym_BSLASHicon] = ACTIONS(340),
    [anon_sym_BSLASHpass] = ACTIONS(340),
    [anon_sym_BSLASHlink] = ACTIONS(340),
    [anon_sym_BSLASHmailto] = ACTIONS(340),
    [anon_sym_BSLASHmenu] = ACTIONS(340),
    [anon_sym_BSLASHstem] = ACTIONS(340),
    [anon_sym_BSLASHlatexmath] = ACTIONS(340),
    [anon_sym_BSLASHasciimath] = ACTIONS(340),
    [anon_sym_BSLASHfootnote] = ACTIONS(342),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(340),
    [anon_sym_BSLASHanchor] = ACTIONS(340),
    [anon_sym_BSLASHxref] = ACTIONS(340),
    [anon_sym_BSLASHifdef] = ACTIONS(340),
    [anon_sym_BSLASHifndef] = ACTIONS(340),
    [anon_sym_BSLASHifeval] = ACTIONS(340),
    [anon_sym_BSLASHendif] = ACTIONS(340),
    [aux_sym_escaped_sequence_token1] = ACTIONS(342),
    [anon_sym_BANG] = ACTIONS(342),
    [anon_sym_POUND] = ACTIONS(342),
    [anon_sym_DOLLAR] = ACTIONS(342),
    [anon_sym_PERCENT] = ACTIONS(342),
    [anon_sym_AMP] = ACTIONS(342),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_COLON2] = ACTIONS(340),
    [anon_sym_SEMI] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_QMARK] = ACTIONS(342),
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_BSLASH] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(342),
    [anon_sym__] = ACTIONS(342),
    [anon_sym_BQUOTE] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_TILDE] = ACTIONS(342),
    [anon_sym_PLUS2] = ACTIONS(342),
    [anon_sym_PLUS_PLUS] = ACTIONS(340),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(342),
    [anon_sym_LT_LT] = ACTIONS(340),
    [anon_sym_STAR2] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(340),
    [anon_sym__2] = ACTIONS(342),
    [anon_sym___] = ACTIONS(340),
    [anon_sym_BQUOTE2] = ACTIONS(342),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(340),
    [anon_sym_POUND2] = ACTIONS(342),
    [anon_sym_POUND_POUND] = ACTIONS(340),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(342),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(340),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(344),
    [aux_sym_link_url_token1] = ACTIONS(346),
    [aux_sym_link_url_token2] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [sym_email] = ACTIONS(346),
    [anon_sym_LBRACK_POUND] = ACTIONS(344),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(344),
    [anon_sym_kbd] = ACTIONS(346),
    [anon_sym_btn] = ACTIONS(346),
    [anon_sym_image] = ACTIONS(346),
    [anon_sym_audio] = ACTIONS(346),
    [anon_sym_video] = ACTIONS(346),
    [anon_sym_icon] = ACTIONS(346),
    [anon_sym_link] = ACTIONS(346),
    [anon_sym_mailto] = ACTIONS(346),
    [anon_sym_menu] = ACTIONS(346),
    [anon_sym_anchor] = ACTIONS(346),
    [anon_sym_xref] = ACTIONS(346),
    [anon_sym_ifdef] = ACTIONS(346),
    [anon_sym_ifndef] = ACTIONS(346),
    [anon_sym_ifeval] = ACTIONS(346),
    [anon_sym_endif] = ACTIONS(346),
    [anon_sym_indexterm2] = ACTIONS(346),
    [anon_sym_indexterm] = ACTIONS(346),
    [anon_sym_a2s] = ACTIONS(346),
    [anon_sym_barcode] = ACTIONS(346),
    [anon_sym_blockdiag] = ACTIONS(346),
    [anon_sym_bpmn] = ACTIONS(346),
    [anon_sym_bytefield] = ACTIONS(346),
    [anon_sym_d2] = ACTIONS(346),
    [anon_sym_dbml] = ACTIONS(346),
    [anon_sym_diagrams] = ACTIONS(346),
    [anon_sym_ditaa] = ACTIONS(346),
    [anon_sym_dpic] = ACTIONS(346),
    [anon_sym_erd] = ACTIONS(346),
    [anon_sym_gnuplot] = ACTIONS(346),
    [anon_sym_graphviz] = ACTIONS(346),
    [anon_sym_lilypond] = ACTIONS(346),
    [anon_sym_meme] = ACTIONS(346),
    [anon_sym_mermaid] = ACTIONS(346),
    [anon_sym_msc] = ACTIONS(346),
    [anon_sym_nomnoml] = ACTIONS(346),
    [anon_sym_pikchr] = ACTIONS(346),
    [anon_sym_plantuml] = ACTIONS(346),
    [anon_sym_shaape] = ACTIONS(346),
    [anon_sym_smcat] = ACTIONS(346),
    [anon_sym_structurizr] = ACTIONS(346),
    [anon_sym_svgbob] = ACTIONS(346),
    [anon_sym_symbolator] = ACTIONS(346),
    [anon_sym_syntrax] = ACTIONS(346),
    [anon_sym_tikz] = ACTIONS(346),
    [anon_sym_umlet] = ACTIONS(346),
    [anon_sym_vega] = ACTIONS(346),
    [anon_sym_wavedrom] = ACTIONS(346),
    [anon_sym_footnote] = ACTIONS(346),
    [anon_sym_footnoteref] = ACTIONS(346),
    [anon_sym_latexmath] = ACTIONS(346),
    [anon_sym_stem] = ACTIONS(346),
    [anon_sym_asciimath] = ACTIONS(346),
    [anon_sym_pass] = ACTIONS(346),
    [sym_replacement] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_f] = ACTIONS(346),
    [sym_super_escape] = ACTIONS(344),
    [sym__character] = ACTIONS(346),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(344),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(344),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(344),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(344),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(344),
    [anon_sym_BSLASH__] = ACTIONS(344),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(344),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(344),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_BSLASHkbd] = ACTIONS(344),
    [anon_sym_BSLASHbtn] = ACTIONS(344),
    [anon_sym_BSLASHimage] = ACTIONS(344),
    [anon_sym_BSLASHaudio] = ACTIONS(344),
    [anon_sym_BSLASHvideo] = ACTIONS(344),
    [anon_sym_BSLASHicon] = ACTIONS(344),
    [anon_sym_BSLASHpass] = ACTIONS(344),
    [anon_sym_BSLASHlink] = ACTIONS(344),
    [anon_sym_BSLASHmailto] = ACTIONS(344),
    [anon_sym_BSLASHmenu] = ACTIONS(344),
    [anon_sym_BSLASHstem] = ACTIONS(344),
    [anon_sym_BSLASHlatexmath] = ACTIONS(344),
    [anon_sym_BSLASHasciimath] = ACTIONS(344),
    [anon_sym_BSLASHfootnote] = ACTIONS(346),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(344),
    [anon_sym_BSLASHanchor] = ACTIONS(344),
    [anon_sym_BSLASHxref] = ACTIONS(344),
    [anon_sym_BSLASHifdef] = ACTIONS(344),
    [anon_sym_BSLASHifndef] = ACTIONS(344),
    [anon_sym_BSLASHifeval] = ACTIONS(344),
    [anon_sym_BSLASHendif] = ACTIONS(344),
    [aux_sym_escaped_sequence_token1] = ACTIONS(346),
    [anon_sym_BANG] = ACTIONS(346),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_COLON2] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(344),
    [anon_sym_QMARK] = ACTIONS(346),
    [anon_sym_AT] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(346),
    [anon_sym_CARET] = ACTIONS(346),
    [anon_sym__] = ACTIONS(346),
    [anon_sym_BQUOTE] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(346),
    [anon_sym_PLUS2] = ACTIONS(346),
    [anon_sym_PLUS_PLUS] = ACTIONS(344),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(346),
    [anon_sym_LT_LT] = ACTIONS(344),
    [anon_sym_STAR2] = ACTIONS(346),
    [anon_sym_STAR_STAR] = ACTIONS(344),
    [anon_sym__2] = ACTIONS(346),
    [anon_sym___] = ACTIONS(344),
    [anon_sym_BQUOTE2] = ACTIONS(346),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(344),
    [anon_sym_POUND2] = ACTIONS(346),
    [anon_sym_POUND_POUND] = ACTIONS(344),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(346),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(344),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(348),
    [aux_sym_link_url_token1] = ACTIONS(350),
    [aux_sym_link_url_token2] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [sym_email] = ACTIONS(350),
    [anon_sym_LBRACK_POUND] = ACTIONS(348),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(348),
    [anon_sym_kbd] = ACTIONS(350),
    [anon_sym_btn] = ACTIONS(350),
    [anon_sym_image] = ACTIONS(350),
    [anon_sym_audio] = ACTIONS(350),
    [anon_sym_video] = ACTIONS(350),
    [anon_sym_icon] = ACTIONS(350),
    [anon_sym_link] = ACTIONS(350),
    [anon_sym_mailto] = ACTIONS(350),
    [anon_sym_menu] = ACTIONS(350),
    [anon_sym_anchor] = ACTIONS(350),
    [anon_sym_xref] = ACTIONS(350),
    [anon_sym_ifdef] = ACTIONS(350),
    [anon_sym_ifndef] = ACTIONS(350),
    [anon_sym_ifeval] = ACTIONS(350),
    [anon_sym_endif] = ACTIONS(350),
    [anon_sym_indexterm2] = ACTIONS(350),
    [anon_sym_indexterm] = ACTIONS(350),
    [anon_sym_a2s] = ACTIONS(350),
    [anon_sym_barcode] = ACTIONS(350),
    [anon_sym_blockdiag] = ACTIONS(350),
    [anon_sym_bpmn] = ACTIONS(350),
    [anon_sym_bytefield] = ACTIONS(350),
    [anon_sym_d2] = ACTIONS(350),
    [anon_sym_dbml] = ACTIONS(350),
    [anon_sym_diagrams] = ACTIONS(350),
    [anon_sym_ditaa] = ACTIONS(350),
    [anon_sym_dpic] = ACTIONS(350),
    [anon_sym_erd] = ACTIONS(350),
    [anon_sym_gnuplot] = ACTIONS(350),
    [anon_sym_graphviz] = ACTIONS(350),
    [anon_sym_lilypond] = ACTIONS(350),
    [anon_sym_meme] = ACTIONS(350),
    [anon_sym_mermaid] = ACTIONS(350),
    [anon_sym_msc] = ACTIONS(350),
    [anon_sym_nomnoml] = ACTIONS(350),
    [anon_sym_pikchr] = ACTIONS(350),
    [anon_sym_plantuml] = ACTIONS(350),
    [anon_sym_shaape] = ACTIONS(350),
    [anon_sym_smcat] = ACTIONS(350),
    [anon_sym_structurizr] = ACTIONS(350),
    [anon_sym_svgbob] = ACTIONS(350),
    [anon_sym_symbolator] = ACTIONS(350),
    [anon_sym_syntrax] = ACTIONS(350),
    [anon_sym_tikz] = ACTIONS(350),
    [anon_sym_umlet] = ACTIONS(350),
    [anon_sym_vega] = ACTIONS(350),
    [anon_sym_wavedrom] = ACTIONS(350),
    [anon_sym_footnote] = ACTIONS(350),
    [anon_sym_footnoteref] = ACTIONS(350),
    [anon_sym_latexmath] = ACTIONS(350),
    [anon_sym_stem] = ACTIONS(350),
    [anon_sym_asciimath] = ACTIONS(350),
    [anon_sym_pass] = ACTIONS(350),
    [sym_replacement] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_f] = ACTIONS(350),
    [sym_super_escape] = ACTIONS(348),
    [sym__character] = ACTIONS(350),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(348),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(348),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(348),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(348),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(348),
    [anon_sym_BSLASH__] = ACTIONS(348),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(348),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(348),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_BSLASHkbd] = ACTIONS(348),
    [anon_sym_BSLASHbtn] = ACTIONS(348),
    [anon_sym_BSLASHimage] = ACTIONS(348),
    [anon_sym_BSLASHaudio] = ACTIONS(348),
    [anon_sym_BSLASHvideo] = ACTIONS(348),
    [anon_sym_BSLASHicon] = ACTIONS(348),
    [anon_sym_BSLASHpass] = ACTIONS(348),
    [anon_sym_BSLASHlink] = ACTIONS(348),
    [anon_sym_BSLASHmailto] = ACTIONS(348),
    [anon_sym_BSLASHmenu] = ACTIONS(348),
    [anon_sym_BSLASHstem] = ACTIONS(348),
    [anon_sym_BSLASHlatexmath] = ACTIONS(348),
    [anon_sym_BSLASHasciimath] = ACTIONS(348),
    [anon_sym_BSLASHfootnote] = ACTIONS(350),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(348),
    [anon_sym_BSLASHanchor] = ACTIONS(348),
    [anon_sym_BSLASHxref] = ACTIONS(348),
    [anon_sym_BSLASHifdef] = ACTIONS(348),
    [anon_sym_BSLASHifndef] = ACTIONS(348),
    [anon_sym_BSLASHifeval] = ACTIONS(348),
    [anon_sym_BSLASHendif] = ACTIONS(348),
    [aux_sym_escaped_sequence_token1] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_POUND] = ACTIONS(350),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(350),
    [anon_sym_AMP] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_STAR] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_COLON2] = ACTIONS(348),
    [anon_sym_SEMI] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_AT] = ACTIONS(348),
    [anon_sym_BSLASH] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [anon_sym_BQUOTE] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS2] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(348),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(350),
    [anon_sym_LT_LT] = ACTIONS(348),
    [anon_sym_STAR2] = ACTIONS(350),
    [anon_sym_STAR_STAR] = ACTIONS(348),
    [anon_sym__2] = ACTIONS(350),
    [anon_sym___] = ACTIONS(348),
    [anon_sym_BQUOTE2] = ACTIONS(350),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(348),
    [anon_sym_POUND2] = ACTIONS(350),
    [anon_sym_POUND_POUND] = ACTIONS(348),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(350),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(348),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(352),
    [aux_sym_link_url_token1] = ACTIONS(354),
    [aux_sym_link_url_token2] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [sym_email] = ACTIONS(354),
    [anon_sym_LBRACK_POUND] = ACTIONS(352),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(352),
    [anon_sym_kbd] = ACTIONS(354),
    [anon_sym_btn] = ACTIONS(354),
    [anon_sym_image] = ACTIONS(354),
    [anon_sym_audio] = ACTIONS(354),
    [anon_sym_video] = ACTIONS(354),
    [anon_sym_icon] = ACTIONS(354),
    [anon_sym_link] = ACTIONS(354),
    [anon_sym_mailto] = ACTIONS(354),
    [anon_sym_menu] = ACTIONS(354),
    [anon_sym_anchor] = ACTIONS(354),
    [anon_sym_xref] = ACTIONS(354),
    [anon_sym_ifdef] = ACTIONS(354),
    [anon_sym_ifndef] = ACTIONS(354),
    [anon_sym_ifeval] = ACTIONS(354),
    [anon_sym_endif] = ACTIONS(354),
    [anon_sym_indexterm2] = ACTIONS(354),
    [anon_sym_indexterm] = ACTIONS(354),
    [anon_sym_a2s] = ACTIONS(354),
    [anon_sym_barcode] = ACTIONS(354),
    [anon_sym_blockdiag] = ACTIONS(354),
    [anon_sym_bpmn] = ACTIONS(354),
    [anon_sym_bytefield] = ACTIONS(354),
    [anon_sym_d2] = ACTIONS(354),
    [anon_sym_dbml] = ACTIONS(354),
    [anon_sym_diagrams] = ACTIONS(354),
    [anon_sym_ditaa] = ACTIONS(354),
    [anon_sym_dpic] = ACTIONS(354),
    [anon_sym_erd] = ACTIONS(354),
    [anon_sym_gnuplot] = ACTIONS(354),
    [anon_sym_graphviz] = ACTIONS(354),
    [anon_sym_lilypond] = ACTIONS(354),
    [anon_sym_meme] = ACTIONS(354),
    [anon_sym_mermaid] = ACTIONS(354),
    [anon_sym_msc] = ACTIONS(354),
    [anon_sym_nomnoml] = ACTIONS(354),
    [anon_sym_pikchr] = ACTIONS(354),
    [anon_sym_plantuml] = ACTIONS(354),
    [anon_sym_shaape] = ACTIONS(354),
    [anon_sym_smcat] = ACTIONS(354),
    [anon_sym_structurizr] = ACTIONS(354),
    [anon_sym_svgbob] = ACTIONS(354),
    [anon_sym_symbolator] = ACTIONS(354),
    [anon_sym_syntrax] = ACTIONS(354),
    [anon_sym_tikz] = ACTIONS(354),
    [anon_sym_umlet] = ACTIONS(354),
    [anon_sym_vega] = ACTIONS(354),
    [anon_sym_wavedrom] = ACTIONS(354),
    [anon_sym_footnote] = ACTIONS(354),
    [anon_sym_footnoteref] = ACTIONS(354),
    [anon_sym_latexmath] = ACTIONS(354),
    [anon_sym_stem] = ACTIONS(354),
    [anon_sym_asciimath] = ACTIONS(354),
    [anon_sym_pass] = ACTIONS(354),
    [sym_replacement] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_f] = ACTIONS(354),
    [sym_super_escape] = ACTIONS(352),
    [sym__character] = ACTIONS(354),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(352),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(352),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(352),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(352),
    [anon_sym_BSLASH__] = ACTIONS(352),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(352),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(352),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(354),
    [anon_sym_BSLASHkbd] = ACTIONS(352),
    [anon_sym_BSLASHbtn] = ACTIONS(352),
    [anon_sym_BSLASHimage] = ACTIONS(352),
    [anon_sym_BSLASHaudio] = ACTIONS(352),
    [anon_sym_BSLASHvideo] = ACTIONS(352),
    [anon_sym_BSLASHicon] = ACTIONS(352),
    [anon_sym_BSLASHpass] = ACTIONS(352),
    [anon_sym_BSLASHlink] = ACTIONS(352),
    [anon_sym_BSLASHmailto] = ACTIONS(352),
    [anon_sym_BSLASHmenu] = ACTIONS(352),
    [anon_sym_BSLASHstem] = ACTIONS(352),
    [anon_sym_BSLASHlatexmath] = ACTIONS(352),
    [anon_sym_BSLASHasciimath] = ACTIONS(352),
    [anon_sym_BSLASHfootnote] = ACTIONS(354),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(352),
    [anon_sym_BSLASHanchor] = ACTIONS(352),
    [anon_sym_BSLASHxref] = ACTIONS(352),
    [anon_sym_BSLASHifdef] = ACTIONS(352),
    [anon_sym_BSLASHifndef] = ACTIONS(352),
    [anon_sym_BSLASHifeval] = ACTIONS(352),
    [anon_sym_BSLASHendif] = ACTIONS(352),
    [aux_sym_escaped_sequence_token1] = ACTIONS(354),
    [anon_sym_BANG] = ACTIONS(354),
    [anon_sym_POUND] = ACTIONS(354),
    [anon_sym_DOLLAR] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_STAR] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_COLON2] = ACTIONS(352),
    [anon_sym_SEMI] = ACTIONS(352),
    [anon_sym_LT] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(352),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_AT] = ACTIONS(352),
    [anon_sym_BSLASH] = ACTIONS(354),
    [anon_sym_CARET] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_BQUOTE] = ACTIONS(354),
    [anon_sym_PIPE] = ACTIONS(354),
    [anon_sym_TILDE] = ACTIONS(354),
    [anon_sym_PLUS2] = ACTIONS(354),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(354),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_STAR2] = ACTIONS(354),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [anon_sym__2] = ACTIONS(354),
    [anon_sym___] = ACTIONS(352),
    [anon_sym_BQUOTE2] = ACTIONS(354),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(352),
    [anon_sym_POUND2] = ACTIONS(354),
    [anon_sym_POUND_POUND] = ACTIONS(352),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(354),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(352),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(356),
    [aux_sym_link_url_token1] = ACTIONS(358),
    [aux_sym_link_url_token2] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [sym_email] = ACTIONS(358),
    [anon_sym_LBRACK_POUND] = ACTIONS(356),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(356),
    [anon_sym_kbd] = ACTIONS(358),
    [anon_sym_btn] = ACTIONS(358),
    [anon_sym_image] = ACTIONS(358),
    [anon_sym_audio] = ACTIONS(358),
    [anon_sym_video] = ACTIONS(358),
    [anon_sym_icon] = ACTIONS(358),
    [anon_sym_link] = ACTIONS(358),
    [anon_sym_mailto] = ACTIONS(358),
    [anon_sym_menu] = ACTIONS(358),
    [anon_sym_anchor] = ACTIONS(358),
    [anon_sym_xref] = ACTIONS(358),
    [anon_sym_ifdef] = ACTIONS(358),
    [anon_sym_ifndef] = ACTIONS(358),
    [anon_sym_ifeval] = ACTIONS(358),
    [anon_sym_endif] = ACTIONS(358),
    [anon_sym_indexterm2] = ACTIONS(358),
    [anon_sym_indexterm] = ACTIONS(358),
    [anon_sym_a2s] = ACTIONS(358),
    [anon_sym_barcode] = ACTIONS(358),
    [anon_sym_blockdiag] = ACTIONS(358),
    [anon_sym_bpmn] = ACTIONS(358),
    [anon_sym_bytefield] = ACTIONS(358),
    [anon_sym_d2] = ACTIONS(358),
    [anon_sym_dbml] = ACTIONS(358),
    [anon_sym_diagrams] = ACTIONS(358),
    [anon_sym_ditaa] = ACTIONS(358),
    [anon_sym_dpic] = ACTIONS(358),
    [anon_sym_erd] = ACTIONS(358),
    [anon_sym_gnuplot] = ACTIONS(358),
    [anon_sym_graphviz] = ACTIONS(358),
    [anon_sym_lilypond] = ACTIONS(358),
    [anon_sym_meme] = ACTIONS(358),
    [anon_sym_mermaid] = ACTIONS(358),
    [anon_sym_msc] = ACTIONS(358),
    [anon_sym_nomnoml] = ACTIONS(358),
    [anon_sym_pikchr] = ACTIONS(358),
    [anon_sym_plantuml] = ACTIONS(358),
    [anon_sym_shaape] = ACTIONS(358),
    [anon_sym_smcat] = ACTIONS(358),
    [anon_sym_structurizr] = ACTIONS(358),
    [anon_sym_svgbob] = ACTIONS(358),
    [anon_sym_symbolator] = ACTIONS(358),
    [anon_sym_syntrax] = ACTIONS(358),
    [anon_sym_tikz] = ACTIONS(358),
    [anon_sym_umlet] = ACTIONS(358),
    [anon_sym_vega] = ACTIONS(358),
    [anon_sym_wavedrom] = ACTIONS(358),
    [anon_sym_footnote] = ACTIONS(358),
    [anon_sym_footnoteref] = ACTIONS(358),
    [anon_sym_latexmath] = ACTIONS(358),
    [anon_sym_stem] = ACTIONS(358),
    [anon_sym_asciimath] = ACTIONS(358),
    [anon_sym_pass] = ACTIONS(358),
    [sym_replacement] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_f] = ACTIONS(358),
    [sym_super_escape] = ACTIONS(356),
    [sym__character] = ACTIONS(358),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(356),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(356),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(356),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(356),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(356),
    [anon_sym_BSLASH__] = ACTIONS(356),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(356),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(356),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_BSLASHkbd] = ACTIONS(356),
    [anon_sym_BSLASHbtn] = ACTIONS(356),
    [anon_sym_BSLASHimage] = ACTIONS(356),
    [anon_sym_BSLASHaudio] = ACTIONS(356),
    [anon_sym_BSLASHvideo] = ACTIONS(356),
    [anon_sym_BSLASHicon] = ACTIONS(356),
    [anon_sym_BSLASHpass] = ACTIONS(356),
    [anon_sym_BSLASHlink] = ACTIONS(356),
    [anon_sym_BSLASHmailto] = ACTIONS(356),
    [anon_sym_BSLASHmenu] = ACTIONS(356),
    [anon_sym_BSLASHstem] = ACTIONS(356),
    [anon_sym_BSLASHlatexmath] = ACTIONS(356),
    [anon_sym_BSLASHasciimath] = ACTIONS(356),
    [anon_sym_BSLASHfootnote] = ACTIONS(358),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(356),
    [anon_sym_BSLASHanchor] = ACTIONS(356),
    [anon_sym_BSLASHxref] = ACTIONS(356),
    [anon_sym_BSLASHifdef] = ACTIONS(356),
    [anon_sym_BSLASHifndef] = ACTIONS(356),
    [anon_sym_BSLASHifeval] = ACTIONS(356),
    [anon_sym_BSLASHendif] = ACTIONS(356),
    [aux_sym_escaped_sequence_token1] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(358),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_COLON2] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_BSLASH] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym__] = ACTIONS(358),
    [anon_sym_BQUOTE] = ACTIONS(358),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_PLUS2] = ACTIONS(358),
    [anon_sym_PLUS_PLUS] = ACTIONS(356),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(358),
    [anon_sym_LT_LT] = ACTIONS(356),
    [anon_sym_STAR2] = ACTIONS(358),
    [anon_sym_STAR_STAR] = ACTIONS(356),
    [anon_sym__2] = ACTIONS(358),
    [anon_sym___] = ACTIONS(356),
    [anon_sym_BQUOTE2] = ACTIONS(358),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(356),
    [anon_sym_POUND2] = ACTIONS(358),
    [anon_sym_POUND_POUND] = ACTIONS(356),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(358),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(356),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_RBRACK] = ACTIONS(360),
    [aux_sym_link_url_token1] = ACTIONS(362),
    [aux_sym_link_url_token2] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [sym_email] = ACTIONS(362),
    [anon_sym_LBRACK_POUND] = ACTIONS(360),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(360),
    [anon_sym_kbd] = ACTIONS(362),
    [anon_sym_btn] = ACTIONS(362),
    [anon_sym_image] = ACTIONS(362),
    [anon_sym_audio] = ACTIONS(362),
    [anon_sym_video] = ACTIONS(362),
    [anon_sym_icon] = ACTIONS(362),
    [anon_sym_link] = ACTIONS(362),
    [anon_sym_mailto] = ACTIONS(362),
    [anon_sym_menu] = ACTIONS(362),
    [anon_sym_anchor] = ACTIONS(362),
    [anon_sym_xref] = ACTIONS(362),
    [anon_sym_ifdef] = ACTIONS(362),
    [anon_sym_ifndef] = ACTIONS(362),
    [anon_sym_ifeval] = ACTIONS(362),
    [anon_sym_endif] = ACTIONS(362),
    [anon_sym_indexterm2] = ACTIONS(362),
    [anon_sym_indexterm] = ACTIONS(362),
    [anon_sym_a2s] = ACTIONS(362),
    [anon_sym_barcode] = ACTIONS(362),
    [anon_sym_blockdiag] = ACTIONS(362),
    [anon_sym_bpmn] = ACTIONS(362),
    [anon_sym_bytefield] = ACTIONS(362),
    [anon_sym_d2] = ACTIONS(362),
    [anon_sym_dbml] = ACTIONS(362),
    [anon_sym_diagrams] = ACTIONS(362),
    [anon_sym_ditaa] = ACTIONS(362),
    [anon_sym_dpic] = ACTIONS(362),
    [anon_sym_erd] = ACTIONS(362),
    [anon_sym_gnuplot] = ACTIONS(362),
    [anon_sym_graphviz] = ACTIONS(362),
    [anon_sym_lilypond] = ACTIONS(362),
    [anon_sym_meme] = ACTIONS(362),
    [anon_sym_mermaid] = ACTIONS(362),
    [anon_sym_msc] = ACTIONS(362),
    [anon_sym_nomnoml] = ACTIONS(362),
    [anon_sym_pikchr] = ACTIONS(362),
    [anon_sym_plantuml] = ACTIONS(362),
    [anon_sym_shaape] = ACTIONS(362),
    [anon_sym_smcat] = ACTIONS(362),
    [anon_sym_structurizr] = ACTIONS(362),
    [anon_sym_svgbob] = ACTIONS(362),
    [anon_sym_symbolator] = ACTIONS(362),
    [anon_sym_syntrax] = ACTIONS(362),
    [anon_sym_tikz] = ACTIONS(362),
    [anon_sym_umlet] = ACTIONS(362),
    [anon_sym_vega] = ACTIONS(362),
    [anon_sym_wavedrom] = ACTIONS(362),
    [anon_sym_footnote] = ACTIONS(362),
    [anon_sym_footnoteref] = ACTIONS(362),
    [anon_sym_latexmath] = ACTIONS(362),
    [anon_sym_stem] = ACTIONS(362),
    [anon_sym_asciimath] = ACTIONS(362),
    [anon_sym_pass] = ACTIONS(362),
    [sym_replacement] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_f] = ACTIONS(362),
    [sym_super_escape] = ACTIONS(360),
    [sym__character] = ACTIONS(362),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(360),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(360),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(360),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(360),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(360),
    [anon_sym_BSLASH__] = ACTIONS(360),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(360),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(360),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_BSLASHkbd] = ACTIONS(360),
    [anon_sym_BSLASHbtn] = ACTIONS(360),
    [anon_sym_BSLASHimage] = ACTIONS(360),
    [anon_sym_BSLASHaudio] = ACTIONS(360),
    [anon_sym_BSLASHvideo] = ACTIONS(360),
    [anon_sym_BSLASHicon] = ACTIONS(360),
    [anon_sym_BSLASHpass] = ACTIONS(360),
    [anon_sym_BSLASHlink] = ACTIONS(360),
    [anon_sym_BSLASHmailto] = ACTIONS(360),
    [anon_sym_BSLASHmenu] = ACTIONS(360),
    [anon_sym_BSLASHstem] = ACTIONS(360),
    [anon_sym_BSLASHlatexmath] = ACTIONS(360),
    [anon_sym_BSLASHasciimath] = ACTIONS(360),
    [anon_sym_BSLASHfootnote] = ACTIONS(362),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(360),
    [anon_sym_BSLASHanchor] = ACTIONS(360),
    [anon_sym_BSLASHxref] = ACTIONS(360),
    [anon_sym_BSLASHifdef] = ACTIONS(360),
    [anon_sym_BSLASHifndef] = ACTIONS(360),
    [anon_sym_BSLASHifeval] = ACTIONS(360),
    [anon_sym_BSLASHendif] = ACTIONS(360),
    [aux_sym_escaped_sequence_token1] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_POUND] = ACTIONS(362),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_AMP] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_COLON2] = ACTIONS(360),
    [anon_sym_SEMI] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(360),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(360),
    [anon_sym_BSLASH] = ACTIONS(362),
    [anon_sym_CARET] = ACTIONS(362),
    [anon_sym__] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(362),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_PLUS2] = ACTIONS(362),
    [anon_sym_PLUS_PLUS] = ACTIONS(360),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(362),
    [anon_sym_LT_LT] = ACTIONS(360),
    [anon_sym_STAR2] = ACTIONS(362),
    [anon_sym_STAR_STAR] = ACTIONS(360),
    [anon_sym__2] = ACTIONS(362),
    [anon_sym___] = ACTIONS(360),
    [anon_sym_BQUOTE2] = ACTIONS(362),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(360),
    [anon_sym_POUND2] = ACTIONS(362),
    [anon_sym_POUND_POUND] = ACTIONS(360),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(362),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(360),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(364),
    [aux_sym_link_url_token1] = ACTIONS(366),
    [aux_sym_link_url_token2] = ACTIONS(366),
    [anon_sym_DOT] = ACTIONS(366),
    [sym_email] = ACTIONS(366),
    [anon_sym_LBRACK_POUND] = ACTIONS(364),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(364),
    [anon_sym_kbd] = ACTIONS(366),
    [anon_sym_btn] = ACTIONS(366),
    [anon_sym_image] = ACTIONS(366),
    [anon_sym_audio] = ACTIONS(366),
    [anon_sym_video] = ACTIONS(366),
    [anon_sym_icon] = ACTIONS(366),
    [anon_sym_link] = ACTIONS(366),
    [anon_sym_mailto] = ACTIONS(366),
    [anon_sym_menu] = ACTIONS(366),
    [anon_sym_anchor] = ACTIONS(366),
    [anon_sym_xref] = ACTIONS(366),
    [anon_sym_ifdef] = ACTIONS(366),
    [anon_sym_ifndef] = ACTIONS(366),
    [anon_sym_ifeval] = ACTIONS(366),
    [anon_sym_endif] = ACTIONS(366),
    [anon_sym_indexterm2] = ACTIONS(366),
    [anon_sym_indexterm] = ACTIONS(366),
    [anon_sym_a2s] = ACTIONS(366),
    [anon_sym_barcode] = ACTIONS(366),
    [anon_sym_blockdiag] = ACTIONS(366),
    [anon_sym_bpmn] = ACTIONS(366),
    [anon_sym_bytefield] = ACTIONS(366),
    [anon_sym_d2] = ACTIONS(366),
    [anon_sym_dbml] = ACTIONS(366),
    [anon_sym_diagrams] = ACTIONS(366),
    [anon_sym_ditaa] = ACTIONS(366),
    [anon_sym_dpic] = ACTIONS(366),
    [anon_sym_erd] = ACTIONS(366),
    [anon_sym_gnuplot] = ACTIONS(366),
    [anon_sym_graphviz] = ACTIONS(366),
    [anon_sym_lilypond] = ACTIONS(366),
    [anon_sym_meme] = ACTIONS(366),
    [anon_sym_mermaid] = ACTIONS(366),
    [anon_sym_msc] = ACTIONS(366),
    [anon_sym_nomnoml] = ACTIONS(366),
    [anon_sym_pikchr] = ACTIONS(366),
    [anon_sym_plantuml] = ACTIONS(366),
    [anon_sym_shaape] = ACTIONS(366),
    [anon_sym_smcat] = ACTIONS(366),
    [anon_sym_structurizr] = ACTIONS(366),
    [anon_sym_svgbob] = ACTIONS(366),
    [anon_sym_symbolator] = ACTIONS(366),
    [anon_sym_syntrax] = ACTIONS(366),
    [anon_sym_tikz] = ACTIONS(366),
    [anon_sym_umlet] = ACTIONS(366),
    [anon_sym_vega] = ACTIONS(366),
    [anon_sym_wavedrom] = ACTIONS(366),
    [anon_sym_footnote] = ACTIONS(366),
    [anon_sym_footnoteref] = ACTIONS(366),
    [anon_sym_latexmath] = ACTIONS(366),
    [anon_sym_stem] = ACTIONS(366),
    [anon_sym_asciimath] = ACTIONS(366),
    [anon_sym_pass] = ACTIONS(366),
    [sym_replacement] = ACTIONS(366),
    [anon_sym_LBRACE] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(366),
    [anon_sym_f] = ACTIONS(366),
    [sym_super_escape] = ACTIONS(364),
    [sym__character] = ACTIONS(366),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(364),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(364),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(364),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(364),
    [anon_sym_BSLASH__] = ACTIONS(364),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(364),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(364),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_BSLASHkbd] = ACTIONS(364),
    [anon_sym_BSLASHbtn] = ACTIONS(364),
    [anon_sym_BSLASHimage] = ACTIONS(364),
    [anon_sym_BSLASHaudio] = ACTIONS(364),
    [anon_sym_BSLASHvideo] = ACTIONS(364),
    [anon_sym_BSLASHicon] = ACTIONS(364),
    [anon_sym_BSLASHpass] = ACTIONS(364),
    [anon_sym_BSLASHlink] = ACTIONS(364),
    [anon_sym_BSLASHmailto] = ACTIONS(364),
    [anon_sym_BSLASHmenu] = ACTIONS(364),
    [anon_sym_BSLASHstem] = ACTIONS(364),
    [anon_sym_BSLASHlatexmath] = ACTIONS(364),
    [anon_sym_BSLASHasciimath] = ACTIONS(364),
    [anon_sym_BSLASHfootnote] = ACTIONS(366),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(364),
    [anon_sym_BSLASHanchor] = ACTIONS(364),
    [anon_sym_BSLASHxref] = ACTIONS(364),
    [anon_sym_BSLASHifdef] = ACTIONS(364),
    [anon_sym_BSLASHifndef] = ACTIONS(364),
    [anon_sym_BSLASHifeval] = ACTIONS(364),
    [anon_sym_BSLASHendif] = ACTIONS(364),
    [aux_sym_escaped_sequence_token1] = ACTIONS(366),
    [anon_sym_BANG] = ACTIONS(366),
    [anon_sym_POUND] = ACTIONS(366),
    [anon_sym_DOLLAR] = ACTIONS(366),
    [anon_sym_PERCENT] = ACTIONS(366),
    [anon_sym_AMP] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_STAR] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(366),
    [anon_sym_SLASH] = ACTIONS(366),
    [anon_sym_COLON2] = ACTIONS(364),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(366),
    [anon_sym_GT] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(366),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_BSLASH] = ACTIONS(366),
    [anon_sym_CARET] = ACTIONS(366),
    [anon_sym__] = ACTIONS(366),
    [anon_sym_BQUOTE] = ACTIONS(366),
    [anon_sym_PIPE] = ACTIONS(366),
    [anon_sym_TILDE] = ACTIONS(366),
    [anon_sym_PLUS2] = ACTIONS(366),
    [anon_sym_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(366),
    [anon_sym_LT_LT] = ACTIONS(364),
    [anon_sym_STAR2] = ACTIONS(366),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [anon_sym__2] = ACTIONS(366),
    [anon_sym___] = ACTIONS(364),
    [anon_sym_BQUOTE2] = ACTIONS(366),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(364),
    [anon_sym_POUND2] = ACTIONS(366),
    [anon_sym_POUND_POUND] = ACTIONS(364),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(366),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(364),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_RBRACK] = ACTIONS(316),
    [aux_sym_link_url_token1] = ACTIONS(318),
    [aux_sym_link_url_token2] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(318),
    [sym_email] = ACTIONS(318),
    [anon_sym_LBRACK_POUND] = ACTIONS(316),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(316),
    [anon_sym_kbd] = ACTIONS(318),
    [anon_sym_btn] = ACTIONS(318),
    [anon_sym_image] = ACTIONS(318),
    [anon_sym_audio] = ACTIONS(318),
    [anon_sym_video] = ACTIONS(318),
    [anon_sym_icon] = ACTIONS(318),
    [anon_sym_link] = ACTIONS(318),
    [anon_sym_mailto] = ACTIONS(318),
    [anon_sym_menu] = ACTIONS(318),
    [anon_sym_anchor] = ACTIONS(318),
    [anon_sym_xref] = ACTIONS(318),
    [anon_sym_ifdef] = ACTIONS(318),
    [anon_sym_ifndef] = ACTIONS(318),
    [anon_sym_ifeval] = ACTIONS(318),
    [anon_sym_endif] = ACTIONS(318),
    [anon_sym_indexterm2] = ACTIONS(318),
    [anon_sym_indexterm] = ACTIONS(318),
    [anon_sym_a2s] = ACTIONS(318),
    [anon_sym_barcode] = ACTIONS(318),
    [anon_sym_blockdiag] = ACTIONS(318),
    [anon_sym_bpmn] = ACTIONS(318),
    [anon_sym_bytefield] = ACTIONS(318),
    [anon_sym_d2] = ACTIONS(318),
    [anon_sym_dbml] = ACTIONS(318),
    [anon_sym_diagrams] = ACTIONS(318),
    [anon_sym_ditaa] = ACTIONS(318),
    [anon_sym_dpic] = ACTIONS(318),
    [anon_sym_erd] = ACTIONS(318),
    [anon_sym_gnuplot] = ACTIONS(318),
    [anon_sym_graphviz] = ACTIONS(318),
    [anon_sym_lilypond] = ACTIONS(318),
    [anon_sym_meme] = ACTIONS(318),
    [anon_sym_mermaid] = ACTIONS(318),
    [anon_sym_msc] = ACTIONS(318),
    [anon_sym_nomnoml] = ACTIONS(318),
    [anon_sym_pikchr] = ACTIONS(318),
    [anon_sym_plantuml] = ACTIONS(318),
    [anon_sym_shaape] = ACTIONS(318),
    [anon_sym_smcat] = ACTIONS(318),
    [anon_sym_structurizr] = ACTIONS(318),
    [anon_sym_svgbob] = ACTIONS(318),
    [anon_sym_symbolator] = ACTIONS(318),
    [anon_sym_syntrax] = ACTIONS(318),
    [anon_sym_tikz] = ACTIONS(318),
    [anon_sym_umlet] = ACTIONS(318),
    [anon_sym_vega] = ACTIONS(318),
    [anon_sym_wavedrom] = ACTIONS(318),
    [anon_sym_footnote] = ACTIONS(318),
    [anon_sym_footnoteref] = ACTIONS(318),
    [anon_sym_latexmath] = ACTIONS(318),
    [anon_sym_stem] = ACTIONS(318),
    [anon_sym_asciimath] = ACTIONS(318),
    [anon_sym_pass] = ACTIONS(318),
    [sym_replacement] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_f] = ACTIONS(318),
    [sym_super_escape] = ACTIONS(316),
    [sym__character] = ACTIONS(318),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(316),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(316),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(316),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(316),
    [anon_sym_BSLASH__] = ACTIONS(316),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(316),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(316),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(318),
    [anon_sym_BSLASHkbd] = ACTIONS(316),
    [anon_sym_BSLASHbtn] = ACTIONS(316),
    [anon_sym_BSLASHimage] = ACTIONS(316),
    [anon_sym_BSLASHaudio] = ACTIONS(316),
    [anon_sym_BSLASHvideo] = ACTIONS(316),
    [anon_sym_BSLASHicon] = ACTIONS(316),
    [anon_sym_BSLASHpass] = ACTIONS(316),
    [anon_sym_BSLASHlink] = ACTIONS(316),
    [anon_sym_BSLASHmailto] = ACTIONS(316),
    [anon_sym_BSLASHmenu] = ACTIONS(316),
    [anon_sym_BSLASHstem] = ACTIONS(316),
    [anon_sym_BSLASHlatexmath] = ACTIONS(316),
    [anon_sym_BSLASHasciimath] = ACTIONS(316),
    [anon_sym_BSLASHfootnote] = ACTIONS(318),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(316),
    [anon_sym_BSLASHanchor] = ACTIONS(316),
    [anon_sym_BSLASHxref] = ACTIONS(316),
    [anon_sym_BSLASHifdef] = ACTIONS(316),
    [anon_sym_BSLASHifndef] = ACTIONS(316),
    [anon_sym_BSLASHifeval] = ACTIONS(316),
    [anon_sym_BSLASHendif] = ACTIONS(316),
    [aux_sym_escaped_sequence_token1] = ACTIONS(318),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_POUND] = ACTIONS(318),
    [anon_sym_DOLLAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(318),
    [anon_sym_AMP] = ACTIONS(318),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_COLON2] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(316),
    [anon_sym_QMARK] = ACTIONS(318),
    [anon_sym_AT] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(318),
    [anon_sym_CARET] = ACTIONS(318),
    [anon_sym__] = ACTIONS(318),
    [anon_sym_BQUOTE] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_PLUS2] = ACTIONS(318),
    [anon_sym_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(318),
    [anon_sym_LT_LT] = ACTIONS(316),
    [anon_sym_STAR2] = ACTIONS(318),
    [anon_sym_STAR_STAR] = ACTIONS(316),
    [anon_sym__2] = ACTIONS(318),
    [anon_sym___] = ACTIONS(316),
    [anon_sym_BQUOTE2] = ACTIONS(318),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(316),
    [anon_sym_POUND2] = ACTIONS(318),
    [anon_sym_POUND_POUND] = ACTIONS(316),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(318),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(316),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(370),
    [aux_sym_link_url_token1] = ACTIONS(372),
    [aux_sym_link_url_token2] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_email] = ACTIONS(372),
    [anon_sym_LBRACK_POUND] = ACTIONS(370),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(370),
    [anon_sym_kbd] = ACTIONS(372),
    [anon_sym_btn] = ACTIONS(372),
    [anon_sym_image] = ACTIONS(372),
    [anon_sym_audio] = ACTIONS(372),
    [anon_sym_video] = ACTIONS(372),
    [anon_sym_icon] = ACTIONS(372),
    [anon_sym_link] = ACTIONS(372),
    [anon_sym_mailto] = ACTIONS(372),
    [anon_sym_menu] = ACTIONS(372),
    [anon_sym_anchor] = ACTIONS(372),
    [anon_sym_xref] = ACTIONS(372),
    [anon_sym_ifdef] = ACTIONS(372),
    [anon_sym_ifndef] = ACTIONS(372),
    [anon_sym_ifeval] = ACTIONS(372),
    [anon_sym_endif] = ACTIONS(372),
    [anon_sym_indexterm2] = ACTIONS(372),
    [anon_sym_indexterm] = ACTIONS(372),
    [anon_sym_a2s] = ACTIONS(372),
    [anon_sym_barcode] = ACTIONS(372),
    [anon_sym_blockdiag] = ACTIONS(372),
    [anon_sym_bpmn] = ACTIONS(372),
    [anon_sym_bytefield] = ACTIONS(372),
    [anon_sym_d2] = ACTIONS(372),
    [anon_sym_dbml] = ACTIONS(372),
    [anon_sym_diagrams] = ACTIONS(372),
    [anon_sym_ditaa] = ACTIONS(372),
    [anon_sym_dpic] = ACTIONS(372),
    [anon_sym_erd] = ACTIONS(372),
    [anon_sym_gnuplot] = ACTIONS(372),
    [anon_sym_graphviz] = ACTIONS(372),
    [anon_sym_lilypond] = ACTIONS(372),
    [anon_sym_meme] = ACTIONS(372),
    [anon_sym_mermaid] = ACTIONS(372),
    [anon_sym_msc] = ACTIONS(372),
    [anon_sym_nomnoml] = ACTIONS(372),
    [anon_sym_pikchr] = ACTIONS(372),
    [anon_sym_plantuml] = ACTIONS(372),
    [anon_sym_shaape] = ACTIONS(372),
    [anon_sym_smcat] = ACTIONS(372),
    [anon_sym_structurizr] = ACTIONS(372),
    [anon_sym_svgbob] = ACTIONS(372),
    [anon_sym_symbolator] = ACTIONS(372),
    [anon_sym_syntrax] = ACTIONS(372),
    [anon_sym_tikz] = ACTIONS(372),
    [anon_sym_umlet] = ACTIONS(372),
    [anon_sym_vega] = ACTIONS(372),
    [anon_sym_wavedrom] = ACTIONS(372),
    [anon_sym_footnote] = ACTIONS(372),
    [anon_sym_footnoteref] = ACTIONS(372),
    [anon_sym_latexmath] = ACTIONS(372),
    [anon_sym_stem] = ACTIONS(372),
    [anon_sym_asciimath] = ACTIONS(372),
    [anon_sym_pass] = ACTIONS(372),
    [sym_replacement] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_f] = ACTIONS(372),
    [sym_super_escape] = ACTIONS(370),
    [sym__character] = ACTIONS(372),
    [anon_sym_BSLASH_PLUS_PLUS_PLUS] = ACTIONS(370),
    [anon_sym_BSLASH_BQUOTE_BQUOTE] = ACTIONS(370),
    [anon_sym_BSLASH_STAR_STAR] = ACTIONS(370),
    [anon_sym_BSLASH_DOLLAR_DOLLAR] = ACTIONS(370),
    [anon_sym_BSLASH_POUND_POUND] = ACTIONS(370),
    [anon_sym_BSLASH__] = ACTIONS(370),
    [anon_sym_BSLASH_LT_LT] = ACTIONS(370),
    [anon_sym_BSLASH_LBRACK_LBRACK] = ACTIONS(370),
    [anon_sym_BSLASH_PLUS_PLUS] = ACTIONS(372),
    [anon_sym_BSLASHkbd] = ACTIONS(370),
    [anon_sym_BSLASHbtn] = ACTIONS(370),
    [anon_sym_BSLASHimage] = ACTIONS(370),
    [anon_sym_BSLASHaudio] = ACTIONS(370),
    [anon_sym_BSLASHvideo] = ACTIONS(370),
    [anon_sym_BSLASHicon] = ACTIONS(370),
    [anon_sym_BSLASHpass] = ACTIONS(370),
    [anon_sym_BSLASHlink] = ACTIONS(370),
    [anon_sym_BSLASHmailto] = ACTIONS(370),
    [anon_sym_BSLASHmenu] = ACTIONS(370),
    [anon_sym_BSLASHstem] = ACTIONS(370),
    [anon_sym_BSLASHlatexmath] = ACTIONS(370),
    [anon_sym_BSLASHasciimath] = ACTIONS(370),
    [anon_sym_BSLASHfootnote] = ACTIONS(372),
    [anon_sym_BSLASHfootnoteref] = ACTIONS(370),
    [anon_sym_BSLASHanchor] = ACTIONS(370),
    [anon_sym_BSLASHxref] = ACTIONS(370),
    [anon_sym_BSLASHifdef] = ACTIONS(370),
    [anon_sym_BSLASHifndef] = ACTIONS(370),
    [anon_sym_BSLASHifeval] = ACTIONS(370),
    [anon_sym_BSLASHendif] = ACTIONS(370),
    [aux_sym_escaped_sequence_token1] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_POUND] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(372),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_COLON2] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(370),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(370),
    [anon_sym_BSLASH] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [anon_sym_BQUOTE] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
    [anon_sym_PLUS2] = ACTIONS(372),
    [anon_sym_PLUS_PLUS] = ACTIONS(370),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(372),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_STAR2] = ACTIONS(372),
    [anon_sym_STAR_STAR] = ACTIONS(370),
    [anon_sym__2] = ACTIONS(372),
    [anon_sym___] = ACTIONS(370),
    [anon_sym_BQUOTE2] = ACTIONS(372),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(370),
    [anon_sym_POUND2] = ACTIONS(372),
    [anon_sym_POUND_POUND] = ACTIONS(370),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(372),
    [anon_sym_LPAREN_LPAREN_LPAREN] = ACTIONS(370),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    ACTIONS(382), 1,
      sym_email,
    STATE(76), 1,
      sym_uri,
    STATE(77), 1,
      sym_link_url,
    STATE(79), 1,
      sym_labled_uri,
    STATE(254), 1,
      sym_attr,
    ACTIONS(380), 2,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
    ACTIONS(378), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
    STATE(62), 3,
      sym_autolink,
      sym_escaped_sequence,
      aux_sym_attr_repeat1,
    ACTIONS(384), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [69] = 11,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      sym_email,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_uri,
    STATE(77), 1,
      sym_link_url,
    STATE(79), 1,
      sym_labled_uri,
    STATE(265), 1,
      sym_attr,
    ACTIONS(380), 2,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
    ACTIONS(378), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
    STATE(62), 3,
      sym_autolink,
      sym_escaped_sequence,
      aux_sym_attr_repeat1,
    ACTIONS(384), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [138] = 11,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      sym_email,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_uri,
    STATE(77), 1,
      sym_link_url,
    STATE(79), 1,
      sym_labled_uri,
    STATE(271), 1,
      sym_attr,
    ACTIONS(380), 2,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
    ACTIONS(378), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
    STATE(62), 3,
      sym_autolink,
      sym_escaped_sequence,
      aux_sym_attr_repeat1,
    ACTIONS(384), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [207] = 11,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      sym_email,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_uri,
    STATE(77), 1,
      sym_link_url,
    STATE(79), 1,
      sym_labled_uri,
    STATE(256), 1,
      sym_attr,
    ACTIONS(380), 2,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
    ACTIONS(378), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
    STATE(62), 3,
      sym_autolink,
      sym_escaped_sequence,
      aux_sym_attr_repeat1,
    ACTIONS(384), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [276] = 10,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      sym_email,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_uri,
    STATE(77), 1,
      sym_link_url,
    STATE(79), 1,
      sym_labled_uri,
    ACTIONS(380), 2,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
    ACTIONS(394), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
    STATE(63), 3,
      sym_autolink,
      sym_escaped_sequence,
      aux_sym_attr_repeat1,
    ACTIONS(384), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [342] = 10,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(407), 1,
      sym_email,
    STATE(76), 1,
      sym_uri,
    STATE(77), 1,
      sym_link_url,
    STATE(79), 1,
      sym_labled_uri,
    ACTIONS(404), 2,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
    ACTIONS(401), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
    STATE(63), 3,
      sym_autolink,
      sym_escaped_sequence,
      aux_sym_attr_repeat1,
    ACTIONS(410), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [408] = 9,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_pass,
    ACTIONS(421), 1,
      anon_sym_PLUS2,
    ACTIONS(423), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(425), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(257), 1,
      sym_target,
    ACTIONS(415), 3,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      sym_replacement,
    STATE(70), 4,
      sym_macro_passthrough,
      sym_escaped_sequence,
      sym_passthrough,
      aux_sym_target_repeat1,
    ACTIONS(419), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [471] = 9,
    ACTIONS(417), 1,
      anon_sym_pass,
    ACTIONS(421), 1,
      anon_sym_PLUS2,
    ACTIONS(423), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(425), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    STATE(272), 1,
      sym_target,
    ACTIONS(415), 3,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      sym_replacement,
    STATE(70), 4,
      sym_macro_passthrough,
      sym_escaped_sequence,
      sym_passthrough,
      aux_sym_target_repeat1,
    ACTIONS(419), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [534] = 9,
    ACTIONS(417), 1,
      anon_sym_pass,
    ACTIONS(421), 1,
      anon_sym_PLUS2,
    ACTIONS(423), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(425), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    STATE(258), 1,
      sym_target,
    ACTIONS(415), 3,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      sym_replacement,
    STATE(70), 4,
      sym_macro_passthrough,
      sym_escaped_sequence,
      sym_passthrough,
      aux_sym_target_repeat1,
    ACTIONS(419), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [597] = 9,
    ACTIONS(417), 1,
      anon_sym_pass,
    ACTIONS(421), 1,
      anon_sym_PLUS2,
    ACTIONS(423), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(425), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(431), 1,
      anon_sym_LBRACK,
    STATE(268), 1,
      sym_target,
    ACTIONS(415), 3,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      sym_replacement,
    STATE(70), 4,
      sym_macro_passthrough,
      sym_escaped_sequence,
      sym_passthrough,
      aux_sym_target_repeat1,
    ACTIONS(419), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [660] = 9,
    ACTIONS(417), 1,
      anon_sym_pass,
    ACTIONS(421), 1,
      anon_sym_PLUS2,
    ACTIONS(423), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(425), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(433), 1,
      anon_sym_LBRACK,
    STATE(281), 1,
      sym_target,
    ACTIONS(415), 3,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      sym_replacement,
    STATE(70), 4,
      sym_macro_passthrough,
      sym_escaped_sequence,
      sym_passthrough,
      aux_sym_target_repeat1,
    ACTIONS(419), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [723] = 8,
    ACTIONS(435), 1,
      anon_sym_LBRACK,
    ACTIONS(440), 1,
      anon_sym_pass,
    ACTIONS(446), 1,
      anon_sym_PLUS2,
    ACTIONS(449), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(452), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(437), 3,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      sym_replacement,
    STATE(69), 4,
      sym_macro_passthrough,
      sym_escaped_sequence,
      sym_passthrough,
      aux_sym_target_repeat1,
    ACTIONS(443), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [783] = 8,
    ACTIONS(417), 1,
      anon_sym_pass,
    ACTIONS(421), 1,
      anon_sym_PLUS2,
    ACTIONS(423), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(425), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 3,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      sym_replacement,
    STATE(69), 4,
      sym_macro_passthrough,
      sym_escaped_sequence,
      sym_passthrough,
      aux_sym_target_repeat1,
    ACTIONS(419), 31,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [843] = 6,
    ACTIONS(165), 1,
      sym_email,
    STATE(250), 1,
      sym_link_url,
    STATE(251), 1,
      sym_uri,
    STATE(259), 1,
      sym_labled_uri,
    ACTIONS(163), 2,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
    ACTIONS(459), 36,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [898] = 3,
    ACTIONS(461), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(203), 40,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [947] = 3,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(191), 40,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [996] = 3,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(199), 40,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1045] = 1,
    ACTIONS(203), 41,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      anon_sym_DOT,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1089] = 2,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 39,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1134] = 1,
    ACTIONS(222), 40,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1177] = 1,
    ACTIONS(218), 39,
      anon_sym_LBRACK,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_pass,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
      anon_sym_PLUS2,
      anon_sym_PLUS_PLUS,
      anon_sym_DOLLAR_DOLLAR,
  [1219] = 1,
    ACTIONS(318), 39,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1261] = 1,
    ACTIONS(372), 39,
      anon_sym_LBRACK,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_pass,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
      anon_sym_PLUS2,
      anon_sym_PLUS_PLUS,
      anon_sym_DOLLAR_DOLLAR,
  [1303] = 1,
    ACTIONS(314), 39,
      anon_sym_LBRACK,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_pass,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
      anon_sym_PLUS2,
      anon_sym_PLUS_PLUS,
      anon_sym_DOLLAR_DOLLAR,
  [1345] = 1,
    ACTIONS(254), 39,
      anon_sym_LBRACK,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_pass,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
      anon_sym_PLUS2,
      anon_sym_PLUS_PLUS,
      anon_sym_DOLLAR_DOLLAR,
  [1387] = 1,
    ACTIONS(210), 39,
      anon_sym_LBRACK,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_pass,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
      anon_sym_PLUS2,
      anon_sym_PLUS_PLUS,
      anon_sym_DOLLAR_DOLLAR,
  [1429] = 1,
    ACTIONS(218), 39,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1471] = 1,
    ACTIONS(294), 39,
      anon_sym_LBRACK,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_pass,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
      anon_sym_PLUS2,
      anon_sym_PLUS_PLUS,
      anon_sym_DOLLAR_DOLLAR,
  [1513] = 1,
    ACTIONS(286), 39,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1555] = 1,
    ACTIONS(350), 39,
      anon_sym_LBRACK,
      aux_sym_target_token1,
      anon_sym_BSLASH_LBRACK,
      anon_sym_pass,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
      anon_sym_PLUS2,
      anon_sym_PLUS_PLUS,
      anon_sym_DOLLAR_DOLLAR,
  [1597] = 1,
    ACTIONS(242), 39,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1639] = 1,
    ACTIONS(298), 39,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      aux_sym_link_url_token1,
      aux_sym_link_url_token2,
      sym_email,
      sym_replacement,
      anon_sym_BSLASH_PLUS_PLUS_PLUS,
      anon_sym_BSLASH_BQUOTE_BQUOTE,
      anon_sym_BSLASH_STAR_STAR,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      anon_sym_BSLASH_POUND_POUND,
      anon_sym_BSLASH__,
      anon_sym_BSLASH_LT_LT,
      anon_sym_BSLASH_LBRACK_LBRACK,
      anon_sym_BSLASH_PLUS_PLUS,
      anon_sym_BSLASHkbd,
      anon_sym_BSLASHbtn,
      anon_sym_BSLASHimage,
      anon_sym_BSLASHaudio,
      anon_sym_BSLASHvideo,
      anon_sym_BSLASHicon,
      anon_sym_BSLASHpass,
      anon_sym_BSLASHlink,
      anon_sym_BSLASHmailto,
      anon_sym_BSLASHmenu,
      anon_sym_BSLASHstem,
      anon_sym_BSLASHlatexmath,
      anon_sym_BSLASHasciimath,
      anon_sym_BSLASHfootnote,
      anon_sym_BSLASHfootnoteref,
      anon_sym_BSLASHanchor,
      anon_sym_BSLASHxref,
      anon_sym_BSLASHifdef,
      anon_sym_BSLASHifndef,
      anon_sym_BSLASHifeval,
      anon_sym_BSLASHendif,
      aux_sym_escaped_sequence_token1,
  [1681] = 9,
    ACTIONS(468), 1,
      anon_sym_STAR,
    ACTIONS(472), 1,
      anon_sym__2,
    ACTIONS(474), 1,
      anon_sym___,
    ACTIONS(476), 1,
      anon_sym_BQUOTE2,
    ACTIONS(478), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(480), 1,
      anon_sym_POUND2,
    ACTIONS(482), 1,
      anon_sym_POUND_POUND,
    ACTIONS(470), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(95), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1713] = 9,
    ACTIONS(484), 1,
      anon_sym_STAR2,
    ACTIONS(486), 1,
      anon_sym_STAR_STAR,
    ACTIONS(490), 1,
      anon_sym___2,
    ACTIONS(492), 1,
      anon_sym_BQUOTE2,
    ACTIONS(494), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(496), 1,
      anon_sym_POUND2,
    ACTIONS(498), 1,
      anon_sym_POUND_POUND,
    ACTIONS(488), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(93), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [1745] = 9,
    ACTIONS(503), 1,
      anon_sym_STAR_STAR2,
    ACTIONS(505), 1,
      anon_sym__2,
    ACTIONS(508), 1,
      anon_sym___,
    ACTIONS(511), 1,
      anon_sym_BQUOTE2,
    ACTIONS(514), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(517), 1,
      anon_sym_POUND2,
    ACTIONS(520), 1,
      anon_sym_POUND_POUND,
    ACTIONS(500), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(92), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1777] = 9,
    ACTIONS(523), 1,
      anon_sym_STAR2,
    ACTIONS(526), 1,
      anon_sym_STAR_STAR,
    ACTIONS(532), 1,
      anon_sym___2,
    ACTIONS(534), 1,
      anon_sym_BQUOTE2,
    ACTIONS(537), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(540), 1,
      anon_sym_POUND2,
    ACTIONS(543), 1,
      anon_sym_POUND_POUND,
    ACTIONS(529), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(93), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [1809] = 9,
    ACTIONS(472), 1,
      anon_sym__2,
    ACTIONS(474), 1,
      anon_sym___,
    ACTIONS(476), 1,
      anon_sym_BQUOTE2,
    ACTIONS(478), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(480), 1,
      anon_sym_POUND2,
    ACTIONS(482), 1,
      anon_sym_POUND_POUND,
    ACTIONS(546), 1,
      anon_sym_STAR,
    ACTIONS(470), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(95), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1841] = 9,
    ACTIONS(503), 1,
      anon_sym_STAR,
    ACTIONS(551), 1,
      anon_sym__2,
    ACTIONS(554), 1,
      anon_sym___,
    ACTIONS(557), 1,
      anon_sym_BQUOTE2,
    ACTIONS(560), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(563), 1,
      anon_sym_POUND2,
    ACTIONS(566), 1,
      anon_sym_POUND_POUND,
    ACTIONS(548), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(95), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1873] = 9,
    ACTIONS(546), 1,
      anon_sym_STAR_STAR2,
    ACTIONS(571), 1,
      anon_sym__2,
    ACTIONS(573), 1,
      anon_sym___,
    ACTIONS(575), 1,
      anon_sym_BQUOTE2,
    ACTIONS(577), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(579), 1,
      anon_sym_POUND2,
    ACTIONS(581), 1,
      anon_sym_POUND_POUND,
    ACTIONS(569), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(92), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1905] = 9,
    ACTIONS(532), 1,
      anon_sym__,
    ACTIONS(583), 1,
      anon_sym_STAR2,
    ACTIONS(586), 1,
      anon_sym_STAR_STAR,
    ACTIONS(592), 1,
      anon_sym_BQUOTE2,
    ACTIONS(595), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(598), 1,
      anon_sym_POUND2,
    ACTIONS(601), 1,
      anon_sym_POUND_POUND,
    ACTIONS(589), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(97), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [1937] = 9,
    ACTIONS(571), 1,
      anon_sym__2,
    ACTIONS(573), 1,
      anon_sym___,
    ACTIONS(575), 1,
      anon_sym_BQUOTE2,
    ACTIONS(577), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(579), 1,
      anon_sym_POUND2,
    ACTIONS(581), 1,
      anon_sym_POUND_POUND,
    ACTIONS(606), 1,
      anon_sym_STAR_STAR2,
    ACTIONS(604), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(96), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [1969] = 9,
    ACTIONS(608), 1,
      anon_sym__,
    ACTIONS(610), 1,
      anon_sym_STAR2,
    ACTIONS(612), 1,
      anon_sym_STAR_STAR,
    ACTIONS(616), 1,
      anon_sym_BQUOTE2,
    ACTIONS(618), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_POUND2,
    ACTIONS(622), 1,
      anon_sym_POUND_POUND,
    ACTIONS(614), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(100), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2001] = 9,
    ACTIONS(610), 1,
      anon_sym_STAR2,
    ACTIONS(612), 1,
      anon_sym_STAR_STAR,
    ACTIONS(616), 1,
      anon_sym_BQUOTE2,
    ACTIONS(618), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_POUND2,
    ACTIONS(622), 1,
      anon_sym_POUND_POUND,
    ACTIONS(624), 1,
      anon_sym__,
    ACTIONS(626), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(97), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2033] = 9,
    ACTIONS(484), 1,
      anon_sym_STAR2,
    ACTIONS(486), 1,
      anon_sym_STAR_STAR,
    ACTIONS(492), 1,
      anon_sym_BQUOTE2,
    ACTIONS(494), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(496), 1,
      anon_sym_POUND2,
    ACTIONS(498), 1,
      anon_sym_POUND_POUND,
    ACTIONS(608), 1,
      anon_sym___2,
    ACTIONS(628), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(102), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2065] = 9,
    ACTIONS(484), 1,
      anon_sym_STAR2,
    ACTIONS(486), 1,
      anon_sym_STAR_STAR,
    ACTIONS(492), 1,
      anon_sym_BQUOTE2,
    ACTIONS(494), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(496), 1,
      anon_sym_POUND2,
    ACTIONS(498), 1,
      anon_sym_POUND_POUND,
    ACTIONS(624), 1,
      anon_sym___2,
    ACTIONS(488), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(93), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2097] = 9,
    ACTIONS(472), 1,
      anon_sym__2,
    ACTIONS(474), 1,
      anon_sym___,
    ACTIONS(476), 1,
      anon_sym_BQUOTE2,
    ACTIONS(478), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(480), 1,
      anon_sym_POUND2,
    ACTIONS(482), 1,
      anon_sym_POUND_POUND,
    ACTIONS(606), 1,
      anon_sym_STAR,
    ACTIONS(630), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(94), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [2129] = 9,
    ACTIONS(472), 1,
      anon_sym__2,
    ACTIONS(474), 1,
      anon_sym___,
    ACTIONS(476), 1,
      anon_sym_BQUOTE2,
    ACTIONS(478), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(480), 1,
      anon_sym_POUND2,
    ACTIONS(482), 1,
      anon_sym_POUND_POUND,
    ACTIONS(632), 1,
      anon_sym_STAR,
    ACTIONS(634), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(90), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [2161] = 9,
    ACTIONS(571), 1,
      anon_sym__2,
    ACTIONS(573), 1,
      anon_sym___,
    ACTIONS(575), 1,
      anon_sym_BQUOTE2,
    ACTIONS(577), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(579), 1,
      anon_sym_POUND2,
    ACTIONS(581), 1,
      anon_sym_POUND_POUND,
    ACTIONS(632), 1,
      anon_sym_STAR_STAR2,
    ACTIONS(636), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(108), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [2193] = 9,
    ACTIONS(610), 1,
      anon_sym_STAR2,
    ACTIONS(612), 1,
      anon_sym_STAR_STAR,
    ACTIONS(616), 1,
      anon_sym_BQUOTE2,
    ACTIONS(618), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_POUND2,
    ACTIONS(622), 1,
      anon_sym_POUND_POUND,
    ACTIONS(638), 1,
      anon_sym__,
    ACTIONS(640), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(109), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2225] = 9,
    ACTIONS(484), 1,
      anon_sym_STAR2,
    ACTIONS(486), 1,
      anon_sym_STAR_STAR,
    ACTIONS(492), 1,
      anon_sym_BQUOTE2,
    ACTIONS(494), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(496), 1,
      anon_sym_POUND2,
    ACTIONS(498), 1,
      anon_sym_POUND_POUND,
    ACTIONS(638), 1,
      anon_sym___2,
    ACTIONS(642), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(110), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2257] = 9,
    ACTIONS(468), 1,
      anon_sym_STAR_STAR2,
    ACTIONS(571), 1,
      anon_sym__2,
    ACTIONS(573), 1,
      anon_sym___,
    ACTIONS(575), 1,
      anon_sym_BQUOTE2,
    ACTIONS(577), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(579), 1,
      anon_sym_POUND2,
    ACTIONS(581), 1,
      anon_sym_POUND_POUND,
    ACTIONS(569), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(92), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [2289] = 9,
    ACTIONS(610), 1,
      anon_sym_STAR2,
    ACTIONS(612), 1,
      anon_sym_STAR_STAR,
    ACTIONS(616), 1,
      anon_sym_BQUOTE2,
    ACTIONS(618), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_POUND2,
    ACTIONS(622), 1,
      anon_sym_POUND_POUND,
    ACTIONS(644), 1,
      anon_sym__,
    ACTIONS(626), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(97), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2321] = 9,
    ACTIONS(484), 1,
      anon_sym_STAR2,
    ACTIONS(486), 1,
      anon_sym_STAR_STAR,
    ACTIONS(492), 1,
      anon_sym_BQUOTE2,
    ACTIONS(494), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(496), 1,
      anon_sym_POUND2,
    ACTIONS(498), 1,
      anon_sym_POUND_POUND,
    ACTIONS(644), 1,
      anon_sym___2,
    ACTIONS(488), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(93), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2353] = 9,
    ACTIONS(472), 1,
      anon_sym__2,
    ACTIONS(474), 1,
      anon_sym___,
    ACTIONS(476), 1,
      anon_sym_BQUOTE2,
    ACTIONS(478), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(480), 1,
      anon_sym_POUND2,
    ACTIONS(482), 1,
      anon_sym_POUND_POUND,
    ACTIONS(646), 1,
      anon_sym_STAR,
    ACTIONS(648), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(115), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [2385] = 9,
    ACTIONS(571), 1,
      anon_sym__2,
    ACTIONS(573), 1,
      anon_sym___,
    ACTIONS(575), 1,
      anon_sym_BQUOTE2,
    ACTIONS(577), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(579), 1,
      anon_sym_POUND2,
    ACTIONS(581), 1,
      anon_sym_POUND_POUND,
    ACTIONS(646), 1,
      anon_sym_STAR_STAR2,
    ACTIONS(650), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(116), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [2417] = 9,
    ACTIONS(610), 1,
      anon_sym_STAR2,
    ACTIONS(612), 1,
      anon_sym_STAR_STAR,
    ACTIONS(616), 1,
      anon_sym_BQUOTE2,
    ACTIONS(618), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_POUND2,
    ACTIONS(622), 1,
      anon_sym_POUND_POUND,
    ACTIONS(652), 1,
      anon_sym__,
    ACTIONS(654), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(117), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2449] = 9,
    ACTIONS(484), 1,
      anon_sym_STAR2,
    ACTIONS(486), 1,
      anon_sym_STAR_STAR,
    ACTIONS(492), 1,
      anon_sym_BQUOTE2,
    ACTIONS(494), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(496), 1,
      anon_sym_POUND2,
    ACTIONS(498), 1,
      anon_sym_POUND_POUND,
    ACTIONS(652), 1,
      anon_sym___2,
    ACTIONS(656), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(91), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2481] = 9,
    ACTIONS(472), 1,
      anon_sym__2,
    ACTIONS(474), 1,
      anon_sym___,
    ACTIONS(476), 1,
      anon_sym_BQUOTE2,
    ACTIONS(478), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(480), 1,
      anon_sym_POUND2,
    ACTIONS(482), 1,
      anon_sym_POUND_POUND,
    ACTIONS(658), 1,
      anon_sym_STAR,
    ACTIONS(470), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(95), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [2513] = 9,
    ACTIONS(571), 1,
      anon_sym__2,
    ACTIONS(573), 1,
      anon_sym___,
    ACTIONS(575), 1,
      anon_sym_BQUOTE2,
    ACTIONS(577), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(579), 1,
      anon_sym_POUND2,
    ACTIONS(581), 1,
      anon_sym_POUND_POUND,
    ACTIONS(658), 1,
      anon_sym_STAR_STAR2,
    ACTIONS(569), 2,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
    STATE(92), 4,
      sym_ltalic,
      sym_monospace,
      sym_highlight,
      aux_sym_emphasis_repeat1,
  [2545] = 9,
    ACTIONS(490), 1,
      anon_sym__,
    ACTIONS(610), 1,
      anon_sym_STAR2,
    ACTIONS(612), 1,
      anon_sym_STAR_STAR,
    ACTIONS(616), 1,
      anon_sym_BQUOTE2,
    ACTIONS(618), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(620), 1,
      anon_sym_POUND2,
    ACTIONS(622), 1,
      anon_sym_POUND_POUND,
    ACTIONS(626), 2,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
    STATE(97), 4,
      sym_emphasis,
      sym_monospace,
      sym_highlight,
      aux_sym_ltalic_repeat1,
  [2577] = 1,
    ACTIONS(230), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2589] = 1,
    ACTIONS(234), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2601] = 1,
    ACTIONS(274), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2613] = 1,
    ACTIONS(234), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym___2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2625] = 1,
    ACTIONS(270), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2637] = 1,
    ACTIONS(270), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym___2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2649] = 1,
    ACTIONS(234), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2661] = 1,
    ACTIONS(238), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2673] = 1,
    ACTIONS(274), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2685] = 1,
    ACTIONS(274), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym___2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2697] = 1,
    ACTIONS(238), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym___2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2709] = 1,
    ACTIONS(262), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2721] = 1,
    ACTIONS(238), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2733] = 1,
    ACTIONS(266), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2745] = 1,
    ACTIONS(262), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym___2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2757] = 1,
    ACTIONS(270), 9,
      anon_sym_STAR,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2769] = 1,
    ACTIONS(230), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym_STAR_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2781] = 1,
    ACTIONS(226), 9,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym___2,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2793] = 1,
    ACTIONS(266), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym_STAR_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2805] = 1,
    ACTIONS(270), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym_STAR_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2817] = 1,
    ACTIONS(234), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym_STAR_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2829] = 1,
    ACTIONS(238), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym_STAR_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2841] = 1,
    ACTIONS(274), 9,
      aux_sym_emphasis_token1,
      anon_sym_BSLASH_STAR,
      anon_sym_STAR_STAR2,
      anon_sym__2,
      anon_sym___,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2853] = 1,
    ACTIONS(226), 9,
      anon_sym__,
      anon_sym_STAR2,
      anon_sym_STAR_STAR,
      aux_sym_ltalic_token1,
      anon_sym_BSLASH_,
      anon_sym_BQUOTE2,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_POUND2,
      anon_sym_POUND_POUND,
  [2865] = 3,
    STATE(142), 1,
      aux_sym_term_repeat1,
    ACTIONS(660), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN_RPAREN_RPAREN,
    ACTIONS(662), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [2878] = 4,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_GT_GT,
    STATE(145), 1,
      aux_sym_xref_repeat1,
    ACTIONS(667), 3,
      aux_sym_xref_token1,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_GT,
  [2893] = 4,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_uri_label_repeat1,
    STATE(276), 1,
      sym_uri_label,
    ACTIONS(673), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
  [2908] = 3,
    STATE(145), 1,
      aux_sym_xref_repeat1,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_GT_GT,
    ACTIONS(677), 3,
      aux_sym_xref_token1,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_GT,
  [2921] = 3,
    STATE(146), 1,
      aux_sym_term_repeat1,
    ACTIONS(660), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(680), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [2934] = 3,
    STATE(146), 1,
      aux_sym_term_repeat1,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(685), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [2947] = 3,
    STATE(142), 1,
      aux_sym_term_repeat1,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN_RPAREN_RPAREN,
    ACTIONS(687), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [2960] = 4,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_uri_label_repeat1,
    STATE(277), 1,
      sym_uri_label,
    ACTIONS(673), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
  [2975] = 4,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_uri_label_repeat1,
    STATE(262), 1,
      sym_uri_label,
    ACTIONS(673), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
  [2990] = 3,
    STATE(148), 1,
      aux_sym_term_repeat1,
    STATE(249), 1,
      sym_term,
    ACTIONS(693), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [3002] = 3,
    ACTIONS(697), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(160), 1,
      aux_sym_passthrough_repeat2,
    ACTIONS(695), 3,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      aux_sym_passthrough_token2,
      anon_sym_BSLASH_DOLLAR,
  [3014] = 3,
    STATE(147), 1,
      aux_sym_term_repeat1,
    STATE(247), 1,
      sym_term,
    ACTIONS(699), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [3026] = 3,
    STATE(147), 1,
      aux_sym_term_repeat1,
    STATE(266), 1,
      sym_term,
    ACTIONS(699), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [3038] = 3,
    STATE(148), 1,
      aux_sym_term_repeat1,
    STATE(248), 1,
      sym_term,
    ACTIONS(693), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [3050] = 3,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      aux_sym_uri_label_repeat1,
    ACTIONS(703), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
  [3062] = 3,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      aux_sym_uri_label_repeat1,
    ACTIONS(707), 3,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
      sym_replacement,
  [3074] = 3,
    ACTIONS(710), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(160), 1,
      aux_sym_passthrough_repeat2,
    ACTIONS(695), 3,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      aux_sym_passthrough_token2,
      anon_sym_BSLASH_DOLLAR,
  [3086] = 3,
    STATE(148), 1,
      aux_sym_term_repeat1,
    STATE(255), 1,
      sym_term,
    ACTIONS(693), 3,
      anon_sym_BSLASH_COMMA,
      aux_sym_term_token1,
      anon_sym_BSLASH_RPAREN,
  [3098] = 3,
    ACTIONS(715), 1,
      anon_sym_DOLLAR_DOLLAR,
    STATE(160), 1,
      aux_sym_passthrough_repeat2,
    ACTIONS(712), 3,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      aux_sym_passthrough_token2,
      anon_sym_BSLASH_DOLLAR,
  [3110] = 1,
    ACTIONS(717), 5,
      anon_sym_COMMA,
      aux_sym_xref_token1,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_GT,
      anon_sym_GT_GT,
  [3118] = 3,
    ACTIONS(721), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(237), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(719), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3129] = 3,
    ACTIONS(725), 1,
      anon_sym_PLUS_PLUS2,
    STATE(223), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(723), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3140] = 2,
    STATE(152), 1,
      aux_sym_passthrough_repeat2,
    ACTIONS(727), 3,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      aux_sym_passthrough_token2,
      anon_sym_BSLASH_DOLLAR,
  [3149] = 3,
    ACTIONS(729), 1,
      anon_sym_POUND,
    STATE(176), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(731), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3160] = 3,
    ACTIONS(736), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(166), 1,
      aux_sym_id_repeat1,
    ACTIONS(733), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3171] = 2,
    STATE(143), 1,
      aux_sym_xref_repeat1,
    ACTIONS(667), 3,
      aux_sym_xref_token1,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_GT,
  [3180] = 3,
    ACTIONS(741), 1,
      anon_sym_PLUS_PLUS2,
    STATE(168), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(738), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3191] = 3,
    ACTIONS(743), 1,
      anon_sym_BQUOTE,
    STATE(202), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(745), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3202] = 3,
    ACTIONS(725), 1,
      anon_sym_PLUS,
    STATE(212), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(747), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3213] = 3,
    ACTIONS(743), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(172), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(749), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3224] = 3,
    ACTIONS(754), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(172), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(751), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3235] = 3,
    ACTIONS(759), 1,
      anon_sym_POUND_POUND2,
    STATE(173), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(756), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3246] = 3,
    ACTIONS(761), 1,
      anon_sym_DOT,
    STATE(174), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(201), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [3257] = 3,
    ACTIONS(764), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3268] = 3,
    ACTIONS(768), 1,
      anon_sym_POUND,
    STATE(233), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(770), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3279] = 3,
    ACTIONS(768), 1,
      anon_sym_POUND_POUND2,
    STATE(173), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(772), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3290] = 3,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3301] = 3,
    ACTIONS(776), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3312] = 3,
    STATE(184), 1,
      aux_sym_id_repeat1,
    STATE(270), 1,
      sym_id,
    ACTIONS(778), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3323] = 3,
    ACTIONS(782), 1,
      anon_sym_GT_GT,
    STATE(193), 1,
      aux_sym_xref_repeat2,
    ACTIONS(780), 2,
      anon_sym_BSLASH_GT,
      aux_sym_xref_token2,
  [3334] = 3,
    ACTIONS(784), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(189), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [3345] = 3,
    STATE(200), 1,
      aux_sym_id_repeat1,
    STATE(278), 1,
      sym_id,
    ACTIONS(786), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3356] = 3,
    ACTIONS(788), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_id_repeat1,
    ACTIONS(790), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3367] = 3,
    ACTIONS(792), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3378] = 3,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3389] = 3,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym__stem_attr,
    ACTIONS(798), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3400] = 3,
    ACTIONS(801), 1,
      anon_sym_PLUS,
    STATE(198), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(803), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3411] = 3,
    ACTIONS(801), 1,
      anon_sym_PLUS_PLUS2,
    STATE(199), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(805), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3422] = 3,
    ACTIONS(807), 1,
      anon_sym_BQUOTE,
    STATE(169), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(809), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3433] = 3,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3444] = 3,
    ACTIONS(736), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_id_repeat1,
    ACTIONS(813), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3455] = 3,
    ACTIONS(819), 1,
      anon_sym_GT_GT,
    STATE(193), 1,
      aux_sym_xref_repeat2,
    ACTIONS(816), 2,
      anon_sym_BSLASH_GT,
      aux_sym_xref_token2,
  [3466] = 3,
    ACTIONS(821), 1,
      anon_sym_BQUOTE,
    STATE(203), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(823), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3477] = 3,
    ACTIONS(821), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(204), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(825), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3488] = 3,
    ACTIONS(827), 1,
      anon_sym_POUND,
    STATE(205), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(829), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3499] = 3,
    ACTIONS(827), 1,
      anon_sym_POUND_POUND2,
    STATE(206), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(831), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3510] = 3,
    ACTIONS(710), 1,
      anon_sym_PLUS,
    STATE(213), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(833), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3521] = 3,
    ACTIONS(710), 1,
      anon_sym_PLUS_PLUS2,
    STATE(168), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(835), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3532] = 3,
    ACTIONS(788), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(166), 1,
      aux_sym_id_repeat1,
    ACTIONS(837), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3543] = 3,
    ACTIONS(839), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3554] = 3,
    ACTIONS(754), 1,
      anon_sym_BQUOTE,
    STATE(202), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(841), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3565] = 3,
    ACTIONS(844), 1,
      anon_sym_BQUOTE,
    STATE(202), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(745), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3576] = 3,
    ACTIONS(844), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(172), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(749), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3587] = 3,
    ACTIONS(846), 1,
      anon_sym_POUND,
    STATE(233), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(770), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3598] = 3,
    ACTIONS(846), 1,
      anon_sym_POUND_POUND2,
    STATE(173), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(772), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3609] = 3,
    ACTIONS(807), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(171), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(848), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3620] = 3,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3631] = 3,
    ACTIONS(852), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3642] = 3,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3653] = 3,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3664] = 3,
    ACTIONS(697), 1,
      anon_sym_PLUS,
    STATE(213), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(833), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3675] = 3,
    ACTIONS(741), 1,
      anon_sym_PLUS,
    STATE(213), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(858), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3686] = 3,
    ACTIONS(861), 1,
      anon_sym_BQUOTE,
    STATE(219), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(863), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3697] = 3,
    ACTIONS(861), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(220), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(865), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3708] = 3,
    ACTIONS(867), 1,
      anon_sym_POUND,
    STATE(221), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(869), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3719] = 3,
    ACTIONS(867), 1,
      anon_sym_POUND_POUND2,
    STATE(222), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(871), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3730] = 3,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym__stem_attr,
    ACTIONS(766), 2,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [3741] = 3,
    ACTIONS(875), 1,
      anon_sym_BQUOTE,
    STATE(202), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(745), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3752] = 3,
    ACTIONS(875), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(172), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(749), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3763] = 3,
    ACTIONS(877), 1,
      anon_sym_POUND,
    STATE(233), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(770), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3774] = 3,
    ACTIONS(877), 1,
      anon_sym_POUND_POUND2,
    STATE(173), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(772), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3785] = 3,
    ACTIONS(697), 1,
      anon_sym_PLUS_PLUS2,
    STATE(168), 1,
      aux_sym_passthrough_repeat1,
    ACTIONS(835), 2,
      aux_sym_passthrough_token1,
      anon_sym_BSLASH_PLUS,
  [3796] = 3,
    ACTIONS(879), 1,
      anon_sym_BQUOTE,
    STATE(228), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(881), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3807] = 3,
    ACTIONS(879), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(229), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(883), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3818] = 3,
    ACTIONS(885), 1,
      anon_sym_POUND,
    STATE(230), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(887), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3829] = 3,
    ACTIONS(885), 1,
      anon_sym_POUND_POUND2,
    STATE(231), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(889), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3840] = 3,
    ACTIONS(891), 1,
      anon_sym_BQUOTE,
    STATE(202), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(745), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3851] = 3,
    ACTIONS(891), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(172), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(749), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3862] = 3,
    ACTIONS(893), 1,
      anon_sym_POUND,
    STATE(233), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(770), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3873] = 3,
    ACTIONS(893), 1,
      anon_sym_POUND_POUND2,
    STATE(173), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(772), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3884] = 3,
    ACTIONS(721), 1,
      anon_sym_BQUOTE,
    STATE(236), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(895), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3895] = 3,
    ACTIONS(759), 1,
      anon_sym_POUND,
    STATE(233), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(897), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3906] = 3,
    ACTIONS(900), 1,
      anon_sym_POUND,
    STATE(238), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(902), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3917] = 3,
    ACTIONS(900), 1,
      anon_sym_POUND_POUND2,
    STATE(239), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(904), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3928] = 3,
    ACTIONS(906), 1,
      anon_sym_BQUOTE,
    STATE(202), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(745), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3939] = 3,
    ACTIONS(906), 1,
      anon_sym_BQUOTE_BQUOTE2,
    STATE(172), 1,
      aux_sym_monospace_repeat1,
    ACTIONS(749), 2,
      aux_sym_monospace_token1,
      anon_sym_BSLASH_BQUOTE,
  [3950] = 3,
    ACTIONS(908), 1,
      anon_sym_POUND,
    STATE(233), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(770), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3961] = 3,
    ACTIONS(908), 1,
      anon_sym_POUND_POUND2,
    STATE(173), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(772), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3972] = 2,
    STATE(158), 1,
      aux_sym_passthrough_repeat2,
    ACTIONS(910), 3,
      anon_sym_BSLASH_DOLLAR_DOLLAR,
      aux_sym_passthrough_token2,
      anon_sym_BSLASH_DOLLAR,
  [3981] = 3,
    ACTIONS(729), 1,
      anon_sym_POUND_POUND2,
    STATE(177), 1,
      aux_sym_highlight_repeat1,
    ACTIONS(912), 2,
      aux_sym_highlight_token1,
      anon_sym_BSLASH_POUND,
  [3992] = 3,
    ACTIONS(784), 1,
      anon_sym_DOT,
    STATE(174), 1,
      aux_sym_link_url_repeat1,
    ACTIONS(197), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [4003] = 1,
    ACTIONS(914), 3,
      anon_sym_BSLASH_GT,
      aux_sym_xref_token2,
      anon_sym_GT_GT,
  [4009] = 1,
    ACTIONS(916), 3,
      anon_sym_RBRACK,
      aux_sym_uri_label_token1,
      anon_sym_BSLASH_RBRACK,
  [4015] = 1,
    ACTIONS(201), 3,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [4021] = 2,
    STATE(181), 1,
      aux_sym_xref_repeat2,
    ACTIONS(780), 2,
      anon_sym_BSLASH_GT,
      aux_sym_xref_token2,
  [4029] = 2,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_RPAREN_RPAREN,
  [4036] = 2,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    ACTIONS(924), 1,
      anon_sym_RPAREN_RPAREN_RPAREN,
  [4043] = 2,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(928), 1,
      anon_sym_RPAREN_RPAREN_RPAREN,
  [4050] = 1,
    ACTIONS(220), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
  [4055] = 2,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    ACTIONS(932), 1,
      anon_sym_LBRACK,
  [4062] = 2,
    ACTIONS(932), 1,
      anon_sym_LBRACK,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
  [4069] = 1,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
  [4073] = 1,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
  [4077] = 1,
    ACTIONS(938), 1,
      anon_sym_RPAREN_RPAREN_RPAREN,
  [4081] = 1,
    ACTIONS(940), 1,
      anon_sym_RBRACK,
  [4085] = 1,
    ACTIONS(942), 1,
      anon_sym_LBRACK,
  [4089] = 1,
    ACTIONS(944), 1,
      anon_sym_LBRACK,
  [4093] = 1,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
  [4097] = 1,
    ACTIONS(946), 1,
      ts_builtin_sym_end,
  [4101] = 1,
    ACTIONS(948), 1,
      sym__uri_segment,
  [4105] = 1,
    ACTIONS(950), 1,
      anon_sym_RBRACK,
  [4109] = 1,
    ACTIONS(952), 1,
      sym__uri_segment,
  [4113] = 1,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
  [4117] = 1,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
  [4121] = 1,
    ACTIONS(956), 1,
      anon_sym_RPAREN_RPAREN,
  [4125] = 1,
    ACTIONS(958), 1,
      anon_sym_COLON,
  [4129] = 1,
    ACTIONS(960), 1,
      anon_sym_LBRACK,
  [4133] = 1,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
  [4137] = 1,
    ACTIONS(964), 1,
      anon_sym_RBRACK,
  [4141] = 1,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
  [4145] = 1,
    ACTIONS(968), 1,
      anon_sym_LBRACK,
  [4149] = 1,
    ACTIONS(970), 1,
      sym__uri_segment,
  [4153] = 1,
    ACTIONS(972), 1,
      sym__uri_segment,
  [4157] = 1,
    ACTIONS(974), 1,
      sym__uri_segment,
  [4161] = 1,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
  [4165] = 1,
    ACTIONS(978), 1,
      anon_sym_RBRACK,
  [4169] = 1,
    ACTIONS(964), 1,
      anon_sym_RBRACK_RBRACK,
  [4173] = 1,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
  [4177] = 1,
    ACTIONS(980), 1,
      sym__uri_segment,
  [4181] = 1,
    ACTIONS(982), 1,
      anon_sym_LBRACK,
  [4185] = 1,
    ACTIONS(984), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(58)] = 0,
  [SMALL_STATE(59)] = 69,
  [SMALL_STATE(60)] = 138,
  [SMALL_STATE(61)] = 207,
  [SMALL_STATE(62)] = 276,
  [SMALL_STATE(63)] = 342,
  [SMALL_STATE(64)] = 408,
  [SMALL_STATE(65)] = 471,
  [SMALL_STATE(66)] = 534,
  [SMALL_STATE(67)] = 597,
  [SMALL_STATE(68)] = 660,
  [SMALL_STATE(69)] = 723,
  [SMALL_STATE(70)] = 783,
  [SMALL_STATE(71)] = 843,
  [SMALL_STATE(72)] = 898,
  [SMALL_STATE(73)] = 947,
  [SMALL_STATE(74)] = 996,
  [SMALL_STATE(75)] = 1045,
  [SMALL_STATE(76)] = 1089,
  [SMALL_STATE(77)] = 1134,
  [SMALL_STATE(78)] = 1177,
  [SMALL_STATE(79)] = 1219,
  [SMALL_STATE(80)] = 1261,
  [SMALL_STATE(81)] = 1303,
  [SMALL_STATE(82)] = 1345,
  [SMALL_STATE(83)] = 1387,
  [SMALL_STATE(84)] = 1429,
  [SMALL_STATE(85)] = 1471,
  [SMALL_STATE(86)] = 1513,
  [SMALL_STATE(87)] = 1555,
  [SMALL_STATE(88)] = 1597,
  [SMALL_STATE(89)] = 1639,
  [SMALL_STATE(90)] = 1681,
  [SMALL_STATE(91)] = 1713,
  [SMALL_STATE(92)] = 1745,
  [SMALL_STATE(93)] = 1777,
  [SMALL_STATE(94)] = 1809,
  [SMALL_STATE(95)] = 1841,
  [SMALL_STATE(96)] = 1873,
  [SMALL_STATE(97)] = 1905,
  [SMALL_STATE(98)] = 1937,
  [SMALL_STATE(99)] = 1969,
  [SMALL_STATE(100)] = 2001,
  [SMALL_STATE(101)] = 2033,
  [SMALL_STATE(102)] = 2065,
  [SMALL_STATE(103)] = 2097,
  [SMALL_STATE(104)] = 2129,
  [SMALL_STATE(105)] = 2161,
  [SMALL_STATE(106)] = 2193,
  [SMALL_STATE(107)] = 2225,
  [SMALL_STATE(108)] = 2257,
  [SMALL_STATE(109)] = 2289,
  [SMALL_STATE(110)] = 2321,
  [SMALL_STATE(111)] = 2353,
  [SMALL_STATE(112)] = 2385,
  [SMALL_STATE(113)] = 2417,
  [SMALL_STATE(114)] = 2449,
  [SMALL_STATE(115)] = 2481,
  [SMALL_STATE(116)] = 2513,
  [SMALL_STATE(117)] = 2545,
  [SMALL_STATE(118)] = 2577,
  [SMALL_STATE(119)] = 2589,
  [SMALL_STATE(120)] = 2601,
  [SMALL_STATE(121)] = 2613,
  [SMALL_STATE(122)] = 2625,
  [SMALL_STATE(123)] = 2637,
  [SMALL_STATE(124)] = 2649,
  [SMALL_STATE(125)] = 2661,
  [SMALL_STATE(126)] = 2673,
  [SMALL_STATE(127)] = 2685,
  [SMALL_STATE(128)] = 2697,
  [SMALL_STATE(129)] = 2709,
  [SMALL_STATE(130)] = 2721,
  [SMALL_STATE(131)] = 2733,
  [SMALL_STATE(132)] = 2745,
  [SMALL_STATE(133)] = 2757,
  [SMALL_STATE(134)] = 2769,
  [SMALL_STATE(135)] = 2781,
  [SMALL_STATE(136)] = 2793,
  [SMALL_STATE(137)] = 2805,
  [SMALL_STATE(138)] = 2817,
  [SMALL_STATE(139)] = 2829,
  [SMALL_STATE(140)] = 2841,
  [SMALL_STATE(141)] = 2853,
  [SMALL_STATE(142)] = 2865,
  [SMALL_STATE(143)] = 2878,
  [SMALL_STATE(144)] = 2893,
  [SMALL_STATE(145)] = 2908,
  [SMALL_STATE(146)] = 2921,
  [SMALL_STATE(147)] = 2934,
  [SMALL_STATE(148)] = 2947,
  [SMALL_STATE(149)] = 2960,
  [SMALL_STATE(150)] = 2975,
  [SMALL_STATE(151)] = 2990,
  [SMALL_STATE(152)] = 3002,
  [SMALL_STATE(153)] = 3014,
  [SMALL_STATE(154)] = 3026,
  [SMALL_STATE(155)] = 3038,
  [SMALL_STATE(156)] = 3050,
  [SMALL_STATE(157)] = 3062,
  [SMALL_STATE(158)] = 3074,
  [SMALL_STATE(159)] = 3086,
  [SMALL_STATE(160)] = 3098,
  [SMALL_STATE(161)] = 3110,
  [SMALL_STATE(162)] = 3118,
  [SMALL_STATE(163)] = 3129,
  [SMALL_STATE(164)] = 3140,
  [SMALL_STATE(165)] = 3149,
  [SMALL_STATE(166)] = 3160,
  [SMALL_STATE(167)] = 3171,
  [SMALL_STATE(168)] = 3180,
  [SMALL_STATE(169)] = 3191,
  [SMALL_STATE(170)] = 3202,
  [SMALL_STATE(171)] = 3213,
  [SMALL_STATE(172)] = 3224,
  [SMALL_STATE(173)] = 3235,
  [SMALL_STATE(174)] = 3246,
  [SMALL_STATE(175)] = 3257,
  [SMALL_STATE(176)] = 3268,
  [SMALL_STATE(177)] = 3279,
  [SMALL_STATE(178)] = 3290,
  [SMALL_STATE(179)] = 3301,
  [SMALL_STATE(180)] = 3312,
  [SMALL_STATE(181)] = 3323,
  [SMALL_STATE(182)] = 3334,
  [SMALL_STATE(183)] = 3345,
  [SMALL_STATE(184)] = 3356,
  [SMALL_STATE(185)] = 3367,
  [SMALL_STATE(186)] = 3378,
  [SMALL_STATE(187)] = 3389,
  [SMALL_STATE(188)] = 3400,
  [SMALL_STATE(189)] = 3411,
  [SMALL_STATE(190)] = 3422,
  [SMALL_STATE(191)] = 3433,
  [SMALL_STATE(192)] = 3444,
  [SMALL_STATE(193)] = 3455,
  [SMALL_STATE(194)] = 3466,
  [SMALL_STATE(195)] = 3477,
  [SMALL_STATE(196)] = 3488,
  [SMALL_STATE(197)] = 3499,
  [SMALL_STATE(198)] = 3510,
  [SMALL_STATE(199)] = 3521,
  [SMALL_STATE(200)] = 3532,
  [SMALL_STATE(201)] = 3543,
  [SMALL_STATE(202)] = 3554,
  [SMALL_STATE(203)] = 3565,
  [SMALL_STATE(204)] = 3576,
  [SMALL_STATE(205)] = 3587,
  [SMALL_STATE(206)] = 3598,
  [SMALL_STATE(207)] = 3609,
  [SMALL_STATE(208)] = 3620,
  [SMALL_STATE(209)] = 3631,
  [SMALL_STATE(210)] = 3642,
  [SMALL_STATE(211)] = 3653,
  [SMALL_STATE(212)] = 3664,
  [SMALL_STATE(213)] = 3675,
  [SMALL_STATE(214)] = 3686,
  [SMALL_STATE(215)] = 3697,
  [SMALL_STATE(216)] = 3708,
  [SMALL_STATE(217)] = 3719,
  [SMALL_STATE(218)] = 3730,
  [SMALL_STATE(219)] = 3741,
  [SMALL_STATE(220)] = 3752,
  [SMALL_STATE(221)] = 3763,
  [SMALL_STATE(222)] = 3774,
  [SMALL_STATE(223)] = 3785,
  [SMALL_STATE(224)] = 3796,
  [SMALL_STATE(225)] = 3807,
  [SMALL_STATE(226)] = 3818,
  [SMALL_STATE(227)] = 3829,
  [SMALL_STATE(228)] = 3840,
  [SMALL_STATE(229)] = 3851,
  [SMALL_STATE(230)] = 3862,
  [SMALL_STATE(231)] = 3873,
  [SMALL_STATE(232)] = 3884,
  [SMALL_STATE(233)] = 3895,
  [SMALL_STATE(234)] = 3906,
  [SMALL_STATE(235)] = 3917,
  [SMALL_STATE(236)] = 3928,
  [SMALL_STATE(237)] = 3939,
  [SMALL_STATE(238)] = 3950,
  [SMALL_STATE(239)] = 3961,
  [SMALL_STATE(240)] = 3972,
  [SMALL_STATE(241)] = 3981,
  [SMALL_STATE(242)] = 3992,
  [SMALL_STATE(243)] = 4003,
  [SMALL_STATE(244)] = 4009,
  [SMALL_STATE(245)] = 4015,
  [SMALL_STATE(246)] = 4021,
  [SMALL_STATE(247)] = 4029,
  [SMALL_STATE(248)] = 4036,
  [SMALL_STATE(249)] = 4043,
  [SMALL_STATE(250)] = 4050,
  [SMALL_STATE(251)] = 4055,
  [SMALL_STATE(252)] = 4062,
  [SMALL_STATE(253)] = 4069,
  [SMALL_STATE(254)] = 4073,
  [SMALL_STATE(255)] = 4077,
  [SMALL_STATE(256)] = 4081,
  [SMALL_STATE(257)] = 4085,
  [SMALL_STATE(258)] = 4089,
  [SMALL_STATE(259)] = 4093,
  [SMALL_STATE(260)] = 4097,
  [SMALL_STATE(261)] = 4101,
  [SMALL_STATE(262)] = 4105,
  [SMALL_STATE(263)] = 4109,
  [SMALL_STATE(264)] = 4113,
  [SMALL_STATE(265)] = 4117,
  [SMALL_STATE(266)] = 4121,
  [SMALL_STATE(267)] = 4125,
  [SMALL_STATE(268)] = 4129,
  [SMALL_STATE(269)] = 4133,
  [SMALL_STATE(270)] = 4137,
  [SMALL_STATE(271)] = 4141,
  [SMALL_STATE(272)] = 4145,
  [SMALL_STATE(273)] = 4149,
  [SMALL_STATE(274)] = 4153,
  [SMALL_STATE(275)] = 4157,
  [SMALL_STATE(276)] = 4161,
  [SMALL_STATE(277)] = 4165,
  [SMALL_STATE(278)] = 4169,
  [SMALL_STATE(279)] = 4173,
  [SMALL_STATE(280)] = 4177,
  [SMALL_STATE(281)] = 4181,
  [SMALL_STATE(282)] = 4185,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__punctuation, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__punctuation, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stem_name, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stem_name, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_name, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_name, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fallback_token, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fallback_token, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__footnotename, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__footnotename, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_url, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_url, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_url, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_url, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_passthrough, 5, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_passthrough, 5, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_sequence, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_sequence, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltalic, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltalic, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monospace, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monospace, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_highlight, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_highlight, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolink, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolink, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_assignment, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_assignment, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_attributes_pair, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intrinsic_attributes_pair, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, 0, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, 0, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ltalic, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ltalic, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monospace, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monospace, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_highlight, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_highlight, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_term2, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_term2, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_term, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_term, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labled_uri, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labled_uri, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_element, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_element, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_passthrough, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_passthrough, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labled_uri, 4, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labled_uri, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_macro, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_macro, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 4, 0, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 4, 0, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stem_macro, 4, 0, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stem_macro, 4, 0, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_passthrough, 5, 0, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_passthrough, 5, 0, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolink, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolink, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, 0, 4),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, 0, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_term2, 5, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_term2, 5, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_term, 5, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_term, 5, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_macro, 5, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_macro, 5, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 5, 0, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 5, 0, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stem_macro, 5, 0, 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stem_macro, 5, 0, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stem_macro, 5, 0, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stem_macro, 5, 0, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_passthrough, 6, 0, 6),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_passthrough, 6, 0, 6),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_macro, 6, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_macro, 6, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 6, 0, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 6, 0, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stem_macro, 6, 0, 7),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stem_macro, 6, 0, 7),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_term, 7, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_term, 7, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_repeat1, 1, 0, 0),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [560] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emphasis_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ltalic_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xref_repeat1, 2, 0, 0),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xref_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri_label, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uri_label_repeat1, 2, 0, 0),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uri_label_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat2, 2, 0, 0), SHIFT_REPEAT(160),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat2, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xref_repeat1, 1, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_monospace_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_monospace_repeat1, 2, 0, 0),
  [756] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_highlight_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_highlight_repeat1, 2, 0, 0),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_link_url_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stem_attr, 2, 0, 0),
  [798] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stem_attr, 2, 0, 0), SHIFT_REPEAT(244),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [813] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [816] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xref_repeat2, 2, 0, 0), SHIFT_REPEAT(243),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xref_repeat2, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_monospace_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_passthrough_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_highlight_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xref_repeat2, 1, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stem_attr, 1, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [946] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_asciidoc_inline_external_scanner_create(void);
void tree_sitter_asciidoc_inline_external_scanner_destroy(void *);
bool tree_sitter_asciidoc_inline_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_asciidoc_inline_external_scanner_serialize(void *, char *);
void tree_sitter_asciidoc_inline_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asciidoc_inline(void) {
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
      tree_sitter_asciidoc_inline_external_scanner_create,
      tree_sitter_asciidoc_inline_external_scanner_destroy,
      tree_sitter_asciidoc_inline_external_scanner_scan,
      tree_sitter_asciidoc_inline_external_scanner_serialize,
      tree_sitter_asciidoc_inline_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
