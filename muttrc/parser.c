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
#define STATE_COUNT 566
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 344
#define ALIAS_COUNT 3
#define TOKEN_COUNT 191
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  anon_sym_account_DASHhook = 1,
  anon_sym_DASHgroup = 2,
  anon_sym_COMMA = 3,
  anon_sym_alias = 4,
  anon_sym_unalias = 5,
  anon_sym_STAR = 6,
  anon_sym_LT = 7,
  aux_sym_key_token1 = 8,
  anon_sym_GT = 9,
  aux_sym_key_token2 = 10,
  aux_sym_key_token3 = 11,
  anon_sym_SPACE = 12,
  anon_sym_alternates = 13,
  anon_sym_unalternates = 14,
  anon_sym_alternative_order = 15,
  anon_sym_unalternative_order = 16,
  sym_mime_type = 17,
  anon_sym_SLASH = 18,
  anon_sym_attachments = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_QMARK = 22,
  anon_sym_unattachments = 23,
  anon_sym_auto_view = 24,
  anon_sym_unauto_view = 25,
  anon_sym_attach = 26,
  anon_sym_browser = 27,
  anon_sym_compose = 28,
  anon_sym_editor = 29,
  anon_sym_generic = 30,
  anon_sym_index = 31,
  anon_sym_mix = 32,
  anon_sym_pager = 33,
  anon_sym_pgp = 34,
  anon_sym_postpone = 35,
  anon_sym_query = 36,
  anon_sym_smime = 37,
  sym_function = 38,
  anon_sym_bind = 39,
  anon_sym_unbind = 40,
  anon_sym_charset_DASHhook = 41,
  anon_sym_iconv_DASHhook = 42,
  anon_sym_attach_headers = 43,
  anon_sym_attachment = 44,
  anon_sym_body = 45,
  anon_sym_bold = 46,
  anon_sym_error = 47,
  anon_sym_hdrdefault = 48,
  anon_sym_header = 49,
  anon_sym_index_author = 50,
  anon_sym_index_collapsed = 51,
  anon_sym_index_date = 52,
  anon_sym_index_flags = 53,
  anon_sym_index_label = 54,
  anon_sym_index_number = 55,
  anon_sym_index_size = 56,
  anon_sym_index_subject = 57,
  anon_sym_index_tag = 58,
  anon_sym_index_tags = 59,
  anon_sym_indicator = 60,
  anon_sym_markers = 61,
  anon_sym_message = 62,
  anon_sym_normal = 63,
  anon_sym_progress = 64,
  anon_sym_prompt = 65,
  aux_sym_object_token1 = 66,
  anon_sym_search = 67,
  anon_sym_signature = 68,
  anon_sym_status = 69,
  anon_sym_tilde = 70,
  anon_sym_tree = 71,
  anon_sym_underline = 72,
  anon_sym_sidebar_background = 73,
  anon_sym_sidebar_divider = 74,
  anon_sym_sidebar_flagged = 75,
  anon_sym_sidebar_highlight = 76,
  anon_sym_sidebar_indicator = 77,
  anon_sym_sidebar_new = 78,
  anon_sym_sidebar_ordinary = 79,
  anon_sym_sidebar_spool_file = 80,
  anon_sym_security_encrypt = 81,
  anon_sym_security_sign = 82,
  anon_sym_security_both = 83,
  anon_sym_security_none = 84,
  anon_sym_default = 85,
  anon_sym_black = 86,
  anon_sym_red = 87,
  anon_sym_green = 88,
  anon_sym_yellow = 89,
  anon_sym_blue = 90,
  anon_sym_magenta = 91,
  anon_sym_cyan = 92,
  anon_sym_white = 93,
  aux_sym_color_token1 = 94,
  aux_sym_color_token2 = 95,
  anon_sym_none = 96,
  anon_sym_reverse = 97,
  anon_sym_standout = 98,
  anon_sym_color = 99,
  anon_sym_uncolor = 100,
  anon_sym_crypt_DASHhook = 101,
  anon_sym_index_DASHformat_DASHhook = 102,
  anon_sym_BANG = 103,
  anon_sym_exec = 104,
  anon_sym_fcc_DASHsave_DASHhook = 105,
  anon_sym_fcc_DASHhook = 106,
  anon_sym_save_DASHhook = 107,
  anon_sym_folder_DASHhook = 108,
  anon_sym_DASHnoregex = 109,
  anon_sym_DASHrx = 110,
  anon_sym_DASHaddr = 111,
  anon_sym_group = 112,
  anon_sym_ungroup = 113,
  anon_sym_hdr_order = 114,
  anon_sym_unhdr_order = 115,
  anon_sym_ifdef = 116,
  anon_sym_ifndef = 117,
  anon_sym_finish = 118,
  anon_sym_ignore = 119,
  anon_sym_unignore = 120,
  anon_sym_lists = 121,
  anon_sym_unlists = 122,
  anon_sym_subscribe = 123,
  anon_sym_unsubscribe = 124,
  anon_sym_macro = 125,
  anon_sym_unmacro = 126,
  anon_sym_mailboxes = 127,
  anon_sym_named_DASHmailboxes = 128,
  anon_sym_unmailboxes = 129,
  anon_sym_mailto_allow = 130,
  anon_sym_unmailto_allow = 131,
  anon_sym_echo = 132,
  anon_sym_cd = 133,
  anon_sym_mbox_DASHhook = 134,
  anon_sym_message_DASHhook = 135,
  anon_sym_mime_lookup = 136,
  anon_sym_unmime_lookup = 137,
  anon_sym_mono = 138,
  anon_sym_unmono = 139,
  anon_sym_my_hdr = 140,
  anon_sym_unmy_hdr = 141,
  anon_sym_open_DASHhook = 142,
  anon_sym_close_DASHhook = 143,
  anon_sym_append_DASHhook = 144,
  anon_sym_push = 145,
  anon_sym_reply_DASHhook = 146,
  anon_sym_send_DASHhook = 147,
  anon_sym_send2_DASHhook = 148,
  anon_sym_spam = 149,
  anon_sym_nospam = 150,
  anon_sym_subjectrx = 151,
  anon_sym_unsubjectrx = 152,
  anon_sym_subscribe_DASHto = 153,
  anon_sym_unsubscribe_DASHfrom = 154,
  anon_sym_timeout_DASHhook = 155,
  anon_sym_startup_DASHhook = 156,
  anon_sym_shutdown_DASHhook = 157,
  anon_sym_unhook = 158,
  anon_sym_set = 159,
  anon_sym_PLUS_EQ = 160,
  anon_sym_DASH_EQ = 161,
  anon_sym_EQ = 162,
  anon_sym_AMP = 163,
  anon_sym_unset = 164,
  anon_sym_reset = 165,
  anon_sym_toggle = 166,
  anon_sym_setenv = 167,
  aux_sym_setenv_directive_token1 = 168,
  anon_sym_unsetenv = 169,
  anon_sym_sidebar_pin = 170,
  anon_sym_sidebar_unpin = 171,
  anon_sym_score = 172,
  anon_sym_unscore = 173,
  sym_option = 174,
  anon_sym_yes = 175,
  anon_sym_no = 176,
  anon_sym_ask_DASHyes = 177,
  anon_sym_ask_DASHno = 178,
  sym_int = 179,
  anon_sym_SQUOTE = 180,
  aux_sym__string_token1 = 181,
  anon_sym_DQUOTE = 182,
  aux_sym__string_token2 = 183,
  anon_sym_BQUOTE = 184,
  aux_sym__string_token3 = 185,
  sym__word = 186,
  anon_sym_source = 187,
  sym_comment = 188,
  sym__eol = 189,
  aux_sym__space_token1 = 190,
  sym_file = 191,
  sym__command = 192,
  sym_account_hook_directive = 193,
  sym_group_name = 194,
  sym__group = 195,
  sym__addresses = 196,
  sym_alias_directive = 197,
  sym_address = 198,
  sym_unalias_directive = 199,
  sym_key = 200,
  sym__regexes = 201,
  sym_alternates_directive = 202,
  sym_unalternates_directive = 203,
  sym_alternative_order_directive = 204,
  sym_unalternative_order_directive = 205,
  sym_mime = 206,
  sym__mime_types = 207,
  sym__mimes = 208,
  sym_disposition = 209,
  sym_attachments_directive = 210,
  sym_unattachments_directive = 211,
  sym_auto_view_directive = 212,
  sym_unauto_view_directive = 213,
  sym_map = 214,
  sym__maps = 215,
  sym__functions = 216,
  sym_bind_directive = 217,
  sym_unbind_directive = 218,
  sym_alias = 219,
  sym_charset = 220,
  sym_charset_hook_directive = 221,
  sym_iconv_hook_directive = 222,
  sym_pattern = 223,
  sym_object = 224,
  sym_composeobject = 225,
  sym_color = 226,
  sym_attribute = 227,
  sym__attributes = 228,
  sym_foreground = 229,
  sym_background = 230,
  sym_color_directive = 231,
  sym_uncolor_directive = 232,
  sym_keyid = 233,
  sym_crypt_hook_directive = 234,
  sym_name = 235,
  sym_index_format_hook_directive = 236,
  sym_exec_directive = 237,
  sym_fcc_save_hook_directive = 238,
  sym_fcc_hook_directive = 239,
  sym_save_hook_directive = 240,
  sym_folder_hook_directive = 241,
  sym__rx_addr = 242,
  sym_group_directive = 243,
  sym_ungroup_directive = 244,
  sym_header = 245,
  sym__headers = 246,
  sym_hdr_order_directive = 247,
  sym_unhdr_order_directive = 248,
  sym_symbol = 249,
  sym_ifdef_directive = 250,
  sym_ifndef_directive = 251,
  sym_finish_directive = 252,
  sym__strings = 253,
  sym_ignore_directive = 254,
  sym_unignore_directive = 255,
  sym_lists_directive = 256,
  sym_unlists_directive = 257,
  sym_subscribe_directive = 258,
  sym_unsubscribe_directive = 259,
  sym_sequence = 260,
  sym_macro_directive = 261,
  sym_unmacro_directive = 262,
  sym_mailbox = 263,
  sym__mailboxes = 264,
  sym_description = 265,
  sym_mailboxes_directive = 266,
  sym_named_mailboxes_directive = 267,
  sym_unmailboxes_directive = 268,
  sym_header_field = 269,
  sym__header_fields = 270,
  sym_mailto_allow_directive = 271,
  sym_unmailto_allow_directive = 272,
  sym_message = 273,
  sym_echo_directive = 274,
  sym_directory = 275,
  sym_cd_directive = 276,
  sym_mbox_hook_directive = 277,
  sym_message_hook_directive = 278,
  sym_mime_lookup_directive = 279,
  sym_unmime_lookup_directive = 280,
  sym_mono_directive = 281,
  sym_unmono_directive = 282,
  sym_my_hdr_directive = 283,
  sym_unmy_hdr_directive = 284,
  sym_shell_command = 285,
  sym_open_hook_directive = 286,
  sym_close_hook_directive = 287,
  sym_append_hook_directive = 288,
  sym_push_directive = 289,
  sym_reply_hook_directive = 290,
  sym_send_hook_directive = 291,
  sym_send2_hook_directive = 292,
  sym_format = 293,
  sym_spam_directive = 294,
  sym_nospam_directive = 295,
  sym_replacement = 296,
  sym_subjectrx_directive = 297,
  sym_unsubjectrx_directive = 298,
  sym_uri = 299,
  sym_subscribe_to_directive = 300,
  sym_unsubscribe_from_directive = 301,
  sym_timeout_hook_directive = 302,
  sym_startup_hook_directive = 303,
  sym_shutdown_hook_directive = 304,
  sym_hook_type = 305,
  sym_unhook_directive = 306,
  sym_set_directive = 307,
  sym__options3 = 308,
  sym__options2 = 309,
  sym__options = 310,
  sym_unset_directive = 311,
  sym_reset_directive = 312,
  sym_toggle_directive = 313,
  sym_setenv_directive = 314,
  sym_unsetenv_directive = 315,
  sym_sidebar_pin_directive = 316,
  sym_sidebar_unpin_directive = 317,
  sym_score_directive = 318,
  sym_unscore_directive = 319,
  sym_quadoption = 320,
  sym__string = 321,
  sym__regex = 322,
  sym_source_directive = 323,
  sym__space = 324,
  sym__end = 325,
  aux_sym_file_repeat1 = 326,
  aux_sym__addresses_repeat1 = 327,
  aux_sym_key_repeat1 = 328,
  aux_sym__regexes_repeat1 = 329,
  aux_sym__mime_types_repeat1 = 330,
  aux_sym__mimes_repeat1 = 331,
  aux_sym__maps_repeat1 = 332,
  aux_sym__functions_repeat1 = 333,
  aux_sym__attributes_repeat1 = 334,
  aux_sym__headers_repeat1 = 335,
  aux_sym__strings_repeat1 = 336,
  aux_sym__mailboxes_repeat1 = 337,
  aux_sym_named_mailboxes_directive_repeat1 = 338,
  aux_sym__header_fields_repeat1 = 339,
  aux_sym__options3_repeat1 = 340,
  aux_sym__options2_repeat1 = 341,
  aux_sym__options_repeat1 = 342,
  aux_sym__space_repeat1 = 343,
  alias_sym_path = 344,
  alias_sym_regex = 345,
  alias_sym_sub_mime_type = 346,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_account_DASHhook] = "account-hook",
  [anon_sym_DASHgroup] = "command_line_option",
  [anon_sym_COMMA] = ",",
  [anon_sym_alias] = "alias",
  [anon_sym_unalias] = "command",
  [anon_sym_STAR] = "*",
  [anon_sym_LT] = "<",
  [aux_sym_key_token1] = "key_name",
  [anon_sym_GT] = ">",
  [aux_sym_key_token2] = "key_token2",
  [aux_sym_key_token3] = "escape",
  [anon_sym_SPACE] = " ",
  [anon_sym_alternates] = "command",
  [anon_sym_unalternates] = "command",
  [anon_sym_alternative_order] = "command",
  [anon_sym_unalternative_order] = "command",
  [sym_mime_type] = "mime_type",
  [anon_sym_SLASH] = "/",
  [anon_sym_attachments] = "command",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_QMARK] = "\?",
  [anon_sym_unattachments] = "command",
  [anon_sym_auto_view] = "command",
  [anon_sym_unauto_view] = "command",
  [anon_sym_attach] = "attach",
  [anon_sym_browser] = "browser",
  [anon_sym_compose] = "compose",
  [anon_sym_editor] = "editor",
  [anon_sym_generic] = "generic",
  [anon_sym_index] = "index",
  [anon_sym_mix] = "mix",
  [anon_sym_pager] = "pager",
  [anon_sym_pgp] = "pgp",
  [anon_sym_postpone] = "postpone",
  [anon_sym_query] = "query",
  [anon_sym_smime] = "smime",
  [sym_function] = "function",
  [anon_sym_bind] = "command",
  [anon_sym_unbind] = "command",
  [anon_sym_charset_DASHhook] = "charset-hook",
  [anon_sym_iconv_DASHhook] = "iconv-hook",
  [anon_sym_attach_headers] = "attach_headers",
  [anon_sym_attachment] = "attachment",
  [anon_sym_body] = "body",
  [anon_sym_bold] = "bold",
  [anon_sym_error] = "error",
  [anon_sym_hdrdefault] = "hdrdefault",
  [anon_sym_header] = "header",
  [anon_sym_index_author] = "index_author",
  [anon_sym_index_collapsed] = "index_collapsed",
  [anon_sym_index_date] = "index_date",
  [anon_sym_index_flags] = "index_flags",
  [anon_sym_index_label] = "index_label",
  [anon_sym_index_number] = "index_number",
  [anon_sym_index_size] = "index_size",
  [anon_sym_index_subject] = "index_subject",
  [anon_sym_index_tag] = "index_tag",
  [anon_sym_index_tags] = "index_tags",
  [anon_sym_indicator] = "indicator",
  [anon_sym_markers] = "markers",
  [anon_sym_message] = "message",
  [anon_sym_normal] = "normal",
  [anon_sym_progress] = "progress",
  [anon_sym_prompt] = "prompt",
  [aux_sym_object_token1] = "object_token1",
  [anon_sym_search] = "search",
  [anon_sym_signature] = "signature",
  [anon_sym_status] = "status",
  [anon_sym_tilde] = "tilde",
  [anon_sym_tree] = "tree",
  [anon_sym_underline] = "underline",
  [anon_sym_sidebar_background] = "sidebar_background",
  [anon_sym_sidebar_divider] = "sidebar_divider",
  [anon_sym_sidebar_flagged] = "sidebar_flagged",
  [anon_sym_sidebar_highlight] = "sidebar_highlight",
  [anon_sym_sidebar_indicator] = "sidebar_indicator",
  [anon_sym_sidebar_new] = "sidebar_new",
  [anon_sym_sidebar_ordinary] = "sidebar_ordinary",
  [anon_sym_sidebar_spool_file] = "sidebar_spool_file",
  [anon_sym_security_encrypt] = "security_encrypt",
  [anon_sym_security_sign] = "security_sign",
  [anon_sym_security_both] = "security_both",
  [anon_sym_security_none] = "security_none",
  [anon_sym_default] = "default",
  [anon_sym_black] = "black",
  [anon_sym_red] = "red",
  [anon_sym_green] = "green",
  [anon_sym_yellow] = "yellow",
  [anon_sym_blue] = "blue",
  [anon_sym_magenta] = "magenta",
  [anon_sym_cyan] = "cyan",
  [anon_sym_white] = "white",
  [aux_sym_color_token1] = "color_token1",
  [aux_sym_color_token2] = "color_token2",
  [anon_sym_none] = "none",
  [anon_sym_reverse] = "reverse",
  [anon_sym_standout] = "standout",
  [anon_sym_color] = "command",
  [anon_sym_uncolor] = "command",
  [anon_sym_crypt_DASHhook] = "crypt-hook",
  [anon_sym_index_DASHformat_DASHhook] = "command",
  [anon_sym_BANG] = "!",
  [anon_sym_exec] = "command",
  [anon_sym_fcc_DASHsave_DASHhook] = "command",
  [anon_sym_fcc_DASHhook] = "fcc-hook",
  [anon_sym_save_DASHhook] = "save-hook",
  [anon_sym_folder_DASHhook] = "folder-hook",
  [anon_sym_DASHnoregex] = "-noregex",
  [anon_sym_DASHrx] = "command_line_option",
  [anon_sym_DASHaddr] = "command_line_option",
  [anon_sym_group] = "command",
  [anon_sym_ungroup] = "command",
  [anon_sym_hdr_order] = "command",
  [anon_sym_unhdr_order] = "command",
  [anon_sym_ifdef] = "command",
  [anon_sym_ifndef] = "command",
  [anon_sym_finish] = "command",
  [anon_sym_ignore] = "command",
  [anon_sym_unignore] = "command",
  [anon_sym_lists] = "command",
  [anon_sym_unlists] = "command",
  [anon_sym_subscribe] = "command",
  [anon_sym_unsubscribe] = "command",
  [anon_sym_macro] = "command",
  [anon_sym_unmacro] = "command",
  [anon_sym_mailboxes] = "command",
  [anon_sym_named_DASHmailboxes] = "command",
  [anon_sym_unmailboxes] = "command",
  [anon_sym_mailto_allow] = "command",
  [anon_sym_unmailto_allow] = "command",
  [anon_sym_echo] = "command",
  [anon_sym_cd] = "command",
  [anon_sym_mbox_DASHhook] = "mbox-hook",
  [anon_sym_message_DASHhook] = "message-hook",
  [anon_sym_mime_lookup] = "command",
  [anon_sym_unmime_lookup] = "command",
  [anon_sym_mono] = "command",
  [anon_sym_unmono] = "command",
  [anon_sym_my_hdr] = "command",
  [anon_sym_unmy_hdr] = "command",
  [anon_sym_open_DASHhook] = "open-hook",
  [anon_sym_close_DASHhook] = "close-hook",
  [anon_sym_append_DASHhook] = "append-hook",
  [anon_sym_push] = "command",
  [anon_sym_reply_DASHhook] = "reply-hook",
  [anon_sym_send_DASHhook] = "send-hook",
  [anon_sym_send2_DASHhook] = "send2-hook",
  [anon_sym_spam] = "command",
  [anon_sym_nospam] = "command",
  [anon_sym_subjectrx] = "command",
  [anon_sym_unsubjectrx] = "command",
  [anon_sym_subscribe_DASHto] = "command",
  [anon_sym_unsubscribe_DASHfrom] = "command",
  [anon_sym_timeout_DASHhook] = "timeout-hook",
  [anon_sym_startup_DASHhook] = "startup-hook",
  [anon_sym_shutdown_DASHhook] = "shutdown-hook",
  [anon_sym_unhook] = "command",
  [anon_sym_set] = "command",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_EQ] = "=",
  [anon_sym_AMP] = "&",
  [anon_sym_unset] = "command",
  [anon_sym_reset] = "command",
  [anon_sym_toggle] = "command",
  [anon_sym_setenv] = "command",
  [aux_sym_setenv_directive_token1] = "value",
  [anon_sym_unsetenv] = "command",
  [anon_sym_sidebar_pin] = "command",
  [anon_sym_sidebar_unpin] = "command",
  [anon_sym_score] = "command",
  [anon_sym_unscore] = "command",
  [sym_option] = "option",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_ask_DASHyes] = "ask-yes",
  [anon_sym_ask_DASHno] = "ask-no",
  [sym_int] = "int",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_token1] = "string",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token2] = "shell",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__string_token3] = "shell",
  [sym__word] = "shell",
  [anon_sym_source] = "command",
  [sym_comment] = "comment",
  [sym__eol] = "_eol",
  [aux_sym__space_token1] = "_space_token1",
  [sym_file] = "file",
  [sym__command] = "_command",
  [sym_account_hook_directive] = "account_hook_directive",
  [sym_group_name] = "group_name",
  [sym__group] = "_group",
  [sym__addresses] = "_addresses",
  [sym_alias_directive] = "alias_directive",
  [sym_address] = "address",
  [sym_unalias_directive] = "unalias_directive",
  [sym_key] = "key",
  [sym__regexes] = "_regexes",
  [sym_alternates_directive] = "alternates_directive",
  [sym_unalternates_directive] = "unalternates_directive",
  [sym_alternative_order_directive] = "alternative_order_directive",
  [sym_unalternative_order_directive] = "unalternative_order_directive",
  [sym_mime] = "mime",
  [sym__mime_types] = "_mime_types",
  [sym__mimes] = "_mimes",
  [sym_disposition] = "disposition",
  [sym_attachments_directive] = "attachments_directive",
  [sym_unattachments_directive] = "unattachments_directive",
  [sym_auto_view_directive] = "auto_view_directive",
  [sym_unauto_view_directive] = "unauto_view_directive",
  [sym_map] = "map",
  [sym__maps] = "_maps",
  [sym__functions] = "_functions",
  [sym_bind_directive] = "bind_directive",
  [sym_unbind_directive] = "unbind_directive",
  [sym_alias] = "alias",
  [sym_charset] = "charset",
  [sym_charset_hook_directive] = "charset_hook_directive",
  [sym_iconv_hook_directive] = "iconv_hook_directive",
  [sym_pattern] = "pattern",
  [sym_object] = "object",
  [sym_composeobject] = "composeobject",
  [sym_color] = "color",
  [sym_attribute] = "attribute",
  [sym__attributes] = "_attributes",
  [sym_foreground] = "foreground",
  [sym_background] = "background",
  [sym_color_directive] = "color_directive",
  [sym_uncolor_directive] = "uncolor_directive",
  [sym_keyid] = "keyid",
  [sym_crypt_hook_directive] = "crypt_hook_directive",
  [sym_name] = "name",
  [sym_index_format_hook_directive] = "index_format_hook_directive",
  [sym_exec_directive] = "exec_directive",
  [sym_fcc_save_hook_directive] = "fcc_save_hook_directive",
  [sym_fcc_hook_directive] = "fcc_hook_directive",
  [sym_save_hook_directive] = "save_hook_directive",
  [sym_folder_hook_directive] = "folder_hook_directive",
  [sym__rx_addr] = "_rx_addr",
  [sym_group_directive] = "group_directive",
  [sym_ungroup_directive] = "ungroup_directive",
  [sym_header] = "header",
  [sym__headers] = "_headers",
  [sym_hdr_order_directive] = "hdr_order_directive",
  [sym_unhdr_order_directive] = "unhdr_order_directive",
  [sym_symbol] = "symbol",
  [sym_ifdef_directive] = "ifdef_directive",
  [sym_ifndef_directive] = "ifndef_directive",
  [sym_finish_directive] = "finish_directive",
  [sym__strings] = "_strings",
  [sym_ignore_directive] = "ignore_directive",
  [sym_unignore_directive] = "unignore_directive",
  [sym_lists_directive] = "lists_directive",
  [sym_unlists_directive] = "unlists_directive",
  [sym_subscribe_directive] = "subscribe_directive",
  [sym_unsubscribe_directive] = "unsubscribe_directive",
  [sym_sequence] = "sequence",
  [sym_macro_directive] = "macro_directive",
  [sym_unmacro_directive] = "unmacro_directive",
  [sym_mailbox] = "mailbox",
  [sym__mailboxes] = "_mailboxes",
  [sym_description] = "description",
  [sym_mailboxes_directive] = "mailboxes_directive",
  [sym_named_mailboxes_directive] = "named_mailboxes_directive",
  [sym_unmailboxes_directive] = "unmailboxes_directive",
  [sym_header_field] = "header_field",
  [sym__header_fields] = "_header_fields",
  [sym_mailto_allow_directive] = "mailto_allow_directive",
  [sym_unmailto_allow_directive] = "unmailto_allow_directive",
  [sym_message] = "message",
  [sym_echo_directive] = "echo_directive",
  [sym_directory] = "directory",
  [sym_cd_directive] = "cd_directive",
  [sym_mbox_hook_directive] = "mbox_hook_directive",
  [sym_message_hook_directive] = "message_hook_directive",
  [sym_mime_lookup_directive] = "mime_lookup_directive",
  [sym_unmime_lookup_directive] = "unmime_lookup_directive",
  [sym_mono_directive] = "mono_directive",
  [sym_unmono_directive] = "unmono_directive",
  [sym_my_hdr_directive] = "my_hdr_directive",
  [sym_unmy_hdr_directive] = "unmy_hdr_directive",
  [sym_shell_command] = "shell_command",
  [sym_open_hook_directive] = "open_hook_directive",
  [sym_close_hook_directive] = "close_hook_directive",
  [sym_append_hook_directive] = "append_hook_directive",
  [sym_push_directive] = "push_directive",
  [sym_reply_hook_directive] = "reply_hook_directive",
  [sym_send_hook_directive] = "send_hook_directive",
  [sym_send2_hook_directive] = "send2_hook_directive",
  [sym_format] = "format",
  [sym_spam_directive] = "spam_directive",
  [sym_nospam_directive] = "nospam_directive",
  [sym_replacement] = "replacement",
  [sym_subjectrx_directive] = "subjectrx_directive",
  [sym_unsubjectrx_directive] = "unsubjectrx_directive",
  [sym_uri] = "uri",
  [sym_subscribe_to_directive] = "subscribe_to_directive",
  [sym_unsubscribe_from_directive] = "unsubscribe_from_directive",
  [sym_timeout_hook_directive] = "timeout_hook_directive",
  [sym_startup_hook_directive] = "startup_hook_directive",
  [sym_shutdown_hook_directive] = "shutdown_hook_directive",
  [sym_hook_type] = "hook_type",
  [sym_unhook_directive] = "unhook_directive",
  [sym_set_directive] = "set_directive",
  [sym__options3] = "_options3",
  [sym__options2] = "_options2",
  [sym__options] = "_options",
  [sym_unset_directive] = "unset_directive",
  [sym_reset_directive] = "reset_directive",
  [sym_toggle_directive] = "toggle_directive",
  [sym_setenv_directive] = "setenv_directive",
  [sym_unsetenv_directive] = "unsetenv_directive",
  [sym_sidebar_pin_directive] = "sidebar_pin_directive",
  [sym_sidebar_unpin_directive] = "sidebar_unpin_directive",
  [sym_score_directive] = "score_directive",
  [sym_unscore_directive] = "unscore_directive",
  [sym_quadoption] = "quadoption",
  [sym__string] = "_string",
  [sym__regex] = "_regex",
  [sym_source_directive] = "source_directive",
  [sym__space] = "_space",
  [sym__end] = "_end",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__addresses_repeat1] = "_addresses_repeat1",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym__regexes_repeat1] = "_regexes_repeat1",
  [aux_sym__mime_types_repeat1] = "_mime_types_repeat1",
  [aux_sym__mimes_repeat1] = "_mimes_repeat1",
  [aux_sym__maps_repeat1] = "_maps_repeat1",
  [aux_sym__functions_repeat1] = "_functions_repeat1",
  [aux_sym__attributes_repeat1] = "_attributes_repeat1",
  [aux_sym__headers_repeat1] = "_headers_repeat1",
  [aux_sym__strings_repeat1] = "_strings_repeat1",
  [aux_sym__mailboxes_repeat1] = "_mailboxes_repeat1",
  [aux_sym_named_mailboxes_directive_repeat1] = "named_mailboxes_directive_repeat1",
  [aux_sym__header_fields_repeat1] = "_header_fields_repeat1",
  [aux_sym__options3_repeat1] = "_options3_repeat1",
  [aux_sym__options2_repeat1] = "_options2_repeat1",
  [aux_sym__options_repeat1] = "_options_repeat1",
  [aux_sym__space_repeat1] = "_space_repeat1",
  [alias_sym_path] = "path",
  [alias_sym_regex] = "regex",
  [alias_sym_sub_mime_type] = "sub_mime_type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_account_DASHhook] = anon_sym_account_DASHhook,
  [anon_sym_DASHgroup] = anon_sym_DASHgroup,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_unalias] = anon_sym_unalias,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_key_token2] = aux_sym_key_token2,
  [aux_sym_key_token3] = aux_sym_key_token3,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_alternates] = anon_sym_unalias,
  [anon_sym_unalternates] = anon_sym_unalias,
  [anon_sym_alternative_order] = anon_sym_unalias,
  [anon_sym_unalternative_order] = anon_sym_unalias,
  [sym_mime_type] = sym_mime_type,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_attachments] = anon_sym_unalias,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_unattachments] = anon_sym_unalias,
  [anon_sym_auto_view] = anon_sym_unalias,
  [anon_sym_unauto_view] = anon_sym_unalias,
  [anon_sym_attach] = anon_sym_attach,
  [anon_sym_browser] = anon_sym_browser,
  [anon_sym_compose] = anon_sym_compose,
  [anon_sym_editor] = anon_sym_editor,
  [anon_sym_generic] = anon_sym_generic,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_mix] = anon_sym_mix,
  [anon_sym_pager] = anon_sym_pager,
  [anon_sym_pgp] = anon_sym_pgp,
  [anon_sym_postpone] = anon_sym_postpone,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_smime] = anon_sym_smime,
  [sym_function] = sym_function,
  [anon_sym_bind] = anon_sym_unalias,
  [anon_sym_unbind] = anon_sym_unalias,
  [anon_sym_charset_DASHhook] = anon_sym_charset_DASHhook,
  [anon_sym_iconv_DASHhook] = anon_sym_iconv_DASHhook,
  [anon_sym_attach_headers] = anon_sym_attach_headers,
  [anon_sym_attachment] = anon_sym_attachment,
  [anon_sym_body] = anon_sym_body,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_hdrdefault] = anon_sym_hdrdefault,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_index_author] = anon_sym_index_author,
  [anon_sym_index_collapsed] = anon_sym_index_collapsed,
  [anon_sym_index_date] = anon_sym_index_date,
  [anon_sym_index_flags] = anon_sym_index_flags,
  [anon_sym_index_label] = anon_sym_index_label,
  [anon_sym_index_number] = anon_sym_index_number,
  [anon_sym_index_size] = anon_sym_index_size,
  [anon_sym_index_subject] = anon_sym_index_subject,
  [anon_sym_index_tag] = anon_sym_index_tag,
  [anon_sym_index_tags] = anon_sym_index_tags,
  [anon_sym_indicator] = anon_sym_indicator,
  [anon_sym_markers] = anon_sym_markers,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_normal] = anon_sym_normal,
  [anon_sym_progress] = anon_sym_progress,
  [anon_sym_prompt] = anon_sym_prompt,
  [aux_sym_object_token1] = aux_sym_object_token1,
  [anon_sym_search] = anon_sym_search,
  [anon_sym_signature] = anon_sym_signature,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_tilde] = anon_sym_tilde,
  [anon_sym_tree] = anon_sym_tree,
  [anon_sym_underline] = anon_sym_underline,
  [anon_sym_sidebar_background] = anon_sym_sidebar_background,
  [anon_sym_sidebar_divider] = anon_sym_sidebar_divider,
  [anon_sym_sidebar_flagged] = anon_sym_sidebar_flagged,
  [anon_sym_sidebar_highlight] = anon_sym_sidebar_highlight,
  [anon_sym_sidebar_indicator] = anon_sym_sidebar_indicator,
  [anon_sym_sidebar_new] = anon_sym_sidebar_new,
  [anon_sym_sidebar_ordinary] = anon_sym_sidebar_ordinary,
  [anon_sym_sidebar_spool_file] = anon_sym_sidebar_spool_file,
  [anon_sym_security_encrypt] = anon_sym_security_encrypt,
  [anon_sym_security_sign] = anon_sym_security_sign,
  [anon_sym_security_both] = anon_sym_security_both,
  [anon_sym_security_none] = anon_sym_security_none,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_black] = anon_sym_black,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_green] = anon_sym_green,
  [anon_sym_yellow] = anon_sym_yellow,
  [anon_sym_blue] = anon_sym_blue,
  [anon_sym_magenta] = anon_sym_magenta,
  [anon_sym_cyan] = anon_sym_cyan,
  [anon_sym_white] = anon_sym_white,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [aux_sym_color_token2] = aux_sym_color_token2,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_reverse] = anon_sym_reverse,
  [anon_sym_standout] = anon_sym_standout,
  [anon_sym_color] = anon_sym_unalias,
  [anon_sym_uncolor] = anon_sym_unalias,
  [anon_sym_crypt_DASHhook] = anon_sym_crypt_DASHhook,
  [anon_sym_index_DASHformat_DASHhook] = anon_sym_unalias,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_exec] = anon_sym_unalias,
  [anon_sym_fcc_DASHsave_DASHhook] = anon_sym_unalias,
  [anon_sym_fcc_DASHhook] = anon_sym_fcc_DASHhook,
  [anon_sym_save_DASHhook] = anon_sym_save_DASHhook,
  [anon_sym_folder_DASHhook] = anon_sym_folder_DASHhook,
  [anon_sym_DASHnoregex] = anon_sym_DASHnoregex,
  [anon_sym_DASHrx] = anon_sym_DASHgroup,
  [anon_sym_DASHaddr] = anon_sym_DASHgroup,
  [anon_sym_group] = anon_sym_unalias,
  [anon_sym_ungroup] = anon_sym_unalias,
  [anon_sym_hdr_order] = anon_sym_unalias,
  [anon_sym_unhdr_order] = anon_sym_unalias,
  [anon_sym_ifdef] = anon_sym_unalias,
  [anon_sym_ifndef] = anon_sym_unalias,
  [anon_sym_finish] = anon_sym_unalias,
  [anon_sym_ignore] = anon_sym_unalias,
  [anon_sym_unignore] = anon_sym_unalias,
  [anon_sym_lists] = anon_sym_unalias,
  [anon_sym_unlists] = anon_sym_unalias,
  [anon_sym_subscribe] = anon_sym_unalias,
  [anon_sym_unsubscribe] = anon_sym_unalias,
  [anon_sym_macro] = anon_sym_unalias,
  [anon_sym_unmacro] = anon_sym_unalias,
  [anon_sym_mailboxes] = anon_sym_unalias,
  [anon_sym_named_DASHmailboxes] = anon_sym_unalias,
  [anon_sym_unmailboxes] = anon_sym_unalias,
  [anon_sym_mailto_allow] = anon_sym_unalias,
  [anon_sym_unmailto_allow] = anon_sym_unalias,
  [anon_sym_echo] = anon_sym_unalias,
  [anon_sym_cd] = anon_sym_unalias,
  [anon_sym_mbox_DASHhook] = anon_sym_mbox_DASHhook,
  [anon_sym_message_DASHhook] = anon_sym_message_DASHhook,
  [anon_sym_mime_lookup] = anon_sym_unalias,
  [anon_sym_unmime_lookup] = anon_sym_unalias,
  [anon_sym_mono] = anon_sym_unalias,
  [anon_sym_unmono] = anon_sym_unalias,
  [anon_sym_my_hdr] = anon_sym_unalias,
  [anon_sym_unmy_hdr] = anon_sym_unalias,
  [anon_sym_open_DASHhook] = anon_sym_open_DASHhook,
  [anon_sym_close_DASHhook] = anon_sym_close_DASHhook,
  [anon_sym_append_DASHhook] = anon_sym_append_DASHhook,
  [anon_sym_push] = anon_sym_unalias,
  [anon_sym_reply_DASHhook] = anon_sym_reply_DASHhook,
  [anon_sym_send_DASHhook] = anon_sym_send_DASHhook,
  [anon_sym_send2_DASHhook] = anon_sym_send2_DASHhook,
  [anon_sym_spam] = anon_sym_unalias,
  [anon_sym_nospam] = anon_sym_unalias,
  [anon_sym_subjectrx] = anon_sym_unalias,
  [anon_sym_unsubjectrx] = anon_sym_unalias,
  [anon_sym_subscribe_DASHto] = anon_sym_unalias,
  [anon_sym_unsubscribe_DASHfrom] = anon_sym_unalias,
  [anon_sym_timeout_DASHhook] = anon_sym_timeout_DASHhook,
  [anon_sym_startup_DASHhook] = anon_sym_startup_DASHhook,
  [anon_sym_shutdown_DASHhook] = anon_sym_shutdown_DASHhook,
  [anon_sym_unhook] = anon_sym_unalias,
  [anon_sym_set] = anon_sym_unalias,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_unset] = anon_sym_unalias,
  [anon_sym_reset] = anon_sym_unalias,
  [anon_sym_toggle] = anon_sym_unalias,
  [anon_sym_setenv] = anon_sym_unalias,
  [aux_sym_setenv_directive_token1] = aux_sym_setenv_directive_token1,
  [anon_sym_unsetenv] = anon_sym_unalias,
  [anon_sym_sidebar_pin] = anon_sym_unalias,
  [anon_sym_sidebar_unpin] = anon_sym_unalias,
  [anon_sym_score] = anon_sym_unalias,
  [anon_sym_unscore] = anon_sym_unalias,
  [sym_option] = sym_option,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_ask_DASHyes] = anon_sym_ask_DASHyes,
  [anon_sym_ask_DASHno] = anon_sym_ask_DASHno,
  [sym_int] = sym_int,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token2] = aux_sym__string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__string_token3] = aux_sym__string_token2,
  [sym__word] = aux_sym__string_token2,
  [anon_sym_source] = anon_sym_unalias,
  [sym_comment] = sym_comment,
  [sym__eol] = sym__eol,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_file] = sym_file,
  [sym__command] = sym__command,
  [sym_account_hook_directive] = sym_account_hook_directive,
  [sym_group_name] = sym_group_name,
  [sym__group] = sym__group,
  [sym__addresses] = sym__addresses,
  [sym_alias_directive] = sym_alias_directive,
  [sym_address] = sym_address,
  [sym_unalias_directive] = sym_unalias_directive,
  [sym_key] = sym_key,
  [sym__regexes] = sym__regexes,
  [sym_alternates_directive] = sym_alternates_directive,
  [sym_unalternates_directive] = sym_unalternates_directive,
  [sym_alternative_order_directive] = sym_alternative_order_directive,
  [sym_unalternative_order_directive] = sym_unalternative_order_directive,
  [sym_mime] = sym_mime,
  [sym__mime_types] = sym__mime_types,
  [sym__mimes] = sym__mimes,
  [sym_disposition] = sym_disposition,
  [sym_attachments_directive] = sym_attachments_directive,
  [sym_unattachments_directive] = sym_unattachments_directive,
  [sym_auto_view_directive] = sym_auto_view_directive,
  [sym_unauto_view_directive] = sym_unauto_view_directive,
  [sym_map] = sym_map,
  [sym__maps] = sym__maps,
  [sym__functions] = sym__functions,
  [sym_bind_directive] = sym_bind_directive,
  [sym_unbind_directive] = sym_unbind_directive,
  [sym_alias] = sym_alias,
  [sym_charset] = sym_charset,
  [sym_charset_hook_directive] = sym_charset_hook_directive,
  [sym_iconv_hook_directive] = sym_iconv_hook_directive,
  [sym_pattern] = sym_pattern,
  [sym_object] = sym_object,
  [sym_composeobject] = sym_composeobject,
  [sym_color] = sym_color,
  [sym_attribute] = sym_attribute,
  [sym__attributes] = sym__attributes,
  [sym_foreground] = sym_foreground,
  [sym_background] = sym_background,
  [sym_color_directive] = sym_color_directive,
  [sym_uncolor_directive] = sym_uncolor_directive,
  [sym_keyid] = sym_keyid,
  [sym_crypt_hook_directive] = sym_crypt_hook_directive,
  [sym_name] = sym_name,
  [sym_index_format_hook_directive] = sym_index_format_hook_directive,
  [sym_exec_directive] = sym_exec_directive,
  [sym_fcc_save_hook_directive] = sym_fcc_save_hook_directive,
  [sym_fcc_hook_directive] = sym_fcc_hook_directive,
  [sym_save_hook_directive] = sym_save_hook_directive,
  [sym_folder_hook_directive] = sym_folder_hook_directive,
  [sym__rx_addr] = sym__rx_addr,
  [sym_group_directive] = sym_group_directive,
  [sym_ungroup_directive] = sym_ungroup_directive,
  [sym_header] = sym_header,
  [sym__headers] = sym__headers,
  [sym_hdr_order_directive] = sym_hdr_order_directive,
  [sym_unhdr_order_directive] = sym_unhdr_order_directive,
  [sym_symbol] = sym_symbol,
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym_ifndef_directive] = sym_ifndef_directive,
  [sym_finish_directive] = sym_finish_directive,
  [sym__strings] = sym__strings,
  [sym_ignore_directive] = sym_ignore_directive,
  [sym_unignore_directive] = sym_unignore_directive,
  [sym_lists_directive] = sym_lists_directive,
  [sym_unlists_directive] = sym_unlists_directive,
  [sym_subscribe_directive] = sym_subscribe_directive,
  [sym_unsubscribe_directive] = sym_unsubscribe_directive,
  [sym_sequence] = sym_sequence,
  [sym_macro_directive] = sym_macro_directive,
  [sym_unmacro_directive] = sym_unmacro_directive,
  [sym_mailbox] = sym_mailbox,
  [sym__mailboxes] = sym__mailboxes,
  [sym_description] = sym_description,
  [sym_mailboxes_directive] = sym_mailboxes_directive,
  [sym_named_mailboxes_directive] = sym_named_mailboxes_directive,
  [sym_unmailboxes_directive] = sym_unmailboxes_directive,
  [sym_header_field] = sym_header_field,
  [sym__header_fields] = sym__header_fields,
  [sym_mailto_allow_directive] = sym_mailto_allow_directive,
  [sym_unmailto_allow_directive] = sym_unmailto_allow_directive,
  [sym_message] = sym_message,
  [sym_echo_directive] = sym_echo_directive,
  [sym_directory] = sym_directory,
  [sym_cd_directive] = sym_cd_directive,
  [sym_mbox_hook_directive] = sym_mbox_hook_directive,
  [sym_message_hook_directive] = sym_message_hook_directive,
  [sym_mime_lookup_directive] = sym_mime_lookup_directive,
  [sym_unmime_lookup_directive] = sym_unmime_lookup_directive,
  [sym_mono_directive] = sym_mono_directive,
  [sym_unmono_directive] = sym_unmono_directive,
  [sym_my_hdr_directive] = sym_my_hdr_directive,
  [sym_unmy_hdr_directive] = sym_unmy_hdr_directive,
  [sym_shell_command] = sym_shell_command,
  [sym_open_hook_directive] = sym_open_hook_directive,
  [sym_close_hook_directive] = sym_close_hook_directive,
  [sym_append_hook_directive] = sym_append_hook_directive,
  [sym_push_directive] = sym_push_directive,
  [sym_reply_hook_directive] = sym_reply_hook_directive,
  [sym_send_hook_directive] = sym_send_hook_directive,
  [sym_send2_hook_directive] = sym_send2_hook_directive,
  [sym_format] = sym_format,
  [sym_spam_directive] = sym_spam_directive,
  [sym_nospam_directive] = sym_nospam_directive,
  [sym_replacement] = sym_replacement,
  [sym_subjectrx_directive] = sym_subjectrx_directive,
  [sym_unsubjectrx_directive] = sym_unsubjectrx_directive,
  [sym_uri] = sym_uri,
  [sym_subscribe_to_directive] = sym_subscribe_to_directive,
  [sym_unsubscribe_from_directive] = sym_unsubscribe_from_directive,
  [sym_timeout_hook_directive] = sym_timeout_hook_directive,
  [sym_startup_hook_directive] = sym_startup_hook_directive,
  [sym_shutdown_hook_directive] = sym_shutdown_hook_directive,
  [sym_hook_type] = sym_hook_type,
  [sym_unhook_directive] = sym_unhook_directive,
  [sym_set_directive] = sym_set_directive,
  [sym__options3] = sym__options3,
  [sym__options2] = sym__options2,
  [sym__options] = sym__options,
  [sym_unset_directive] = sym_unset_directive,
  [sym_reset_directive] = sym_reset_directive,
  [sym_toggle_directive] = sym_toggle_directive,
  [sym_setenv_directive] = sym_setenv_directive,
  [sym_unsetenv_directive] = sym_unsetenv_directive,
  [sym_sidebar_pin_directive] = sym_sidebar_pin_directive,
  [sym_sidebar_unpin_directive] = sym_sidebar_unpin_directive,
  [sym_score_directive] = sym_score_directive,
  [sym_unscore_directive] = sym_unscore_directive,
  [sym_quadoption] = sym_quadoption,
  [sym__string] = sym__string,
  [sym__regex] = sym__regex,
  [sym_source_directive] = sym_source_directive,
  [sym__space] = sym__space,
  [sym__end] = sym__end,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__addresses_repeat1] = aux_sym__addresses_repeat1,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym__regexes_repeat1] = aux_sym__regexes_repeat1,
  [aux_sym__mime_types_repeat1] = aux_sym__mime_types_repeat1,
  [aux_sym__mimes_repeat1] = aux_sym__mimes_repeat1,
  [aux_sym__maps_repeat1] = aux_sym__maps_repeat1,
  [aux_sym__functions_repeat1] = aux_sym__functions_repeat1,
  [aux_sym__attributes_repeat1] = aux_sym__attributes_repeat1,
  [aux_sym__headers_repeat1] = aux_sym__headers_repeat1,
  [aux_sym__strings_repeat1] = aux_sym__strings_repeat1,
  [aux_sym__mailboxes_repeat1] = aux_sym__mailboxes_repeat1,
  [aux_sym_named_mailboxes_directive_repeat1] = aux_sym_named_mailboxes_directive_repeat1,
  [aux_sym__header_fields_repeat1] = aux_sym__header_fields_repeat1,
  [aux_sym__options3_repeat1] = aux_sym__options3_repeat1,
  [aux_sym__options2_repeat1] = aux_sym__options2_repeat1,
  [aux_sym__options_repeat1] = aux_sym__options_repeat1,
  [aux_sym__space_repeat1] = aux_sym__space_repeat1,
  [alias_sym_path] = alias_sym_path,
  [alias_sym_regex] = alias_sym_regex,
  [alias_sym_sub_mime_type] = alias_sym_sub_mime_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_account_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHgroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unalias] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alternates] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unalternates] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_alternative_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unalternative_order] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attachments] = {
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unattachments] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_view] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unauto_view] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_attach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_browser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_editor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pager] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postpone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smime] = {
    .visible = true,
    .named = false,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unbind] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_charset_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iconv_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attach_headers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attachment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hdrdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_collapsed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_flags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_subject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_tags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indicator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_markers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_progress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_search] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tilde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_underline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_divider] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_flagged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_highlight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_indicator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_ordinary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar_spool_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security_encrypt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security_sign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magenta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_white] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_standout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_uncolor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_crypt_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index_DASHformat_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fcc_DASHsave_DASHhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fcc_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_folder_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHnoregex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHrx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASHaddr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ungroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hdr_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unhdr_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ifdef] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ifndef] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_finish] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ignore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unignore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lists] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unlists] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subscribe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsubscribe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmacro] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_named_DASHmailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmailboxes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mailto_allow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmailto_allow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mbox_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mime_lookup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmime_lookup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mono] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmono] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_my_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmy_hdr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_open_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_reply_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_send2_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nospam] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subjectrx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsubjectrx] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_subscribe_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsubscribe_DASHfrom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_timeout_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startup_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shutdown_DASHhook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unhook] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_toggle] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_setenv] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_setenv_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unsetenv] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sidebar_pin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sidebar_unpin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_score] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unscore] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHyes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHno] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token3] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_account_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym__addresses] = {
    .visible = false,
    .named = true,
  },
  [sym_alias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_unalias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__regexes] = {
    .visible = false,
    .named = true,
  },
  [sym_alternates_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unalternates_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alternative_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unalternative_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mime] = {
    .visible = true,
    .named = true,
  },
  [sym__mime_types] = {
    .visible = false,
    .named = true,
  },
  [sym__mimes] = {
    .visible = false,
    .named = true,
  },
  [sym_disposition] = {
    .visible = true,
    .named = true,
  },
  [sym_attachments_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unattachments_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_auto_view_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unauto_view_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym__maps] = {
    .visible = false,
    .named = true,
  },
  [sym__functions] = {
    .visible = false,
    .named = true,
  },
  [sym_bind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unbind_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_charset] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_iconv_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_composeobject] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_foreground] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_color_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_uncolor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_keyid] = {
    .visible = true,
    .named = true,
  },
  [sym_crypt_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_index_format_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_fcc_save_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_fcc_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_save_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_folder_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__rx_addr] = {
    .visible = false,
    .named = true,
  },
  [sym_group_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ungroup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym__headers] = {
    .visible = false,
    .named = true,
  },
  [sym_hdr_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unhdr_order_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_ifdef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ifndef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_finish_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__strings] = {
    .visible = false,
    .named = true,
  },
  [sym_ignore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unignore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_lists_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unlists_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_subscribe_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsubscribe_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmacro_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mailbox] = {
    .visible = true,
    .named = true,
  },
  [sym__mailboxes] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_mailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_named_mailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmailboxes_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_header_field] = {
    .visible = true,
    .named = true,
  },
  [sym__header_fields] = {
    .visible = false,
    .named = true,
  },
  [sym_mailto_allow_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmailto_allow_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_echo_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directory] = {
    .visible = true,
    .named = true,
  },
  [sym_cd_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mbox_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_message_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_lookup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmime_lookup_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_mono_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmono_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_my_hdr_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmy_hdr_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_open_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_close_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_append_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_push_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_reply_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_send_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_send2_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym_spam_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_nospam_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement] = {
    .visible = true,
    .named = true,
  },
  [sym_subjectrx_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsubjectrx_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_subscribe_to_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsubscribe_from_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_startup_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_shutdown_hook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_hook_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unhook_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_set_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__options3] = {
    .visible = false,
    .named = true,
  },
  [sym__options2] = {
    .visible = false,
    .named = true,
  },
  [sym__options] = {
    .visible = false,
    .named = true,
  },
  [sym_unset_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_reset_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_toggle_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_setenv_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unsetenv_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sidebar_pin_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_sidebar_unpin_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_score_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unscore_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_quadoption] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__regex] = {
    .visible = false,
    .named = true,
  },
  [sym_source_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__addresses_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__regexes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mime_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mimes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__maps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__functions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__headers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__strings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mailboxes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_mailboxes_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__header_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__options3_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__options2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__space_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_path] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_regex] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sub_mime_type] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 0, .length = 1},
  [6] = {.index = 0, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 3, .length = 2},
  [9] = {.index = 5, .length = 1},
  [10] = {.index = 5, .length = 1},
  [12] = {.index = 6, .length = 1},
  [13] = {.index = 2, .length = 1},
  [14] = {.index = 2, .length = 1},
  [15] = {.index = 7, .length = 1},
  [16] = {.index = 8, .length = 2},
  [17] = {.index = 10, .length = 1},
  [18] = {.index = 11, .length = 2},
  [19] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1, .inherited = true},
  [1] =
    {field_content, 0, .inherited = true},
  [2] =
    {field_content, 2, .inherited = true},
  [3] =
    {field_content, 0, .inherited = true},
    {field_content, 1, .inherited = true},
  [5] =
    {field_content, 1},
  [6] =
    {field_content, 3, .inherited = true},
  [7] =
    {field_content, 4, .inherited = true},
  [8] =
    {field_content, 2, .inherited = true},
    {field_content, 3, .inherited = true},
  [10] =
    {field_content, 5, .inherited = true},
  [11] =
    {field_content, 3, .inherited = true},
    {field_content, 4, .inherited = true},
  [13] =
    {field_content, 4, .inherited = true},
    {field_content, 5, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_regex,
  },
  [4] = {
    [0] = anon_sym_unalias,
  },
  [5] = {
    [1] = alias_sym_path,
  },
  [6] = {
    [0] = anon_sym_unalias,
  },
  [10] = {
    [1] = alias_sym_regex,
  },
  [11] = {
    [2] = alias_sym_sub_mime_type,
  },
  [13] = {
    [0] = anon_sym_unalias,
    [1] = anon_sym_DASHgroup,
  },
  [14] = {
    [0] = anon_sym_unalias,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__string, 2,
    sym__string,
    alias_sym_path,
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
  [89] = 65,
  [90] = 63,
  [91] = 55,
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
  [151] = 140,
  [152] = 152,
  [153] = 84,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 140,
  [158] = 140,
  [159] = 140,
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
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 18,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 65,
  [240] = 240,
  [241] = 63,
  [242] = 242,
  [243] = 243,
  [244] = 16,
  [245] = 245,
  [246] = 246,
  [247] = 17,
  [248] = 16,
  [249] = 17,
  [250] = 250,
  [251] = 17,
  [252] = 252,
  [253] = 253,
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
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 25,
  [274] = 18,
  [275] = 245,
  [276] = 246,
  [277] = 277,
  [278] = 47,
  [279] = 279,
  [280] = 280,
  [281] = 22,
  [282] = 24,
  [283] = 16,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 245,
  [288] = 246,
  [289] = 22,
  [290] = 17,
  [291] = 84,
  [292] = 292,
  [293] = 293,
  [294] = 24,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 25,
  [299] = 299,
  [300] = 16,
  [301] = 301,
  [302] = 16,
  [303] = 17,
  [304] = 16,
  [305] = 17,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 245,
  [382] = 246,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 286,
  [409] = 409,
  [410] = 306,
  [411] = 297,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 76,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 55,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 25,
  [431] = 18,
  [432] = 432,
  [433] = 433,
  [434] = 22,
  [435] = 24,
  [436] = 436,
  [437] = 245,
  [438] = 246,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 16,
  [443] = 17,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 17,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 16,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 476,
  [494] = 478,
  [495] = 479,
  [496] = 492,
  [497] = 473,
  [498] = 480,
  [499] = 489,
  [500] = 500,
  [501] = 476,
  [502] = 478,
  [503] = 479,
  [504] = 492,
  [505] = 473,
  [506] = 480,
  [507] = 489,
  [508] = 508,
  [509] = 476,
  [510] = 478,
  [511] = 479,
  [512] = 473,
  [513] = 480,
  [514] = 489,
  [515] = 476,
  [516] = 516,
  [517] = 479,
  [518] = 476,
  [519] = 478,
  [520] = 479,
  [521] = 476,
  [522] = 478,
  [523] = 479,
  [524] = 476,
  [525] = 478,
  [526] = 479,
  [527] = 476,
  [528] = 478,
  [529] = 479,
  [530] = 484,
  [531] = 500,
  [532] = 491,
  [533] = 464,
  [534] = 467,
  [535] = 468,
  [536] = 474,
  [537] = 484,
  [538] = 500,
  [539] = 491,
  [540] = 464,
  [541] = 467,
  [542] = 468,
  [543] = 474,
  [544] = 484,
  [545] = 500,
  [546] = 491,
  [547] = 467,
  [548] = 468,
  [549] = 474,
  [550] = 484,
  [551] = 500,
  [552] = 491,
  [553] = 484,
  [554] = 500,
  [555] = 491,
  [556] = 484,
  [557] = 500,
  [558] = 491,
  [559] = 484,
  [560] = 500,
  [561] = 491,
  [562] = 484,
  [563] = 500,
  [564] = 491,
  [565] = 478,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(965);
      ADVANCE_MAP(
        '!', 1133,
        '"', 1223,
        '#', 959,
        '&', 1194,
        '\'', 1216,
        '*', 972,
        '+', 1005,
        ',', 969,
        '-', 1007,
        '/', 1003,
        '<', 974,
        '=', 1193,
        '>', 977,
        '?', 1009,
      );
      if (lookahead == '\\') SKIP(961);
      if (lookahead == '`') ADVANCE(1230);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(446);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 'q') ADVANCE(893);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == 'u') ADVANCE(566);
      if (lookahead == 'w') ADVANCE(419);
      if (lookahead == 'y') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 1529,
        '\n', 1524,
        '\r', 1,
        ' ', 995,
        '#', 1523,
        '+', 94,
        '-', 95,
        '/', 1003,
        '=', 1193,
      );
      if (lookahead == '\\') SKIP(26);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\t', 979,
        '\n', 1525,
        '\r', 979,
        ' ', 1530,
        '#', 990,
        '<', 974,
        '\\', 30,
        0x0b, 979,
        '\f', 979,
      );
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1526);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1523);
      if (lookahead == ',') ADVANCE(969);
      if (lookahead == '\\') SKIP(5);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(445);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(798);
      if (lookahead == 'h') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead == 'p') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1531);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '\r') SKIP(4);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(62);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(62);
      if (lookahead == '\r') SKIP(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1287);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(60);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(60);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(65);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(65);
      if (lookahead == '\r') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(47);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(47);
      if (lookahead == '\r') SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(1277);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(1283);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(1279);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(1280);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(1282);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(1281);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(63);
      if (lookahead == '\r') ADVANCE(991);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 1527,
        '\r', 22,
        '"', 1223,
        '#', 1521,
        '\'', 1216,
        '\\', 1262,
        '`', 1230,
        '\t', 1532,
        ' ', 1532,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(22);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(1261);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(1285);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(25);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1288);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1278);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(70);
      if (lookahead == '\r') ADVANCE(991);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\r') ADVANCE(991);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(61);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(61);
      if (lookahead == '\r') SKIP(31);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(64);
      if (lookahead == '\r') ADVANCE(991);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(67);
      if (lookahead == '\r') ADVANCE(991);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(92);
      if (lookahead == '\r') ADVANCE(991);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(93);
      if (lookahead == '\r') ADVANCE(991);
      if (lookahead != 0) ADVANCE(991);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(66);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(66);
      if (lookahead == '\r') SKIP(37);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(41);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '\r') SKIP(39);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1528);
      if (lookahead == '\r') ADVANCE(41);
      if (lookahead == '#') ADVANCE(1523);
      if (lookahead == '\\') SKIP(40);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(98);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '\r') SKIP(42);
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(99);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(99);
      if (lookahead == '\r') SKIP(44);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(1284);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(996);
      if (lookahead == '#') ADVANCE(959);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '=') ADVANCE(1193);
      if (lookahead == '\\') SKIP(14);
      if (lookahead == 'b') ADVANCE(509);
      if (lookahead == 'c') ADVANCE(713);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == 'w') ADVANCE(419);
      if (lookahead == 'y') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(47);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        ' ', 997,
        '"', 1223,
        '\'', 1216,
        '-', 1518,
        '\\', 1241,
        '`', 1230,
        'a', 1485,
        'n', 1434,
        'y', 1365,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(1134);
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '\\') ADVANCE(1271);
      if (lookahead == '`') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '+') ADVANCE(1006);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(1247);
      if (lookahead == '`') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '-') ADVANCE(1387);
      if (lookahead == '\\') ADVANCE(1250);
      if (lookahead == '`') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '\\') ADVANCE(1256);
      if (lookahead == '`') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '+') ADVANCE(1006);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead == '?') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1253);
      if (lookahead == '`') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 54:
      ADVANCE_MAP(
        '"', 1223,
        '\'', 1216,
        '-', 1518,
        '\\', 1244,
        '`', 1230,
        'a', 1485,
        'n', 1434,
        'y', 1365,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '-') ADVANCE(1431);
      if (lookahead == '\\') ADVANCE(1274);
      if (lookahead == '`') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '-') ADVANCE(1387);
      if (lookahead == '\\') ADVANCE(1265);
      if (lookahead == '`') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(1259);
      if (lookahead == '`') ADVANCE(1230);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(57);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(980);
      if (lookahead != 0) ADVANCE(987);
      END_STATE();
    case 58:
      ADVANCE_MAP(
        '"', 1223,
        '\'', 1216,
        '\\', 1238,
        '`', 1230,
        'a', 1494,
        'b', 1432,
        'e', 1464,
        'h', 1334,
        'i', 1422,
        'm', 1303,
        'n', 1437,
        'p', 1463,
        'q', 1505,
        's', 1355,
        't', 1394,
        'u', 1423,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '\\') ADVANCE(1268);
      if (lookahead == '`') ADVANCE(1230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(959);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == 'a') ADVANCE(883);
      if (lookahead == 'b') ADVANCE(510);
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead == 'p') ADVANCE(768);
      if (lookahead == 'q') ADVANCE(909);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == 'u') ADVANCE(608);
      if (lookahead == 'w') ADVANCE(419);
      if (lookahead == 'y') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '&') ADVANCE(1194);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '=') ADVANCE(1193);
      if (lookahead == '?') ADVANCE(1009);
      if (lookahead == '\\') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1205);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(972);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '=') ADVANCE(1193);
      if (lookahead == '\\') SKIP(7);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(447);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(798);
      if (lookahead == 'h') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead == 'p') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(566);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(972);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(63);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(981);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(972);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(64);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(982);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(972);
      if (lookahead == '\\') SKIP(12);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'b') ADVANCE(740);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'm') ADVANCE(453);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'q') ADVANCE(910);
      if (lookahead == 's') ADVANCE(551);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(972);
      if (lookahead == '\\') SKIP(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1002);
      END_STATE();
    case 67:
      if (lookahead == ',') ADVANCE(969);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(67);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(983);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(591);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(70);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(984);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(387);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(421);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(559);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(428);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(430);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(433);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(434);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(435);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(436);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(437);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(438);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(439);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(440);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(441);
      END_STATE();
    case 92:
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(92);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(985);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 93:
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(93);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(986);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 94:
      if (lookahead == '=') ADVANCE(1191);
      END_STATE();
    case 95:
      if (lookahead == '=') ADVANCE(1192);
      END_STATE();
    case 96:
      if (lookahead == '=') ADVANCE(1192);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'g') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      END_STATE();
    case 97:
      if (lookahead == '\\') ADVANCE(1199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97);
      if (lookahead != 0) ADVANCE(1199);
      END_STATE();
    case 98:
      if (lookahead == '\\') SKIP(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1028);
      END_STATE();
    case 99:
      if (lookahead == '\\') SKIP(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(976);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(185);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(732);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(186);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(413);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(918);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(385);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(418);
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(154);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(537);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(659);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(659);
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(420);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(922);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(546);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(715);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(716);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(717);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'b') ADVANCE(613);
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(585);
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(1209);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'g') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(831);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'g') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(830);
      END_STATE();
    case 125:
      ADVANCE_MAP(
        'a', 920,
        'c', 633,
        'e', 145,
        'h', 897,
        'i', 248,
        'm', 462,
        'o', 911,
        'p', 138,
        't', 128,
        'u', 182,
      );
      END_STATE();
    case 126:
      ADVANCE_MAP(
        'a', 920,
        'c', 633,
        'e', 577,
        'h', 897,
        'i', 271,
        'o', 911,
        'p', 138,
        't', 133,
        'u', 182,
      );
      END_STATE();
    case 127:
      ADVANCE_MAP(
        'a', 920,
        'c', 633,
        'e', 577,
        'h', 897,
        'i', 271,
        'o', 911,
        'p', 138,
        't', 160,
        'u', 182,
      );
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 129:
      ADVANCE_MAP(
        'a', 543,
        'b', 471,
        'c', 636,
        'd', 333,
        'g', 783,
        'h', 247,
        'i', 405,
        'l', 476,
        'm', 131,
        's', 225,
      );
      END_STATE();
    case 130:
      ADVANCE_MAP(
        'a', 543,
        'b', 471,
        'c', 636,
        'g', 783,
        'h', 247,
        'i', 405,
        'l', 476,
        'm', 131,
        's', 225,
      );
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(592);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(1120);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(801);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(898);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == 'c') ADVANCE(903);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 't') ADVANCE(1190);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(812);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(882);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(858);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(770);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(779);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(879);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(884);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 170:
      ADVANCE_MAP(
        'a', 908,
        'c', 650,
        'd', 168,
        'f', 526,
        'l', 165,
        'n', 895,
        's', 444,
        't', 141,
      );
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'b') ADVANCE(613);
      if (lookahead == 'e') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(585);
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(912);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(885);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(891);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(924);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(480);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(626);
      if (lookahead == 't') ADVANCE(634);
      END_STATE();
    case 185:
      ADVANCE_MAP(
        'b', 164,
        'd', 465,
        'f', 528,
        'h', 452,
        'i', 588,
        'n', 319,
        'o', 782,
        'p', 457,
        's', 737,
        'u', 584,
      );
      END_STATE();
    case 186:
      ADVANCE_MAP(
        'b', 164,
        'd', 465,
        'f', 528,
        'h', 452,
        'i', 588,
        'n', 319,
        'o', 782,
        's', 737,
      );
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(297);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(334);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(663);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(301);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(700);
      if (lookahead == 't') ADVANCE(718);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(704);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(352);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(481);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == 'p') ADVANCE(729);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == 't') ADVANCE(861);
      if (lookahead == 'u') ADVANCE(863);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == 'p') ADVANCE(729);
      if (lookahead == 't') ADVANCE(892);
      if (lookahead == 'u') ADVANCE(863);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(1135);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(1018);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'd') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == 'x') ADVANCE(315);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'x') ADVANCE(315);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(483);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == 'g') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == 'g') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(874);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(772);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(854);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(804);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(781);
      if (lookahead == 'g') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(781);
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(875);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(796);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(708);
      if (lookahead == 'e') ADVANCE(849);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(1164);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(948);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(1164);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(1116);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(1116);
      if (lookahead == 'p') ADVANCE(515);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 'v') ADVANCE(367);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(1116);
      if (lookahead == 'v') ADVANCE(367);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(1029);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(1039);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(1081);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(1030);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(1049);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(1098);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(1094);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(945);
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(742);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(765);
      if (lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(586);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(748);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(751);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(762);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(795);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 266:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(703);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead == 'g') ADVANCE(586);
      END_STATE();
    case 274:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(811);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(1119);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(1203);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(1027);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(1150);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(1197);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(1072);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(1025);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(1151);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(1084);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(1154);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(1059);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(1113);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(1071);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(797);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(821);
      if (lookahead == 'i') ADVANCE(921);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == 'i') ADVANCE(925);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 382:
      if (lookahead == 'f') ADVANCE(1147);
      END_STATE();
    case 383:
      if (lookahead == 'f') ADVANCE(1148);
      END_STATE();
    case 384:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 385:
      if (lookahead == 'f') ADVANCE(468);
      END_STATE();
    case 386:
      if (lookahead == 'f') ADVANCE(793);
      END_STATE();
    case 387:
      if (lookahead == 'f') ADVANCE(690);
      END_STATE();
    case 388:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 389:
      if (lookahead == 'g') ADVANCE(1064);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(529);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(415);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(417);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(822);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(570);
      END_STATE();
    case 396:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 397:
      if (lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 398:
      if (lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 399:
      if (lookahead == 'g') ADVANCE(397);
      END_STATE();
    case 400:
      if (lookahead == 'g') ADVANCE(330);
      END_STATE();
    case 401:
      if (lookahead == 'g') ADVANCE(330);
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 402:
      if (lookahead == 'g') ADVANCE(788);
      if (lookahead == 'm') ADVANCE(730);
      END_STATE();
    case 403:
      if (lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 404:
      if (lookahead == 'g') ADVANCE(792);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(607);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(377);
      END_STATE();
    case 407:
      if (lookahead == 'h') ADVANCE(1176);
      END_STATE();
    case 408:
      if (lookahead == 'h') ADVANCE(1014);
      END_STATE();
    case 409:
      if (lookahead == 'h') ADVANCE(1149);
      END_STATE();
    case 410:
      if (lookahead == 'h') ADVANCE(1082);
      END_STATE();
    case 411:
      if (lookahead == 'h') ADVANCE(1112);
      END_STATE();
    case 412:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(615);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(535);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(668);
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(856);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(467);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 421:
      if (lookahead == 'h') ADVANCE(671);
      END_STATE();
    case 422:
      if (lookahead == 'h') ADVANCE(562);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(674);
      END_STATE();
    case 424:
      if (lookahead == 'h') ADVANCE(677);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(675);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(676);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(679);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(680);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(681);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(682);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(683);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(685);
      END_STATE();
    case 434:
      if (lookahead == 'h') ADVANCE(686);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(687);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(689);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(691);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(692);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(693);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(694);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(697);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(563);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(952);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(934);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(919);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(873);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(841);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 479:
      if (lookahead == 'j') ADVANCE(328);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 480:
      if (lookahead == 'j') ADVANCE(362);
      END_STATE();
    case 481:
      if (lookahead == 'j') ADVANCE(369);
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 482:
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 483:
      if (lookahead == 'k') ADVANCE(1115);
      END_STATE();
    case 484:
      if (lookahead == 'k') ADVANCE(1189);
      END_STATE();
    case 485:
      if (lookahead == 'k') ADVANCE(1137);
      END_STATE();
    case 486:
      if (lookahead == 'k') ADVANCE(1165);
      END_STATE();
    case 487:
      if (lookahead == 'k') ADVANCE(1173);
      END_STATE();
    case 488:
      if (lookahead == 'k') ADVANCE(1138);
      END_STATE();
    case 489:
      if (lookahead == 'k') ADVANCE(1178);
      END_STATE();
    case 490:
      if (lookahead == 'k') ADVANCE(1174);
      END_STATE();
    case 491:
      if (lookahead == 'k') ADVANCE(1131);
      END_STATE();
    case 492:
      if (lookahead == 'k') ADVANCE(1032);
      END_STATE();
    case 493:
      if (lookahead == 'k') ADVANCE(1177);
      END_STATE();
    case 494:
      if (lookahead == 'k') ADVANCE(1179);
      END_STATE();
    case 495:
      if (lookahead == 'k') ADVANCE(1175);
      END_STATE();
    case 496:
      if (lookahead == 'k') ADVANCE(1139);
      END_STATE();
    case 497:
      if (lookahead == 'k') ADVANCE(966);
      END_STATE();
    case 498:
      if (lookahead == 'k') ADVANCE(1031);
      END_STATE();
    case 499:
      if (lookahead == 'k') ADVANCE(1166);
      END_STATE();
    case 500:
      if (lookahead == 'k') ADVANCE(1187);
      END_STATE();
    case 501:
      if (lookahead == 'k') ADVANCE(1186);
      END_STATE();
    case 502:
      if (lookahead == 'k') ADVANCE(1136);
      END_STATE();
    case 503:
      if (lookahead == 'k') ADVANCE(1188);
      END_STATE();
    case 504:
      if (lookahead == 'k') ADVANCE(1132);
      END_STATE();
    case 505:
      if (lookahead == 'k') ADVANCE(404);
      END_STATE();
    case 506:
      if (lookahead == 'k') ADVANCE(359);
      END_STATE();
    case 507:
      if (lookahead == 'k') ADVANCE(902);
      END_STATE();
    case 508:
      if (lookahead == 'k') ADVANCE(905);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(1074);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(1055);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(951);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == 's') ADVANCE(1206);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead == 'm') ADVANCE(738);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(851);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 't') ADVANCE(861);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(853);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(623);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(666);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(673);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(644);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(688);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'm') ADVANCE(738);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 't') ADVANCE(868);
      if (lookahead == 'u') ADVANCE(886);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 546:
      if (lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(539);
      END_STATE();
    case 548:
      if (lookahead == 'm') ADVANCE(1180);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(1181);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(1185);
      END_STATE();
    case 551:
      if (lookahead == 'm') ADVANCE(462);
      END_STATE();
    case 552:
      if (lookahead == 'm') ADVANCE(738);
      END_STATE();
    case 553:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 554:
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'x') ADVANCE(1022);
      END_STATE();
    case 555:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 557:
      if (lookahead == 'm') ADVANCE(337);
      END_STATE();
    case 558:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 559:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 560:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 561:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 562:
      if (lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 563:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 564:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(1121);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(1117);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(1201);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(1111);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(923);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(917);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 't') ADVANCE(1190);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(880);
      if (lookahead == 't') ADVANCE(900);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == 't') ADVANCE(900);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(618);
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(857);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(702);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(869);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(871);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(888);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(932);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(1163);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(1169);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(1156);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(1212);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(1170);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(1157);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(1184);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(926);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(933);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(942);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(847);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(784);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(930);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(931);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(913);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 676:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 678:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 681:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 683:
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 684:
      if (lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 685:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 686:
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(761);
      END_STATE();
    case 689:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 690:
      if (lookahead == 'o') ADVANCE(800);
      END_STATE();
    case 691:
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 693:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 694:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 695:
      if (lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 696:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(943);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(944);
      END_STATE();
    case 705:
      if (lookahead == 'o') ADVANCE(901);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 707:
      if (lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(789);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(790);
      END_STATE();
    case 710:
      if (lookahead == 'o') ADVANCE(906);
      END_STATE();
    case 711:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 712:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 713:
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 714:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 715:
      if (lookahead == 'o') ADVANCE(807);
      END_STATE();
    case 716:
      if (lookahead == 'o') ADVANCE(808);
      END_STATE();
    case 717:
      if (lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 718:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 719:
      if (lookahead == 'p') ADVANCE(1024);
      END_STATE();
    case 720:
      if (lookahead == 'p') ADVANCE(1143);
      END_STATE();
    case 721:
      if (lookahead == 'p') ADVANCE(1144);
      END_STATE();
    case 722:
      if (lookahead == 'p') ADVANCE(1167);
      END_STATE();
    case 723:
      if (lookahead == 'p') ADVANCE(1168);
      END_STATE();
    case 724:
      if (lookahead == 'p') ADVANCE(967);
      END_STATE();
    case 725:
      if (lookahead == 'p') ADVANCE(515);
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 726:
      if (lookahead == 'p') ADVANCE(515);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 'v') ADVANCE(367);
      END_STATE();
    case 727:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 728:
      if (lookahead == 'p') ADVANCE(887);
      END_STATE();
    case 729:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 730:
      if (lookahead == 'p') ADVANCE(850);
      END_STATE();
    case 731:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 732:
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 733:
      if (lookahead == 'p') ADVANCE(855);
      END_STATE();
    case 734:
      if (lookahead == 'p') ADVANCE(701);
      END_STATE();
    case 735:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 736:
      if (lookahead == 'p') ADVANCE(840);
      END_STATE();
    case 737:
      if (lookahead == 'p') ADVANCE(696);
      END_STATE();
    case 738:
      if (lookahead == 'p') ADVANCE(707);
      END_STATE();
    case 739:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(1129);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(1041);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(1023);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(1045);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(1171);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(1015);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(1130);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(1145);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(1067);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(1146);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(1047);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(1057);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(1096);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(1000);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(1102);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(1001);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(1128);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(1142);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(953);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(936);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(937);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 778:
      if (lookahead == 'r') ADVANCE(816);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 780:
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 781:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 783:
      if (lookahead == 'r') ADVANCE(705);
      END_STATE();
    case 784:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 785:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 786:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 787:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 788:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 789:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 790:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 792:
      if (lookahead == 'r') ADVANCE(645);
      END_STATE();
    case 793:
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 796:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 797:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 798:
      if (lookahead == 'r') ADVANCE(627);
      END_STATE();
    case 799:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 800:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 801:
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 802:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 803:
      if (lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 804:
      if (lookahead == 'r') ADVANCE(950);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 806:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 807:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 808:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 809:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 810:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 811:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 812:
      if (lookahead == 's') ADVANCE(970);
      END_STATE();
    case 813:
      if (lookahead == 's') ADVANCE(1152);
      END_STATE();
    case 814:
      if (lookahead == 's') ADVANCE(1086);
      END_STATE();
    case 815:
      if (lookahead == 's') ADVANCE(1210);
      END_STATE();
    case 816:
      if (lookahead == 's') ADVANCE(1069);
      END_STATE();
    case 817:
      if (lookahead == 's') ADVANCE(971);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(1153);
      END_STATE();
    case 819:
      if (lookahead == 's') ADVANCE(1076);
      END_STATE();
    case 820:
      if (lookahead == 's') ADVANCE(1158);
      END_STATE();
    case 821:
      if (lookahead == 's') ADVANCE(998);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(1053);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(1160);
      END_STATE();
    case 824:
      if (lookahead == 's') ADVANCE(999);
      END_STATE();
    case 825:
      if (lookahead == 's') ADVANCE(1011);
      END_STATE();
    case 826:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(1004);
      END_STATE();
    case 828:
      if (lookahead == 's') ADVANCE(1033);
      END_STATE();
    case 829:
      if (lookahead == 's') ADVANCE(862);
      END_STATE();
    case 830:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 831:
      if (lookahead == 's') ADVANCE(860);
      END_STATE();
    case 832:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 833:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 834:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 835:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 836:
      if (lookahead == 's') ADVANCE(819);
      END_STATE();
    case 837:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 838:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 839:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 840:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 841:
      if (lookahead == 's') ADVANCE(866);
      END_STATE();
    case 842:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 843:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 844:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 845:
      if (lookahead == 's') ADVANCE(843);
      END_STATE();
    case 846:
      if (lookahead == 's') ADVANCE(844);
      END_STATE();
    case 847:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(1196);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(1195);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(1078);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(1127);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(1043);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(1061);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(1100);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(1035);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(949);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(734);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 862:
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 863:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 865:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 871:
      if (lookahead == 't') ADVANCE(825);
      END_STATE();
    case 872:
      if (lookahead == 't') ADVANCE(827);
      END_STATE();
    case 873:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 874:
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 875:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 876:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 877:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 878:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 879:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 880:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 881:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 882:
      if (lookahead == 't') ADVANCE(914);
      END_STATE();
    case 883:
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 884:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 885:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 886:
      if (lookahead == 't') ADVANCE(714);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 888:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 889:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 890:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 891:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 893:
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 894:
      if (lookahead == 'u') ADVANCE(830);
      END_STATE();
    case 895:
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 896:
      if (lookahead == 'u') ADVANCE(720);
      END_STATE();
    case 897:
      if (lookahead == 'u') ADVANCE(864);
      END_STATE();
    case 898:
      if (lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 899:
      if (lookahead == 'u') ADVANCE(739);
      END_STATE();
    case 900:
      if (lookahead == 'u') ADVANCE(814);
      END_STATE();
    case 901:
      if (lookahead == 'u') ADVANCE(721);
      END_STATE();
    case 902:
      if (lookahead == 'u') ADVANCE(722);
      END_STATE();
    case 903:
      if (lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 904:
      if (lookahead == 'u') ADVANCE(611);
      END_STATE();
    case 905:
      if (lookahead == 'u') ADVANCE(723);
      END_STATE();
    case 906:
      if (lookahead == 'u') ADVANCE(724);
      END_STATE();
    case 907:
      if (lookahead == 'u') ADVANCE(852);
      END_STATE();
    case 908:
      if (lookahead == 'u') ADVANCE(881);
      END_STATE();
    case 909:
      if (lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 910:
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 911:
      if (lookahead == 'u') ADVANCE(774);
      END_STATE();
    case 912:
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 913:
      if (lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 914:
      if (lookahead == 'u') ADVANCE(791);
      END_STATE();
    case 915:
      if (lookahead == 'u') ADVANCE(890);
      END_STATE();
    case 916:
      if (lookahead == 'v') ADVANCE(1198);
      END_STATE();
    case 917:
      if (lookahead == 'v') ADVANCE(1200);
      END_STATE();
    case 918:
      if (lookahead == 'v') ADVANCE(460);
      END_STATE();
    case 919:
      if (lookahead == 'v') ADVANCE(477);
      END_STATE();
    case 920:
      if (lookahead == 'v') ADVANCE(374);
      END_STATE();
    case 921:
      if (lookahead == 'v') ADVANCE(379);
      END_STATE();
    case 922:
      if (lookahead == 'v') ADVANCE(461);
      END_STATE();
    case 923:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 924:
      if (lookahead == 'v') ADVANCE(376);
      END_STATE();
    case 925:
      if (lookahead == 'v') ADVANCE(380);
      END_STATE();
    case 926:
      if (lookahead == 'w') ADVANCE(1118);
      END_STATE();
    case 927:
      if (lookahead == 'w') ADVANCE(1012);
      END_STATE();
    case 928:
      if (lookahead == 'w') ADVANCE(1104);
      END_STATE();
    case 929:
      if (lookahead == 'w') ADVANCE(1013);
      END_STATE();
    case 930:
      if (lookahead == 'w') ADVANCE(1161);
      END_STATE();
    case 931:
      if (lookahead == 'w') ADVANCE(1162);
      END_STATE();
    case 932:
      if (lookahead == 'w') ADVANCE(842);
      END_STATE();
    case 933:
      if (lookahead == 'w') ADVANCE(610);
      END_STATE();
    case 934:
      if (lookahead == 'x') ADVANCE(1022);
      END_STATE();
    case 935:
      if (lookahead == 'x') ADVANCE(1021);
      END_STATE();
    case 936:
      if (lookahead == 'x') ADVANCE(1182);
      END_STATE();
    case 937:
      if (lookahead == 'x') ADVANCE(1183);
      END_STATE();
    case 938:
      if (lookahead == 'x') ADVANCE(1141);
      END_STATE();
    case 939:
      if (lookahead == 'x') ADVANCE(1019);
      END_STATE();
    case 940:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 941:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 942:
      if (lookahead == 'x') ADVANCE(335);
      END_STATE();
    case 943:
      if (lookahead == 'x') ADVANCE(341);
      END_STATE();
    case 944:
      if (lookahead == 'x') ADVANCE(346);
      END_STATE();
    case 945:
      if (lookahead == 'y') ADVANCE(1037);
      END_STATE();
    case 946:
      if (lookahead == 'y') ADVANCE(1026);
      END_STATE();
    case 947:
      if (lookahead == 'y') ADVANCE(1106);
      END_STATE();
    case 948:
      if (lookahead == 'y') ADVANCE(728);
      END_STATE();
    case 949:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 950:
      if (lookahead == 'y') ADVANCE(733);
      END_STATE();
    case 951:
      if (lookahead == 'y') ADVANCE(80);
      END_STATE();
    case 952:
      if (lookahead == 'z') ADVANCE(300);
      END_STATE();
    case 953:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1124);
      END_STATE();
    case 954:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1123);
      END_STATE();
    case 955:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(954);
      END_STATE();
    case 956:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(955);
      END_STATE();
    case 957:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      END_STATE();
    case 958:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(957);
      END_STATE();
    case 959:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(958);
      END_STATE();
    case 960:
      if (eof) ADVANCE(965);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 961:
      if (eof) ADVANCE(965);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(960);
      END_STATE();
    case 962:
      if (eof) ADVANCE(965);
      if (lookahead == '\n') SKIP(964);
      END_STATE();
    case 963:
      if (eof) ADVANCE(965);
      if (lookahead == '\n') SKIP(964);
      if (lookahead == '\r') SKIP(962);
      END_STATE();
    case 964:
      if (eof) ADVANCE(965);
      if (lookahead == '\n') ADVANCE(1526);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(1523);
      if (lookahead == ',') ADVANCE(969);
      if (lookahead == '\\') SKIP(963);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(445);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'g') ADVANCE(798);
      if (lookahead == 'h') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(727);
      if (lookahead == 'p') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1531);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(964);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_account_DASHhook);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_DASHgroup);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_DASHgroup);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_unalias);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(976);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_key_token2);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_key_token2);
      ADVANCE_MAP(
        '\t', 979,
        '\n', 1525,
        '\r', 979,
        ' ', 1530,
        '#', 990,
        '<', 974,
        '\\', 30,
        0x0b, 979,
        '\f', 979,
      );
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '"') ADVANCE(1223);
      if (lookahead == '\'') ADVANCE(1216);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(1259);
      if (lookahead == '`') ADVANCE(1230);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(980);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(987);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(972);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(981);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(978);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '*') ADVANCE(972);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(982);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(978);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == ',') ADVANCE(969);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(983);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(978);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(984);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(978);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(985);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(978);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '<') ADVANCE(974);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(986);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(978);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == 'g') ADVANCE(805);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1028);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1523);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_key_token3);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\n') ADVANCE(1286);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(1529);
      if (lookahead == '\n') ADVANCE(1524);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(995);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(997);
      if (lookahead == '\\') ADVANCE(1241);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_alternates);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_unalternates);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_alternative_order);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_unalternative_order);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_mime_type);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1002);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_attachments);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_unattachments);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_auto_view);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_unauto_view);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_attach);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_browser);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_compose);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_editor);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_generic);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == '_') ADVANCE(1304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead == '_') ADVANCE(170);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_mix);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_pager);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_pgp);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_postpone);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_smime);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_function);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1028);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_unbind);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_charset_DASHhook);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_iconv_DASHhook);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_attach_headers);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_attach_headers);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_attachment);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_attachment);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_body);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_hdrdefault);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_hdrdefault);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_index_author);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_index_author);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_index_collapsed);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_index_collapsed);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_index_date);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_index_date);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_index_flags);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_index_flags);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_index_label);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_index_label);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_index_number);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_index_number);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_index_size);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_index_size);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_index_subject);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_index_subject);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_index_tag);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1066);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_index_tag);
      if (lookahead == 's') ADVANCE(1065);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_index_tags);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_index_tags);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_indicator);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_indicator);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_markers);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_markers);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_message);
      if (lookahead == '-') ADVANCE(436);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_message);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_normal);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_progress);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (lookahead == '\\') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1080);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1081);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_search);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_search);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_signature);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_signature);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_status);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_tilde);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_tilde);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_tree);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_tree);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_underline);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_sidebar_background);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_sidebar_background);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_sidebar_divider);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_sidebar_divider);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_sidebar_flagged);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_sidebar_flagged);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_sidebar_highlight);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_sidebar_highlight);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_sidebar_indicator);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_sidebar_indicator);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_sidebar_new);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_sidebar_new);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_sidebar_ordinary);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_sidebar_ordinary);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_sidebar_spool_file);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_sidebar_spool_file);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_security_encrypt);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_security_sign);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_security_both);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_security_none);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_magenta);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_color_token1);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_color_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1124);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_standout);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_color);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1124);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_uncolor);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_crypt_DASHhook);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_index_DASHformat_DASHhook);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_fcc_DASHsave_DASHhook);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_fcc_DASHhook);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_save_DASHhook);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_folder_DASHhook);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_DASHnoregex);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_DASHrx);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_DASHaddr);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_ungroup);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_hdr_order);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_unhdr_order);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_ifdef);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_ifndef);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_finish);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_ignore);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_unignore);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_lists);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_unlists);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_subscribe);
      if (lookahead == '-') ADVANCE(878);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_unsubscribe);
      if (lookahead == '-') ADVANCE(386);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_unmacro);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_mailboxes);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_named_DASHmailboxes);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_unmailboxes);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_mailto_allow);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_unmailto_allow);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_mbox_DASHhook);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_message_DASHhook);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_mime_lookup);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_unmime_lookup);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_mono);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_unmono);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_my_hdr);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_unmy_hdr);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_open_DASHhook);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_close_DASHhook);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_append_DASHhook);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_reply_DASHhook);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_send_DASHhook);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_send2_DASHhook);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_spam);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_nospam);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_subjectrx);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_unsubjectrx);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_subscribe_DASHto);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_unsubscribe_DASHfrom);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_timeout_DASHhook);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_startup_DASHhook);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_shutdown_DASHhook);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_unhook);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_toggle);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_setenv);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_setenv_directive_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1199);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_unsetenv);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_sidebar_pin);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_sidebar_unpin);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_score);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_unscore);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1205);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(555);
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_ask_DASHyes);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_ask_DASHyes);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_ask_DASHno);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_ask_DASHno);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '\\') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1215);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\n') ADVANCE(1220);
      if (lookahead == '\r') ADVANCE(1219);
      if (lookahead == '\\') ADVANCE(1222);
      if (lookahead != 0) ADVANCE(1221);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\n') ADVANCE(1220);
      if (lookahead == '\\') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1221);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\\') ADVANCE(1218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1221);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\\') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(1221);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\\') ADVANCE(1222);
      if (lookahead != 0) ADVANCE(1221);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\n') ADVANCE(1227);
      if (lookahead == '\r') ADVANCE(1226);
      if (lookahead == '\\') ADVANCE(1229);
      if (lookahead != 0) ADVANCE(1228);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\n') ADVANCE(1227);
      if (lookahead == '\\') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1228);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\\') ADVANCE(1225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1228);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\\') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1228);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '\\') ADVANCE(1229);
      if (lookahead != 0) ADVANCE(1228);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\n') ADVANCE(1234);
      if (lookahead == '\r') ADVANCE(1233);
      if (lookahead == '\\') ADVANCE(1236);
      if (lookahead != 0) ADVANCE(1235);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\n') ADVANCE(1234);
      if (lookahead == '\\') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1235);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1235);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(1235);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__string_token3);
      if (lookahead == '\\') ADVANCE(1236);
      if (lookahead != 0) ADVANCE(1235);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1519);
      if (lookahead == '\\') ADVANCE(1237);
      if (lookahead != 0) ADVANCE(1521);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1287);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1287);
      if (lookahead == '\r') ADVANCE(1240);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1287);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\r') ADVANCE(1243);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1283);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1283);
      if (lookahead == '\r') ADVANCE(1246);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1283);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\r') ADVANCE(1249);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1279);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1280);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1280);
      if (lookahead == '\r') ADVANCE(1252);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1280);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\r') ADVANCE(1255);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1282);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\r') ADVANCE(1258);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1281);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1286);
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead == '\\') ADVANCE(994);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(993);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1286);
      if (lookahead == '\r') ADVANCE(992);
      if (lookahead == '\\') ADVANCE(994);
      if (lookahead != 0) ADVANCE(993);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym__word);
      ADVANCE_MAP(
        '\n', 1527,
        '\r', 22,
        '"', 1224,
        '#', 1521,
        '\'', 1217,
        '\\', 1263,
        '`', 1231,
        '\t', 1532,
        ' ', 1532,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1519);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1261);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1261);
      if (lookahead == '\r') ADVANCE(1264);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1261);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1285);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1285);
      if (lookahead == '\r') ADVANCE(1267);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1285);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1288);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1288);
      if (lookahead == '\r') ADVANCE(1270);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1288);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\r') ADVANCE(1273);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1284);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1284);
      if (lookahead == '\r') ADVANCE(1276);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(1284);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym__word);
      ADVANCE_MAP(
        ' ', 997,
        '"', 1224,
        '\'', 1217,
        '-', 1518,
        '\\', 1242,
        '`', 1231,
        'a', 1485,
        'n', 1434,
        'y', 1365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1519);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '!') ADVANCE(1134);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '\\') ADVANCE(1272);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(1519);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '+') ADVANCE(1006);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(1248);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '-') ADVANCE(1387);
      if (lookahead == '\\') ADVANCE(1251);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '\\') ADVANCE(1257);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '+') ADVANCE(1006);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead == '?') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1254);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym__word);
      ADVANCE_MAP(
        '"', 1224,
        '\'', 1217,
        '-', 1518,
        '\\', 1245,
        '`', 1231,
        'a', 1485,
        'n', 1434,
        'y', 1365,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '-') ADVANCE(1431);
      if (lookahead == '\\') ADVANCE(1275);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '-') ADVANCE(1387);
      if (lookahead == '\\') ADVANCE(1266);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '<') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(1260);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(980);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(987);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym__word);
      ADVANCE_MAP(
        '"', 1224,
        '\'', 1217,
        '\\', 1239,
        '`', 1231,
        'a', 1494,
        'b', 1432,
        'e', 1464,
        'h', 1334,
        'i', 1422,
        'm', 1303,
        'n', 1437,
        'p', 1463,
        'q', 1505,
        's', 1355,
        't', 1394,
        'u', 1423,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '"') ADVANCE(1224);
      if (lookahead == '\'') ADVANCE(1217);
      if (lookahead == '\\') ADVANCE(1269);
      if (lookahead == '`') ADVANCE(1231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(1426);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == '_') ADVANCE(1316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == '_') ADVANCE(1375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == '_') ADVANCE(1391);
      if (lookahead == 'm') ADVANCE(1358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1452);
      if (lookahead == 'e') ADVANCE(1484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym__word);
      ADVANCE_MAP(
        '\\', 1520,
        'a', 1508,
        'c', 1438,
        'd', 1311,
        'f', 1413,
        'l', 1296,
        'n', 1503,
        's', 1395,
        't', 1297,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'a') ADVANCE(1341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'b') ADVANCE(1404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym__word);
      ADVANCE_MAP(
        '\\', 1520,
        'b', 1298,
        'd', 1396,
        'f', 1415,
        'h', 1398,
        'i', 1424,
        'n', 1353,
        'o', 1467,
        's', 1450,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'b') ADVANCE(1362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'b') ADVANCE(1309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'b') ADVANCE(1369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'c') ADVANCE(1388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'c') ADVANCE(1406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'c') ADVANCE(1389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'c') ADVANCE(1492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'c') ADVANCE(1307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'c') ADVANCE(1313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1515);
      if (lookahead == 'l') ADVANCE(1328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1040);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1080);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1050);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1099);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1095);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1344);
      if (lookahead == 'g') ADVANCE(1429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1475);
      if (lookahead == 'e') ADVANCE(1312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'd') ADVANCE(1371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1513);
      if (lookahead == 'i') ADVANCE(1324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1091);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1089);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1073);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1085);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1093);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1060);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1308);
      if (lookahead == 'i') ADVANCE(1333);
      if (lookahead == 't') ADVANCE(1301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'e') ADVANCE(1314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'f') ADVANCE(1399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'f') ADVANCE(1302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1063);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1470);
      if (lookahead == 'm') ADVANCE(1449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'g') ADVANCE(1476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'h') ADVANCE(1292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'h') ADVANCE(1083);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'h') ADVANCE(1419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'h') ADVANCE(1374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'h') ADVANCE(1493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'h') ADVANCE(1444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1418);
      if (lookahead == 'r') ADVANCE(1357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1517);
      if (lookahead == 'u') ADVANCE(1315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'j') ADVANCE(1360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'k') ADVANCE(1289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'k') ADVANCE(1386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'k') ADVANCE(1368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1075);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1056);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'l') ADVANCE(1401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'm') ADVANCE(1295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'm') ADVANCE(1319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1435);
      if (lookahead == 'y') ADVANCE(1367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'n') ADVANCE(1446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1381);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'o') ADVANCE(1442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'p') ADVANCE(968);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'p') ADVANCE(1489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'p') ADVANCE(1447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'p') ADVANCE(1488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1042);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1046);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1068);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1048);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1058);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1097);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'r') ADVANCE(1441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1087);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1070);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1054);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1034);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 's') ADVANCE(1361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1079);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1036);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1044);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'u') ADVANCE(1421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'u') ADVANCE(1477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'u') ADVANCE(1436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'u') ADVANCE(1448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'u') ADVANCE(1412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'u') ADVANCE(1498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'u') ADVANCE(1471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'u') ADVANCE(1427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'v') ADVANCE(1402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'w') ADVANCE(1105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'x') ADVANCE(1020);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'x') ADVANCE(1140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'y') ADVANCE(1038);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'y') ADVANCE(1107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead == 'z') ADVANCE(1352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(1519);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1519);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\\') ADVANCE(1237);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(1521);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1523);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t') ADVANCE(1529);
      if (lookahead == '\n') ADVANCE(1524);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(995);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t') ADVANCE(979);
      if (lookahead == '\n') ADVANCE(1525);
      if (lookahead == '\r') ADVANCE(979);
      if (lookahead == ' ') ADVANCE(1530);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(979);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(1526);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1531);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(1527);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(1262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1532);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(1528);
      if (lookahead == '\r') ADVANCE(41);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(1529);
      if (lookahead == '\n') ADVANCE(1524);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(995);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(979);
      if (lookahead == '\n') ADVANCE(1525);
      if (lookahead == '\r') ADVANCE(979);
      if (lookahead == ' ') ADVANCE(1530);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(979);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\n') ADVANCE(1526);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1531);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\n') ADVANCE(1527);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(1262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1532);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 964},
  [2] = {.lex_state = 964},
  [3] = {.lex_state = 964},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 62},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 964},
  [20] = {.lex_state = 964},
  [21] = {.lex_state = 964},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 58},
  [27] = {.lex_state = 60},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 60},
  [32] = {.lex_state = 60},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 65},
  [37] = {.lex_state = 65},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 60},
  [43] = {.lex_state = 60},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 60},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 60},
  [55] = {.lex_state = 60},
  [56] = {.lex_state = 54},
  [57] = {.lex_state = 54},
  [58] = {.lex_state = 54},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 51},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 56},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 52},
  [75] = {.lex_state = 59},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 59},
  [78] = {.lex_state = 52},
  [79] = {.lex_state = 52},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 52},
  [82] = {.lex_state = 59},
  [83] = {.lex_state = 52},
  [84] = {.lex_state = 57},
  [85] = {.lex_state = 59},
  [86] = {.lex_state = 52},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 70},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 59},
  [93] = {.lex_state = 52},
  [94] = {.lex_state = 52},
  [95] = {.lex_state = 59},
  [96] = {.lex_state = 59},
  [97] = {.lex_state = 59},
  [98] = {.lex_state = 55},
  [99] = {.lex_state = 59},
  [100] = {.lex_state = 59},
  [101] = {.lex_state = 59},
  [102] = {.lex_state = 59},
  [103] = {.lex_state = 59},
  [104] = {.lex_state = 55},
  [105] = {.lex_state = 59},
  [106] = {.lex_state = 59},
  [107] = {.lex_state = 59},
  [108] = {.lex_state = 59},
  [109] = {.lex_state = 59},
  [110] = {.lex_state = 62},
  [111] = {.lex_state = 59},
  [112] = {.lex_state = 59},
  [113] = {.lex_state = 59},
  [114] = {.lex_state = 59},
  [115] = {.lex_state = 59},
  [116] = {.lex_state = 59},
  [117] = {.lex_state = 59},
  [118] = {.lex_state = 59},
  [119] = {.lex_state = 52},
  [120] = {.lex_state = 52},
  [121] = {.lex_state = 59},
  [122] = {.lex_state = 59},
  [123] = {.lex_state = 62},
  [124] = {.lex_state = 59},
  [125] = {.lex_state = 59},
  [126] = {.lex_state = 59},
  [127] = {.lex_state = 59},
  [128] = {.lex_state = 59},
  [129] = {.lex_state = 59},
  [130] = {.lex_state = 59},
  [131] = {.lex_state = 59},
  [132] = {.lex_state = 59},
  [133] = {.lex_state = 59},
  [134] = {.lex_state = 59},
  [135] = {.lex_state = 61},
  [136] = {.lex_state = 964},
  [137] = {.lex_state = 59},
  [138] = {.lex_state = 59},
  [139] = {.lex_state = 59},
  [140] = {.lex_state = 59},
  [141] = {.lex_state = 62},
  [142] = {.lex_state = 59},
  [143] = {.lex_state = 59},
  [144] = {.lex_state = 64},
  [145] = {.lex_state = 59},
  [146] = {.lex_state = 59},
  [147] = {.lex_state = 59},
  [148] = {.lex_state = 59},
  [149] = {.lex_state = 59},
  [150] = {.lex_state = 59},
  [151] = {.lex_state = 59},
  [152] = {.lex_state = 59},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 59},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 59},
  [157] = {.lex_state = 59},
  [158] = {.lex_state = 59},
  [159] = {.lex_state = 59},
  [160] = {.lex_state = 59},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 59},
  [164] = {.lex_state = 59},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 59},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 59},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 59},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 59},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 59},
  [179] = {.lex_state = 59},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 59},
  [183] = {.lex_state = 59},
  [184] = {.lex_state = 59},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 964},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 59},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 67},
  [191] = {.lex_state = 52},
  [192] = {.lex_state = 62},
  [193] = {.lex_state = 49},
  [194] = {.lex_state = 92},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 59},
  [197] = {.lex_state = 59},
  [198] = {.lex_state = 59},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 59},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 61},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 964},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 92},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 964},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 92},
  [233] = {.lex_state = 67},
  [234] = {.lex_state = 92},
  [235] = {.lex_state = 59},
  [236] = {.lex_state = 92},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 93},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 93},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 67},
  [244] = {.lex_state = 52},
  [245] = {.lex_state = 52},
  [246] = {.lex_state = 52},
  [247] = {.lex_state = 52},
  [248] = {.lex_state = 49},
  [249] = {.lex_state = 49},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 964},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 47},
  [257] = {.lex_state = 964},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 964},
  [261] = {.lex_state = 67},
  [262] = {.lex_state = 62},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 67},
  [273] = {.lex_state = 59},
  [274] = {.lex_state = 59},
  [275] = {.lex_state = 64},
  [276] = {.lex_state = 64},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 59},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 59},
  [282] = {.lex_state = 59},
  [283] = {.lex_state = 59},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 66},
  [286] = {.lex_state = 59},
  [287] = {.lex_state = 59},
  [288] = {.lex_state = 59},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 59},
  [291] = {.lex_state = 93},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 964},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 59},
  [302] = {.lex_state = 964},
  [303] = {.lex_state = 964},
  [304] = {.lex_state = 64},
  [305] = {.lex_state = 64},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 66},
  [308] = {.lex_state = 66},
  [309] = {.lex_state = 59},
  [310] = {.lex_state = 964},
  [311] = {.lex_state = 964},
  [312] = {.lex_state = 964},
  [313] = {.lex_state = 964},
  [314] = {.lex_state = 964},
  [315] = {.lex_state = 964},
  [316] = {.lex_state = 964},
  [317] = {.lex_state = 964},
  [318] = {.lex_state = 964},
  [319] = {.lex_state = 964},
  [320] = {.lex_state = 964},
  [321] = {.lex_state = 964},
  [322] = {.lex_state = 964},
  [323] = {.lex_state = 964},
  [324] = {.lex_state = 964},
  [325] = {.lex_state = 964},
  [326] = {.lex_state = 964},
  [327] = {.lex_state = 964},
  [328] = {.lex_state = 964},
  [329] = {.lex_state = 964},
  [330] = {.lex_state = 964},
  [331] = {.lex_state = 964},
  [332] = {.lex_state = 964},
  [333] = {.lex_state = 964},
  [334] = {.lex_state = 964},
  [335] = {.lex_state = 964},
  [336] = {.lex_state = 964},
  [337] = {.lex_state = 964},
  [338] = {.lex_state = 66},
  [339] = {.lex_state = 964},
  [340] = {.lex_state = 964},
  [341] = {.lex_state = 964},
  [342] = {.lex_state = 964},
  [343] = {.lex_state = 964},
  [344] = {.lex_state = 964},
  [345] = {.lex_state = 964},
  [346] = {.lex_state = 964},
  [347] = {.lex_state = 964},
  [348] = {.lex_state = 964},
  [349] = {.lex_state = 964},
  [350] = {.lex_state = 964},
  [351] = {.lex_state = 964},
  [352] = {.lex_state = 964},
  [353] = {.lex_state = 964},
  [354] = {.lex_state = 964},
  [355] = {.lex_state = 964},
  [356] = {.lex_state = 964},
  [357] = {.lex_state = 964},
  [358] = {.lex_state = 964},
  [359] = {.lex_state = 66},
  [360] = {.lex_state = 964},
  [361] = {.lex_state = 964},
  [362] = {.lex_state = 964},
  [363] = {.lex_state = 964},
  [364] = {.lex_state = 964},
  [365] = {.lex_state = 964},
  [366] = {.lex_state = 964},
  [367] = {.lex_state = 964},
  [368] = {.lex_state = 964},
  [369] = {.lex_state = 964},
  [370] = {.lex_state = 61},
  [371] = {.lex_state = 964},
  [372] = {.lex_state = 964},
  [373] = {.lex_state = 964},
  [374] = {.lex_state = 964},
  [375] = {.lex_state = 964},
  [376] = {.lex_state = 66},
  [377] = {.lex_state = 964},
  [378] = {.lex_state = 964},
  [379] = {.lex_state = 964},
  [380] = {.lex_state = 964},
  [381] = {.lex_state = 92},
  [382] = {.lex_state = 92},
  [383] = {.lex_state = 964},
  [384] = {.lex_state = 964},
  [385] = {.lex_state = 62},
  [386] = {.lex_state = 964},
  [387] = {.lex_state = 964},
  [388] = {.lex_state = 964},
  [389] = {.lex_state = 964},
  [390] = {.lex_state = 964},
  [391] = {.lex_state = 964},
  [392] = {.lex_state = 964},
  [393] = {.lex_state = 964},
  [394] = {.lex_state = 964},
  [395] = {.lex_state = 964},
  [396] = {.lex_state = 964},
  [397] = {.lex_state = 62},
  [398] = {.lex_state = 964},
  [399] = {.lex_state = 964},
  [400] = {.lex_state = 964},
  [401] = {.lex_state = 964},
  [402] = {.lex_state = 964},
  [403] = {.lex_state = 964},
  [404] = {.lex_state = 964},
  [405] = {.lex_state = 964},
  [406] = {.lex_state = 964},
  [407] = {.lex_state = 964},
  [408] = {.lex_state = 964},
  [409] = {.lex_state = 964},
  [410] = {.lex_state = 964},
  [411] = {.lex_state = 964},
  [412] = {.lex_state = 964},
  [413] = {.lex_state = 964},
  [414] = {.lex_state = 964},
  [415] = {.lex_state = 964},
  [416] = {.lex_state = 964},
  [417] = {.lex_state = 964},
  [418] = {.lex_state = 964},
  [419] = {.lex_state = 964},
  [420] = {.lex_state = 964},
  [421] = {.lex_state = 964},
  [422] = {.lex_state = 964},
  [423] = {.lex_state = 964},
  [424] = {.lex_state = 964},
  [425] = {.lex_state = 964},
  [426] = {.lex_state = 964},
  [427] = {.lex_state = 964},
  [428] = {.lex_state = 964},
  [429] = {.lex_state = 964},
  [430] = {.lex_state = 964},
  [431] = {.lex_state = 964},
  [432] = {.lex_state = 964},
  [433] = {.lex_state = 964},
  [434] = {.lex_state = 964},
  [435] = {.lex_state = 964},
  [436] = {.lex_state = 964},
  [437] = {.lex_state = 62},
  [438] = {.lex_state = 62},
  [439] = {.lex_state = 964},
  [440] = {.lex_state = 964},
  [441] = {.lex_state = 964},
  [442] = {.lex_state = 92},
  [443] = {.lex_state = 92},
  [444] = {.lex_state = 964},
  [445] = {.lex_state = 964},
  [446] = {.lex_state = 964},
  [447] = {.lex_state = 964},
  [448] = {.lex_state = 964},
  [449] = {.lex_state = 66},
  [450] = {.lex_state = 41},
  [451] = {.lex_state = 66},
  [452] = {.lex_state = 62},
  [453] = {.lex_state = 61},
  [454] = {.lex_state = 66},
  [455] = {.lex_state = 66},
  [456] = {.lex_state = 98},
  [457] = {.lex_state = 62},
  [458] = {.lex_state = 66},
  [459] = {.lex_state = 61},
  [460] = {.lex_state = 62},
  [461] = {.lex_state = 61},
  [462] = {.lex_state = 62},
  [463] = {.lex_state = 61},
  [464] = {.lex_state = 99},
  [465] = {.lex_state = 61},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 1220},
  [468] = {.lex_state = 1227},
  [469] = {.lex_state = 66},
  [470] = {.lex_state = 61},
  [471] = {.lex_state = 41},
  [472] = {.lex_state = 66},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 1234},
  [475] = {.lex_state = 61},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 66},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 98},
  [482] = {.lex_state = 66},
  [483] = {.lex_state = 98},
  [484] = {.lex_state = 1220},
  [485] = {.lex_state = 41},
  [486] = {.lex_state = 61},
  [487] = {.lex_state = 62},
  [488] = {.lex_state = 66},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 61},
  [491] = {.lex_state = 1234},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 1227},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 97},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 61},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 1220},
  [531] = {.lex_state = 1227},
  [532] = {.lex_state = 1234},
  [533] = {.lex_state = 99},
  [534] = {.lex_state = 1220},
  [535] = {.lex_state = 1227},
  [536] = {.lex_state = 1234},
  [537] = {.lex_state = 1220},
  [538] = {.lex_state = 1227},
  [539] = {.lex_state = 1234},
  [540] = {.lex_state = 99},
  [541] = {.lex_state = 1220},
  [542] = {.lex_state = 1227},
  [543] = {.lex_state = 1234},
  [544] = {.lex_state = 1220},
  [545] = {.lex_state = 1227},
  [546] = {.lex_state = 1234},
  [547] = {.lex_state = 1220},
  [548] = {.lex_state = 1227},
  [549] = {.lex_state = 1234},
  [550] = {.lex_state = 1220},
  [551] = {.lex_state = 1227},
  [552] = {.lex_state = 1234},
  [553] = {.lex_state = 1220},
  [554] = {.lex_state = 1227},
  [555] = {.lex_state = 1234},
  [556] = {.lex_state = 1220},
  [557] = {.lex_state = 1227},
  [558] = {.lex_state = 1234},
  [559] = {.lex_state = 1220},
  [560] = {.lex_state = 1227},
  [561] = {.lex_state = 1234},
  [562] = {.lex_state = 1220},
  [563] = {.lex_state = 1227},
  [564] = {.lex_state = 1234},
  [565] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_account_DASHhook] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_unalias] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_alternates] = ACTIONS(1),
    [anon_sym_unalternates] = ACTIONS(1),
    [anon_sym_alternative_order] = ACTIONS(1),
    [anon_sym_unalternative_order] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_unattachments] = ACTIONS(1),
    [anon_sym_auto_view] = ACTIONS(1),
    [anon_sym_unauto_view] = ACTIONS(1),
    [anon_sym_attach] = ACTIONS(1),
    [anon_sym_browser] = ACTIONS(1),
    [anon_sym_compose] = ACTIONS(1),
    [anon_sym_editor] = ACTIONS(1),
    [anon_sym_generic] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_mix] = ACTIONS(1),
    [anon_sym_pager] = ACTIONS(1),
    [anon_sym_pgp] = ACTIONS(1),
    [anon_sym_postpone] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_smime] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_unbind] = ACTIONS(1),
    [anon_sym_charset_DASHhook] = ACTIONS(1),
    [anon_sym_iconv_DASHhook] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_hdrdefault] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_index_author] = ACTIONS(1),
    [anon_sym_index_collapsed] = ACTIONS(1),
    [anon_sym_index_date] = ACTIONS(1),
    [anon_sym_index_flags] = ACTIONS(1),
    [anon_sym_index_label] = ACTIONS(1),
    [anon_sym_index_number] = ACTIONS(1),
    [anon_sym_index_size] = ACTIONS(1),
    [anon_sym_index_subject] = ACTIONS(1),
    [anon_sym_index_tag] = ACTIONS(1),
    [anon_sym_index_tags] = ACTIONS(1),
    [anon_sym_indicator] = ACTIONS(1),
    [anon_sym_markers] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_normal] = ACTIONS(1),
    [anon_sym_progress] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [aux_sym_object_token1] = ACTIONS(1),
    [anon_sym_search] = ACTIONS(1),
    [anon_sym_signature] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_tilde] = ACTIONS(1),
    [anon_sym_tree] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_sidebar_background] = ACTIONS(1),
    [anon_sym_sidebar_divider] = ACTIONS(1),
    [anon_sym_sidebar_flagged] = ACTIONS(1),
    [anon_sym_sidebar_highlight] = ACTIONS(1),
    [anon_sym_sidebar_indicator] = ACTIONS(1),
    [anon_sym_sidebar_new] = ACTIONS(1),
    [anon_sym_sidebar_ordinary] = ACTIONS(1),
    [anon_sym_sidebar_spool_file] = ACTIONS(1),
    [anon_sym_security_encrypt] = ACTIONS(1),
    [anon_sym_security_sign] = ACTIONS(1),
    [anon_sym_security_both] = ACTIONS(1),
    [anon_sym_security_none] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_magenta] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [aux_sym_color_token2] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_standout] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_uncolor] = ACTIONS(1),
    [anon_sym_crypt_DASHhook] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(1),
    [anon_sym_fcc_DASHhook] = ACTIONS(1),
    [anon_sym_save_DASHhook] = ACTIONS(1),
    [anon_sym_folder_DASHhook] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_ungroup] = ACTIONS(1),
    [anon_sym_hdr_order] = ACTIONS(1),
    [anon_sym_unhdr_order] = ACTIONS(1),
    [anon_sym_ifdef] = ACTIONS(1),
    [anon_sym_ifndef] = ACTIONS(1),
    [anon_sym_finish] = ACTIONS(1),
    [anon_sym_ignore] = ACTIONS(1),
    [anon_sym_unignore] = ACTIONS(1),
    [anon_sym_lists] = ACTIONS(1),
    [anon_sym_unlists] = ACTIONS(1),
    [anon_sym_subscribe] = ACTIONS(1),
    [anon_sym_unsubscribe] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_unmacro] = ACTIONS(1),
    [anon_sym_mailboxes] = ACTIONS(1),
    [anon_sym_named_DASHmailboxes] = ACTIONS(1),
    [anon_sym_unmailboxes] = ACTIONS(1),
    [anon_sym_mailto_allow] = ACTIONS(1),
    [anon_sym_unmailto_allow] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_cd] = ACTIONS(1),
    [anon_sym_mbox_DASHhook] = ACTIONS(1),
    [anon_sym_message_DASHhook] = ACTIONS(1),
    [anon_sym_mime_lookup] = ACTIONS(1),
    [anon_sym_unmime_lookup] = ACTIONS(1),
    [anon_sym_mono] = ACTIONS(1),
    [anon_sym_unmono] = ACTIONS(1),
    [anon_sym_my_hdr] = ACTIONS(1),
    [anon_sym_unmy_hdr] = ACTIONS(1),
    [anon_sym_open_DASHhook] = ACTIONS(1),
    [anon_sym_close_DASHhook] = ACTIONS(1),
    [anon_sym_append_DASHhook] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_reply_DASHhook] = ACTIONS(1),
    [anon_sym_send_DASHhook] = ACTIONS(1),
    [anon_sym_send2_DASHhook] = ACTIONS(1),
    [anon_sym_spam] = ACTIONS(1),
    [anon_sym_nospam] = ACTIONS(1),
    [anon_sym_subjectrx] = ACTIONS(1),
    [anon_sym_unsubjectrx] = ACTIONS(1),
    [anon_sym_subscribe_DASHto] = ACTIONS(1),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(1),
    [anon_sym_timeout_DASHhook] = ACTIONS(1),
    [anon_sym_startup_DASHhook] = ACTIONS(1),
    [anon_sym_shutdown_DASHhook] = ACTIONS(1),
    [anon_sym_unhook] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_reset] = ACTIONS(1),
    [anon_sym_toggle] = ACTIONS(1),
    [anon_sym_setenv] = ACTIONS(1),
    [anon_sym_unsetenv] = ACTIONS(1),
    [anon_sym_sidebar_pin] = ACTIONS(1),
    [anon_sym_sidebar_unpin] = ACTIONS(1),
    [anon_sym_score] = ACTIONS(1),
    [anon_sym_unscore] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_ask_DASHyes] = ACTIONS(1),
    [anon_sym_ask_DASHno] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(466),
    [sym__command] = STATE(136),
    [sym_account_hook_directive] = STATE(136),
    [sym_alias_directive] = STATE(136),
    [sym_unalias_directive] = STATE(136),
    [sym_alternates_directive] = STATE(136),
    [sym_unalternates_directive] = STATE(136),
    [sym_alternative_order_directive] = STATE(136),
    [sym_unalternative_order_directive] = STATE(136),
    [sym_attachments_directive] = STATE(136),
    [sym_unattachments_directive] = STATE(136),
    [sym_auto_view_directive] = STATE(136),
    [sym_unauto_view_directive] = STATE(136),
    [sym_bind_directive] = STATE(136),
    [sym_unbind_directive] = STATE(136),
    [sym_charset_hook_directive] = STATE(136),
    [sym_iconv_hook_directive] = STATE(136),
    [sym_color_directive] = STATE(136),
    [sym_uncolor_directive] = STATE(136),
    [sym_crypt_hook_directive] = STATE(136),
    [sym_index_format_hook_directive] = STATE(136),
    [sym_exec_directive] = STATE(136),
    [sym_fcc_save_hook_directive] = STATE(136),
    [sym_fcc_hook_directive] = STATE(136),
    [sym_save_hook_directive] = STATE(136),
    [sym_folder_hook_directive] = STATE(136),
    [sym_group_directive] = STATE(136),
    [sym_ungroup_directive] = STATE(136),
    [sym_hdr_order_directive] = STATE(136),
    [sym_unhdr_order_directive] = STATE(136),
    [sym_ifdef_directive] = STATE(136),
    [sym_ifndef_directive] = STATE(136),
    [sym_finish_directive] = STATE(136),
    [sym_ignore_directive] = STATE(136),
    [sym_unignore_directive] = STATE(136),
    [sym_lists_directive] = STATE(136),
    [sym_unlists_directive] = STATE(136),
    [sym_subscribe_directive] = STATE(136),
    [sym_unsubscribe_directive] = STATE(136),
    [sym_macro_directive] = STATE(136),
    [sym_unmacro_directive] = STATE(136),
    [sym_mailboxes_directive] = STATE(136),
    [sym_named_mailboxes_directive] = STATE(136),
    [sym_unmailboxes_directive] = STATE(136),
    [sym_mailto_allow_directive] = STATE(136),
    [sym_unmailto_allow_directive] = STATE(136),
    [sym_echo_directive] = STATE(136),
    [sym_cd_directive] = STATE(136),
    [sym_mbox_hook_directive] = STATE(136),
    [sym_message_hook_directive] = STATE(136),
    [sym_mime_lookup_directive] = STATE(136),
    [sym_unmime_lookup_directive] = STATE(136),
    [sym_mono_directive] = STATE(136),
    [sym_unmono_directive] = STATE(136),
    [sym_my_hdr_directive] = STATE(136),
    [sym_unmy_hdr_directive] = STATE(136),
    [sym_open_hook_directive] = STATE(136),
    [sym_close_hook_directive] = STATE(136),
    [sym_append_hook_directive] = STATE(136),
    [sym_push_directive] = STATE(136),
    [sym_reply_hook_directive] = STATE(136),
    [sym_send_hook_directive] = STATE(136),
    [sym_send2_hook_directive] = STATE(136),
    [sym_spam_directive] = STATE(136),
    [sym_nospam_directive] = STATE(136),
    [sym_subjectrx_directive] = STATE(136),
    [sym_unsubjectrx_directive] = STATE(136),
    [sym_subscribe_to_directive] = STATE(136),
    [sym_unsubscribe_from_directive] = STATE(136),
    [sym_timeout_hook_directive] = STATE(136),
    [sym_startup_hook_directive] = STATE(136),
    [sym_shutdown_hook_directive] = STATE(136),
    [sym_unhook_directive] = STATE(136),
    [sym_set_directive] = STATE(136),
    [sym_unset_directive] = STATE(136),
    [sym_reset_directive] = STATE(136),
    [sym_toggle_directive] = STATE(136),
    [sym_setenv_directive] = STATE(136),
    [sym_unsetenv_directive] = STATE(136),
    [sym_sidebar_pin_directive] = STATE(136),
    [sym_sidebar_unpin_directive] = STATE(136),
    [sym_score_directive] = STATE(136),
    [sym_unscore_directive] = STATE(136),
    [sym_source_directive] = STATE(136),
    [sym__space] = STATE(450),
    [sym__end] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym__space_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_account_DASHhook] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_unalias] = ACTIONS(9),
    [anon_sym_alternates] = ACTIONS(11),
    [anon_sym_unalternates] = ACTIONS(13),
    [anon_sym_alternative_order] = ACTIONS(15),
    [anon_sym_unalternative_order] = ACTIONS(17),
    [anon_sym_attachments] = ACTIONS(19),
    [anon_sym_unattachments] = ACTIONS(21),
    [anon_sym_auto_view] = ACTIONS(23),
    [anon_sym_unauto_view] = ACTIONS(25),
    [anon_sym_bind] = ACTIONS(27),
    [anon_sym_unbind] = ACTIONS(29),
    [anon_sym_charset_DASHhook] = ACTIONS(31),
    [anon_sym_iconv_DASHhook] = ACTIONS(33),
    [anon_sym_color] = ACTIONS(35),
    [anon_sym_uncolor] = ACTIONS(37),
    [anon_sym_crypt_DASHhook] = ACTIONS(39),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(41),
    [anon_sym_exec] = ACTIONS(43),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(45),
    [anon_sym_fcc_DASHhook] = ACTIONS(47),
    [anon_sym_save_DASHhook] = ACTIONS(49),
    [anon_sym_folder_DASHhook] = ACTIONS(51),
    [anon_sym_group] = ACTIONS(53),
    [anon_sym_ungroup] = ACTIONS(55),
    [anon_sym_hdr_order] = ACTIONS(57),
    [anon_sym_unhdr_order] = ACTIONS(59),
    [anon_sym_ifdef] = ACTIONS(61),
    [anon_sym_ifndef] = ACTIONS(63),
    [anon_sym_finish] = ACTIONS(65),
    [anon_sym_ignore] = ACTIONS(67),
    [anon_sym_unignore] = ACTIONS(69),
    [anon_sym_lists] = ACTIONS(71),
    [anon_sym_unlists] = ACTIONS(73),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(79),
    [anon_sym_unmacro] = ACTIONS(81),
    [anon_sym_mailboxes] = ACTIONS(83),
    [anon_sym_named_DASHmailboxes] = ACTIONS(85),
    [anon_sym_unmailboxes] = ACTIONS(87),
    [anon_sym_mailto_allow] = ACTIONS(89),
    [anon_sym_unmailto_allow] = ACTIONS(91),
    [anon_sym_echo] = ACTIONS(93),
    [anon_sym_cd] = ACTIONS(95),
    [anon_sym_mbox_DASHhook] = ACTIONS(97),
    [anon_sym_message_DASHhook] = ACTIONS(99),
    [anon_sym_mime_lookup] = ACTIONS(101),
    [anon_sym_unmime_lookup] = ACTIONS(103),
    [anon_sym_mono] = ACTIONS(105),
    [anon_sym_unmono] = ACTIONS(107),
    [anon_sym_my_hdr] = ACTIONS(109),
    [anon_sym_unmy_hdr] = ACTIONS(111),
    [anon_sym_open_DASHhook] = ACTIONS(113),
    [anon_sym_close_DASHhook] = ACTIONS(115),
    [anon_sym_append_DASHhook] = ACTIONS(117),
    [anon_sym_push] = ACTIONS(119),
    [anon_sym_reply_DASHhook] = ACTIONS(121),
    [anon_sym_send_DASHhook] = ACTIONS(123),
    [anon_sym_send2_DASHhook] = ACTIONS(125),
    [anon_sym_spam] = ACTIONS(127),
    [anon_sym_nospam] = ACTIONS(129),
    [anon_sym_subjectrx] = ACTIONS(131),
    [anon_sym_unsubjectrx] = ACTIONS(133),
    [anon_sym_subscribe_DASHto] = ACTIONS(135),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(137),
    [anon_sym_timeout_DASHhook] = ACTIONS(139),
    [anon_sym_startup_DASHhook] = ACTIONS(141),
    [anon_sym_shutdown_DASHhook] = ACTIONS(143),
    [anon_sym_unhook] = ACTIONS(145),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(151),
    [anon_sym_toggle] = ACTIONS(153),
    [anon_sym_setenv] = ACTIONS(155),
    [anon_sym_unsetenv] = ACTIONS(157),
    [anon_sym_sidebar_pin] = ACTIONS(159),
    [anon_sym_sidebar_unpin] = ACTIONS(161),
    [anon_sym_score] = ACTIONS(163),
    [anon_sym_unscore] = ACTIONS(165),
    [anon_sym_source] = ACTIONS(167),
    [sym_comment] = ACTIONS(169),
    [sym__eol] = ACTIONS(171),
    [aux_sym__space_token1] = ACTIONS(173),
  },
  [2] = {
    [sym__command] = STATE(136),
    [sym_account_hook_directive] = STATE(136),
    [sym_alias_directive] = STATE(136),
    [sym_unalias_directive] = STATE(136),
    [sym_alternates_directive] = STATE(136),
    [sym_unalternates_directive] = STATE(136),
    [sym_alternative_order_directive] = STATE(136),
    [sym_unalternative_order_directive] = STATE(136),
    [sym_attachments_directive] = STATE(136),
    [sym_unattachments_directive] = STATE(136),
    [sym_auto_view_directive] = STATE(136),
    [sym_unauto_view_directive] = STATE(136),
    [sym_bind_directive] = STATE(136),
    [sym_unbind_directive] = STATE(136),
    [sym_charset_hook_directive] = STATE(136),
    [sym_iconv_hook_directive] = STATE(136),
    [sym_color_directive] = STATE(136),
    [sym_uncolor_directive] = STATE(136),
    [sym_crypt_hook_directive] = STATE(136),
    [sym_index_format_hook_directive] = STATE(136),
    [sym_exec_directive] = STATE(136),
    [sym_fcc_save_hook_directive] = STATE(136),
    [sym_fcc_hook_directive] = STATE(136),
    [sym_save_hook_directive] = STATE(136),
    [sym_folder_hook_directive] = STATE(136),
    [sym_group_directive] = STATE(136),
    [sym_ungroup_directive] = STATE(136),
    [sym_hdr_order_directive] = STATE(136),
    [sym_unhdr_order_directive] = STATE(136),
    [sym_ifdef_directive] = STATE(136),
    [sym_ifndef_directive] = STATE(136),
    [sym_finish_directive] = STATE(136),
    [sym_ignore_directive] = STATE(136),
    [sym_unignore_directive] = STATE(136),
    [sym_lists_directive] = STATE(136),
    [sym_unlists_directive] = STATE(136),
    [sym_subscribe_directive] = STATE(136),
    [sym_unsubscribe_directive] = STATE(136),
    [sym_macro_directive] = STATE(136),
    [sym_unmacro_directive] = STATE(136),
    [sym_mailboxes_directive] = STATE(136),
    [sym_named_mailboxes_directive] = STATE(136),
    [sym_unmailboxes_directive] = STATE(136),
    [sym_mailto_allow_directive] = STATE(136),
    [sym_unmailto_allow_directive] = STATE(136),
    [sym_echo_directive] = STATE(136),
    [sym_cd_directive] = STATE(136),
    [sym_mbox_hook_directive] = STATE(136),
    [sym_message_hook_directive] = STATE(136),
    [sym_mime_lookup_directive] = STATE(136),
    [sym_unmime_lookup_directive] = STATE(136),
    [sym_mono_directive] = STATE(136),
    [sym_unmono_directive] = STATE(136),
    [sym_my_hdr_directive] = STATE(136),
    [sym_unmy_hdr_directive] = STATE(136),
    [sym_open_hook_directive] = STATE(136),
    [sym_close_hook_directive] = STATE(136),
    [sym_append_hook_directive] = STATE(136),
    [sym_push_directive] = STATE(136),
    [sym_reply_hook_directive] = STATE(136),
    [sym_send_hook_directive] = STATE(136),
    [sym_send2_hook_directive] = STATE(136),
    [sym_spam_directive] = STATE(136),
    [sym_nospam_directive] = STATE(136),
    [sym_subjectrx_directive] = STATE(136),
    [sym_unsubjectrx_directive] = STATE(136),
    [sym_subscribe_to_directive] = STATE(136),
    [sym_unsubscribe_from_directive] = STATE(136),
    [sym_timeout_hook_directive] = STATE(136),
    [sym_startup_hook_directive] = STATE(136),
    [sym_shutdown_hook_directive] = STATE(136),
    [sym_unhook_directive] = STATE(136),
    [sym_set_directive] = STATE(136),
    [sym_unset_directive] = STATE(136),
    [sym_reset_directive] = STATE(136),
    [sym_toggle_directive] = STATE(136),
    [sym_setenv_directive] = STATE(136),
    [sym_unsetenv_directive] = STATE(136),
    [sym_sidebar_pin_directive] = STATE(136),
    [sym_sidebar_unpin_directive] = STATE(136),
    [sym_score_directive] = STATE(136),
    [sym_unscore_directive] = STATE(136),
    [sym_source_directive] = STATE(136),
    [sym__space] = STATE(450),
    [sym__end] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym__space_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_account_DASHhook] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [anon_sym_unalias] = ACTIONS(9),
    [anon_sym_alternates] = ACTIONS(11),
    [anon_sym_unalternates] = ACTIONS(13),
    [anon_sym_alternative_order] = ACTIONS(15),
    [anon_sym_unalternative_order] = ACTIONS(17),
    [anon_sym_attachments] = ACTIONS(19),
    [anon_sym_unattachments] = ACTIONS(21),
    [anon_sym_auto_view] = ACTIONS(23),
    [anon_sym_unauto_view] = ACTIONS(25),
    [anon_sym_bind] = ACTIONS(27),
    [anon_sym_unbind] = ACTIONS(29),
    [anon_sym_charset_DASHhook] = ACTIONS(31),
    [anon_sym_iconv_DASHhook] = ACTIONS(33),
    [anon_sym_color] = ACTIONS(35),
    [anon_sym_uncolor] = ACTIONS(37),
    [anon_sym_crypt_DASHhook] = ACTIONS(39),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(41),
    [anon_sym_exec] = ACTIONS(43),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(45),
    [anon_sym_fcc_DASHhook] = ACTIONS(47),
    [anon_sym_save_DASHhook] = ACTIONS(49),
    [anon_sym_folder_DASHhook] = ACTIONS(51),
    [anon_sym_group] = ACTIONS(53),
    [anon_sym_ungroup] = ACTIONS(55),
    [anon_sym_hdr_order] = ACTIONS(57),
    [anon_sym_unhdr_order] = ACTIONS(59),
    [anon_sym_ifdef] = ACTIONS(61),
    [anon_sym_ifndef] = ACTIONS(63),
    [anon_sym_finish] = ACTIONS(65),
    [anon_sym_ignore] = ACTIONS(67),
    [anon_sym_unignore] = ACTIONS(69),
    [anon_sym_lists] = ACTIONS(71),
    [anon_sym_unlists] = ACTIONS(73),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(79),
    [anon_sym_unmacro] = ACTIONS(81),
    [anon_sym_mailboxes] = ACTIONS(83),
    [anon_sym_named_DASHmailboxes] = ACTIONS(85),
    [anon_sym_unmailboxes] = ACTIONS(87),
    [anon_sym_mailto_allow] = ACTIONS(89),
    [anon_sym_unmailto_allow] = ACTIONS(91),
    [anon_sym_echo] = ACTIONS(93),
    [anon_sym_cd] = ACTIONS(95),
    [anon_sym_mbox_DASHhook] = ACTIONS(97),
    [anon_sym_message_DASHhook] = ACTIONS(99),
    [anon_sym_mime_lookup] = ACTIONS(101),
    [anon_sym_unmime_lookup] = ACTIONS(103),
    [anon_sym_mono] = ACTIONS(105),
    [anon_sym_unmono] = ACTIONS(107),
    [anon_sym_my_hdr] = ACTIONS(109),
    [anon_sym_unmy_hdr] = ACTIONS(111),
    [anon_sym_open_DASHhook] = ACTIONS(113),
    [anon_sym_close_DASHhook] = ACTIONS(115),
    [anon_sym_append_DASHhook] = ACTIONS(117),
    [anon_sym_push] = ACTIONS(119),
    [anon_sym_reply_DASHhook] = ACTIONS(121),
    [anon_sym_send_DASHhook] = ACTIONS(123),
    [anon_sym_send2_DASHhook] = ACTIONS(125),
    [anon_sym_spam] = ACTIONS(127),
    [anon_sym_nospam] = ACTIONS(129),
    [anon_sym_subjectrx] = ACTIONS(131),
    [anon_sym_unsubjectrx] = ACTIONS(133),
    [anon_sym_subscribe_DASHto] = ACTIONS(135),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(137),
    [anon_sym_timeout_DASHhook] = ACTIONS(139),
    [anon_sym_startup_DASHhook] = ACTIONS(141),
    [anon_sym_shutdown_DASHhook] = ACTIONS(143),
    [anon_sym_unhook] = ACTIONS(145),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(151),
    [anon_sym_toggle] = ACTIONS(153),
    [anon_sym_setenv] = ACTIONS(155),
    [anon_sym_unsetenv] = ACTIONS(157),
    [anon_sym_sidebar_pin] = ACTIONS(159),
    [anon_sym_sidebar_unpin] = ACTIONS(161),
    [anon_sym_score] = ACTIONS(163),
    [anon_sym_unscore] = ACTIONS(165),
    [anon_sym_source] = ACTIONS(167),
    [sym_comment] = ACTIONS(169),
    [sym__eol] = ACTIONS(177),
    [aux_sym__space_token1] = ACTIONS(173),
  },
  [3] = {
    [sym__command] = STATE(136),
    [sym_account_hook_directive] = STATE(136),
    [sym_alias_directive] = STATE(136),
    [sym_unalias_directive] = STATE(136),
    [sym_alternates_directive] = STATE(136),
    [sym_unalternates_directive] = STATE(136),
    [sym_alternative_order_directive] = STATE(136),
    [sym_unalternative_order_directive] = STATE(136),
    [sym_attachments_directive] = STATE(136),
    [sym_unattachments_directive] = STATE(136),
    [sym_auto_view_directive] = STATE(136),
    [sym_unauto_view_directive] = STATE(136),
    [sym_bind_directive] = STATE(136),
    [sym_unbind_directive] = STATE(136),
    [sym_charset_hook_directive] = STATE(136),
    [sym_iconv_hook_directive] = STATE(136),
    [sym_color_directive] = STATE(136),
    [sym_uncolor_directive] = STATE(136),
    [sym_crypt_hook_directive] = STATE(136),
    [sym_index_format_hook_directive] = STATE(136),
    [sym_exec_directive] = STATE(136),
    [sym_fcc_save_hook_directive] = STATE(136),
    [sym_fcc_hook_directive] = STATE(136),
    [sym_save_hook_directive] = STATE(136),
    [sym_folder_hook_directive] = STATE(136),
    [sym_group_directive] = STATE(136),
    [sym_ungroup_directive] = STATE(136),
    [sym_hdr_order_directive] = STATE(136),
    [sym_unhdr_order_directive] = STATE(136),
    [sym_ifdef_directive] = STATE(136),
    [sym_ifndef_directive] = STATE(136),
    [sym_finish_directive] = STATE(136),
    [sym_ignore_directive] = STATE(136),
    [sym_unignore_directive] = STATE(136),
    [sym_lists_directive] = STATE(136),
    [sym_unlists_directive] = STATE(136),
    [sym_subscribe_directive] = STATE(136),
    [sym_unsubscribe_directive] = STATE(136),
    [sym_macro_directive] = STATE(136),
    [sym_unmacro_directive] = STATE(136),
    [sym_mailboxes_directive] = STATE(136),
    [sym_named_mailboxes_directive] = STATE(136),
    [sym_unmailboxes_directive] = STATE(136),
    [sym_mailto_allow_directive] = STATE(136),
    [sym_unmailto_allow_directive] = STATE(136),
    [sym_echo_directive] = STATE(136),
    [sym_cd_directive] = STATE(136),
    [sym_mbox_hook_directive] = STATE(136),
    [sym_message_hook_directive] = STATE(136),
    [sym_mime_lookup_directive] = STATE(136),
    [sym_unmime_lookup_directive] = STATE(136),
    [sym_mono_directive] = STATE(136),
    [sym_unmono_directive] = STATE(136),
    [sym_my_hdr_directive] = STATE(136),
    [sym_unmy_hdr_directive] = STATE(136),
    [sym_open_hook_directive] = STATE(136),
    [sym_close_hook_directive] = STATE(136),
    [sym_append_hook_directive] = STATE(136),
    [sym_push_directive] = STATE(136),
    [sym_reply_hook_directive] = STATE(136),
    [sym_send_hook_directive] = STATE(136),
    [sym_send2_hook_directive] = STATE(136),
    [sym_spam_directive] = STATE(136),
    [sym_nospam_directive] = STATE(136),
    [sym_subjectrx_directive] = STATE(136),
    [sym_unsubjectrx_directive] = STATE(136),
    [sym_subscribe_to_directive] = STATE(136),
    [sym_unsubscribe_from_directive] = STATE(136),
    [sym_timeout_hook_directive] = STATE(136),
    [sym_startup_hook_directive] = STATE(136),
    [sym_shutdown_hook_directive] = STATE(136),
    [sym_unhook_directive] = STATE(136),
    [sym_set_directive] = STATE(136),
    [sym_unset_directive] = STATE(136),
    [sym_reset_directive] = STATE(136),
    [sym_toggle_directive] = STATE(136),
    [sym_setenv_directive] = STATE(136),
    [sym_unsetenv_directive] = STATE(136),
    [sym_sidebar_pin_directive] = STATE(136),
    [sym_sidebar_unpin_directive] = STATE(136),
    [sym_score_directive] = STATE(136),
    [sym_unscore_directive] = STATE(136),
    [sym_source_directive] = STATE(136),
    [sym__space] = STATE(450),
    [sym__end] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym__space_repeat1] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_account_DASHhook] = ACTIONS(181),
    [anon_sym_alias] = ACTIONS(184),
    [anon_sym_unalias] = ACTIONS(187),
    [anon_sym_alternates] = ACTIONS(190),
    [anon_sym_unalternates] = ACTIONS(193),
    [anon_sym_alternative_order] = ACTIONS(196),
    [anon_sym_unalternative_order] = ACTIONS(199),
    [anon_sym_attachments] = ACTIONS(202),
    [anon_sym_unattachments] = ACTIONS(205),
    [anon_sym_auto_view] = ACTIONS(208),
    [anon_sym_unauto_view] = ACTIONS(211),
    [anon_sym_bind] = ACTIONS(214),
    [anon_sym_unbind] = ACTIONS(217),
    [anon_sym_charset_DASHhook] = ACTIONS(220),
    [anon_sym_iconv_DASHhook] = ACTIONS(223),
    [anon_sym_color] = ACTIONS(226),
    [anon_sym_uncolor] = ACTIONS(229),
    [anon_sym_crypt_DASHhook] = ACTIONS(232),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(235),
    [anon_sym_exec] = ACTIONS(238),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(241),
    [anon_sym_fcc_DASHhook] = ACTIONS(244),
    [anon_sym_save_DASHhook] = ACTIONS(247),
    [anon_sym_folder_DASHhook] = ACTIONS(250),
    [anon_sym_group] = ACTIONS(253),
    [anon_sym_ungroup] = ACTIONS(256),
    [anon_sym_hdr_order] = ACTIONS(259),
    [anon_sym_unhdr_order] = ACTIONS(262),
    [anon_sym_ifdef] = ACTIONS(265),
    [anon_sym_ifndef] = ACTIONS(268),
    [anon_sym_finish] = ACTIONS(271),
    [anon_sym_ignore] = ACTIONS(274),
    [anon_sym_unignore] = ACTIONS(277),
    [anon_sym_lists] = ACTIONS(280),
    [anon_sym_unlists] = ACTIONS(283),
    [anon_sym_subscribe] = ACTIONS(286),
    [anon_sym_unsubscribe] = ACTIONS(289),
    [anon_sym_macro] = ACTIONS(292),
    [anon_sym_unmacro] = ACTIONS(295),
    [anon_sym_mailboxes] = ACTIONS(298),
    [anon_sym_named_DASHmailboxes] = ACTIONS(301),
    [anon_sym_unmailboxes] = ACTIONS(304),
    [anon_sym_mailto_allow] = ACTIONS(307),
    [anon_sym_unmailto_allow] = ACTIONS(310),
    [anon_sym_echo] = ACTIONS(313),
    [anon_sym_cd] = ACTIONS(316),
    [anon_sym_mbox_DASHhook] = ACTIONS(319),
    [anon_sym_message_DASHhook] = ACTIONS(322),
    [anon_sym_mime_lookup] = ACTIONS(325),
    [anon_sym_unmime_lookup] = ACTIONS(328),
    [anon_sym_mono] = ACTIONS(331),
    [anon_sym_unmono] = ACTIONS(334),
    [anon_sym_my_hdr] = ACTIONS(337),
    [anon_sym_unmy_hdr] = ACTIONS(340),
    [anon_sym_open_DASHhook] = ACTIONS(343),
    [anon_sym_close_DASHhook] = ACTIONS(346),
    [anon_sym_append_DASHhook] = ACTIONS(349),
    [anon_sym_push] = ACTIONS(352),
    [anon_sym_reply_DASHhook] = ACTIONS(355),
    [anon_sym_send_DASHhook] = ACTIONS(358),
    [anon_sym_send2_DASHhook] = ACTIONS(361),
    [anon_sym_spam] = ACTIONS(364),
    [anon_sym_nospam] = ACTIONS(367),
    [anon_sym_subjectrx] = ACTIONS(370),
    [anon_sym_unsubjectrx] = ACTIONS(373),
    [anon_sym_subscribe_DASHto] = ACTIONS(376),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(379),
    [anon_sym_timeout_DASHhook] = ACTIONS(382),
    [anon_sym_startup_DASHhook] = ACTIONS(385),
    [anon_sym_shutdown_DASHhook] = ACTIONS(388),
    [anon_sym_unhook] = ACTIONS(391),
    [anon_sym_set] = ACTIONS(394),
    [anon_sym_unset] = ACTIONS(397),
    [anon_sym_reset] = ACTIONS(400),
    [anon_sym_toggle] = ACTIONS(403),
    [anon_sym_setenv] = ACTIONS(406),
    [anon_sym_unsetenv] = ACTIONS(409),
    [anon_sym_sidebar_pin] = ACTIONS(412),
    [anon_sym_sidebar_unpin] = ACTIONS(415),
    [anon_sym_score] = ACTIONS(418),
    [anon_sym_unscore] = ACTIONS(421),
    [anon_sym_source] = ACTIONS(424),
    [sym_comment] = ACTIONS(427),
    [sym__eol] = ACTIONS(430),
    [aux_sym__space_token1] = ACTIONS(433),
  },
  [4] = {
    [sym__command] = STATE(353),
    [sym_account_hook_directive] = STATE(353),
    [sym_alias_directive] = STATE(353),
    [sym_unalias_directive] = STATE(353),
    [sym_alternates_directive] = STATE(353),
    [sym_unalternates_directive] = STATE(353),
    [sym_alternative_order_directive] = STATE(353),
    [sym_unalternative_order_directive] = STATE(353),
    [sym_attachments_directive] = STATE(353),
    [sym_unattachments_directive] = STATE(353),
    [sym_auto_view_directive] = STATE(353),
    [sym_unauto_view_directive] = STATE(353),
    [sym_bind_directive] = STATE(353),
    [sym_unbind_directive] = STATE(353),
    [sym_charset_hook_directive] = STATE(353),
    [sym_iconv_hook_directive] = STATE(353),
    [sym_color_directive] = STATE(353),
    [sym_uncolor_directive] = STATE(353),
    [sym_crypt_hook_directive] = STATE(353),
    [sym_index_format_hook_directive] = STATE(353),
    [sym_exec_directive] = STATE(353),
    [sym_fcc_save_hook_directive] = STATE(353),
    [sym_fcc_hook_directive] = STATE(353),
    [sym_save_hook_directive] = STATE(353),
    [sym_folder_hook_directive] = STATE(353),
    [sym_group_directive] = STATE(353),
    [sym_ungroup_directive] = STATE(353),
    [sym_hdr_order_directive] = STATE(353),
    [sym_unhdr_order_directive] = STATE(353),
    [sym_ifdef_directive] = STATE(353),
    [sym_ifndef_directive] = STATE(353),
    [sym_finish_directive] = STATE(353),
    [sym_ignore_directive] = STATE(353),
    [sym_unignore_directive] = STATE(353),
    [sym_lists_directive] = STATE(353),
    [sym_unlists_directive] = STATE(353),
    [sym_subscribe_directive] = STATE(353),
    [sym_unsubscribe_directive] = STATE(353),
    [sym_macro_directive] = STATE(353),
    [sym_unmacro_directive] = STATE(353),
    [sym_mailboxes_directive] = STATE(353),
    [sym_named_mailboxes_directive] = STATE(353),
    [sym_unmailboxes_directive] = STATE(353),
    [sym_mailto_allow_directive] = STATE(353),
    [sym_unmailto_allow_directive] = STATE(353),
    [sym_echo_directive] = STATE(353),
    [sym_cd_directive] = STATE(353),
    [sym_mbox_hook_directive] = STATE(353),
    [sym_message_hook_directive] = STATE(353),
    [sym_mime_lookup_directive] = STATE(353),
    [sym_unmime_lookup_directive] = STATE(353),
    [sym_mono_directive] = STATE(353),
    [sym_unmono_directive] = STATE(353),
    [sym_my_hdr_directive] = STATE(353),
    [sym_unmy_hdr_directive] = STATE(353),
    [sym_open_hook_directive] = STATE(353),
    [sym_close_hook_directive] = STATE(353),
    [sym_append_hook_directive] = STATE(353),
    [sym_push_directive] = STATE(353),
    [sym_reply_hook_directive] = STATE(353),
    [sym_send_hook_directive] = STATE(353),
    [sym_send2_hook_directive] = STATE(353),
    [sym_spam_directive] = STATE(353),
    [sym_nospam_directive] = STATE(353),
    [sym_subjectrx_directive] = STATE(353),
    [sym_unsubjectrx_directive] = STATE(353),
    [sym_subscribe_to_directive] = STATE(353),
    [sym_unsubscribe_from_directive] = STATE(353),
    [sym_timeout_hook_directive] = STATE(353),
    [sym_startup_hook_directive] = STATE(353),
    [sym_shutdown_hook_directive] = STATE(353),
    [sym_unhook_directive] = STATE(353),
    [sym_set_directive] = STATE(353),
    [sym_unset_directive] = STATE(353),
    [sym_reset_directive] = STATE(353),
    [sym_toggle_directive] = STATE(353),
    [sym_setenv_directive] = STATE(353),
    [sym_unsetenv_directive] = STATE(353),
    [sym_sidebar_pin_directive] = STATE(353),
    [sym_sidebar_unpin_directive] = STATE(353),
    [sym_score_directive] = STATE(353),
    [sym_unscore_directive] = STATE(353),
    [sym_source_directive] = STATE(353),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [5] = {
    [sym__command] = STATE(423),
    [sym_account_hook_directive] = STATE(423),
    [sym_alias_directive] = STATE(423),
    [sym_unalias_directive] = STATE(423),
    [sym_alternates_directive] = STATE(423),
    [sym_unalternates_directive] = STATE(423),
    [sym_alternative_order_directive] = STATE(423),
    [sym_unalternative_order_directive] = STATE(423),
    [sym_attachments_directive] = STATE(423),
    [sym_unattachments_directive] = STATE(423),
    [sym_auto_view_directive] = STATE(423),
    [sym_unauto_view_directive] = STATE(423),
    [sym_bind_directive] = STATE(423),
    [sym_unbind_directive] = STATE(423),
    [sym_charset_hook_directive] = STATE(423),
    [sym_iconv_hook_directive] = STATE(423),
    [sym_color_directive] = STATE(423),
    [sym_uncolor_directive] = STATE(423),
    [sym_crypt_hook_directive] = STATE(423),
    [sym_index_format_hook_directive] = STATE(423),
    [sym_exec_directive] = STATE(423),
    [sym_fcc_save_hook_directive] = STATE(423),
    [sym_fcc_hook_directive] = STATE(423),
    [sym_save_hook_directive] = STATE(423),
    [sym_folder_hook_directive] = STATE(423),
    [sym_group_directive] = STATE(423),
    [sym_ungroup_directive] = STATE(423),
    [sym_hdr_order_directive] = STATE(423),
    [sym_unhdr_order_directive] = STATE(423),
    [sym_ifdef_directive] = STATE(423),
    [sym_ifndef_directive] = STATE(423),
    [sym_finish_directive] = STATE(423),
    [sym_ignore_directive] = STATE(423),
    [sym_unignore_directive] = STATE(423),
    [sym_lists_directive] = STATE(423),
    [sym_unlists_directive] = STATE(423),
    [sym_subscribe_directive] = STATE(423),
    [sym_unsubscribe_directive] = STATE(423),
    [sym_macro_directive] = STATE(423),
    [sym_unmacro_directive] = STATE(423),
    [sym_mailboxes_directive] = STATE(423),
    [sym_named_mailboxes_directive] = STATE(423),
    [sym_unmailboxes_directive] = STATE(423),
    [sym_mailto_allow_directive] = STATE(423),
    [sym_unmailto_allow_directive] = STATE(423),
    [sym_echo_directive] = STATE(423),
    [sym_cd_directive] = STATE(423),
    [sym_mbox_hook_directive] = STATE(423),
    [sym_message_hook_directive] = STATE(423),
    [sym_mime_lookup_directive] = STATE(423),
    [sym_unmime_lookup_directive] = STATE(423),
    [sym_mono_directive] = STATE(423),
    [sym_unmono_directive] = STATE(423),
    [sym_my_hdr_directive] = STATE(423),
    [sym_unmy_hdr_directive] = STATE(423),
    [sym_open_hook_directive] = STATE(423),
    [sym_close_hook_directive] = STATE(423),
    [sym_append_hook_directive] = STATE(423),
    [sym_push_directive] = STATE(423),
    [sym_reply_hook_directive] = STATE(423),
    [sym_send_hook_directive] = STATE(423),
    [sym_send2_hook_directive] = STATE(423),
    [sym_spam_directive] = STATE(423),
    [sym_nospam_directive] = STATE(423),
    [sym_subjectrx_directive] = STATE(423),
    [sym_unsubjectrx_directive] = STATE(423),
    [sym_subscribe_to_directive] = STATE(423),
    [sym_unsubscribe_from_directive] = STATE(423),
    [sym_timeout_hook_directive] = STATE(423),
    [sym_startup_hook_directive] = STATE(423),
    [sym_shutdown_hook_directive] = STATE(423),
    [sym_unhook_directive] = STATE(423),
    [sym_set_directive] = STATE(423),
    [sym_unset_directive] = STATE(423),
    [sym_reset_directive] = STATE(423),
    [sym_toggle_directive] = STATE(423),
    [sym_setenv_directive] = STATE(423),
    [sym_unsetenv_directive] = STATE(423),
    [sym_sidebar_pin_directive] = STATE(423),
    [sym_sidebar_unpin_directive] = STATE(423),
    [sym_score_directive] = STATE(423),
    [sym_unscore_directive] = STATE(423),
    [sym_source_directive] = STATE(423),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [6] = {
    [sym__command] = STATE(355),
    [sym_account_hook_directive] = STATE(355),
    [sym_alias_directive] = STATE(355),
    [sym_unalias_directive] = STATE(355),
    [sym_alternates_directive] = STATE(355),
    [sym_unalternates_directive] = STATE(355),
    [sym_alternative_order_directive] = STATE(355),
    [sym_unalternative_order_directive] = STATE(355),
    [sym_attachments_directive] = STATE(355),
    [sym_unattachments_directive] = STATE(355),
    [sym_auto_view_directive] = STATE(355),
    [sym_unauto_view_directive] = STATE(355),
    [sym_bind_directive] = STATE(355),
    [sym_unbind_directive] = STATE(355),
    [sym_charset_hook_directive] = STATE(355),
    [sym_iconv_hook_directive] = STATE(355),
    [sym_color_directive] = STATE(355),
    [sym_uncolor_directive] = STATE(355),
    [sym_crypt_hook_directive] = STATE(355),
    [sym_index_format_hook_directive] = STATE(355),
    [sym_exec_directive] = STATE(355),
    [sym_fcc_save_hook_directive] = STATE(355),
    [sym_fcc_hook_directive] = STATE(355),
    [sym_save_hook_directive] = STATE(355),
    [sym_folder_hook_directive] = STATE(355),
    [sym_group_directive] = STATE(355),
    [sym_ungroup_directive] = STATE(355),
    [sym_hdr_order_directive] = STATE(355),
    [sym_unhdr_order_directive] = STATE(355),
    [sym_ifdef_directive] = STATE(355),
    [sym_ifndef_directive] = STATE(355),
    [sym_finish_directive] = STATE(355),
    [sym_ignore_directive] = STATE(355),
    [sym_unignore_directive] = STATE(355),
    [sym_lists_directive] = STATE(355),
    [sym_unlists_directive] = STATE(355),
    [sym_subscribe_directive] = STATE(355),
    [sym_unsubscribe_directive] = STATE(355),
    [sym_macro_directive] = STATE(355),
    [sym_unmacro_directive] = STATE(355),
    [sym_mailboxes_directive] = STATE(355),
    [sym_named_mailboxes_directive] = STATE(355),
    [sym_unmailboxes_directive] = STATE(355),
    [sym_mailto_allow_directive] = STATE(355),
    [sym_unmailto_allow_directive] = STATE(355),
    [sym_echo_directive] = STATE(355),
    [sym_cd_directive] = STATE(355),
    [sym_mbox_hook_directive] = STATE(355),
    [sym_message_hook_directive] = STATE(355),
    [sym_mime_lookup_directive] = STATE(355),
    [sym_unmime_lookup_directive] = STATE(355),
    [sym_mono_directive] = STATE(355),
    [sym_unmono_directive] = STATE(355),
    [sym_my_hdr_directive] = STATE(355),
    [sym_unmy_hdr_directive] = STATE(355),
    [sym_open_hook_directive] = STATE(355),
    [sym_close_hook_directive] = STATE(355),
    [sym_append_hook_directive] = STATE(355),
    [sym_push_directive] = STATE(355),
    [sym_reply_hook_directive] = STATE(355),
    [sym_send_hook_directive] = STATE(355),
    [sym_send2_hook_directive] = STATE(355),
    [sym_spam_directive] = STATE(355),
    [sym_nospam_directive] = STATE(355),
    [sym_subjectrx_directive] = STATE(355),
    [sym_unsubjectrx_directive] = STATE(355),
    [sym_subscribe_to_directive] = STATE(355),
    [sym_unsubscribe_from_directive] = STATE(355),
    [sym_timeout_hook_directive] = STATE(355),
    [sym_startup_hook_directive] = STATE(355),
    [sym_shutdown_hook_directive] = STATE(355),
    [sym_unhook_directive] = STATE(355),
    [sym_set_directive] = STATE(355),
    [sym_unset_directive] = STATE(355),
    [sym_reset_directive] = STATE(355),
    [sym_toggle_directive] = STATE(355),
    [sym_setenv_directive] = STATE(355),
    [sym_unsetenv_directive] = STATE(355),
    [sym_sidebar_pin_directive] = STATE(355),
    [sym_sidebar_unpin_directive] = STATE(355),
    [sym_score_directive] = STATE(355),
    [sym_unscore_directive] = STATE(355),
    [sym_source_directive] = STATE(355),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [7] = {
    [sym__command] = STATE(352),
    [sym_account_hook_directive] = STATE(352),
    [sym_alias_directive] = STATE(352),
    [sym_unalias_directive] = STATE(352),
    [sym_alternates_directive] = STATE(352),
    [sym_unalternates_directive] = STATE(352),
    [sym_alternative_order_directive] = STATE(352),
    [sym_unalternative_order_directive] = STATE(352),
    [sym_attachments_directive] = STATE(352),
    [sym_unattachments_directive] = STATE(352),
    [sym_auto_view_directive] = STATE(352),
    [sym_unauto_view_directive] = STATE(352),
    [sym_bind_directive] = STATE(352),
    [sym_unbind_directive] = STATE(352),
    [sym_charset_hook_directive] = STATE(352),
    [sym_iconv_hook_directive] = STATE(352),
    [sym_color_directive] = STATE(352),
    [sym_uncolor_directive] = STATE(352),
    [sym_crypt_hook_directive] = STATE(352),
    [sym_index_format_hook_directive] = STATE(352),
    [sym_exec_directive] = STATE(352),
    [sym_fcc_save_hook_directive] = STATE(352),
    [sym_fcc_hook_directive] = STATE(352),
    [sym_save_hook_directive] = STATE(352),
    [sym_folder_hook_directive] = STATE(352),
    [sym_group_directive] = STATE(352),
    [sym_ungroup_directive] = STATE(352),
    [sym_hdr_order_directive] = STATE(352),
    [sym_unhdr_order_directive] = STATE(352),
    [sym_ifdef_directive] = STATE(352),
    [sym_ifndef_directive] = STATE(352),
    [sym_finish_directive] = STATE(352),
    [sym_ignore_directive] = STATE(352),
    [sym_unignore_directive] = STATE(352),
    [sym_lists_directive] = STATE(352),
    [sym_unlists_directive] = STATE(352),
    [sym_subscribe_directive] = STATE(352),
    [sym_unsubscribe_directive] = STATE(352),
    [sym_macro_directive] = STATE(352),
    [sym_unmacro_directive] = STATE(352),
    [sym_mailboxes_directive] = STATE(352),
    [sym_named_mailboxes_directive] = STATE(352),
    [sym_unmailboxes_directive] = STATE(352),
    [sym_mailto_allow_directive] = STATE(352),
    [sym_unmailto_allow_directive] = STATE(352),
    [sym_echo_directive] = STATE(352),
    [sym_cd_directive] = STATE(352),
    [sym_mbox_hook_directive] = STATE(352),
    [sym_message_hook_directive] = STATE(352),
    [sym_mime_lookup_directive] = STATE(352),
    [sym_unmime_lookup_directive] = STATE(352),
    [sym_mono_directive] = STATE(352),
    [sym_unmono_directive] = STATE(352),
    [sym_my_hdr_directive] = STATE(352),
    [sym_unmy_hdr_directive] = STATE(352),
    [sym_open_hook_directive] = STATE(352),
    [sym_close_hook_directive] = STATE(352),
    [sym_append_hook_directive] = STATE(352),
    [sym_push_directive] = STATE(352),
    [sym_reply_hook_directive] = STATE(352),
    [sym_send_hook_directive] = STATE(352),
    [sym_send2_hook_directive] = STATE(352),
    [sym_spam_directive] = STATE(352),
    [sym_nospam_directive] = STATE(352),
    [sym_subjectrx_directive] = STATE(352),
    [sym_unsubjectrx_directive] = STATE(352),
    [sym_subscribe_to_directive] = STATE(352),
    [sym_unsubscribe_from_directive] = STATE(352),
    [sym_timeout_hook_directive] = STATE(352),
    [sym_startup_hook_directive] = STATE(352),
    [sym_shutdown_hook_directive] = STATE(352),
    [sym_unhook_directive] = STATE(352),
    [sym_set_directive] = STATE(352),
    [sym_unset_directive] = STATE(352),
    [sym_reset_directive] = STATE(352),
    [sym_toggle_directive] = STATE(352),
    [sym_setenv_directive] = STATE(352),
    [sym_unsetenv_directive] = STATE(352),
    [sym_sidebar_pin_directive] = STATE(352),
    [sym_sidebar_unpin_directive] = STATE(352),
    [sym_score_directive] = STATE(352),
    [sym_unscore_directive] = STATE(352),
    [sym_source_directive] = STATE(352),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [8] = {
    [sym__command] = STATE(380),
    [sym_account_hook_directive] = STATE(380),
    [sym_alias_directive] = STATE(380),
    [sym_unalias_directive] = STATE(380),
    [sym_alternates_directive] = STATE(380),
    [sym_unalternates_directive] = STATE(380),
    [sym_alternative_order_directive] = STATE(380),
    [sym_unalternative_order_directive] = STATE(380),
    [sym_attachments_directive] = STATE(380),
    [sym_unattachments_directive] = STATE(380),
    [sym_auto_view_directive] = STATE(380),
    [sym_unauto_view_directive] = STATE(380),
    [sym_bind_directive] = STATE(380),
    [sym_unbind_directive] = STATE(380),
    [sym_charset_hook_directive] = STATE(380),
    [sym_iconv_hook_directive] = STATE(380),
    [sym_color_directive] = STATE(380),
    [sym_uncolor_directive] = STATE(380),
    [sym_crypt_hook_directive] = STATE(380),
    [sym_index_format_hook_directive] = STATE(380),
    [sym_exec_directive] = STATE(380),
    [sym_fcc_save_hook_directive] = STATE(380),
    [sym_fcc_hook_directive] = STATE(380),
    [sym_save_hook_directive] = STATE(380),
    [sym_folder_hook_directive] = STATE(380),
    [sym_group_directive] = STATE(380),
    [sym_ungroup_directive] = STATE(380),
    [sym_hdr_order_directive] = STATE(380),
    [sym_unhdr_order_directive] = STATE(380),
    [sym_ifdef_directive] = STATE(380),
    [sym_ifndef_directive] = STATE(380),
    [sym_finish_directive] = STATE(380),
    [sym_ignore_directive] = STATE(380),
    [sym_unignore_directive] = STATE(380),
    [sym_lists_directive] = STATE(380),
    [sym_unlists_directive] = STATE(380),
    [sym_subscribe_directive] = STATE(380),
    [sym_unsubscribe_directive] = STATE(380),
    [sym_macro_directive] = STATE(380),
    [sym_unmacro_directive] = STATE(380),
    [sym_mailboxes_directive] = STATE(380),
    [sym_named_mailboxes_directive] = STATE(380),
    [sym_unmailboxes_directive] = STATE(380),
    [sym_mailto_allow_directive] = STATE(380),
    [sym_unmailto_allow_directive] = STATE(380),
    [sym_echo_directive] = STATE(380),
    [sym_cd_directive] = STATE(380),
    [sym_mbox_hook_directive] = STATE(380),
    [sym_message_hook_directive] = STATE(380),
    [sym_mime_lookup_directive] = STATE(380),
    [sym_unmime_lookup_directive] = STATE(380),
    [sym_mono_directive] = STATE(380),
    [sym_unmono_directive] = STATE(380),
    [sym_my_hdr_directive] = STATE(380),
    [sym_unmy_hdr_directive] = STATE(380),
    [sym_open_hook_directive] = STATE(380),
    [sym_close_hook_directive] = STATE(380),
    [sym_append_hook_directive] = STATE(380),
    [sym_push_directive] = STATE(380),
    [sym_reply_hook_directive] = STATE(380),
    [sym_send_hook_directive] = STATE(380),
    [sym_send2_hook_directive] = STATE(380),
    [sym_spam_directive] = STATE(380),
    [sym_nospam_directive] = STATE(380),
    [sym_subjectrx_directive] = STATE(380),
    [sym_unsubjectrx_directive] = STATE(380),
    [sym_subscribe_to_directive] = STATE(380),
    [sym_unsubscribe_from_directive] = STATE(380),
    [sym_timeout_hook_directive] = STATE(380),
    [sym_startup_hook_directive] = STATE(380),
    [sym_shutdown_hook_directive] = STATE(380),
    [sym_unhook_directive] = STATE(380),
    [sym_set_directive] = STATE(380),
    [sym_unset_directive] = STATE(380),
    [sym_reset_directive] = STATE(380),
    [sym_toggle_directive] = STATE(380),
    [sym_setenv_directive] = STATE(380),
    [sym_unsetenv_directive] = STATE(380),
    [sym_sidebar_pin_directive] = STATE(380),
    [sym_sidebar_unpin_directive] = STATE(380),
    [sym_score_directive] = STATE(380),
    [sym_unscore_directive] = STATE(380),
    [sym_source_directive] = STATE(380),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [9] = {
    [sym__command] = STATE(433),
    [sym_account_hook_directive] = STATE(433),
    [sym_alias_directive] = STATE(433),
    [sym_unalias_directive] = STATE(433),
    [sym_alternates_directive] = STATE(433),
    [sym_unalternates_directive] = STATE(433),
    [sym_alternative_order_directive] = STATE(433),
    [sym_unalternative_order_directive] = STATE(433),
    [sym_attachments_directive] = STATE(433),
    [sym_unattachments_directive] = STATE(433),
    [sym_auto_view_directive] = STATE(433),
    [sym_unauto_view_directive] = STATE(433),
    [sym_bind_directive] = STATE(433),
    [sym_unbind_directive] = STATE(433),
    [sym_charset_hook_directive] = STATE(433),
    [sym_iconv_hook_directive] = STATE(433),
    [sym_color_directive] = STATE(433),
    [sym_uncolor_directive] = STATE(433),
    [sym_crypt_hook_directive] = STATE(433),
    [sym_index_format_hook_directive] = STATE(433),
    [sym_exec_directive] = STATE(433),
    [sym_fcc_save_hook_directive] = STATE(433),
    [sym_fcc_hook_directive] = STATE(433),
    [sym_save_hook_directive] = STATE(433),
    [sym_folder_hook_directive] = STATE(433),
    [sym_group_directive] = STATE(433),
    [sym_ungroup_directive] = STATE(433),
    [sym_hdr_order_directive] = STATE(433),
    [sym_unhdr_order_directive] = STATE(433),
    [sym_ifdef_directive] = STATE(433),
    [sym_ifndef_directive] = STATE(433),
    [sym_finish_directive] = STATE(433),
    [sym_ignore_directive] = STATE(433),
    [sym_unignore_directive] = STATE(433),
    [sym_lists_directive] = STATE(433),
    [sym_unlists_directive] = STATE(433),
    [sym_subscribe_directive] = STATE(433),
    [sym_unsubscribe_directive] = STATE(433),
    [sym_macro_directive] = STATE(433),
    [sym_unmacro_directive] = STATE(433),
    [sym_mailboxes_directive] = STATE(433),
    [sym_named_mailboxes_directive] = STATE(433),
    [sym_unmailboxes_directive] = STATE(433),
    [sym_mailto_allow_directive] = STATE(433),
    [sym_unmailto_allow_directive] = STATE(433),
    [sym_echo_directive] = STATE(433),
    [sym_cd_directive] = STATE(433),
    [sym_mbox_hook_directive] = STATE(433),
    [sym_message_hook_directive] = STATE(433),
    [sym_mime_lookup_directive] = STATE(433),
    [sym_unmime_lookup_directive] = STATE(433),
    [sym_mono_directive] = STATE(433),
    [sym_unmono_directive] = STATE(433),
    [sym_my_hdr_directive] = STATE(433),
    [sym_unmy_hdr_directive] = STATE(433),
    [sym_open_hook_directive] = STATE(433),
    [sym_close_hook_directive] = STATE(433),
    [sym_append_hook_directive] = STATE(433),
    [sym_push_directive] = STATE(433),
    [sym_reply_hook_directive] = STATE(433),
    [sym_send_hook_directive] = STATE(433),
    [sym_send2_hook_directive] = STATE(433),
    [sym_spam_directive] = STATE(433),
    [sym_nospam_directive] = STATE(433),
    [sym_subjectrx_directive] = STATE(433),
    [sym_unsubjectrx_directive] = STATE(433),
    [sym_subscribe_to_directive] = STATE(433),
    [sym_unsubscribe_from_directive] = STATE(433),
    [sym_timeout_hook_directive] = STATE(433),
    [sym_startup_hook_directive] = STATE(433),
    [sym_shutdown_hook_directive] = STATE(433),
    [sym_unhook_directive] = STATE(433),
    [sym_set_directive] = STATE(433),
    [sym_unset_directive] = STATE(433),
    [sym_reset_directive] = STATE(433),
    [sym_toggle_directive] = STATE(433),
    [sym_setenv_directive] = STATE(433),
    [sym_unsetenv_directive] = STATE(433),
    [sym_sidebar_pin_directive] = STATE(433),
    [sym_sidebar_unpin_directive] = STATE(433),
    [sym_score_directive] = STATE(433),
    [sym_unscore_directive] = STATE(433),
    [sym_source_directive] = STATE(433),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [10] = {
    [sym__command] = STATE(436),
    [sym_account_hook_directive] = STATE(436),
    [sym_alias_directive] = STATE(436),
    [sym_unalias_directive] = STATE(436),
    [sym_alternates_directive] = STATE(436),
    [sym_unalternates_directive] = STATE(436),
    [sym_alternative_order_directive] = STATE(436),
    [sym_unalternative_order_directive] = STATE(436),
    [sym_attachments_directive] = STATE(436),
    [sym_unattachments_directive] = STATE(436),
    [sym_auto_view_directive] = STATE(436),
    [sym_unauto_view_directive] = STATE(436),
    [sym_bind_directive] = STATE(436),
    [sym_unbind_directive] = STATE(436),
    [sym_charset_hook_directive] = STATE(436),
    [sym_iconv_hook_directive] = STATE(436),
    [sym_color_directive] = STATE(436),
    [sym_uncolor_directive] = STATE(436),
    [sym_crypt_hook_directive] = STATE(436),
    [sym_index_format_hook_directive] = STATE(436),
    [sym_exec_directive] = STATE(436),
    [sym_fcc_save_hook_directive] = STATE(436),
    [sym_fcc_hook_directive] = STATE(436),
    [sym_save_hook_directive] = STATE(436),
    [sym_folder_hook_directive] = STATE(436),
    [sym_group_directive] = STATE(436),
    [sym_ungroup_directive] = STATE(436),
    [sym_hdr_order_directive] = STATE(436),
    [sym_unhdr_order_directive] = STATE(436),
    [sym_ifdef_directive] = STATE(436),
    [sym_ifndef_directive] = STATE(436),
    [sym_finish_directive] = STATE(436),
    [sym_ignore_directive] = STATE(436),
    [sym_unignore_directive] = STATE(436),
    [sym_lists_directive] = STATE(436),
    [sym_unlists_directive] = STATE(436),
    [sym_subscribe_directive] = STATE(436),
    [sym_unsubscribe_directive] = STATE(436),
    [sym_macro_directive] = STATE(436),
    [sym_unmacro_directive] = STATE(436),
    [sym_mailboxes_directive] = STATE(436),
    [sym_named_mailboxes_directive] = STATE(436),
    [sym_unmailboxes_directive] = STATE(436),
    [sym_mailto_allow_directive] = STATE(436),
    [sym_unmailto_allow_directive] = STATE(436),
    [sym_echo_directive] = STATE(436),
    [sym_cd_directive] = STATE(436),
    [sym_mbox_hook_directive] = STATE(436),
    [sym_message_hook_directive] = STATE(436),
    [sym_mime_lookup_directive] = STATE(436),
    [sym_unmime_lookup_directive] = STATE(436),
    [sym_mono_directive] = STATE(436),
    [sym_unmono_directive] = STATE(436),
    [sym_my_hdr_directive] = STATE(436),
    [sym_unmy_hdr_directive] = STATE(436),
    [sym_open_hook_directive] = STATE(436),
    [sym_close_hook_directive] = STATE(436),
    [sym_append_hook_directive] = STATE(436),
    [sym_push_directive] = STATE(436),
    [sym_reply_hook_directive] = STATE(436),
    [sym_send_hook_directive] = STATE(436),
    [sym_send2_hook_directive] = STATE(436),
    [sym_spam_directive] = STATE(436),
    [sym_nospam_directive] = STATE(436),
    [sym_subjectrx_directive] = STATE(436),
    [sym_unsubjectrx_directive] = STATE(436),
    [sym_subscribe_to_directive] = STATE(436),
    [sym_unsubscribe_from_directive] = STATE(436),
    [sym_timeout_hook_directive] = STATE(436),
    [sym_startup_hook_directive] = STATE(436),
    [sym_shutdown_hook_directive] = STATE(436),
    [sym_unhook_directive] = STATE(436),
    [sym_set_directive] = STATE(436),
    [sym_unset_directive] = STATE(436),
    [sym_reset_directive] = STATE(436),
    [sym_toggle_directive] = STATE(436),
    [sym_setenv_directive] = STATE(436),
    [sym_unsetenv_directive] = STATE(436),
    [sym_sidebar_pin_directive] = STATE(436),
    [sym_sidebar_unpin_directive] = STATE(436),
    [sym_score_directive] = STATE(436),
    [sym_unscore_directive] = STATE(436),
    [sym_source_directive] = STATE(436),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [11] = {
    [sym__command] = STATE(315),
    [sym_account_hook_directive] = STATE(315),
    [sym_alias_directive] = STATE(315),
    [sym_unalias_directive] = STATE(315),
    [sym_alternates_directive] = STATE(315),
    [sym_unalternates_directive] = STATE(315),
    [sym_alternative_order_directive] = STATE(315),
    [sym_unalternative_order_directive] = STATE(315),
    [sym_attachments_directive] = STATE(315),
    [sym_unattachments_directive] = STATE(315),
    [sym_auto_view_directive] = STATE(315),
    [sym_unauto_view_directive] = STATE(315),
    [sym_bind_directive] = STATE(315),
    [sym_unbind_directive] = STATE(315),
    [sym_charset_hook_directive] = STATE(315),
    [sym_iconv_hook_directive] = STATE(315),
    [sym_color_directive] = STATE(315),
    [sym_uncolor_directive] = STATE(315),
    [sym_crypt_hook_directive] = STATE(315),
    [sym_index_format_hook_directive] = STATE(315),
    [sym_exec_directive] = STATE(315),
    [sym_fcc_save_hook_directive] = STATE(315),
    [sym_fcc_hook_directive] = STATE(315),
    [sym_save_hook_directive] = STATE(315),
    [sym_folder_hook_directive] = STATE(315),
    [sym_group_directive] = STATE(315),
    [sym_ungroup_directive] = STATE(315),
    [sym_hdr_order_directive] = STATE(315),
    [sym_unhdr_order_directive] = STATE(315),
    [sym_ifdef_directive] = STATE(315),
    [sym_ifndef_directive] = STATE(315),
    [sym_finish_directive] = STATE(315),
    [sym_ignore_directive] = STATE(315),
    [sym_unignore_directive] = STATE(315),
    [sym_lists_directive] = STATE(315),
    [sym_unlists_directive] = STATE(315),
    [sym_subscribe_directive] = STATE(315),
    [sym_unsubscribe_directive] = STATE(315),
    [sym_macro_directive] = STATE(315),
    [sym_unmacro_directive] = STATE(315),
    [sym_mailboxes_directive] = STATE(315),
    [sym_named_mailboxes_directive] = STATE(315),
    [sym_unmailboxes_directive] = STATE(315),
    [sym_mailto_allow_directive] = STATE(315),
    [sym_unmailto_allow_directive] = STATE(315),
    [sym_echo_directive] = STATE(315),
    [sym_cd_directive] = STATE(315),
    [sym_mbox_hook_directive] = STATE(315),
    [sym_message_hook_directive] = STATE(315),
    [sym_mime_lookup_directive] = STATE(315),
    [sym_unmime_lookup_directive] = STATE(315),
    [sym_mono_directive] = STATE(315),
    [sym_unmono_directive] = STATE(315),
    [sym_my_hdr_directive] = STATE(315),
    [sym_unmy_hdr_directive] = STATE(315),
    [sym_open_hook_directive] = STATE(315),
    [sym_close_hook_directive] = STATE(315),
    [sym_append_hook_directive] = STATE(315),
    [sym_push_directive] = STATE(315),
    [sym_reply_hook_directive] = STATE(315),
    [sym_send_hook_directive] = STATE(315),
    [sym_send2_hook_directive] = STATE(315),
    [sym_spam_directive] = STATE(315),
    [sym_nospam_directive] = STATE(315),
    [sym_subjectrx_directive] = STATE(315),
    [sym_unsubjectrx_directive] = STATE(315),
    [sym_subscribe_to_directive] = STATE(315),
    [sym_unsubscribe_from_directive] = STATE(315),
    [sym_timeout_hook_directive] = STATE(315),
    [sym_startup_hook_directive] = STATE(315),
    [sym_shutdown_hook_directive] = STATE(315),
    [sym_unhook_directive] = STATE(315),
    [sym_set_directive] = STATE(315),
    [sym_unset_directive] = STATE(315),
    [sym_reset_directive] = STATE(315),
    [sym_toggle_directive] = STATE(315),
    [sym_setenv_directive] = STATE(315),
    [sym_unsetenv_directive] = STATE(315),
    [sym_sidebar_pin_directive] = STATE(315),
    [sym_sidebar_unpin_directive] = STATE(315),
    [sym_score_directive] = STATE(315),
    [sym_unscore_directive] = STATE(315),
    [sym_source_directive] = STATE(315),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [12] = {
    [sym__command] = STATE(323),
    [sym_account_hook_directive] = STATE(323),
    [sym_alias_directive] = STATE(323),
    [sym_unalias_directive] = STATE(323),
    [sym_alternates_directive] = STATE(323),
    [sym_unalternates_directive] = STATE(323),
    [sym_alternative_order_directive] = STATE(323),
    [sym_unalternative_order_directive] = STATE(323),
    [sym_attachments_directive] = STATE(323),
    [sym_unattachments_directive] = STATE(323),
    [sym_auto_view_directive] = STATE(323),
    [sym_unauto_view_directive] = STATE(323),
    [sym_bind_directive] = STATE(323),
    [sym_unbind_directive] = STATE(323),
    [sym_charset_hook_directive] = STATE(323),
    [sym_iconv_hook_directive] = STATE(323),
    [sym_color_directive] = STATE(323),
    [sym_uncolor_directive] = STATE(323),
    [sym_crypt_hook_directive] = STATE(323),
    [sym_index_format_hook_directive] = STATE(323),
    [sym_exec_directive] = STATE(323),
    [sym_fcc_save_hook_directive] = STATE(323),
    [sym_fcc_hook_directive] = STATE(323),
    [sym_save_hook_directive] = STATE(323),
    [sym_folder_hook_directive] = STATE(323),
    [sym_group_directive] = STATE(323),
    [sym_ungroup_directive] = STATE(323),
    [sym_hdr_order_directive] = STATE(323),
    [sym_unhdr_order_directive] = STATE(323),
    [sym_ifdef_directive] = STATE(323),
    [sym_ifndef_directive] = STATE(323),
    [sym_finish_directive] = STATE(323),
    [sym_ignore_directive] = STATE(323),
    [sym_unignore_directive] = STATE(323),
    [sym_lists_directive] = STATE(323),
    [sym_unlists_directive] = STATE(323),
    [sym_subscribe_directive] = STATE(323),
    [sym_unsubscribe_directive] = STATE(323),
    [sym_macro_directive] = STATE(323),
    [sym_unmacro_directive] = STATE(323),
    [sym_mailboxes_directive] = STATE(323),
    [sym_named_mailboxes_directive] = STATE(323),
    [sym_unmailboxes_directive] = STATE(323),
    [sym_mailto_allow_directive] = STATE(323),
    [sym_unmailto_allow_directive] = STATE(323),
    [sym_echo_directive] = STATE(323),
    [sym_cd_directive] = STATE(323),
    [sym_mbox_hook_directive] = STATE(323),
    [sym_message_hook_directive] = STATE(323),
    [sym_mime_lookup_directive] = STATE(323),
    [sym_unmime_lookup_directive] = STATE(323),
    [sym_mono_directive] = STATE(323),
    [sym_unmono_directive] = STATE(323),
    [sym_my_hdr_directive] = STATE(323),
    [sym_unmy_hdr_directive] = STATE(323),
    [sym_open_hook_directive] = STATE(323),
    [sym_close_hook_directive] = STATE(323),
    [sym_append_hook_directive] = STATE(323),
    [sym_push_directive] = STATE(323),
    [sym_reply_hook_directive] = STATE(323),
    [sym_send_hook_directive] = STATE(323),
    [sym_send2_hook_directive] = STATE(323),
    [sym_spam_directive] = STATE(323),
    [sym_nospam_directive] = STATE(323),
    [sym_subjectrx_directive] = STATE(323),
    [sym_unsubjectrx_directive] = STATE(323),
    [sym_subscribe_to_directive] = STATE(323),
    [sym_unsubscribe_from_directive] = STATE(323),
    [sym_timeout_hook_directive] = STATE(323),
    [sym_startup_hook_directive] = STATE(323),
    [sym_shutdown_hook_directive] = STATE(323),
    [sym_unhook_directive] = STATE(323),
    [sym_set_directive] = STATE(323),
    [sym_unset_directive] = STATE(323),
    [sym_reset_directive] = STATE(323),
    [sym_toggle_directive] = STATE(323),
    [sym_setenv_directive] = STATE(323),
    [sym_unsetenv_directive] = STATE(323),
    [sym_sidebar_pin_directive] = STATE(323),
    [sym_sidebar_unpin_directive] = STATE(323),
    [sym_score_directive] = STATE(323),
    [sym_unscore_directive] = STATE(323),
    [sym_source_directive] = STATE(323),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [13] = {
    [sym__command] = STATE(324),
    [sym_account_hook_directive] = STATE(324),
    [sym_alias_directive] = STATE(324),
    [sym_unalias_directive] = STATE(324),
    [sym_alternates_directive] = STATE(324),
    [sym_unalternates_directive] = STATE(324),
    [sym_alternative_order_directive] = STATE(324),
    [sym_unalternative_order_directive] = STATE(324),
    [sym_attachments_directive] = STATE(324),
    [sym_unattachments_directive] = STATE(324),
    [sym_auto_view_directive] = STATE(324),
    [sym_unauto_view_directive] = STATE(324),
    [sym_bind_directive] = STATE(324),
    [sym_unbind_directive] = STATE(324),
    [sym_charset_hook_directive] = STATE(324),
    [sym_iconv_hook_directive] = STATE(324),
    [sym_color_directive] = STATE(324),
    [sym_uncolor_directive] = STATE(324),
    [sym_crypt_hook_directive] = STATE(324),
    [sym_index_format_hook_directive] = STATE(324),
    [sym_exec_directive] = STATE(324),
    [sym_fcc_save_hook_directive] = STATE(324),
    [sym_fcc_hook_directive] = STATE(324),
    [sym_save_hook_directive] = STATE(324),
    [sym_folder_hook_directive] = STATE(324),
    [sym_group_directive] = STATE(324),
    [sym_ungroup_directive] = STATE(324),
    [sym_hdr_order_directive] = STATE(324),
    [sym_unhdr_order_directive] = STATE(324),
    [sym_ifdef_directive] = STATE(324),
    [sym_ifndef_directive] = STATE(324),
    [sym_finish_directive] = STATE(324),
    [sym_ignore_directive] = STATE(324),
    [sym_unignore_directive] = STATE(324),
    [sym_lists_directive] = STATE(324),
    [sym_unlists_directive] = STATE(324),
    [sym_subscribe_directive] = STATE(324),
    [sym_unsubscribe_directive] = STATE(324),
    [sym_macro_directive] = STATE(324),
    [sym_unmacro_directive] = STATE(324),
    [sym_mailboxes_directive] = STATE(324),
    [sym_named_mailboxes_directive] = STATE(324),
    [sym_unmailboxes_directive] = STATE(324),
    [sym_mailto_allow_directive] = STATE(324),
    [sym_unmailto_allow_directive] = STATE(324),
    [sym_echo_directive] = STATE(324),
    [sym_cd_directive] = STATE(324),
    [sym_mbox_hook_directive] = STATE(324),
    [sym_message_hook_directive] = STATE(324),
    [sym_mime_lookup_directive] = STATE(324),
    [sym_unmime_lookup_directive] = STATE(324),
    [sym_mono_directive] = STATE(324),
    [sym_unmono_directive] = STATE(324),
    [sym_my_hdr_directive] = STATE(324),
    [sym_unmy_hdr_directive] = STATE(324),
    [sym_open_hook_directive] = STATE(324),
    [sym_close_hook_directive] = STATE(324),
    [sym_append_hook_directive] = STATE(324),
    [sym_push_directive] = STATE(324),
    [sym_reply_hook_directive] = STATE(324),
    [sym_send_hook_directive] = STATE(324),
    [sym_send2_hook_directive] = STATE(324),
    [sym_spam_directive] = STATE(324),
    [sym_nospam_directive] = STATE(324),
    [sym_subjectrx_directive] = STATE(324),
    [sym_unsubjectrx_directive] = STATE(324),
    [sym_subscribe_to_directive] = STATE(324),
    [sym_unsubscribe_from_directive] = STATE(324),
    [sym_timeout_hook_directive] = STATE(324),
    [sym_startup_hook_directive] = STATE(324),
    [sym_shutdown_hook_directive] = STATE(324),
    [sym_unhook_directive] = STATE(324),
    [sym_set_directive] = STATE(324),
    [sym_unset_directive] = STATE(324),
    [sym_reset_directive] = STATE(324),
    [sym_toggle_directive] = STATE(324),
    [sym_setenv_directive] = STATE(324),
    [sym_unsetenv_directive] = STATE(324),
    [sym_sidebar_pin_directive] = STATE(324),
    [sym_sidebar_unpin_directive] = STATE(324),
    [sym_score_directive] = STATE(324),
    [sym_unscore_directive] = STATE(324),
    [sym_source_directive] = STATE(324),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [14] = {
    [sym__command] = STATE(322),
    [sym_account_hook_directive] = STATE(322),
    [sym_alias_directive] = STATE(322),
    [sym_unalias_directive] = STATE(322),
    [sym_alternates_directive] = STATE(322),
    [sym_unalternates_directive] = STATE(322),
    [sym_alternative_order_directive] = STATE(322),
    [sym_unalternative_order_directive] = STATE(322),
    [sym_attachments_directive] = STATE(322),
    [sym_unattachments_directive] = STATE(322),
    [sym_auto_view_directive] = STATE(322),
    [sym_unauto_view_directive] = STATE(322),
    [sym_bind_directive] = STATE(322),
    [sym_unbind_directive] = STATE(322),
    [sym_charset_hook_directive] = STATE(322),
    [sym_iconv_hook_directive] = STATE(322),
    [sym_color_directive] = STATE(322),
    [sym_uncolor_directive] = STATE(322),
    [sym_crypt_hook_directive] = STATE(322),
    [sym_index_format_hook_directive] = STATE(322),
    [sym_exec_directive] = STATE(322),
    [sym_fcc_save_hook_directive] = STATE(322),
    [sym_fcc_hook_directive] = STATE(322),
    [sym_save_hook_directive] = STATE(322),
    [sym_folder_hook_directive] = STATE(322),
    [sym_group_directive] = STATE(322),
    [sym_ungroup_directive] = STATE(322),
    [sym_hdr_order_directive] = STATE(322),
    [sym_unhdr_order_directive] = STATE(322),
    [sym_ifdef_directive] = STATE(322),
    [sym_ifndef_directive] = STATE(322),
    [sym_finish_directive] = STATE(322),
    [sym_ignore_directive] = STATE(322),
    [sym_unignore_directive] = STATE(322),
    [sym_lists_directive] = STATE(322),
    [sym_unlists_directive] = STATE(322),
    [sym_subscribe_directive] = STATE(322),
    [sym_unsubscribe_directive] = STATE(322),
    [sym_macro_directive] = STATE(322),
    [sym_unmacro_directive] = STATE(322),
    [sym_mailboxes_directive] = STATE(322),
    [sym_named_mailboxes_directive] = STATE(322),
    [sym_unmailboxes_directive] = STATE(322),
    [sym_mailto_allow_directive] = STATE(322),
    [sym_unmailto_allow_directive] = STATE(322),
    [sym_echo_directive] = STATE(322),
    [sym_cd_directive] = STATE(322),
    [sym_mbox_hook_directive] = STATE(322),
    [sym_message_hook_directive] = STATE(322),
    [sym_mime_lookup_directive] = STATE(322),
    [sym_unmime_lookup_directive] = STATE(322),
    [sym_mono_directive] = STATE(322),
    [sym_unmono_directive] = STATE(322),
    [sym_my_hdr_directive] = STATE(322),
    [sym_unmy_hdr_directive] = STATE(322),
    [sym_open_hook_directive] = STATE(322),
    [sym_close_hook_directive] = STATE(322),
    [sym_append_hook_directive] = STATE(322),
    [sym_push_directive] = STATE(322),
    [sym_reply_hook_directive] = STATE(322),
    [sym_send_hook_directive] = STATE(322),
    [sym_send2_hook_directive] = STATE(322),
    [sym_spam_directive] = STATE(322),
    [sym_nospam_directive] = STATE(322),
    [sym_subjectrx_directive] = STATE(322),
    [sym_unsubjectrx_directive] = STATE(322),
    [sym_subscribe_to_directive] = STATE(322),
    [sym_unsubscribe_from_directive] = STATE(322),
    [sym_timeout_hook_directive] = STATE(322),
    [sym_startup_hook_directive] = STATE(322),
    [sym_shutdown_hook_directive] = STATE(322),
    [sym_unhook_directive] = STATE(322),
    [sym_set_directive] = STATE(322),
    [sym_unset_directive] = STATE(322),
    [sym_reset_directive] = STATE(322),
    [sym_toggle_directive] = STATE(322),
    [sym_setenv_directive] = STATE(322),
    [sym_unsetenv_directive] = STATE(322),
    [sym_sidebar_pin_directive] = STATE(322),
    [sym_sidebar_unpin_directive] = STATE(322),
    [sym_score_directive] = STATE(322),
    [sym_unscore_directive] = STATE(322),
    [sym_source_directive] = STATE(322),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [15] = {
    [sym__command] = STATE(357),
    [sym_account_hook_directive] = STATE(357),
    [sym_alias_directive] = STATE(357),
    [sym_unalias_directive] = STATE(357),
    [sym_alternates_directive] = STATE(357),
    [sym_unalternates_directive] = STATE(357),
    [sym_alternative_order_directive] = STATE(357),
    [sym_unalternative_order_directive] = STATE(357),
    [sym_attachments_directive] = STATE(357),
    [sym_unattachments_directive] = STATE(357),
    [sym_auto_view_directive] = STATE(357),
    [sym_unauto_view_directive] = STATE(357),
    [sym_bind_directive] = STATE(357),
    [sym_unbind_directive] = STATE(357),
    [sym_charset_hook_directive] = STATE(357),
    [sym_iconv_hook_directive] = STATE(357),
    [sym_color_directive] = STATE(357),
    [sym_uncolor_directive] = STATE(357),
    [sym_crypt_hook_directive] = STATE(357),
    [sym_index_format_hook_directive] = STATE(357),
    [sym_exec_directive] = STATE(357),
    [sym_fcc_save_hook_directive] = STATE(357),
    [sym_fcc_hook_directive] = STATE(357),
    [sym_save_hook_directive] = STATE(357),
    [sym_folder_hook_directive] = STATE(357),
    [sym_group_directive] = STATE(357),
    [sym_ungroup_directive] = STATE(357),
    [sym_hdr_order_directive] = STATE(357),
    [sym_unhdr_order_directive] = STATE(357),
    [sym_ifdef_directive] = STATE(357),
    [sym_ifndef_directive] = STATE(357),
    [sym_finish_directive] = STATE(357),
    [sym_ignore_directive] = STATE(357),
    [sym_unignore_directive] = STATE(357),
    [sym_lists_directive] = STATE(357),
    [sym_unlists_directive] = STATE(357),
    [sym_subscribe_directive] = STATE(357),
    [sym_unsubscribe_directive] = STATE(357),
    [sym_macro_directive] = STATE(357),
    [sym_unmacro_directive] = STATE(357),
    [sym_mailboxes_directive] = STATE(357),
    [sym_named_mailboxes_directive] = STATE(357),
    [sym_unmailboxes_directive] = STATE(357),
    [sym_mailto_allow_directive] = STATE(357),
    [sym_unmailto_allow_directive] = STATE(357),
    [sym_echo_directive] = STATE(357),
    [sym_cd_directive] = STATE(357),
    [sym_mbox_hook_directive] = STATE(357),
    [sym_message_hook_directive] = STATE(357),
    [sym_mime_lookup_directive] = STATE(357),
    [sym_unmime_lookup_directive] = STATE(357),
    [sym_mono_directive] = STATE(357),
    [sym_unmono_directive] = STATE(357),
    [sym_my_hdr_directive] = STATE(357),
    [sym_unmy_hdr_directive] = STATE(357),
    [sym_open_hook_directive] = STATE(357),
    [sym_close_hook_directive] = STATE(357),
    [sym_append_hook_directive] = STATE(357),
    [sym_push_directive] = STATE(357),
    [sym_reply_hook_directive] = STATE(357),
    [sym_send_hook_directive] = STATE(357),
    [sym_send2_hook_directive] = STATE(357),
    [sym_spam_directive] = STATE(357),
    [sym_nospam_directive] = STATE(357),
    [sym_subjectrx_directive] = STATE(357),
    [sym_unsubjectrx_directive] = STATE(357),
    [sym_subscribe_to_directive] = STATE(357),
    [sym_unsubscribe_from_directive] = STATE(357),
    [sym_timeout_hook_directive] = STATE(357),
    [sym_startup_hook_directive] = STATE(357),
    [sym_shutdown_hook_directive] = STATE(357),
    [sym_unhook_directive] = STATE(357),
    [sym_set_directive] = STATE(357),
    [sym_unset_directive] = STATE(357),
    [sym_reset_directive] = STATE(357),
    [sym_toggle_directive] = STATE(357),
    [sym_setenv_directive] = STATE(357),
    [sym_unsetenv_directive] = STATE(357),
    [sym_sidebar_pin_directive] = STATE(357),
    [sym_sidebar_unpin_directive] = STATE(357),
    [sym_score_directive] = STATE(357),
    [sym_unscore_directive] = STATE(357),
    [sym_source_directive] = STATE(357),
    [anon_sym_account_DASHhook] = ACTIONS(436),
    [anon_sym_alias] = ACTIONS(438),
    [anon_sym_unalias] = ACTIONS(440),
    [anon_sym_alternates] = ACTIONS(442),
    [anon_sym_unalternates] = ACTIONS(444),
    [anon_sym_alternative_order] = ACTIONS(446),
    [anon_sym_unalternative_order] = ACTIONS(448),
    [anon_sym_attachments] = ACTIONS(450),
    [anon_sym_unattachments] = ACTIONS(452),
    [anon_sym_auto_view] = ACTIONS(454),
    [anon_sym_unauto_view] = ACTIONS(456),
    [anon_sym_bind] = ACTIONS(458),
    [anon_sym_unbind] = ACTIONS(460),
    [anon_sym_charset_DASHhook] = ACTIONS(462),
    [anon_sym_iconv_DASHhook] = ACTIONS(464),
    [anon_sym_color] = ACTIONS(466),
    [anon_sym_uncolor] = ACTIONS(468),
    [anon_sym_crypt_DASHhook] = ACTIONS(470),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(472),
    [anon_sym_exec] = ACTIONS(474),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(476),
    [anon_sym_fcc_DASHhook] = ACTIONS(478),
    [anon_sym_save_DASHhook] = ACTIONS(480),
    [anon_sym_folder_DASHhook] = ACTIONS(482),
    [anon_sym_group] = ACTIONS(484),
    [anon_sym_ungroup] = ACTIONS(486),
    [anon_sym_hdr_order] = ACTIONS(488),
    [anon_sym_unhdr_order] = ACTIONS(490),
    [anon_sym_ifdef] = ACTIONS(492),
    [anon_sym_ifndef] = ACTIONS(494),
    [anon_sym_finish] = ACTIONS(496),
    [anon_sym_ignore] = ACTIONS(498),
    [anon_sym_unignore] = ACTIONS(500),
    [anon_sym_lists] = ACTIONS(502),
    [anon_sym_unlists] = ACTIONS(504),
    [anon_sym_subscribe] = ACTIONS(75),
    [anon_sym_unsubscribe] = ACTIONS(77),
    [anon_sym_macro] = ACTIONS(506),
    [anon_sym_unmacro] = ACTIONS(508),
    [anon_sym_mailboxes] = ACTIONS(510),
    [anon_sym_named_DASHmailboxes] = ACTIONS(512),
    [anon_sym_unmailboxes] = ACTIONS(514),
    [anon_sym_mailto_allow] = ACTIONS(516),
    [anon_sym_unmailto_allow] = ACTIONS(518),
    [anon_sym_echo] = ACTIONS(520),
    [anon_sym_cd] = ACTIONS(522),
    [anon_sym_mbox_DASHhook] = ACTIONS(524),
    [anon_sym_message_DASHhook] = ACTIONS(526),
    [anon_sym_mime_lookup] = ACTIONS(528),
    [anon_sym_unmime_lookup] = ACTIONS(530),
    [anon_sym_mono] = ACTIONS(532),
    [anon_sym_unmono] = ACTIONS(534),
    [anon_sym_my_hdr] = ACTIONS(536),
    [anon_sym_unmy_hdr] = ACTIONS(538),
    [anon_sym_open_DASHhook] = ACTIONS(540),
    [anon_sym_close_DASHhook] = ACTIONS(542),
    [anon_sym_append_DASHhook] = ACTIONS(544),
    [anon_sym_push] = ACTIONS(546),
    [anon_sym_reply_DASHhook] = ACTIONS(548),
    [anon_sym_send_DASHhook] = ACTIONS(550),
    [anon_sym_send2_DASHhook] = ACTIONS(552),
    [anon_sym_spam] = ACTIONS(554),
    [anon_sym_nospam] = ACTIONS(556),
    [anon_sym_subjectrx] = ACTIONS(558),
    [anon_sym_unsubjectrx] = ACTIONS(560),
    [anon_sym_subscribe_DASHto] = ACTIONS(562),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(564),
    [anon_sym_timeout_DASHhook] = ACTIONS(566),
    [anon_sym_startup_DASHhook] = ACTIONS(568),
    [anon_sym_shutdown_DASHhook] = ACTIONS(570),
    [anon_sym_unhook] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_unset] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(574),
    [anon_sym_toggle] = ACTIONS(576),
    [anon_sym_setenv] = ACTIONS(578),
    [anon_sym_unsetenv] = ACTIONS(580),
    [anon_sym_sidebar_pin] = ACTIONS(582),
    [anon_sym_sidebar_unpin] = ACTIONS(584),
    [anon_sym_score] = ACTIONS(586),
    [anon_sym_unscore] = ACTIONS(588),
    [anon_sym_source] = ACTIONS(590),
  },
  [16] = {
    [anon_sym_account_DASHhook] = ACTIONS(592),
    [anon_sym_alias] = ACTIONS(592),
    [anon_sym_unalias] = ACTIONS(592),
    [anon_sym_STAR] = ACTIONS(592),
    [anon_sym_alternates] = ACTIONS(592),
    [anon_sym_unalternates] = ACTIONS(592),
    [anon_sym_alternative_order] = ACTIONS(592),
    [anon_sym_unalternative_order] = ACTIONS(592),
    [anon_sym_attachments] = ACTIONS(592),
    [anon_sym_unattachments] = ACTIONS(592),
    [anon_sym_auto_view] = ACTIONS(592),
    [anon_sym_unauto_view] = ACTIONS(592),
    [anon_sym_bind] = ACTIONS(592),
    [anon_sym_unbind] = ACTIONS(592),
    [anon_sym_charset_DASHhook] = ACTIONS(592),
    [anon_sym_iconv_DASHhook] = ACTIONS(592),
    [anon_sym_bold] = ACTIONS(592),
    [anon_sym_underline] = ACTIONS(592),
    [anon_sym_none] = ACTIONS(592),
    [anon_sym_reverse] = ACTIONS(592),
    [anon_sym_standout] = ACTIONS(592),
    [anon_sym_color] = ACTIONS(592),
    [anon_sym_uncolor] = ACTIONS(592),
    [anon_sym_crypt_DASHhook] = ACTIONS(592),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(592),
    [anon_sym_exec] = ACTIONS(592),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(592),
    [anon_sym_fcc_DASHhook] = ACTIONS(592),
    [anon_sym_save_DASHhook] = ACTIONS(592),
    [anon_sym_folder_DASHhook] = ACTIONS(592),
    [anon_sym_DASHrx] = ACTIONS(592),
    [anon_sym_DASHaddr] = ACTIONS(592),
    [anon_sym_group] = ACTIONS(592),
    [anon_sym_ungroup] = ACTIONS(592),
    [anon_sym_hdr_order] = ACTIONS(592),
    [anon_sym_unhdr_order] = ACTIONS(592),
    [anon_sym_ifdef] = ACTIONS(592),
    [anon_sym_ifndef] = ACTIONS(592),
    [anon_sym_finish] = ACTIONS(592),
    [anon_sym_ignore] = ACTIONS(592),
    [anon_sym_unignore] = ACTIONS(592),
    [anon_sym_lists] = ACTIONS(592),
    [anon_sym_unlists] = ACTIONS(592),
    [anon_sym_subscribe] = ACTIONS(594),
    [anon_sym_unsubscribe] = ACTIONS(594),
    [anon_sym_macro] = ACTIONS(592),
    [anon_sym_unmacro] = ACTIONS(592),
    [anon_sym_mailboxes] = ACTIONS(592),
    [anon_sym_named_DASHmailboxes] = ACTIONS(592),
    [anon_sym_unmailboxes] = ACTIONS(592),
    [anon_sym_mailto_allow] = ACTIONS(592),
    [anon_sym_unmailto_allow] = ACTIONS(592),
    [anon_sym_echo] = ACTIONS(592),
    [anon_sym_cd] = ACTIONS(592),
    [anon_sym_mbox_DASHhook] = ACTIONS(592),
    [anon_sym_message_DASHhook] = ACTIONS(592),
    [anon_sym_mime_lookup] = ACTIONS(592),
    [anon_sym_unmime_lookup] = ACTIONS(592),
    [anon_sym_mono] = ACTIONS(592),
    [anon_sym_unmono] = ACTIONS(592),
    [anon_sym_my_hdr] = ACTIONS(592),
    [anon_sym_unmy_hdr] = ACTIONS(592),
    [anon_sym_open_DASHhook] = ACTIONS(592),
    [anon_sym_close_DASHhook] = ACTIONS(592),
    [anon_sym_append_DASHhook] = ACTIONS(592),
    [anon_sym_push] = ACTIONS(592),
    [anon_sym_reply_DASHhook] = ACTIONS(592),
    [anon_sym_send_DASHhook] = ACTIONS(592),
    [anon_sym_send2_DASHhook] = ACTIONS(592),
    [anon_sym_spam] = ACTIONS(592),
    [anon_sym_nospam] = ACTIONS(592),
    [anon_sym_subjectrx] = ACTIONS(592),
    [anon_sym_unsubjectrx] = ACTIONS(592),
    [anon_sym_subscribe_DASHto] = ACTIONS(592),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(592),
    [anon_sym_timeout_DASHhook] = ACTIONS(592),
    [anon_sym_startup_DASHhook] = ACTIONS(592),
    [anon_sym_shutdown_DASHhook] = ACTIONS(592),
    [anon_sym_unhook] = ACTIONS(592),
    [anon_sym_set] = ACTIONS(594),
    [anon_sym_unset] = ACTIONS(594),
    [anon_sym_reset] = ACTIONS(592),
    [anon_sym_toggle] = ACTIONS(592),
    [anon_sym_setenv] = ACTIONS(592),
    [anon_sym_unsetenv] = ACTIONS(592),
    [anon_sym_sidebar_pin] = ACTIONS(592),
    [anon_sym_sidebar_unpin] = ACTIONS(592),
    [anon_sym_score] = ACTIONS(592),
    [anon_sym_unscore] = ACTIONS(592),
    [sym_int] = ACTIONS(592),
    [anon_sym_source] = ACTIONS(592),
  },
  [17] = {
    [anon_sym_account_DASHhook] = ACTIONS(596),
    [anon_sym_alias] = ACTIONS(596),
    [anon_sym_unalias] = ACTIONS(596),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_alternates] = ACTIONS(596),
    [anon_sym_unalternates] = ACTIONS(596),
    [anon_sym_alternative_order] = ACTIONS(596),
    [anon_sym_unalternative_order] = ACTIONS(596),
    [anon_sym_attachments] = ACTIONS(596),
    [anon_sym_unattachments] = ACTIONS(596),
    [anon_sym_auto_view] = ACTIONS(596),
    [anon_sym_unauto_view] = ACTIONS(596),
    [anon_sym_bind] = ACTIONS(596),
    [anon_sym_unbind] = ACTIONS(596),
    [anon_sym_charset_DASHhook] = ACTIONS(596),
    [anon_sym_iconv_DASHhook] = ACTIONS(596),
    [anon_sym_bold] = ACTIONS(596),
    [anon_sym_underline] = ACTIONS(596),
    [anon_sym_none] = ACTIONS(596),
    [anon_sym_reverse] = ACTIONS(596),
    [anon_sym_standout] = ACTIONS(596),
    [anon_sym_color] = ACTIONS(596),
    [anon_sym_uncolor] = ACTIONS(596),
    [anon_sym_crypt_DASHhook] = ACTIONS(596),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(596),
    [anon_sym_exec] = ACTIONS(596),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(596),
    [anon_sym_fcc_DASHhook] = ACTIONS(596),
    [anon_sym_save_DASHhook] = ACTIONS(596),
    [anon_sym_folder_DASHhook] = ACTIONS(596),
    [anon_sym_DASHrx] = ACTIONS(596),
    [anon_sym_DASHaddr] = ACTIONS(596),
    [anon_sym_group] = ACTIONS(596),
    [anon_sym_ungroup] = ACTIONS(596),
    [anon_sym_hdr_order] = ACTIONS(596),
    [anon_sym_unhdr_order] = ACTIONS(596),
    [anon_sym_ifdef] = ACTIONS(596),
    [anon_sym_ifndef] = ACTIONS(596),
    [anon_sym_finish] = ACTIONS(596),
    [anon_sym_ignore] = ACTIONS(596),
    [anon_sym_unignore] = ACTIONS(596),
    [anon_sym_lists] = ACTIONS(596),
    [anon_sym_unlists] = ACTIONS(596),
    [anon_sym_subscribe] = ACTIONS(598),
    [anon_sym_unsubscribe] = ACTIONS(598),
    [anon_sym_macro] = ACTIONS(596),
    [anon_sym_unmacro] = ACTIONS(596),
    [anon_sym_mailboxes] = ACTIONS(596),
    [anon_sym_named_DASHmailboxes] = ACTIONS(596),
    [anon_sym_unmailboxes] = ACTIONS(596),
    [anon_sym_mailto_allow] = ACTIONS(596),
    [anon_sym_unmailto_allow] = ACTIONS(596),
    [anon_sym_echo] = ACTIONS(596),
    [anon_sym_cd] = ACTIONS(596),
    [anon_sym_mbox_DASHhook] = ACTIONS(596),
    [anon_sym_message_DASHhook] = ACTIONS(596),
    [anon_sym_mime_lookup] = ACTIONS(596),
    [anon_sym_unmime_lookup] = ACTIONS(596),
    [anon_sym_mono] = ACTIONS(596),
    [anon_sym_unmono] = ACTIONS(596),
    [anon_sym_my_hdr] = ACTIONS(596),
    [anon_sym_unmy_hdr] = ACTIONS(596),
    [anon_sym_open_DASHhook] = ACTIONS(596),
    [anon_sym_close_DASHhook] = ACTIONS(596),
    [anon_sym_append_DASHhook] = ACTIONS(596),
    [anon_sym_push] = ACTIONS(596),
    [anon_sym_reply_DASHhook] = ACTIONS(596),
    [anon_sym_send_DASHhook] = ACTIONS(596),
    [anon_sym_send2_DASHhook] = ACTIONS(596),
    [anon_sym_spam] = ACTIONS(596),
    [anon_sym_nospam] = ACTIONS(596),
    [anon_sym_subjectrx] = ACTIONS(596),
    [anon_sym_unsubjectrx] = ACTIONS(596),
    [anon_sym_subscribe_DASHto] = ACTIONS(596),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(596),
    [anon_sym_timeout_DASHhook] = ACTIONS(596),
    [anon_sym_startup_DASHhook] = ACTIONS(596),
    [anon_sym_shutdown_DASHhook] = ACTIONS(596),
    [anon_sym_unhook] = ACTIONS(596),
    [anon_sym_set] = ACTIONS(598),
    [anon_sym_unset] = ACTIONS(598),
    [anon_sym_reset] = ACTIONS(596),
    [anon_sym_toggle] = ACTIONS(596),
    [anon_sym_setenv] = ACTIONS(596),
    [anon_sym_unsetenv] = ACTIONS(596),
    [anon_sym_sidebar_pin] = ACTIONS(596),
    [anon_sym_sidebar_unpin] = ACTIONS(596),
    [anon_sym_score] = ACTIONS(596),
    [anon_sym_unscore] = ACTIONS(596),
    [sym_int] = ACTIONS(596),
    [anon_sym_source] = ACTIONS(596),
  },
  [18] = {
    [anon_sym_account_DASHhook] = ACTIONS(600),
    [anon_sym_alias] = ACTIONS(600),
    [anon_sym_unalias] = ACTIONS(600),
    [anon_sym_alternates] = ACTIONS(600),
    [anon_sym_unalternates] = ACTIONS(600),
    [anon_sym_alternative_order] = ACTIONS(600),
    [anon_sym_unalternative_order] = ACTIONS(600),
    [anon_sym_attachments] = ACTIONS(600),
    [anon_sym_unattachments] = ACTIONS(600),
    [anon_sym_auto_view] = ACTIONS(600),
    [anon_sym_unauto_view] = ACTIONS(600),
    [anon_sym_bind] = ACTIONS(600),
    [anon_sym_unbind] = ACTIONS(600),
    [anon_sym_charset_DASHhook] = ACTIONS(600),
    [anon_sym_iconv_DASHhook] = ACTIONS(600),
    [anon_sym_bold] = ACTIONS(600),
    [anon_sym_underline] = ACTIONS(600),
    [anon_sym_none] = ACTIONS(600),
    [anon_sym_reverse] = ACTIONS(600),
    [anon_sym_standout] = ACTIONS(600),
    [anon_sym_color] = ACTIONS(600),
    [anon_sym_uncolor] = ACTIONS(600),
    [anon_sym_crypt_DASHhook] = ACTIONS(600),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(600),
    [anon_sym_exec] = ACTIONS(600),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(600),
    [anon_sym_fcc_DASHhook] = ACTIONS(600),
    [anon_sym_save_DASHhook] = ACTIONS(600),
    [anon_sym_folder_DASHhook] = ACTIONS(600),
    [anon_sym_group] = ACTIONS(600),
    [anon_sym_ungroup] = ACTIONS(600),
    [anon_sym_hdr_order] = ACTIONS(600),
    [anon_sym_unhdr_order] = ACTIONS(600),
    [anon_sym_ifdef] = ACTIONS(600),
    [anon_sym_ifndef] = ACTIONS(600),
    [anon_sym_finish] = ACTIONS(600),
    [anon_sym_ignore] = ACTIONS(600),
    [anon_sym_unignore] = ACTIONS(600),
    [anon_sym_lists] = ACTIONS(600),
    [anon_sym_unlists] = ACTIONS(600),
    [anon_sym_subscribe] = ACTIONS(602),
    [anon_sym_unsubscribe] = ACTIONS(602),
    [anon_sym_macro] = ACTIONS(600),
    [anon_sym_unmacro] = ACTIONS(600),
    [anon_sym_mailboxes] = ACTIONS(600),
    [anon_sym_named_DASHmailboxes] = ACTIONS(600),
    [anon_sym_unmailboxes] = ACTIONS(600),
    [anon_sym_mailto_allow] = ACTIONS(600),
    [anon_sym_unmailto_allow] = ACTIONS(600),
    [anon_sym_echo] = ACTIONS(600),
    [anon_sym_cd] = ACTIONS(600),
    [anon_sym_mbox_DASHhook] = ACTIONS(600),
    [anon_sym_message_DASHhook] = ACTIONS(600),
    [anon_sym_mime_lookup] = ACTIONS(600),
    [anon_sym_unmime_lookup] = ACTIONS(600),
    [anon_sym_mono] = ACTIONS(600),
    [anon_sym_unmono] = ACTIONS(600),
    [anon_sym_my_hdr] = ACTIONS(600),
    [anon_sym_unmy_hdr] = ACTIONS(600),
    [anon_sym_open_DASHhook] = ACTIONS(600),
    [anon_sym_close_DASHhook] = ACTIONS(600),
    [anon_sym_append_DASHhook] = ACTIONS(600),
    [anon_sym_push] = ACTIONS(600),
    [anon_sym_reply_DASHhook] = ACTIONS(600),
    [anon_sym_send_DASHhook] = ACTIONS(600),
    [anon_sym_send2_DASHhook] = ACTIONS(600),
    [anon_sym_spam] = ACTIONS(600),
    [anon_sym_nospam] = ACTIONS(600),
    [anon_sym_subjectrx] = ACTIONS(600),
    [anon_sym_unsubjectrx] = ACTIONS(600),
    [anon_sym_subscribe_DASHto] = ACTIONS(600),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(600),
    [anon_sym_timeout_DASHhook] = ACTIONS(600),
    [anon_sym_startup_DASHhook] = ACTIONS(600),
    [anon_sym_shutdown_DASHhook] = ACTIONS(600),
    [anon_sym_unhook] = ACTIONS(600),
    [anon_sym_set] = ACTIONS(602),
    [anon_sym_unset] = ACTIONS(602),
    [anon_sym_reset] = ACTIONS(600),
    [anon_sym_toggle] = ACTIONS(600),
    [anon_sym_setenv] = ACTIONS(600),
    [anon_sym_unsetenv] = ACTIONS(600),
    [anon_sym_sidebar_pin] = ACTIONS(600),
    [anon_sym_sidebar_unpin] = ACTIONS(600),
    [anon_sym_score] = ACTIONS(600),
    [anon_sym_unscore] = ACTIONS(600),
    [sym_int] = ACTIONS(600),
    [anon_sym_source] = ACTIONS(600),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_account_DASHhook] = ACTIONS(604),
    [anon_sym_alias] = ACTIONS(604),
    [anon_sym_unalias] = ACTIONS(604),
    [anon_sym_alternates] = ACTIONS(604),
    [anon_sym_unalternates] = ACTIONS(604),
    [anon_sym_alternative_order] = ACTIONS(604),
    [anon_sym_unalternative_order] = ACTIONS(604),
    [anon_sym_attachments] = ACTIONS(604),
    [anon_sym_unattachments] = ACTIONS(604),
    [anon_sym_auto_view] = ACTIONS(604),
    [anon_sym_unauto_view] = ACTIONS(604),
    [anon_sym_bind] = ACTIONS(604),
    [anon_sym_unbind] = ACTIONS(604),
    [anon_sym_charset_DASHhook] = ACTIONS(604),
    [anon_sym_iconv_DASHhook] = ACTIONS(604),
    [anon_sym_color] = ACTIONS(604),
    [anon_sym_uncolor] = ACTIONS(604),
    [anon_sym_crypt_DASHhook] = ACTIONS(604),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(604),
    [anon_sym_exec] = ACTIONS(604),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(604),
    [anon_sym_fcc_DASHhook] = ACTIONS(604),
    [anon_sym_save_DASHhook] = ACTIONS(604),
    [anon_sym_folder_DASHhook] = ACTIONS(604),
    [anon_sym_group] = ACTIONS(604),
    [anon_sym_ungroup] = ACTIONS(604),
    [anon_sym_hdr_order] = ACTIONS(604),
    [anon_sym_unhdr_order] = ACTIONS(604),
    [anon_sym_ifdef] = ACTIONS(604),
    [anon_sym_ifndef] = ACTIONS(604),
    [anon_sym_finish] = ACTIONS(604),
    [anon_sym_ignore] = ACTIONS(604),
    [anon_sym_unignore] = ACTIONS(604),
    [anon_sym_lists] = ACTIONS(604),
    [anon_sym_unlists] = ACTIONS(604),
    [anon_sym_subscribe] = ACTIONS(604),
    [anon_sym_unsubscribe] = ACTIONS(604),
    [anon_sym_macro] = ACTIONS(604),
    [anon_sym_unmacro] = ACTIONS(604),
    [anon_sym_mailboxes] = ACTIONS(604),
    [anon_sym_named_DASHmailboxes] = ACTIONS(604),
    [anon_sym_unmailboxes] = ACTIONS(604),
    [anon_sym_mailto_allow] = ACTIONS(604),
    [anon_sym_unmailto_allow] = ACTIONS(604),
    [anon_sym_echo] = ACTIONS(604),
    [anon_sym_cd] = ACTIONS(604),
    [anon_sym_mbox_DASHhook] = ACTIONS(604),
    [anon_sym_message_DASHhook] = ACTIONS(604),
    [anon_sym_mime_lookup] = ACTIONS(604),
    [anon_sym_unmime_lookup] = ACTIONS(604),
    [anon_sym_mono] = ACTIONS(604),
    [anon_sym_unmono] = ACTIONS(604),
    [anon_sym_my_hdr] = ACTIONS(604),
    [anon_sym_unmy_hdr] = ACTIONS(604),
    [anon_sym_open_DASHhook] = ACTIONS(604),
    [anon_sym_close_DASHhook] = ACTIONS(604),
    [anon_sym_append_DASHhook] = ACTIONS(604),
    [anon_sym_push] = ACTIONS(604),
    [anon_sym_reply_DASHhook] = ACTIONS(604),
    [anon_sym_send_DASHhook] = ACTIONS(604),
    [anon_sym_send2_DASHhook] = ACTIONS(604),
    [anon_sym_spam] = ACTIONS(604),
    [anon_sym_nospam] = ACTIONS(604),
    [anon_sym_subjectrx] = ACTIONS(604),
    [anon_sym_unsubjectrx] = ACTIONS(604),
    [anon_sym_subscribe_DASHto] = ACTIONS(604),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(604),
    [anon_sym_timeout_DASHhook] = ACTIONS(604),
    [anon_sym_startup_DASHhook] = ACTIONS(604),
    [anon_sym_shutdown_DASHhook] = ACTIONS(604),
    [anon_sym_unhook] = ACTIONS(604),
    [anon_sym_set] = ACTIONS(604),
    [anon_sym_unset] = ACTIONS(604),
    [anon_sym_reset] = ACTIONS(604),
    [anon_sym_toggle] = ACTIONS(604),
    [anon_sym_setenv] = ACTIONS(604),
    [anon_sym_unsetenv] = ACTIONS(604),
    [anon_sym_sidebar_pin] = ACTIONS(604),
    [anon_sym_sidebar_unpin] = ACTIONS(604),
    [anon_sym_score] = ACTIONS(604),
    [anon_sym_unscore] = ACTIONS(604),
    [anon_sym_source] = ACTIONS(604),
    [sym_comment] = ACTIONS(604),
    [sym__eol] = ACTIONS(604),
    [aux_sym__space_token1] = ACTIONS(604),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(606),
    [anon_sym_account_DASHhook] = ACTIONS(608),
    [anon_sym_alias] = ACTIONS(608),
    [anon_sym_unalias] = ACTIONS(608),
    [anon_sym_alternates] = ACTIONS(608),
    [anon_sym_unalternates] = ACTIONS(608),
    [anon_sym_alternative_order] = ACTIONS(608),
    [anon_sym_unalternative_order] = ACTIONS(608),
    [anon_sym_attachments] = ACTIONS(608),
    [anon_sym_unattachments] = ACTIONS(608),
    [anon_sym_auto_view] = ACTIONS(608),
    [anon_sym_unauto_view] = ACTIONS(608),
    [anon_sym_bind] = ACTIONS(608),
    [anon_sym_unbind] = ACTIONS(608),
    [anon_sym_charset_DASHhook] = ACTIONS(608),
    [anon_sym_iconv_DASHhook] = ACTIONS(608),
    [anon_sym_color] = ACTIONS(608),
    [anon_sym_uncolor] = ACTIONS(608),
    [anon_sym_crypt_DASHhook] = ACTIONS(608),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(608),
    [anon_sym_exec] = ACTIONS(608),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(608),
    [anon_sym_fcc_DASHhook] = ACTIONS(608),
    [anon_sym_save_DASHhook] = ACTIONS(608),
    [anon_sym_folder_DASHhook] = ACTIONS(608),
    [anon_sym_group] = ACTIONS(608),
    [anon_sym_ungroup] = ACTIONS(608),
    [anon_sym_hdr_order] = ACTIONS(608),
    [anon_sym_unhdr_order] = ACTIONS(608),
    [anon_sym_ifdef] = ACTIONS(608),
    [anon_sym_ifndef] = ACTIONS(608),
    [anon_sym_finish] = ACTIONS(608),
    [anon_sym_ignore] = ACTIONS(608),
    [anon_sym_unignore] = ACTIONS(608),
    [anon_sym_lists] = ACTIONS(608),
    [anon_sym_unlists] = ACTIONS(608),
    [anon_sym_subscribe] = ACTIONS(608),
    [anon_sym_unsubscribe] = ACTIONS(608),
    [anon_sym_macro] = ACTIONS(608),
    [anon_sym_unmacro] = ACTIONS(608),
    [anon_sym_mailboxes] = ACTIONS(608),
    [anon_sym_named_DASHmailboxes] = ACTIONS(608),
    [anon_sym_unmailboxes] = ACTIONS(608),
    [anon_sym_mailto_allow] = ACTIONS(608),
    [anon_sym_unmailto_allow] = ACTIONS(608),
    [anon_sym_echo] = ACTIONS(608),
    [anon_sym_cd] = ACTIONS(608),
    [anon_sym_mbox_DASHhook] = ACTIONS(608),
    [anon_sym_message_DASHhook] = ACTIONS(608),
    [anon_sym_mime_lookup] = ACTIONS(608),
    [anon_sym_unmime_lookup] = ACTIONS(608),
    [anon_sym_mono] = ACTIONS(608),
    [anon_sym_unmono] = ACTIONS(608),
    [anon_sym_my_hdr] = ACTIONS(608),
    [anon_sym_unmy_hdr] = ACTIONS(608),
    [anon_sym_open_DASHhook] = ACTIONS(608),
    [anon_sym_close_DASHhook] = ACTIONS(608),
    [anon_sym_append_DASHhook] = ACTIONS(608),
    [anon_sym_push] = ACTIONS(608),
    [anon_sym_reply_DASHhook] = ACTIONS(608),
    [anon_sym_send_DASHhook] = ACTIONS(608),
    [anon_sym_send2_DASHhook] = ACTIONS(608),
    [anon_sym_spam] = ACTIONS(608),
    [anon_sym_nospam] = ACTIONS(608),
    [anon_sym_subjectrx] = ACTIONS(608),
    [anon_sym_unsubjectrx] = ACTIONS(608),
    [anon_sym_subscribe_DASHto] = ACTIONS(608),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(608),
    [anon_sym_timeout_DASHhook] = ACTIONS(608),
    [anon_sym_startup_DASHhook] = ACTIONS(608),
    [anon_sym_shutdown_DASHhook] = ACTIONS(608),
    [anon_sym_unhook] = ACTIONS(608),
    [anon_sym_set] = ACTIONS(608),
    [anon_sym_unset] = ACTIONS(608),
    [anon_sym_reset] = ACTIONS(608),
    [anon_sym_toggle] = ACTIONS(608),
    [anon_sym_setenv] = ACTIONS(608),
    [anon_sym_unsetenv] = ACTIONS(608),
    [anon_sym_sidebar_pin] = ACTIONS(608),
    [anon_sym_sidebar_unpin] = ACTIONS(608),
    [anon_sym_score] = ACTIONS(608),
    [anon_sym_unscore] = ACTIONS(608),
    [anon_sym_source] = ACTIONS(608),
    [sym_comment] = ACTIONS(608),
    [sym__eol] = ACTIONS(608),
    [aux_sym__space_token1] = ACTIONS(608),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [anon_sym_account_DASHhook] = ACTIONS(612),
    [anon_sym_alias] = ACTIONS(612),
    [anon_sym_unalias] = ACTIONS(612),
    [anon_sym_alternates] = ACTIONS(612),
    [anon_sym_unalternates] = ACTIONS(612),
    [anon_sym_alternative_order] = ACTIONS(612),
    [anon_sym_unalternative_order] = ACTIONS(612),
    [anon_sym_attachments] = ACTIONS(612),
    [anon_sym_unattachments] = ACTIONS(612),
    [anon_sym_auto_view] = ACTIONS(612),
    [anon_sym_unauto_view] = ACTIONS(612),
    [anon_sym_bind] = ACTIONS(612),
    [anon_sym_unbind] = ACTIONS(612),
    [anon_sym_charset_DASHhook] = ACTIONS(612),
    [anon_sym_iconv_DASHhook] = ACTIONS(612),
    [anon_sym_color] = ACTIONS(612),
    [anon_sym_uncolor] = ACTIONS(612),
    [anon_sym_crypt_DASHhook] = ACTIONS(612),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(612),
    [anon_sym_exec] = ACTIONS(612),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(612),
    [anon_sym_fcc_DASHhook] = ACTIONS(612),
    [anon_sym_save_DASHhook] = ACTIONS(612),
    [anon_sym_folder_DASHhook] = ACTIONS(612),
    [anon_sym_group] = ACTIONS(612),
    [anon_sym_ungroup] = ACTIONS(612),
    [anon_sym_hdr_order] = ACTIONS(612),
    [anon_sym_unhdr_order] = ACTIONS(612),
    [anon_sym_ifdef] = ACTIONS(612),
    [anon_sym_ifndef] = ACTIONS(612),
    [anon_sym_finish] = ACTIONS(612),
    [anon_sym_ignore] = ACTIONS(612),
    [anon_sym_unignore] = ACTIONS(612),
    [anon_sym_lists] = ACTIONS(612),
    [anon_sym_unlists] = ACTIONS(612),
    [anon_sym_subscribe] = ACTIONS(612),
    [anon_sym_unsubscribe] = ACTIONS(612),
    [anon_sym_macro] = ACTIONS(612),
    [anon_sym_unmacro] = ACTIONS(612),
    [anon_sym_mailboxes] = ACTIONS(612),
    [anon_sym_named_DASHmailboxes] = ACTIONS(612),
    [anon_sym_unmailboxes] = ACTIONS(612),
    [anon_sym_mailto_allow] = ACTIONS(612),
    [anon_sym_unmailto_allow] = ACTIONS(612),
    [anon_sym_echo] = ACTIONS(612),
    [anon_sym_cd] = ACTIONS(612),
    [anon_sym_mbox_DASHhook] = ACTIONS(612),
    [anon_sym_message_DASHhook] = ACTIONS(612),
    [anon_sym_mime_lookup] = ACTIONS(612),
    [anon_sym_unmime_lookup] = ACTIONS(612),
    [anon_sym_mono] = ACTIONS(612),
    [anon_sym_unmono] = ACTIONS(612),
    [anon_sym_my_hdr] = ACTIONS(612),
    [anon_sym_unmy_hdr] = ACTIONS(612),
    [anon_sym_open_DASHhook] = ACTIONS(612),
    [anon_sym_close_DASHhook] = ACTIONS(612),
    [anon_sym_append_DASHhook] = ACTIONS(612),
    [anon_sym_push] = ACTIONS(612),
    [anon_sym_reply_DASHhook] = ACTIONS(612),
    [anon_sym_send_DASHhook] = ACTIONS(612),
    [anon_sym_send2_DASHhook] = ACTIONS(612),
    [anon_sym_spam] = ACTIONS(612),
    [anon_sym_nospam] = ACTIONS(612),
    [anon_sym_subjectrx] = ACTIONS(612),
    [anon_sym_unsubjectrx] = ACTIONS(612),
    [anon_sym_subscribe_DASHto] = ACTIONS(612),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(612),
    [anon_sym_timeout_DASHhook] = ACTIONS(612),
    [anon_sym_startup_DASHhook] = ACTIONS(612),
    [anon_sym_shutdown_DASHhook] = ACTIONS(612),
    [anon_sym_unhook] = ACTIONS(612),
    [anon_sym_set] = ACTIONS(612),
    [anon_sym_unset] = ACTIONS(612),
    [anon_sym_reset] = ACTIONS(612),
    [anon_sym_toggle] = ACTIONS(612),
    [anon_sym_setenv] = ACTIONS(612),
    [anon_sym_unsetenv] = ACTIONS(612),
    [anon_sym_sidebar_pin] = ACTIONS(612),
    [anon_sym_sidebar_unpin] = ACTIONS(612),
    [anon_sym_score] = ACTIONS(612),
    [anon_sym_unscore] = ACTIONS(612),
    [anon_sym_source] = ACTIONS(612),
    [sym_comment] = ACTIONS(612),
    [sym__eol] = ACTIONS(612),
    [aux_sym__space_token1] = ACTIONS(612),
  },
  [22] = {
    [anon_sym_account_DASHhook] = ACTIONS(614),
    [anon_sym_alias] = ACTIONS(614),
    [anon_sym_unalias] = ACTIONS(614),
    [anon_sym_alternates] = ACTIONS(614),
    [anon_sym_unalternates] = ACTIONS(614),
    [anon_sym_alternative_order] = ACTIONS(614),
    [anon_sym_unalternative_order] = ACTIONS(614),
    [anon_sym_attachments] = ACTIONS(614),
    [anon_sym_unattachments] = ACTIONS(614),
    [anon_sym_auto_view] = ACTIONS(614),
    [anon_sym_unauto_view] = ACTIONS(614),
    [anon_sym_bind] = ACTIONS(614),
    [anon_sym_unbind] = ACTIONS(614),
    [anon_sym_charset_DASHhook] = ACTIONS(614),
    [anon_sym_iconv_DASHhook] = ACTIONS(614),
    [anon_sym_color] = ACTIONS(614),
    [anon_sym_uncolor] = ACTIONS(614),
    [anon_sym_crypt_DASHhook] = ACTIONS(614),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(614),
    [anon_sym_exec] = ACTIONS(614),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(614),
    [anon_sym_fcc_DASHhook] = ACTIONS(614),
    [anon_sym_save_DASHhook] = ACTIONS(614),
    [anon_sym_folder_DASHhook] = ACTIONS(614),
    [anon_sym_group] = ACTIONS(614),
    [anon_sym_ungroup] = ACTIONS(614),
    [anon_sym_hdr_order] = ACTIONS(614),
    [anon_sym_unhdr_order] = ACTIONS(614),
    [anon_sym_ifdef] = ACTIONS(614),
    [anon_sym_ifndef] = ACTIONS(614),
    [anon_sym_finish] = ACTIONS(614),
    [anon_sym_ignore] = ACTIONS(614),
    [anon_sym_unignore] = ACTIONS(614),
    [anon_sym_lists] = ACTIONS(614),
    [anon_sym_unlists] = ACTIONS(614),
    [anon_sym_subscribe] = ACTIONS(616),
    [anon_sym_unsubscribe] = ACTIONS(616),
    [anon_sym_macro] = ACTIONS(614),
    [anon_sym_unmacro] = ACTIONS(614),
    [anon_sym_mailboxes] = ACTIONS(614),
    [anon_sym_named_DASHmailboxes] = ACTIONS(614),
    [anon_sym_unmailboxes] = ACTIONS(614),
    [anon_sym_mailto_allow] = ACTIONS(614),
    [anon_sym_unmailto_allow] = ACTIONS(614),
    [anon_sym_echo] = ACTIONS(614),
    [anon_sym_cd] = ACTIONS(614),
    [anon_sym_mbox_DASHhook] = ACTIONS(614),
    [anon_sym_message_DASHhook] = ACTIONS(614),
    [anon_sym_mime_lookup] = ACTIONS(614),
    [anon_sym_unmime_lookup] = ACTIONS(614),
    [anon_sym_mono] = ACTIONS(614),
    [anon_sym_unmono] = ACTIONS(614),
    [anon_sym_my_hdr] = ACTIONS(614),
    [anon_sym_unmy_hdr] = ACTIONS(614),
    [anon_sym_open_DASHhook] = ACTIONS(614),
    [anon_sym_close_DASHhook] = ACTIONS(614),
    [anon_sym_append_DASHhook] = ACTIONS(614),
    [anon_sym_push] = ACTIONS(614),
    [anon_sym_reply_DASHhook] = ACTIONS(614),
    [anon_sym_send_DASHhook] = ACTIONS(614),
    [anon_sym_send2_DASHhook] = ACTIONS(614),
    [anon_sym_spam] = ACTIONS(614),
    [anon_sym_nospam] = ACTIONS(614),
    [anon_sym_subjectrx] = ACTIONS(614),
    [anon_sym_unsubjectrx] = ACTIONS(614),
    [anon_sym_subscribe_DASHto] = ACTIONS(614),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(614),
    [anon_sym_timeout_DASHhook] = ACTIONS(614),
    [anon_sym_startup_DASHhook] = ACTIONS(614),
    [anon_sym_shutdown_DASHhook] = ACTIONS(614),
    [anon_sym_unhook] = ACTIONS(614),
    [anon_sym_set] = ACTIONS(616),
    [anon_sym_unset] = ACTIONS(616),
    [anon_sym_reset] = ACTIONS(614),
    [anon_sym_toggle] = ACTIONS(614),
    [anon_sym_setenv] = ACTIONS(614),
    [anon_sym_unsetenv] = ACTIONS(614),
    [anon_sym_sidebar_pin] = ACTIONS(614),
    [anon_sym_sidebar_unpin] = ACTIONS(614),
    [anon_sym_score] = ACTIONS(614),
    [anon_sym_unscore] = ACTIONS(614),
    [anon_sym_source] = ACTIONS(614),
  },
  [23] = {
    [anon_sym_account_DASHhook] = ACTIONS(618),
    [anon_sym_alias] = ACTIONS(618),
    [anon_sym_unalias] = ACTIONS(618),
    [anon_sym_alternates] = ACTIONS(618),
    [anon_sym_unalternates] = ACTIONS(618),
    [anon_sym_alternative_order] = ACTIONS(618),
    [anon_sym_unalternative_order] = ACTIONS(618),
    [anon_sym_attachments] = ACTIONS(618),
    [anon_sym_unattachments] = ACTIONS(618),
    [anon_sym_auto_view] = ACTIONS(618),
    [anon_sym_unauto_view] = ACTIONS(618),
    [anon_sym_bind] = ACTIONS(618),
    [anon_sym_unbind] = ACTIONS(618),
    [anon_sym_charset_DASHhook] = ACTIONS(618),
    [anon_sym_iconv_DASHhook] = ACTIONS(618),
    [anon_sym_color] = ACTIONS(618),
    [anon_sym_uncolor] = ACTIONS(618),
    [anon_sym_crypt_DASHhook] = ACTIONS(618),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(618),
    [anon_sym_exec] = ACTIONS(618),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(618),
    [anon_sym_fcc_DASHhook] = ACTIONS(618),
    [anon_sym_save_DASHhook] = ACTIONS(618),
    [anon_sym_folder_DASHhook] = ACTIONS(618),
    [anon_sym_group] = ACTIONS(618),
    [anon_sym_ungroup] = ACTIONS(618),
    [anon_sym_hdr_order] = ACTIONS(618),
    [anon_sym_unhdr_order] = ACTIONS(618),
    [anon_sym_ifdef] = ACTIONS(618),
    [anon_sym_ifndef] = ACTIONS(618),
    [anon_sym_finish] = ACTIONS(618),
    [anon_sym_ignore] = ACTIONS(618),
    [anon_sym_unignore] = ACTIONS(618),
    [anon_sym_lists] = ACTIONS(618),
    [anon_sym_unlists] = ACTIONS(618),
    [anon_sym_subscribe] = ACTIONS(620),
    [anon_sym_unsubscribe] = ACTIONS(620),
    [anon_sym_macro] = ACTIONS(618),
    [anon_sym_unmacro] = ACTIONS(618),
    [anon_sym_mailboxes] = ACTIONS(618),
    [anon_sym_named_DASHmailboxes] = ACTIONS(618),
    [anon_sym_unmailboxes] = ACTIONS(618),
    [anon_sym_mailto_allow] = ACTIONS(618),
    [anon_sym_unmailto_allow] = ACTIONS(618),
    [anon_sym_echo] = ACTIONS(618),
    [anon_sym_cd] = ACTIONS(618),
    [anon_sym_mbox_DASHhook] = ACTIONS(618),
    [anon_sym_message_DASHhook] = ACTIONS(618),
    [anon_sym_mime_lookup] = ACTIONS(618),
    [anon_sym_unmime_lookup] = ACTIONS(618),
    [anon_sym_mono] = ACTIONS(618),
    [anon_sym_unmono] = ACTIONS(618),
    [anon_sym_my_hdr] = ACTIONS(618),
    [anon_sym_unmy_hdr] = ACTIONS(618),
    [anon_sym_open_DASHhook] = ACTIONS(618),
    [anon_sym_close_DASHhook] = ACTIONS(618),
    [anon_sym_append_DASHhook] = ACTIONS(618),
    [anon_sym_push] = ACTIONS(618),
    [anon_sym_reply_DASHhook] = ACTIONS(618),
    [anon_sym_send_DASHhook] = ACTIONS(618),
    [anon_sym_send2_DASHhook] = ACTIONS(618),
    [anon_sym_spam] = ACTIONS(618),
    [anon_sym_nospam] = ACTIONS(618),
    [anon_sym_subjectrx] = ACTIONS(618),
    [anon_sym_unsubjectrx] = ACTIONS(618),
    [anon_sym_subscribe_DASHto] = ACTIONS(618),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(618),
    [anon_sym_timeout_DASHhook] = ACTIONS(618),
    [anon_sym_startup_DASHhook] = ACTIONS(618),
    [anon_sym_shutdown_DASHhook] = ACTIONS(618),
    [anon_sym_unhook] = ACTIONS(618),
    [anon_sym_set] = ACTIONS(620),
    [anon_sym_unset] = ACTIONS(620),
    [anon_sym_reset] = ACTIONS(618),
    [anon_sym_toggle] = ACTIONS(618),
    [anon_sym_setenv] = ACTIONS(618),
    [anon_sym_unsetenv] = ACTIONS(618),
    [anon_sym_sidebar_pin] = ACTIONS(618),
    [anon_sym_sidebar_unpin] = ACTIONS(618),
    [anon_sym_score] = ACTIONS(618),
    [anon_sym_unscore] = ACTIONS(618),
    [anon_sym_source] = ACTIONS(618),
  },
  [24] = {
    [anon_sym_account_DASHhook] = ACTIONS(622),
    [anon_sym_alias] = ACTIONS(622),
    [anon_sym_unalias] = ACTIONS(622),
    [anon_sym_alternates] = ACTIONS(622),
    [anon_sym_unalternates] = ACTIONS(622),
    [anon_sym_alternative_order] = ACTIONS(622),
    [anon_sym_unalternative_order] = ACTIONS(622),
    [anon_sym_attachments] = ACTIONS(622),
    [anon_sym_unattachments] = ACTIONS(622),
    [anon_sym_auto_view] = ACTIONS(622),
    [anon_sym_unauto_view] = ACTIONS(622),
    [anon_sym_bind] = ACTIONS(622),
    [anon_sym_unbind] = ACTIONS(622),
    [anon_sym_charset_DASHhook] = ACTIONS(622),
    [anon_sym_iconv_DASHhook] = ACTIONS(622),
    [anon_sym_color] = ACTIONS(622),
    [anon_sym_uncolor] = ACTIONS(622),
    [anon_sym_crypt_DASHhook] = ACTIONS(622),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(622),
    [anon_sym_exec] = ACTIONS(622),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(622),
    [anon_sym_fcc_DASHhook] = ACTIONS(622),
    [anon_sym_save_DASHhook] = ACTIONS(622),
    [anon_sym_folder_DASHhook] = ACTIONS(622),
    [anon_sym_group] = ACTIONS(622),
    [anon_sym_ungroup] = ACTIONS(622),
    [anon_sym_hdr_order] = ACTIONS(622),
    [anon_sym_unhdr_order] = ACTIONS(622),
    [anon_sym_ifdef] = ACTIONS(622),
    [anon_sym_ifndef] = ACTIONS(622),
    [anon_sym_finish] = ACTIONS(622),
    [anon_sym_ignore] = ACTIONS(622),
    [anon_sym_unignore] = ACTIONS(622),
    [anon_sym_lists] = ACTIONS(622),
    [anon_sym_unlists] = ACTIONS(622),
    [anon_sym_subscribe] = ACTIONS(624),
    [anon_sym_unsubscribe] = ACTIONS(624),
    [anon_sym_macro] = ACTIONS(622),
    [anon_sym_unmacro] = ACTIONS(622),
    [anon_sym_mailboxes] = ACTIONS(622),
    [anon_sym_named_DASHmailboxes] = ACTIONS(622),
    [anon_sym_unmailboxes] = ACTIONS(622),
    [anon_sym_mailto_allow] = ACTIONS(622),
    [anon_sym_unmailto_allow] = ACTIONS(622),
    [anon_sym_echo] = ACTIONS(622),
    [anon_sym_cd] = ACTIONS(622),
    [anon_sym_mbox_DASHhook] = ACTIONS(622),
    [anon_sym_message_DASHhook] = ACTIONS(622),
    [anon_sym_mime_lookup] = ACTIONS(622),
    [anon_sym_unmime_lookup] = ACTIONS(622),
    [anon_sym_mono] = ACTIONS(622),
    [anon_sym_unmono] = ACTIONS(622),
    [anon_sym_my_hdr] = ACTIONS(622),
    [anon_sym_unmy_hdr] = ACTIONS(622),
    [anon_sym_open_DASHhook] = ACTIONS(622),
    [anon_sym_close_DASHhook] = ACTIONS(622),
    [anon_sym_append_DASHhook] = ACTIONS(622),
    [anon_sym_push] = ACTIONS(622),
    [anon_sym_reply_DASHhook] = ACTIONS(622),
    [anon_sym_send_DASHhook] = ACTIONS(622),
    [anon_sym_send2_DASHhook] = ACTIONS(622),
    [anon_sym_spam] = ACTIONS(622),
    [anon_sym_nospam] = ACTIONS(622),
    [anon_sym_subjectrx] = ACTIONS(622),
    [anon_sym_unsubjectrx] = ACTIONS(622),
    [anon_sym_subscribe_DASHto] = ACTIONS(622),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(622),
    [anon_sym_timeout_DASHhook] = ACTIONS(622),
    [anon_sym_startup_DASHhook] = ACTIONS(622),
    [anon_sym_shutdown_DASHhook] = ACTIONS(622),
    [anon_sym_unhook] = ACTIONS(622),
    [anon_sym_set] = ACTIONS(624),
    [anon_sym_unset] = ACTIONS(624),
    [anon_sym_reset] = ACTIONS(622),
    [anon_sym_toggle] = ACTIONS(622),
    [anon_sym_setenv] = ACTIONS(622),
    [anon_sym_unsetenv] = ACTIONS(622),
    [anon_sym_sidebar_pin] = ACTIONS(622),
    [anon_sym_sidebar_unpin] = ACTIONS(622),
    [anon_sym_score] = ACTIONS(622),
    [anon_sym_unscore] = ACTIONS(622),
    [anon_sym_source] = ACTIONS(622),
  },
  [25] = {
    [anon_sym_account_DASHhook] = ACTIONS(626),
    [anon_sym_alias] = ACTIONS(626),
    [anon_sym_unalias] = ACTIONS(626),
    [anon_sym_alternates] = ACTIONS(626),
    [anon_sym_unalternates] = ACTIONS(626),
    [anon_sym_alternative_order] = ACTIONS(626),
    [anon_sym_unalternative_order] = ACTIONS(626),
    [anon_sym_attachments] = ACTIONS(626),
    [anon_sym_unattachments] = ACTIONS(626),
    [anon_sym_auto_view] = ACTIONS(626),
    [anon_sym_unauto_view] = ACTIONS(626),
    [anon_sym_bind] = ACTIONS(626),
    [anon_sym_unbind] = ACTIONS(626),
    [anon_sym_charset_DASHhook] = ACTIONS(626),
    [anon_sym_iconv_DASHhook] = ACTIONS(626),
    [anon_sym_color] = ACTIONS(626),
    [anon_sym_uncolor] = ACTIONS(626),
    [anon_sym_crypt_DASHhook] = ACTIONS(626),
    [anon_sym_index_DASHformat_DASHhook] = ACTIONS(626),
    [anon_sym_exec] = ACTIONS(626),
    [anon_sym_fcc_DASHsave_DASHhook] = ACTIONS(626),
    [anon_sym_fcc_DASHhook] = ACTIONS(626),
    [anon_sym_save_DASHhook] = ACTIONS(626),
    [anon_sym_folder_DASHhook] = ACTIONS(626),
    [anon_sym_group] = ACTIONS(626),
    [anon_sym_ungroup] = ACTIONS(626),
    [anon_sym_hdr_order] = ACTIONS(626),
    [anon_sym_unhdr_order] = ACTIONS(626),
    [anon_sym_ifdef] = ACTIONS(626),
    [anon_sym_ifndef] = ACTIONS(626),
    [anon_sym_finish] = ACTIONS(626),
    [anon_sym_ignore] = ACTIONS(626),
    [anon_sym_unignore] = ACTIONS(626),
    [anon_sym_lists] = ACTIONS(626),
    [anon_sym_unlists] = ACTIONS(626),
    [anon_sym_subscribe] = ACTIONS(628),
    [anon_sym_unsubscribe] = ACTIONS(628),
    [anon_sym_macro] = ACTIONS(626),
    [anon_sym_unmacro] = ACTIONS(626),
    [anon_sym_mailboxes] = ACTIONS(626),
    [anon_sym_named_DASHmailboxes] = ACTIONS(626),
    [anon_sym_unmailboxes] = ACTIONS(626),
    [anon_sym_mailto_allow] = ACTIONS(626),
    [anon_sym_unmailto_allow] = ACTIONS(626),
    [anon_sym_echo] = ACTIONS(626),
    [anon_sym_cd] = ACTIONS(626),
    [anon_sym_mbox_DASHhook] = ACTIONS(626),
    [anon_sym_message_DASHhook] = ACTIONS(626),
    [anon_sym_mime_lookup] = ACTIONS(626),
    [anon_sym_unmime_lookup] = ACTIONS(626),
    [anon_sym_mono] = ACTIONS(626),
    [anon_sym_unmono] = ACTIONS(626),
    [anon_sym_my_hdr] = ACTIONS(626),
    [anon_sym_unmy_hdr] = ACTIONS(626),
    [anon_sym_open_DASHhook] = ACTIONS(626),
    [anon_sym_close_DASHhook] = ACTIONS(626),
    [anon_sym_append_DASHhook] = ACTIONS(626),
    [anon_sym_push] = ACTIONS(626),
    [anon_sym_reply_DASHhook] = ACTIONS(626),
    [anon_sym_send_DASHhook] = ACTIONS(626),
    [anon_sym_send2_DASHhook] = ACTIONS(626),
    [anon_sym_spam] = ACTIONS(626),
    [anon_sym_nospam] = ACTIONS(626),
    [anon_sym_subjectrx] = ACTIONS(626),
    [anon_sym_unsubjectrx] = ACTIONS(626),
    [anon_sym_subscribe_DASHto] = ACTIONS(626),
    [anon_sym_unsubscribe_DASHfrom] = ACTIONS(626),
    [anon_sym_timeout_DASHhook] = ACTIONS(626),
    [anon_sym_startup_DASHhook] = ACTIONS(626),
    [anon_sym_shutdown_DASHhook] = ACTIONS(626),
    [anon_sym_unhook] = ACTIONS(626),
    [anon_sym_set] = ACTIONS(628),
    [anon_sym_unset] = ACTIONS(628),
    [anon_sym_reset] = ACTIONS(626),
    [anon_sym_toggle] = ACTIONS(626),
    [anon_sym_setenv] = ACTIONS(626),
    [anon_sym_unsetenv] = ACTIONS(626),
    [anon_sym_sidebar_pin] = ACTIONS(626),
    [anon_sym_sidebar_unpin] = ACTIONS(626),
    [anon_sym_score] = ACTIONS(626),
    [anon_sym_unscore] = ACTIONS(626),
    [anon_sym_source] = ACTIONS(626),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(18), 1,
      sym__string,
    STATE(110), 2,
      sym_pattern,
      sym_object,
    ACTIONS(630), 39,
      anon_sym_index,
      anon_sym_attach_headers,
      anon_sym_attachment,
      anon_sym_body,
      anon_sym_bold,
      anon_sym_error,
      anon_sym_hdrdefault,
      anon_sym_header,
      anon_sym_index_author,
      anon_sym_index_collapsed,
      anon_sym_index_date,
      anon_sym_index_flags,
      anon_sym_index_label,
      anon_sym_index_number,
      anon_sym_index_size,
      anon_sym_index_subject,
      anon_sym_index_tag,
      anon_sym_index_tags,
      anon_sym_indicator,
      anon_sym_markers,
      anon_sym_message,
      anon_sym_normal,
      anon_sym_progress,
      anon_sym_prompt,
      aux_sym_object_token1,
      anon_sym_search,
      anon_sym_signature,
      anon_sym_status,
      anon_sym_tilde,
      anon_sym_tree,
      anon_sym_underline,
      anon_sym_sidebar_background,
      anon_sym_sidebar_divider,
      anon_sym_sidebar_flagged,
      anon_sym_sidebar_highlight,
      anon_sym_sidebar_indicator,
      anon_sym_sidebar_new,
      anon_sym_sidebar_ordinary,
      anon_sym_sidebar_spool_file,
  [61] = 4,
    ACTIONS(640), 1,
      anon_sym_compose,
    STATE(28), 1,
      sym_object,
    ACTIONS(630), 2,
      anon_sym_index,
      anon_sym_index_tag,
    ACTIONS(642), 37,
      anon_sym_attach_headers,
      anon_sym_attachment,
      anon_sym_body,
      anon_sym_bold,
      anon_sym_error,
      anon_sym_hdrdefault,
      anon_sym_header,
      anon_sym_index_author,
      anon_sym_index_collapsed,
      anon_sym_index_date,
      anon_sym_index_flags,
      anon_sym_index_label,
      anon_sym_index_number,
      anon_sym_index_size,
      anon_sym_index_subject,
      anon_sym_index_tags,
      anon_sym_indicator,
      anon_sym_markers,
      anon_sym_message,
      anon_sym_normal,
      anon_sym_progress,
      anon_sym_prompt,
      aux_sym_object_token1,
      anon_sym_search,
      anon_sym_signature,
      anon_sym_status,
      anon_sym_tilde,
      anon_sym_tree,
      anon_sym_underline,
      anon_sym_sidebar_background,
      anon_sym_sidebar_divider,
      anon_sym_sidebar_flagged,
      anon_sym_sidebar_highlight,
      anon_sym_sidebar_indicator,
      anon_sym_sidebar_new,
      anon_sym_sidebar_ordinary,
      anon_sym_sidebar_spool_file,
  [111] = 6,
    STATE(38), 1,
      sym_attribute,
    STATE(39), 1,
      sym_foreground,
    STATE(40), 1,
      sym__attributes,
    STATE(54), 1,
      sym_color,
    ACTIONS(644), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
    ACTIONS(646), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [144] = 6,
    STATE(38), 1,
      sym_attribute,
    STATE(41), 1,
      sym_foreground,
    STATE(42), 1,
      sym__attributes,
    STATE(54), 1,
      sym_color,
    ACTIONS(644), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
    ACTIONS(646), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [177] = 3,
    ACTIONS(650), 1,
      anon_sym_STAR,
    STATE(358), 1,
      sym_hook_type,
    ACTIONS(648), 18,
      anon_sym_account_DASHhook,
      anon_sym_charset_DASHhook,
      anon_sym_iconv_DASHhook,
      anon_sym_crypt_DASHhook,
      anon_sym_fcc_DASHhook,
      anon_sym_save_DASHhook,
      anon_sym_folder_DASHhook,
      anon_sym_mbox_DASHhook,
      anon_sym_message_DASHhook,
      anon_sym_open_DASHhook,
      anon_sym_close_DASHhook,
      anon_sym_append_DASHhook,
      anon_sym_reply_DASHhook,
      anon_sym_send_DASHhook,
      anon_sym_send2_DASHhook,
      anon_sym_timeout_DASHhook,
      anon_sym_startup_DASHhook,
      anon_sym_shutdown_DASHhook,
  [204] = 1,
    ACTIONS(652), 16,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [223] = 1,
    ACTIONS(654), 16,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [242] = 4,
    ACTIONS(658), 1,
      anon_sym_STAR,
    STATE(233), 1,
      sym_map,
    STATE(236), 1,
      sym__maps,
    ACTIONS(656), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [267] = 4,
    ACTIONS(660), 1,
      anon_sym_STAR,
    STATE(232), 1,
      sym__maps,
    STATE(233), 1,
      sym_map,
    ACTIONS(656), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [292] = 3,
    STATE(233), 1,
      sym_map,
    STATE(234), 1,
      sym__maps,
    ACTIONS(656), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [314] = 3,
    STATE(214), 1,
      sym__maps,
    STATE(233), 1,
      sym_map,
    ACTIONS(656), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [336] = 2,
    STATE(272), 1,
      sym_map,
    ACTIONS(656), 13,
      anon_sym_alias,
      anon_sym_attach,
      anon_sym_browser,
      anon_sym_compose,
      anon_sym_editor,
      anon_sym_generic,
      anon_sym_index,
      anon_sym_mix,
      anon_sym_pager,
      anon_sym_pgp,
      anon_sym_postpone,
      anon_sym_query,
      anon_sym_smime,
  [355] = 3,
    ACTIONS(662), 1,
      anon_sym_SPACE,
    STATE(45), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(664), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [375] = 3,
    STATE(69), 1,
      sym_background,
    STATE(76), 1,
      sym_color,
    ACTIONS(666), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [395] = 3,
    STATE(43), 1,
      sym_foreground,
    STATE(54), 1,
      sym_color,
    ACTIONS(646), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [415] = 3,
    STATE(379), 1,
      sym_background,
    STATE(417), 1,
      sym_color,
    ACTIONS(668), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [435] = 3,
    STATE(46), 1,
      sym_foreground,
    STATE(54), 1,
      sym_color,
    ACTIONS(646), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [455] = 3,
    STATE(73), 1,
      sym_background,
    STATE(76), 1,
      sym_color,
    ACTIONS(666), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [475] = 3,
    ACTIONS(670), 1,
      anon_sym_SPACE,
    STATE(44), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(673), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [495] = 3,
    ACTIONS(662), 1,
      anon_sym_SPACE,
    STATE(44), 1,
      aux_sym__attributes_repeat1,
    ACTIONS(675), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [515] = 3,
    STATE(390), 1,
      sym_background,
    STATE(417), 1,
      sym_color,
    ACTIONS(668), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [535] = 2,
    ACTIONS(677), 1,
      anon_sym_SPACE,
    ACTIONS(679), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [552] = 9,
    ACTIONS(681), 1,
      anon_sym_SPACE,
    ACTIONS(685), 1,
      sym_int,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(207), 1,
      sym_quadoption,
    STATE(208), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [583] = 9,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(695), 1,
      anon_sym_SPACE,
    ACTIONS(697), 1,
      sym_int,
    STATE(219), 1,
      sym_quadoption,
    STATE(220), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [614] = 2,
    ACTIONS(699), 1,
      anon_sym_SPACE,
    ACTIONS(673), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [631] = 9,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(701), 1,
      anon_sym_SPACE,
    ACTIONS(703), 1,
      sym_int,
    STATE(263), 1,
      sym_quadoption,
    STATE(264), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [662] = 9,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(705), 1,
      anon_sym_SPACE,
    ACTIONS(707), 1,
      sym_int,
    STATE(266), 1,
      sym_quadoption,
    STATE(267), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [693] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(709), 1,
      sym_int,
    STATE(224), 1,
      sym_quadoption,
    STATE(225), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [721] = 1,
    ACTIONS(711), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [735] = 1,
    ACTIONS(713), 11,
      anon_sym_default,
      anon_sym_black,
      anon_sym_red,
      anon_sym_green,
      anon_sym_yellow,
      anon_sym_blue,
      anon_sym_magenta,
      anon_sym_cyan,
      anon_sym_white,
      aux_sym_color_token1,
      aux_sym_color_token2,
  [749] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(697), 1,
      sym_int,
    STATE(219), 1,
      sym_quadoption,
    STATE(221), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [777] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(707), 1,
      sym_int,
    STATE(266), 1,
      sym_quadoption,
    STATE(268), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [805] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(715), 1,
      sym_int,
    STATE(269), 1,
      sym_quadoption,
    STATE(270), 1,
      sym__string,
    ACTIONS(683), 4,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_ask_DASHyes,
      anon_sym_ask_DASHno,
  [833] = 8,
    ACTIONS(717), 1,
      anon_sym_STAR,
    ACTIONS(721), 1,
      anon_sym_SQUOTE,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      anon_sym_BQUOTE,
    ACTIONS(727), 1,
      sym__word,
    STATE(451), 1,
      sym_disposition,
    STATE(477), 1,
      sym__string,
    ACTIONS(719), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [859] = 9,
    ACTIONS(729), 1,
      anon_sym_DASHgroup,
    ACTIONS(731), 1,
      anon_sym_STAR,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    STATE(86), 1,
      sym__group,
    STATE(213), 1,
      sym__regex,
    STATE(378), 1,
      sym__regexes,
  [887] = 8,
    ACTIONS(721), 1,
      anon_sym_SQUOTE,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      anon_sym_BQUOTE,
    ACTIONS(727), 1,
      sym__word,
    ACTIONS(743), 1,
      anon_sym_QMARK,
    STATE(449), 1,
      sym_disposition,
    STATE(477), 1,
      sym__string,
    ACTIONS(741), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [913] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(745), 1,
      anon_sym_STAR,
    STATE(242), 1,
      sym_mailbox,
    STATE(306), 1,
      sym__string,
    STATE(373), 1,
      sym__mailboxes,
  [938] = 4,
    ACTIONS(747), 1,
      anon_sym_LT,
    STATE(63), 1,
      aux_sym_key_repeat1,
    ACTIONS(750), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(753), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [955] = 7,
    ACTIONS(755), 1,
      anon_sym_DASHgroup,
    ACTIONS(757), 1,
      anon_sym_STAR,
    ACTIONS(759), 1,
      anon_sym_LT,
    STATE(89), 1,
      aux_sym_key_repeat1,
    STATE(144), 1,
      sym__group,
    STATE(337), 1,
      sym_key,
    ACTIONS(761), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [978] = 4,
    ACTIONS(763), 1,
      anon_sym_LT,
    STATE(63), 1,
      aux_sym_key_repeat1,
    ACTIONS(765), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(767), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [995] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(769), 1,
      anon_sym_STAR,
    STATE(242), 1,
      sym_mailbox,
    STATE(306), 1,
      sym__string,
    STATE(320), 1,
      sym__mailboxes,
  [1020] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(771), 1,
      anon_sym_STAR,
    STATE(162), 1,
      sym_header_field,
    STATE(297), 1,
      sym__string,
    STATE(311), 1,
      sym__header_fields,
  [1045] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(773), 1,
      anon_sym_STAR,
    STATE(162), 1,
      sym_header_field,
    STATE(297), 1,
      sym__string,
    STATE(312), 1,
      sym__header_fields,
  [1070] = 6,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__word,
    STATE(383), 1,
      sym__regex,
    ACTIONS(783), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1091] = 8,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    ACTIONS(785), 1,
      anon_sym_DASHgroup,
    STATE(146), 1,
      sym__group,
    STATE(213), 1,
      sym__regex,
    STATE(364), 1,
      sym__regexes,
  [1116] = 8,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(787), 1,
      anon_sym_STAR,
    STATE(170), 1,
      sym_header,
    STATE(280), 1,
      sym__string,
    STATE(401), 1,
      sym__headers,
  [1141] = 4,
    ACTIONS(789), 1,
      anon_sym_SPACE,
    STATE(180), 1,
      aux_sym__options2_repeat1,
    ACTIONS(791), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
    ACTIONS(793), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1158] = 6,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__word,
    STATE(391), 1,
      sym__regex,
    ACTIONS(795), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1179] = 7,
    ACTIONS(797), 1,
      anon_sym_STAR,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(336), 1,
      sym_header_field,
    STATE(411), 1,
      sym__string,
  [1201] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(217), 1,
      sym_address,
    STATE(293), 1,
      sym__string,
    STATE(310), 1,
      sym__addresses,
  [1223] = 1,
    ACTIONS(807), 7,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1233] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(217), 1,
      sym_address,
    STATE(293), 1,
      sym__string,
    STATE(386), 1,
      sym__addresses,
  [1255] = 7,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    ACTIONS(809), 1,
      anon_sym_STAR,
    STATE(213), 1,
      sym__regex,
    STATE(446), 1,
      sym__regexes,
  [1277] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    ACTIONS(811), 1,
      anon_sym_STAR,
    STATE(414), 1,
      sym_pattern,
    STATE(431), 1,
      sym__string,
  [1299] = 7,
    ACTIONS(813), 1,
      anon_sym_BANG,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(164), 1,
      sym_pattern,
    STATE(274), 1,
      sym__string,
  [1321] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    ACTIONS(823), 1,
      anon_sym_STAR,
    STATE(317), 1,
      sym_pattern,
    STATE(431), 1,
      sym__string,
  [1343] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(170), 1,
      sym_header,
    STATE(280), 1,
      sym__string,
    STATE(396), 1,
      sym__headers,
  [1365] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    ACTIONS(825), 1,
      anon_sym_STAR,
    STATE(185), 1,
      sym__string,
    STATE(412), 1,
      sym__strings,
  [1387] = 1,
    ACTIONS(827), 7,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [1397] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(217), 1,
      sym_address,
    STATE(293), 1,
      sym__string,
    STATE(426), 1,
      sym__addresses,
  [1419] = 7,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    ACTIONS(829), 1,
      anon_sym_STAR,
    STATE(213), 1,
      sym__regex,
    STATE(395), 1,
      sym__regexes,
  [1441] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(242), 1,
      sym_mailbox,
    STATE(306), 1,
      sym__string,
    STATE(432), 1,
      sym__mailboxes,
  [1463] = 6,
    ACTIONS(763), 1,
      anon_sym_LT,
    ACTIONS(831), 1,
      anon_sym_DASHgroup,
    STATE(65), 1,
      aux_sym_key_repeat1,
    STATE(77), 1,
      sym_key,
    STATE(194), 1,
      sym__group,
    ACTIONS(833), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [1483] = 4,
    ACTIONS(759), 1,
      anon_sym_LT,
    STATE(90), 1,
      aux_sym_key_repeat1,
    ACTIONS(835), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(767), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1499] = 4,
    ACTIONS(837), 1,
      anon_sym_LT,
    STATE(90), 1,
      aux_sym_key_repeat1,
    ACTIONS(840), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
    ACTIONS(753), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1515] = 1,
    ACTIONS(843), 7,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [1525] = 7,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(242), 1,
      sym_mailbox,
    STATE(306), 1,
      sym__string,
    STATE(372), 1,
      sym__mailboxes,
  [1547] = 7,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    ACTIONS(845), 1,
      anon_sym_STAR,
    STATE(213), 1,
      sym__regex,
    STATE(441), 1,
      sym__regexes,
  [1569] = 7,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    ACTIONS(847), 1,
      anon_sym_STAR,
    STATE(374), 1,
      sym_pattern,
    STATE(431), 1,
      sym__string,
  [1591] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(185), 1,
      sym__string,
    STATE(407), 1,
      sym__strings,
  [1610] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(329), 1,
      sym_directory,
    STATE(330), 1,
      sym__string,
  [1629] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(415), 1,
      sym_keyid,
    STATE(416), 1,
      sym__string,
  [1648] = 6,
    ACTIONS(849), 1,
      anon_sym_DASHnoregex,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      sym__word,
    STATE(109), 1,
      sym__regex,
  [1667] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(410), 1,
      sym__string,
    STATE(419), 1,
      sym_mailbox,
  [1686] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(410), 1,
      sym__string,
    STATE(420), 1,
      sym_mailbox,
  [1705] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(410), 1,
      sym__string,
    STATE(421), 1,
      sym_mailbox,
  [1724] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(11), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
  [1743] = 6,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    STATE(213), 1,
      sym__regex,
    STATE(425), 1,
      sym__regexes,
  [1762] = 6,
    ACTIONS(859), 1,
      anon_sym_DASHnoregex,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    ACTIONS(865), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(5), 1,
      sym__regex,
  [1781] = 6,
    ACTIONS(869), 1,
      anon_sym_SQUOTE,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_BQUOTE,
    ACTIONS(875), 1,
      sym__word,
    STATE(81), 1,
      sym_pattern,
    STATE(191), 1,
      sym__string,
  [1800] = 6,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    STATE(213), 1,
      sym__regex,
    STATE(439), 1,
      sym__regexes,
  [1819] = 6,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    STATE(213), 1,
      sym__regex,
    STATE(444), 1,
      sym__regexes,
  [1838] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(173), 1,
      sym_mailbox,
    STATE(306), 1,
      sym__string,
  [1857] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(314), 1,
      sym_mailbox,
    STATE(410), 1,
      sym__string,
  [1876] = 2,
    STATE(176), 1,
      sym_attribute,
    ACTIONS(877), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [1887] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(318), 1,
      sym_shell_command,
    STATE(319), 1,
      sym__string,
  [1906] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(319), 1,
      sym__string,
    STATE(448), 1,
      sym_shell_command,
  [1925] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(319), 1,
      sym__string,
    STATE(321), 1,
      sym_shell_command,
  [1944] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(14), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
  [1963] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(12), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
  [1982] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(325), 1,
      sym_format,
    STATE(326), 1,
      sym__string,
  [2001] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(327), 1,
      sym_replacement,
    STATE(328), 1,
      sym__string,
  [2020] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(13), 1,
      sym_pattern,
    STATE(18), 1,
      sym__string,
  [2039] = 6,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__word,
    ACTIONS(879), 1,
      anon_sym_STAR,
    STATE(344), 1,
      sym__regex,
  [2058] = 6,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__word,
    ACTIONS(881), 1,
      anon_sym_STAR,
    STATE(348), 1,
      sym__regex,
  [2077] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(349), 1,
      sym_uri,
    STATE(350), 1,
      sym__string,
  [2096] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(350), 1,
      sym__string,
    STATE(351), 1,
      sym_uri,
  [2115] = 6,
    ACTIONS(883), 1,
      anon_sym_DASHgroup,
    ACTIONS(885), 1,
      anon_sym_STAR,
    ACTIONS(887), 1,
      anon_sym_DASHrx,
    ACTIONS(889), 1,
      anon_sym_DASHaddr,
    STATE(262), 1,
      sym__group,
    STATE(393), 1,
      sym__rx_addr,
  [2134] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(152), 1,
      sym_alias,
    STATE(309), 1,
      sym__string,
  [2153] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(9), 1,
      sym_symbol,
    STATE(23), 1,
      sym__string,
  [2172] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(10), 1,
      sym_symbol,
    STATE(23), 1,
      sym__string,
  [2191] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(154), 1,
      sym_charset,
    STATE(286), 1,
      sym__string,
  [2210] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(18), 1,
      sym__string,
    STATE(487), 1,
      sym_pattern,
  [2229] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(198), 1,
      sym_pattern,
    STATE(274), 1,
      sym__string,
  [2248] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(271), 1,
      sym_header,
    STATE(280), 1,
      sym__string,
  [2267] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(313), 1,
      sym_message,
    STATE(316), 1,
      sym__string,
  [2286] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(284), 1,
      sym_mailbox,
    STATE(306), 1,
      sym__string,
  [2305] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(295), 1,
      sym_header_field,
    STATE(297), 1,
      sym__string,
  [2324] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(368), 1,
      sym_mailbox,
    STATE(410), 1,
      sym__string,
  [2343] = 3,
    ACTIONS(895), 1,
      sym_option,
    ACTIONS(891), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(893), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
  [2356] = 6,
    ACTIONS(169), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym__space_token1,
    ACTIONS(897), 1,
      sym__eol,
    STATE(19), 1,
      sym__end,
    STATE(257), 1,
      aux_sym__space_repeat1,
    STATE(450), 1,
      sym__space,
  [2375] = 6,
    ACTIONS(869), 1,
      anon_sym_SQUOTE,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_BQUOTE,
    ACTIONS(875), 1,
      sym__word,
    STATE(79), 1,
      sym_pattern,
    STATE(191), 1,
      sym__string,
  [2394] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(260), 1,
      sym_address,
    STATE(293), 1,
      sym__string,
  [2413] = 6,
    ACTIONS(899), 1,
      anon_sym_SQUOTE,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    ACTIONS(903), 1,
      anon_sym_BQUOTE,
    ACTIONS(905), 1,
      sym__word,
    STATE(80), 1,
      sym_name,
    STATE(193), 1,
      sym__string,
  [2432] = 6,
    ACTIONS(907), 1,
      anon_sym_SQUOTE,
    ACTIONS(909), 1,
      anon_sym_DQUOTE,
    ACTIONS(911), 1,
      anon_sym_BQUOTE,
    ACTIONS(913), 1,
      sym__word,
    STATE(381), 1,
      sym_group_name,
    STATE(382), 1,
      sym__string,
  [2451] = 2,
    STATE(50), 1,
      sym_attribute,
    ACTIONS(644), 5,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_none,
      anon_sym_reverse,
      anon_sym_standout,
  [2462] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(108), 1,
      sym_description,
    STATE(301), 1,
      sym__string,
  [2481] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(99), 1,
      sym_pattern,
    STATE(274), 1,
      sym__string,
  [2500] = 5,
    ACTIONS(759), 1,
      anon_sym_LT,
    ACTIONS(915), 1,
      anon_sym_STAR,
    STATE(89), 1,
      aux_sym_key_repeat1,
    STATE(389), 1,
      sym_key,
    ACTIONS(761), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [2517] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(148), 1,
      sym_description,
    STATE(301), 1,
      sym__string,
  [2536] = 6,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    STATE(213), 1,
      sym__regex,
    STATE(392), 1,
      sym__regexes,
  [2555] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(100), 1,
      sym_pattern,
    STATE(274), 1,
      sym__string,
  [2574] = 6,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(299), 1,
      sym_mailbox,
    STATE(306), 1,
      sym__string,
  [2593] = 6,
    ACTIONS(721), 1,
      anon_sym_SQUOTE,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      anon_sym_BQUOTE,
    ACTIONS(727), 1,
      sym__word,
    STATE(455), 1,
      sym_disposition,
    STATE(477), 1,
      sym__string,
  [2612] = 6,
    ACTIONS(721), 1,
      anon_sym_SQUOTE,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    ACTIONS(725), 1,
      anon_sym_BQUOTE,
    ACTIONS(727), 1,
      sym__word,
    STATE(458), 1,
      sym_disposition,
    STATE(477), 1,
      sym__string,
  [2631] = 6,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(437), 1,
      sym_group_name,
    STATE(438), 1,
      sym__string,
  [2650] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(404), 1,
      sym_charset,
    STATE(408), 1,
      sym__string,
  [2669] = 1,
    ACTIONS(827), 6,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2678] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(405), 1,
      sym_charset,
    STATE(408), 1,
      sym__string,
  [2697] = 2,
    STATE(29), 1,
      sym_composeobject,
    ACTIONS(917), 5,
      anon_sym_header,
      anon_sym_security_encrypt,
      anon_sym_security_sign,
      anon_sym_security_both,
      anon_sym_security_none,
  [2708] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(101), 1,
      sym_pattern,
    STATE(274), 1,
      sym__string,
  [2727] = 6,
    ACTIONS(919), 1,
      anon_sym_SQUOTE,
    ACTIONS(921), 1,
      anon_sym_DQUOTE,
    ACTIONS(923), 1,
      anon_sym_BQUOTE,
    ACTIONS(925), 1,
      sym__word,
    STATE(275), 1,
      sym_group_name,
    STATE(276), 1,
      sym__string,
  [2746] = 6,
    ACTIONS(815), 1,
      anon_sym_SQUOTE,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      anon_sym_BQUOTE,
    ACTIONS(821), 1,
      sym__word,
    STATE(287), 1,
      sym_group_name,
    STATE(288), 1,
      sym__string,
  [2765] = 6,
    ACTIONS(869), 1,
      anon_sym_SQUOTE,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    ACTIONS(873), 1,
      anon_sym_BQUOTE,
    ACTIONS(875), 1,
      sym__word,
    STATE(245), 1,
      sym_group_name,
    STATE(246), 1,
      sym__string,
  [2784] = 6,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(361), 1,
      sym_sequence,
    STATE(362), 1,
      sym__string,
  [2803] = 3,
    ACTIONS(927), 1,
      anon_sym_SPACE,
    STATE(161), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(930), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2815] = 3,
    ACTIONS(932), 1,
      anon_sym_SPACE,
    STATE(174), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(934), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2827] = 5,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      sym__word,
    STATE(134), 1,
      sym__regex,
  [2843] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(354), 1,
      sym__string,
  [2859] = 3,
    ACTIONS(936), 1,
      anon_sym_SPACE,
    STATE(199), 1,
      aux_sym__functions_repeat1,
    ACTIONS(938), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2871] = 5,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      sym__word,
    STATE(112), 1,
      sym__regex,
  [2887] = 3,
    ACTIONS(940), 1,
      anon_sym_SPACE,
    STATE(200), 1,
      aux_sym__headers_repeat1,
    ACTIONS(942), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2899] = 5,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_BQUOTE,
    ACTIONS(693), 1,
      sym__word,
    STATE(277), 1,
      sym__string,
  [2915] = 3,
    ACTIONS(944), 1,
      anon_sym_SPACE,
    STATE(201), 1,
      aux_sym__strings_repeat1,
    ACTIONS(946), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2927] = 3,
    ACTIONS(940), 1,
      anon_sym_SPACE,
    STATE(167), 1,
      aux_sym__headers_repeat1,
    ACTIONS(948), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2939] = 5,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      sym__word,
    STATE(113), 1,
      sym__regex,
  [2955] = 3,
    ACTIONS(950), 1,
      anon_sym_SPACE,
    STATE(202), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(952), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2967] = 3,
    ACTIONS(954), 1,
      anon_sym_SPACE,
    STATE(204), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(956), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2979] = 3,
    ACTIONS(932), 1,
      anon_sym_SPACE,
    STATE(205), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(958), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [2991] = 3,
    ACTIONS(936), 1,
      anon_sym_SPACE,
    STATE(165), 1,
      aux_sym__functions_repeat1,
    ACTIONS(960), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3003] = 5,
    ACTIONS(775), 1,
      anon_sym_SQUOTE,
    ACTIONS(777), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      anon_sym_BQUOTE,
    ACTIONS(781), 1,
      sym__word,
    STATE(369), 1,
      sym__regex,
  [3019] = 3,
    ACTIONS(962), 1,
      anon_sym_SPACE,
    STATE(206), 1,
      aux_sym__options2_repeat1,
    ACTIONS(964), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3031] = 5,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    ACTIONS(865), 1,
      anon_sym_BQUOTE,
    ACTIONS(867), 1,
      sym__word,
    STATE(15), 1,
      sym__regex,
  [3047] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(375), 1,
      sym__string,
  [3063] = 3,
    ACTIONS(962), 1,
      anon_sym_SPACE,
    STATE(250), 1,
      aux_sym__options2_repeat1,
    ACTIONS(964), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3075] = 3,
    ACTIONS(966), 1,
      anon_sym_SPACE,
    STATE(210), 1,
      aux_sym__options_repeat1,
    ACTIONS(968), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3087] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(339), 1,
      sym__string,
  [3103] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(335), 1,
      sym__string,
  [3119] = 5,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      sym__word,
    STATE(97), 1,
      sym__regex,
  [3135] = 3,
    ACTIONS(944), 1,
      anon_sym_SPACE,
    STATE(169), 1,
      aux_sym__strings_repeat1,
    ACTIONS(970), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3147] = 3,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(974), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3159] = 3,
    ACTIONS(976), 1,
      anon_sym_SPACE,
    STATE(187), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(979), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3171] = 5,
    ACTIONS(632), 1,
      anon_sym_SQUOTE,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      anon_sym_BQUOTE,
    ACTIONS(638), 1,
      sym__word,
    STATE(8), 1,
      sym__string,
  [3187] = 3,
    ACTIONS(981), 1,
      anon_sym_SPACE,
    STATE(212), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(983), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3199] = 3,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__maps_repeat1,
    ACTIONS(988), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3211] = 1,
    ACTIONS(602), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3219] = 5,
    ACTIONS(883), 1,
      anon_sym_DASHgroup,
    ACTIONS(887), 1,
      anon_sym_DASHrx,
    ACTIONS(889), 1,
      anon_sym_DASHaddr,
    STATE(385), 1,
      sym__group,
    STATE(387), 1,
      sym__rx_addr,
  [3235] = 1,
    ACTIONS(990), 5,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3243] = 4,
    ACTIONS(763), 1,
      anon_sym_LT,
    STATE(65), 1,
      aux_sym_key_repeat1,
    STATE(75), 1,
      sym_key,
    ACTIONS(833), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3257] = 3,
    ACTIONS(966), 1,
      anon_sym_SPACE,
    STATE(181), 1,
      aux_sym__options_repeat1,
    ACTIONS(992), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3269] = 5,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      sym__word,
    STATE(116), 1,
      sym__regex,
  [3285] = 5,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      sym__word,
    STATE(111), 1,
      sym__regex,
  [3301] = 5,
    ACTIONS(799), 1,
      anon_sym_SQUOTE,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    ACTIONS(803), 1,
      anon_sym_BQUOTE,
    ACTIONS(805), 1,
      sym__word,
    STATE(384), 1,
      sym__string,
  [3317] = 3,
    ACTIONS(994), 1,
      anon_sym_SPACE,
    STATE(199), 1,
      aux_sym__functions_repeat1,
    ACTIONS(997), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3329] = 3,
    ACTIONS(999), 1,
      anon_sym_SPACE,
    STATE(200), 1,
      aux_sym__headers_repeat1,
    ACTIONS(1002), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3341] = 3,
    ACTIONS(1004), 1,
      anon_sym_SPACE,
    STATE(201), 1,
      aux_sym__strings_repeat1,
    ACTIONS(1007), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3353] = 3,
    ACTIONS(1009), 1,
      anon_sym_SPACE,
    STATE(202), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(1012), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3365] = 5,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    ACTIONS(855), 1,
      anon_sym_BQUOTE,
    ACTIONS(857), 1,
      sym__word,
    STATE(117), 1,
      sym__regex,
  [3381] = 3,
    ACTIONS(954), 1,
      anon_sym_SPACE,
    STATE(218), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(1014), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3393] = 3,
    ACTIONS(1016), 1,
      anon_sym_SPACE,
    STATE(205), 1,
      aux_sym__header_fields_repeat1,
    ACTIONS(1019), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3405] = 3,
    ACTIONS(962), 1,
      anon_sym_SPACE,
    STATE(250), 1,
      aux_sym__options2_repeat1,
    ACTIONS(1021), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3417] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(222), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1025), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3429] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(223), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1027), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3441] = 4,
    ACTIONS(1031), 1,
      sym_option,
    STATE(360), 1,
      sym__options3,
    STATE(363), 1,
      sym__options2,
    ACTIONS(1029), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [3455] = 3,
    ACTIONS(1033), 1,
      anon_sym_SPACE,
    STATE(210), 1,
      aux_sym__options_repeat1,
    ACTIONS(1036), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3467] = 3,
    ACTIONS(1038), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(1041), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3479] = 3,
    ACTIONS(1043), 1,
      anon_sym_SPACE,
    STATE(212), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(1046), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3491] = 3,
    ACTIONS(1048), 1,
      anon_sym_SPACE,
    STATE(237), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(1050), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3503] = 4,
    ACTIONS(763), 1,
      anon_sym_LT,
    STATE(65), 1,
      aux_sym_key_repeat1,
    STATE(160), 1,
      sym_key,
    ACTIONS(833), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3517] = 2,
    ACTIONS(1054), 1,
      anon_sym_SLASH,
    ACTIONS(1052), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3527] = 3,
    ACTIONS(1056), 1,
      anon_sym_SPACE,
    STATE(238), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(1058), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3539] = 3,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym__addresses_repeat1,
    ACTIONS(1060), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3551] = 3,
    ACTIONS(1062), 1,
      anon_sym_SPACE,
    STATE(218), 1,
      aux_sym_named_mailboxes_directive_repeat1,
    ACTIONS(1065), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3563] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(226), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1067), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3575] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(227), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1069), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3587] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(228), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1069), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3599] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(229), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1069), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3611] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(229), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1071), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3623] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(230), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1073), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3635] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(231), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1075), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3647] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(229), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1075), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3659] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(229), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1077), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3671] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(229), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1077), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3683] = 3,
    ACTIONS(1079), 1,
      anon_sym_SPACE,
    STATE(229), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1082), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3695] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(229), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1084), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3707] = 3,
    ACTIONS(1023), 1,
      anon_sym_SPACE,
    STATE(229), 1,
      aux_sym__options3_repeat1,
    ACTIONS(1086), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3719] = 4,
    ACTIONS(759), 1,
      anon_sym_LT,
    STATE(89), 1,
      aux_sym_key_repeat1,
    STATE(447), 1,
      sym_key,
    ACTIONS(761), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3733] = 3,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym__maps_repeat1,
    ACTIONS(1090), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3745] = 4,
    ACTIONS(1092), 1,
      anon_sym_LT,
    STATE(239), 1,
      aux_sym_key_repeat1,
    STATE(481), 1,
      sym_key,
    ACTIONS(1094), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3759] = 5,
    ACTIONS(733), 1,
      anon_sym_SQUOTE,
    ACTIONS(735), 1,
      anon_sym_DQUOTE,
    ACTIONS(737), 1,
      anon_sym_BQUOTE,
    ACTIONS(739), 1,
      sym__word,
    STATE(296), 1,
      sym__regex,
  [3775] = 4,
    ACTIONS(759), 1,
      anon_sym_LT,
    STATE(89), 1,
      aux_sym_key_repeat1,
    STATE(403), 1,
      sym_key,
    ACTIONS(761), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3789] = 3,
    ACTIONS(1048), 1,
      anon_sym_SPACE,
    STATE(187), 1,
      aux_sym__regexes_repeat1,
    ACTIONS(1096), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3801] = 3,
    ACTIONS(1056), 1,
      anon_sym_SPACE,
    STATE(161), 1,
      aux_sym__mimes_repeat1,
    ACTIONS(1098), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3813] = 4,
    ACTIONS(767), 1,
      sym_function,
    ACTIONS(1092), 1,
      anon_sym_LT,
    STATE(241), 1,
      aux_sym_key_repeat1,
    ACTIONS(1100), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3827] = 3,
    ACTIONS(981), 1,
      anon_sym_SPACE,
    STATE(189), 1,
      aux_sym__mime_types_repeat1,
    ACTIONS(1102), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3839] = 4,
    ACTIONS(753), 1,
      sym_function,
    ACTIONS(1104), 1,
      anon_sym_LT,
    STATE(241), 1,
      aux_sym_key_repeat1,
    ACTIONS(1107), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3853] = 3,
    ACTIONS(950), 1,
      anon_sym_SPACE,
    STATE(172), 1,
      aux_sym__mailboxes_repeat1,
    ACTIONS(1110), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3865] = 3,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym__maps_repeat1,
    ACTIONS(1112), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [3877] = 1,
    ACTIONS(594), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3885] = 1,
    ACTIONS(1114), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3893] = 1,
    ACTIONS(1116), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3901] = 1,
    ACTIONS(598), 5,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3909] = 1,
    ACTIONS(594), 5,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3917] = 1,
    ACTIONS(598), 5,
      anon_sym_BANG,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [3925] = 3,
    ACTIONS(1118), 1,
      anon_sym_SPACE,
    STATE(250), 1,
      aux_sym__options2_repeat1,
    ACTIONS(1121), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3937] = 1,
    ACTIONS(598), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3944] = 3,
    ACTIONS(1125), 1,
      aux_sym__space_token1,
    STATE(252), 1,
      aux_sym__space_repeat1,
    ACTIONS(1123), 2,
      sym_comment,
      sym__eol,
  [3955] = 1,
    ACTIONS(1128), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3962] = 1,
    ACTIONS(1130), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3969] = 1,
    ACTIONS(930), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [3976] = 2,
    ACTIONS(1132), 1,
      anon_sym_SPACE,
    ACTIONS(1134), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
  [3985] = 3,
    ACTIONS(1138), 1,
      aux_sym__space_token1,
    STATE(252), 1,
      aux_sym__space_repeat1,
    ACTIONS(1136), 2,
      sym_comment,
      sym__eol,
  [3996] = 1,
    ACTIONS(1036), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4003] = 1,
    ACTIONS(997), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4010] = 1,
    ACTIONS(1041), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4017] = 1,
    ACTIONS(1140), 4,
      anon_sym_COMMA,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4024] = 4,
    ACTIONS(887), 1,
      anon_sym_DASHrx,
    ACTIONS(889), 1,
      anon_sym_DASHaddr,
    ACTIONS(1142), 1,
      anon_sym_STAR,
    STATE(429), 1,
      sym__rx_addr,
  [4037] = 1,
    ACTIONS(1144), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4044] = 1,
    ACTIONS(1146), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4051] = 1,
    ACTIONS(1046), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4058] = 1,
    ACTIONS(1148), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4065] = 1,
    ACTIONS(1150), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4072] = 1,
    ACTIONS(1150), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4079] = 1,
    ACTIONS(1152), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4086] = 1,
    ACTIONS(1154), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4093] = 1,
    ACTIONS(1002), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4100] = 1,
    ACTIONS(988), 4,
      anon_sym_COMMA,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4107] = 1,
    ACTIONS(628), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4114] = 1,
    ACTIONS(602), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4121] = 1,
    ACTIONS(1114), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4128] = 1,
    ACTIONS(1116), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4135] = 1,
    ACTIONS(1156), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4142] = 1,
    ACTIONS(679), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4149] = 1,
    ACTIONS(1121), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4156] = 1,
    ACTIONS(1158), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4163] = 1,
    ACTIONS(616), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4170] = 1,
    ACTIONS(624), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4177] = 1,
    ACTIONS(594), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4184] = 1,
    ACTIONS(1012), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4191] = 4,
    ACTIONS(1160), 1,
      anon_sym_STAR,
    ACTIONS(1162), 1,
      sym_mime_type,
    STATE(216), 1,
      sym_mime,
    STATE(402), 1,
      sym__mimes,
  [4204] = 1,
    ACTIONS(1164), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4211] = 1,
    ACTIONS(1114), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4218] = 1,
    ACTIONS(1116), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4225] = 1,
    ACTIONS(616), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4232] = 1,
    ACTIONS(598), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4239] = 1,
    ACTIONS(827), 4,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
      sym_function,
  [4246] = 1,
    ACTIONS(1166), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4253] = 1,
    ACTIONS(1168), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4260] = 1,
    ACTIONS(624), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4267] = 1,
    ACTIONS(1019), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4274] = 1,
    ACTIONS(1170), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4281] = 1,
    ACTIONS(1172), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4288] = 1,
    ACTIONS(628), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4295] = 1,
    ACTIONS(1174), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4302] = 1,
    ACTIONS(594), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4309] = 1,
    ACTIONS(1176), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4316] = 1,
    ACTIONS(594), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4323] = 1,
    ACTIONS(598), 4,
      anon_sym_COMMA,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4330] = 1,
    ACTIONS(594), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4337] = 1,
    ACTIONS(598), 4,
      anon_sym_STAR,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4344] = 1,
    ACTIONS(1178), 4,
      anon_sym_SPACE,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4351] = 4,
    ACTIONS(1162), 1,
      sym_mime_type,
    ACTIONS(1180), 1,
      anon_sym_STAR,
    STATE(216), 1,
      sym_mime,
    STATE(422), 1,
      sym__mimes,
  [4364] = 4,
    ACTIONS(1162), 1,
      sym_mime_type,
    ACTIONS(1182), 1,
      anon_sym_STAR,
    STATE(216), 1,
      sym_mime,
    STATE(334), 1,
      sym__mimes,
  [4377] = 1,
    ACTIONS(1184), 4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__word,
  [4384] = 1,
    ACTIONS(1186), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4390] = 1,
    ACTIONS(1188), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4396] = 1,
    ACTIONS(1190), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4402] = 1,
    ACTIONS(1192), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4408] = 1,
    ACTIONS(1194), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4414] = 1,
    ACTIONS(1196), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4420] = 1,
    ACTIONS(1198), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4426] = 1,
    ACTIONS(1200), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4432] = 1,
    ACTIONS(1202), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4438] = 1,
    ACTIONS(1204), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4444] = 1,
    ACTIONS(1206), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4450] = 1,
    ACTIONS(1208), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4456] = 1,
    ACTIONS(1210), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4462] = 1,
    ACTIONS(1212), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4468] = 1,
    ACTIONS(1214), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4474] = 1,
    ACTIONS(1216), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4480] = 1,
    ACTIONS(1218), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4486] = 1,
    ACTIONS(1220), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4492] = 1,
    ACTIONS(1222), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4498] = 1,
    ACTIONS(1224), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4504] = 1,
    ACTIONS(1226), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4510] = 1,
    ACTIONS(1228), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4516] = 1,
    ACTIONS(1230), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4522] = 1,
    ACTIONS(1232), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4528] = 1,
    ACTIONS(1234), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4534] = 1,
    ACTIONS(1236), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4540] = 1,
    ACTIONS(1238), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4546] = 1,
    ACTIONS(1240), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4552] = 3,
    ACTIONS(1162), 1,
      sym_mime_type,
    STATE(216), 1,
      sym_mime,
    STATE(418), 1,
      sym__mimes,
  [4562] = 1,
    ACTIONS(1242), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4568] = 1,
    ACTIONS(1244), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4574] = 1,
    ACTIONS(1246), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4580] = 1,
    ACTIONS(1248), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4586] = 1,
    ACTIONS(1250), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4592] = 1,
    ACTIONS(1252), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4598] = 1,
    ACTIONS(1254), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4604] = 1,
    ACTIONS(1256), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4610] = 1,
    ACTIONS(1258), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4616] = 1,
    ACTIONS(1260), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4622] = 1,
    ACTIONS(1262), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4628] = 1,
    ACTIONS(1264), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4634] = 1,
    ACTIONS(1266), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4640] = 1,
    ACTIONS(1268), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4646] = 1,
    ACTIONS(1270), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4652] = 1,
    ACTIONS(1272), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4658] = 1,
    ACTIONS(1274), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4664] = 1,
    ACTIONS(1276), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4670] = 1,
    ACTIONS(1278), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4676] = 1,
    ACTIONS(1280), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4682] = 3,
    ACTIONS(1162), 1,
      sym_mime_type,
    STATE(216), 1,
      sym_mime,
    STATE(398), 1,
      sym__mimes,
  [4692] = 1,
    ACTIONS(1282), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4698] = 1,
    ACTIONS(1284), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4704] = 1,
    ACTIONS(1286), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4710] = 1,
    ACTIONS(1288), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4716] = 1,
    ACTIONS(1290), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4722] = 1,
    ACTIONS(1292), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4728] = 1,
    ACTIONS(1294), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4734] = 1,
    ACTIONS(1296), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4740] = 1,
    ACTIONS(1298), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4746] = 1,
    ACTIONS(1300), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4752] = 2,
    ACTIONS(895), 1,
      sym_option,
    ACTIONS(891), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
  [4760] = 1,
    ACTIONS(1302), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4766] = 1,
    ACTIONS(1304), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4772] = 1,
    ACTIONS(1306), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4778] = 1,
    ACTIONS(1308), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4784] = 1,
    ACTIONS(1310), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4790] = 3,
    ACTIONS(1162), 1,
      sym_mime_type,
    STATE(216), 1,
      sym_mime,
    STATE(333), 1,
      sym__mimes,
  [4800] = 1,
    ACTIONS(1312), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4806] = 1,
    ACTIONS(1314), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4812] = 1,
    ACTIONS(795), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4818] = 1,
    ACTIONS(1316), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4824] = 1,
    ACTIONS(1114), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4830] = 1,
    ACTIONS(1116), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [4836] = 1,
    ACTIONS(1318), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4842] = 1,
    ACTIONS(1320), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4848] = 3,
    ACTIONS(887), 1,
      anon_sym_DASHrx,
    ACTIONS(889), 1,
      anon_sym_DASHaddr,
    STATE(427), 1,
      sym__rx_addr,
  [4858] = 1,
    ACTIONS(1322), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4864] = 1,
    ACTIONS(1324), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4870] = 1,
    ACTIONS(1326), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4876] = 1,
    ACTIONS(1328), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4882] = 1,
    ACTIONS(1330), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4888] = 1,
    ACTIONS(1332), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4894] = 1,
    ACTIONS(1334), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4900] = 1,
    ACTIONS(1336), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4906] = 1,
    ACTIONS(1338), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4912] = 1,
    ACTIONS(1340), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4918] = 1,
    ACTIONS(1342), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4924] = 1,
    ACTIONS(1344), 3,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_EQ,
  [4930] = 1,
    ACTIONS(1346), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4936] = 1,
    ACTIONS(1348), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4942] = 1,
    ACTIONS(1350), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4948] = 1,
    ACTIONS(1352), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4954] = 1,
    ACTIONS(1354), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4960] = 1,
    ACTIONS(1356), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4966] = 1,
    ACTIONS(1358), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4972] = 1,
    ACTIONS(1360), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4978] = 1,
    ACTIONS(1362), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4984] = 1,
    ACTIONS(1364), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4990] = 1,
    ACTIONS(1164), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [4996] = 1,
    ACTIONS(1366), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5002] = 1,
    ACTIONS(1178), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5008] = 1,
    ACTIONS(1172), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5014] = 1,
    ACTIONS(1368), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5020] = 1,
    ACTIONS(1370), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5026] = 1,
    ACTIONS(1372), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5032] = 1,
    ACTIONS(1374), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5038] = 1,
    ACTIONS(1376), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5044] = 1,
    ACTIONS(807), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5050] = 1,
    ACTIONS(1378), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5056] = 1,
    ACTIONS(1380), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5062] = 1,
    ACTIONS(1382), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5068] = 1,
    ACTIONS(1384), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5074] = 1,
    ACTIONS(1386), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5080] = 1,
    ACTIONS(1388), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5086] = 1,
    ACTIONS(843), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5092] = 1,
    ACTIONS(1390), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5098] = 1,
    ACTIONS(1392), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5104] = 1,
    ACTIONS(1394), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5110] = 1,
    ACTIONS(1396), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5116] = 1,
    ACTIONS(1398), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5122] = 1,
    ACTIONS(628), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5128] = 1,
    ACTIONS(602), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5134] = 1,
    ACTIONS(1400), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5140] = 1,
    ACTIONS(1402), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5146] = 1,
    ACTIONS(616), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5152] = 1,
    ACTIONS(624), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5158] = 1,
    ACTIONS(1404), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5164] = 1,
    ACTIONS(1406), 3,
      anon_sym_STAR,
      anon_sym_DASHrx,
      anon_sym_DASHaddr,
  [5170] = 1,
    ACTIONS(1408), 3,
      anon_sym_STAR,
      anon_sym_DASHrx,
      anon_sym_DASHaddr,
  [5176] = 1,
    ACTIONS(1410), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5182] = 1,
    ACTIONS(1412), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5188] = 1,
    ACTIONS(1414), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5194] = 1,
    ACTIONS(594), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [5200] = 1,
    ACTIONS(598), 3,
      anon_sym_LT,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [5206] = 1,
    ACTIONS(1416), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5212] = 1,
    ACTIONS(1418), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5218] = 1,
    ACTIONS(1420), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5224] = 1,
    ACTIONS(1422), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5230] = 1,
    ACTIONS(1424), 3,
      sym_comment,
      sym__eol,
      aux_sym__space_token1,
  [5236] = 2,
    ACTIONS(1426), 1,
      sym_mime_type,
    STATE(399), 1,
      sym__mime_types,
  [5243] = 2,
    ACTIONS(1428), 1,
      sym_comment,
    ACTIONS(1430), 1,
      sym__eol,
  [5250] = 2,
    ACTIONS(1426), 1,
      sym_mime_type,
    STATE(400), 1,
      sym__mime_types,
  [5257] = 2,
    ACTIONS(1432), 1,
      anon_sym_DASHgroup,
    STATE(78), 1,
      sym__group,
  [5264] = 2,
    ACTIONS(1434), 1,
      sym_option,
    STATE(365), 1,
      sym__options,
  [5271] = 2,
    ACTIONS(1162), 1,
      sym_mime_type,
    STATE(255), 1,
      sym_mime,
  [5278] = 2,
    ACTIONS(1426), 1,
      sym_mime_type,
    STATE(340), 1,
      sym__mime_types,
  [5285] = 2,
    ACTIONS(1436), 1,
      sym_function,
    STATE(341), 1,
      sym__functions,
  [5292] = 2,
    ACTIONS(1432), 1,
      anon_sym_DASHgroup,
    STATE(93), 1,
      sym__group,
  [5299] = 2,
    ACTIONS(1426), 1,
      sym_mime_type,
    STATE(342), 1,
      sym__mime_types,
  [5306] = 2,
    ACTIONS(1434), 1,
      sym_option,
    STATE(366), 1,
      sym__options,
  [5313] = 2,
    ACTIONS(1438), 1,
      anon_sym_DASHgroup,
    STATE(107), 1,
      sym__group,
  [5320] = 2,
    ACTIONS(1434), 1,
      sym_option,
    STATE(367), 1,
      sym__options,
  [5327] = 2,
    ACTIONS(1438), 1,
      anon_sym_DASHgroup,
    STATE(106), 1,
      sym__group,
  [5334] = 2,
    ACTIONS(1440), 1,
      anon_sym_QMARK,
    ACTIONS(1442), 1,
      sym_option,
  [5341] = 1,
    ACTIONS(1444), 1,
      aux_sym_key_token1,
  [5345] = 1,
    ACTIONS(1446), 1,
      sym_option,
  [5349] = 1,
    ACTIONS(1448), 1,
      ts_builtin_sym_end,
  [5353] = 1,
    ACTIONS(1450), 1,
      aux_sym__string_token1,
  [5357] = 1,
    ACTIONS(1452), 1,
      aux_sym__string_token2,
  [5361] = 1,
    ACTIONS(1454), 1,
      sym_mime_type,
  [5365] = 1,
    ACTIONS(1456), 1,
      sym_option,
  [5369] = 1,
    ACTIONS(1458), 1,
      sym__eol,
  [5373] = 1,
    ACTIONS(596), 1,
      sym_mime_type,
  [5377] = 1,
    ACTIONS(1460), 1,
      anon_sym_SQUOTE,
  [5381] = 1,
    ACTIONS(1462), 1,
      aux_sym__string_token3,
  [5385] = 1,
    ACTIONS(1464), 1,
      sym_option,
  [5389] = 1,
    ACTIONS(1466), 1,
      anon_sym_SQUOTE,
  [5393] = 1,
    ACTIONS(1468), 1,
      sym_mime_type,
  [5397] = 1,
    ACTIONS(1466), 1,
      anon_sym_DQUOTE,
  [5401] = 1,
    ACTIONS(1466), 1,
      anon_sym_BQUOTE,
  [5405] = 1,
    ACTIONS(1460), 1,
      anon_sym_DQUOTE,
  [5409] = 1,
    ACTIONS(1470), 1,
      sym_function,
  [5413] = 1,
    ACTIONS(1472), 1,
      sym_mime_type,
  [5417] = 1,
    ACTIONS(1474), 1,
      sym_function,
  [5421] = 1,
    ACTIONS(1476), 1,
      aux_sym__string_token1,
  [5425] = 1,
    ACTIONS(1430), 1,
      sym__eol,
  [5429] = 1,
    ACTIONS(1478), 1,
      sym_option,
  [5433] = 1,
    ACTIONS(1480), 1,
      sym_int,
  [5437] = 1,
    ACTIONS(592), 1,
      sym_mime_type,
  [5441] = 1,
    ACTIONS(1482), 1,
      anon_sym_BQUOTE,
  [5445] = 1,
    ACTIONS(1484), 1,
      sym_option,
  [5449] = 1,
    ACTIONS(1486), 1,
      aux_sym__string_token3,
  [5453] = 1,
    ACTIONS(1488), 1,
      anon_sym_GT,
  [5457] = 1,
    ACTIONS(1490), 1,
      anon_sym_SQUOTE,
  [5461] = 1,
    ACTIONS(1490), 1,
      anon_sym_DQUOTE,
  [5465] = 1,
    ACTIONS(1490), 1,
      anon_sym_BQUOTE,
  [5469] = 1,
    ACTIONS(1492), 1,
      anon_sym_GT,
  [5473] = 1,
    ACTIONS(1494), 1,
      anon_sym_SQUOTE,
  [5477] = 1,
    ACTIONS(1494), 1,
      anon_sym_DQUOTE,
  [5481] = 1,
    ACTIONS(1496), 1,
      anon_sym_BQUOTE,
  [5485] = 1,
    ACTIONS(1498), 1,
      aux_sym__string_token2,
  [5489] = 1,
    ACTIONS(1500), 1,
      anon_sym_SQUOTE,
  [5493] = 1,
    ACTIONS(1500), 1,
      anon_sym_DQUOTE,
  [5497] = 1,
    ACTIONS(1500), 1,
      anon_sym_BQUOTE,
  [5501] = 1,
    ACTIONS(1502), 1,
      anon_sym_GT,
  [5505] = 1,
    ACTIONS(1504), 1,
      anon_sym_SQUOTE,
  [5509] = 1,
    ACTIONS(1504), 1,
      anon_sym_DQUOTE,
  [5513] = 1,
    ACTIONS(1506), 1,
      anon_sym_BQUOTE,
  [5517] = 1,
    ACTIONS(1478), 1,
      aux_sym_setenv_directive_token1,
  [5521] = 1,
    ACTIONS(1508), 1,
      anon_sym_SQUOTE,
  [5525] = 1,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
  [5529] = 1,
    ACTIONS(1508), 1,
      anon_sym_BQUOTE,
  [5533] = 1,
    ACTIONS(1510), 1,
      anon_sym_SQUOTE,
  [5537] = 1,
    ACTIONS(1510), 1,
      anon_sym_DQUOTE,
  [5541] = 1,
    ACTIONS(1512), 1,
      anon_sym_BQUOTE,
  [5545] = 1,
    ACTIONS(1514), 1,
      anon_sym_SQUOTE,
  [5549] = 1,
    ACTIONS(1516), 1,
      sym_option,
  [5553] = 1,
    ACTIONS(1514), 1,
      anon_sym_BQUOTE,
  [5557] = 1,
    ACTIONS(1518), 1,
      anon_sym_SQUOTE,
  [5561] = 1,
    ACTIONS(1518), 1,
      anon_sym_DQUOTE,
  [5565] = 1,
    ACTIONS(1518), 1,
      anon_sym_BQUOTE,
  [5569] = 1,
    ACTIONS(1520), 1,
      anon_sym_SQUOTE,
  [5573] = 1,
    ACTIONS(1520), 1,
      anon_sym_DQUOTE,
  [5577] = 1,
    ACTIONS(1520), 1,
      anon_sym_BQUOTE,
  [5581] = 1,
    ACTIONS(1522), 1,
      anon_sym_SQUOTE,
  [5585] = 1,
    ACTIONS(1522), 1,
      anon_sym_DQUOTE,
  [5589] = 1,
    ACTIONS(1522), 1,
      anon_sym_BQUOTE,
  [5593] = 1,
    ACTIONS(1524), 1,
      anon_sym_SQUOTE,
  [5597] = 1,
    ACTIONS(1524), 1,
      anon_sym_DQUOTE,
  [5601] = 1,
    ACTIONS(1524), 1,
      anon_sym_BQUOTE,
  [5605] = 1,
    ACTIONS(1526), 1,
      aux_sym__string_token1,
  [5609] = 1,
    ACTIONS(1528), 1,
      aux_sym__string_token2,
  [5613] = 1,
    ACTIONS(1530), 1,
      aux_sym__string_token3,
  [5617] = 1,
    ACTIONS(1532), 1,
      aux_sym_key_token1,
  [5621] = 1,
    ACTIONS(1534), 1,
      aux_sym__string_token1,
  [5625] = 1,
    ACTIONS(1536), 1,
      aux_sym__string_token2,
  [5629] = 1,
    ACTIONS(1538), 1,
      aux_sym__string_token3,
  [5633] = 1,
    ACTIONS(1540), 1,
      aux_sym__string_token1,
  [5637] = 1,
    ACTIONS(1542), 1,
      aux_sym__string_token2,
  [5641] = 1,
    ACTIONS(1544), 1,
      aux_sym__string_token3,
  [5645] = 1,
    ACTIONS(1546), 1,
      aux_sym_key_token1,
  [5649] = 1,
    ACTIONS(1548), 1,
      aux_sym__string_token1,
  [5653] = 1,
    ACTIONS(1550), 1,
      aux_sym__string_token2,
  [5657] = 1,
    ACTIONS(1552), 1,
      aux_sym__string_token3,
  [5661] = 1,
    ACTIONS(1554), 1,
      aux_sym__string_token1,
  [5665] = 1,
    ACTIONS(1556), 1,
      aux_sym__string_token2,
  [5669] = 1,
    ACTIONS(1558), 1,
      aux_sym__string_token3,
  [5673] = 1,
    ACTIONS(1560), 1,
      aux_sym__string_token1,
  [5677] = 1,
    ACTIONS(1562), 1,
      aux_sym__string_token2,
  [5681] = 1,
    ACTIONS(1564), 1,
      aux_sym__string_token3,
  [5685] = 1,
    ACTIONS(1566), 1,
      aux_sym__string_token1,
  [5689] = 1,
    ACTIONS(1568), 1,
      aux_sym__string_token2,
  [5693] = 1,
    ACTIONS(1570), 1,
      aux_sym__string_token3,
  [5697] = 1,
    ACTIONS(1572), 1,
      aux_sym__string_token1,
  [5701] = 1,
    ACTIONS(1574), 1,
      aux_sym__string_token2,
  [5705] = 1,
    ACTIONS(1576), 1,
      aux_sym__string_token3,
  [5709] = 1,
    ACTIONS(1578), 1,
      aux_sym__string_token1,
  [5713] = 1,
    ACTIONS(1580), 1,
      aux_sym__string_token2,
  [5717] = 1,
    ACTIONS(1582), 1,
      aux_sym__string_token3,
  [5721] = 1,
    ACTIONS(1584), 1,
      aux_sym__string_token1,
  [5725] = 1,
    ACTIONS(1586), 1,
      aux_sym__string_token2,
  [5729] = 1,
    ACTIONS(1588), 1,
      aux_sym__string_token3,
  [5733] = 1,
    ACTIONS(1590), 1,
      aux_sym__string_token1,
  [5737] = 1,
    ACTIONS(1592), 1,
      aux_sym__string_token2,
  [5741] = 1,
    ACTIONS(1594), 1,
      aux_sym__string_token3,
  [5745] = 1,
    ACTIONS(1514), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 61,
  [SMALL_STATE(28)] = 111,
  [SMALL_STATE(29)] = 144,
  [SMALL_STATE(30)] = 177,
  [SMALL_STATE(31)] = 204,
  [SMALL_STATE(32)] = 223,
  [SMALL_STATE(33)] = 242,
  [SMALL_STATE(34)] = 267,
  [SMALL_STATE(35)] = 292,
  [SMALL_STATE(36)] = 314,
  [SMALL_STATE(37)] = 336,
  [SMALL_STATE(38)] = 355,
  [SMALL_STATE(39)] = 375,
  [SMALL_STATE(40)] = 395,
  [SMALL_STATE(41)] = 415,
  [SMALL_STATE(42)] = 435,
  [SMALL_STATE(43)] = 455,
  [SMALL_STATE(44)] = 475,
  [SMALL_STATE(45)] = 495,
  [SMALL_STATE(46)] = 515,
  [SMALL_STATE(47)] = 535,
  [SMALL_STATE(48)] = 552,
  [SMALL_STATE(49)] = 583,
  [SMALL_STATE(50)] = 614,
  [SMALL_STATE(51)] = 631,
  [SMALL_STATE(52)] = 662,
  [SMALL_STATE(53)] = 693,
  [SMALL_STATE(54)] = 721,
  [SMALL_STATE(55)] = 735,
  [SMALL_STATE(56)] = 749,
  [SMALL_STATE(57)] = 777,
  [SMALL_STATE(58)] = 805,
  [SMALL_STATE(59)] = 833,
  [SMALL_STATE(60)] = 859,
  [SMALL_STATE(61)] = 887,
  [SMALL_STATE(62)] = 913,
  [SMALL_STATE(63)] = 938,
  [SMALL_STATE(64)] = 955,
  [SMALL_STATE(65)] = 978,
  [SMALL_STATE(66)] = 995,
  [SMALL_STATE(67)] = 1020,
  [SMALL_STATE(68)] = 1045,
  [SMALL_STATE(69)] = 1070,
  [SMALL_STATE(70)] = 1091,
  [SMALL_STATE(71)] = 1116,
  [SMALL_STATE(72)] = 1141,
  [SMALL_STATE(73)] = 1158,
  [SMALL_STATE(74)] = 1179,
  [SMALL_STATE(75)] = 1201,
  [SMALL_STATE(76)] = 1223,
  [SMALL_STATE(77)] = 1233,
  [SMALL_STATE(78)] = 1255,
  [SMALL_STATE(79)] = 1277,
  [SMALL_STATE(80)] = 1299,
  [SMALL_STATE(81)] = 1321,
  [SMALL_STATE(82)] = 1343,
  [SMALL_STATE(83)] = 1365,
  [SMALL_STATE(84)] = 1387,
  [SMALL_STATE(85)] = 1397,
  [SMALL_STATE(86)] = 1419,
  [SMALL_STATE(87)] = 1441,
  [SMALL_STATE(88)] = 1463,
  [SMALL_STATE(89)] = 1483,
  [SMALL_STATE(90)] = 1499,
  [SMALL_STATE(91)] = 1515,
  [SMALL_STATE(92)] = 1525,
  [SMALL_STATE(93)] = 1547,
  [SMALL_STATE(94)] = 1569,
  [SMALL_STATE(95)] = 1591,
  [SMALL_STATE(96)] = 1610,
  [SMALL_STATE(97)] = 1629,
  [SMALL_STATE(98)] = 1648,
  [SMALL_STATE(99)] = 1667,
  [SMALL_STATE(100)] = 1686,
  [SMALL_STATE(101)] = 1705,
  [SMALL_STATE(102)] = 1724,
  [SMALL_STATE(103)] = 1743,
  [SMALL_STATE(104)] = 1762,
  [SMALL_STATE(105)] = 1781,
  [SMALL_STATE(106)] = 1800,
  [SMALL_STATE(107)] = 1819,
  [SMALL_STATE(108)] = 1838,
  [SMALL_STATE(109)] = 1857,
  [SMALL_STATE(110)] = 1876,
  [SMALL_STATE(111)] = 1887,
  [SMALL_STATE(112)] = 1906,
  [SMALL_STATE(113)] = 1925,
  [SMALL_STATE(114)] = 1944,
  [SMALL_STATE(115)] = 1963,
  [SMALL_STATE(116)] = 1982,
  [SMALL_STATE(117)] = 2001,
  [SMALL_STATE(118)] = 2020,
  [SMALL_STATE(119)] = 2039,
  [SMALL_STATE(120)] = 2058,
  [SMALL_STATE(121)] = 2077,
  [SMALL_STATE(122)] = 2096,
  [SMALL_STATE(123)] = 2115,
  [SMALL_STATE(124)] = 2134,
  [SMALL_STATE(125)] = 2153,
  [SMALL_STATE(126)] = 2172,
  [SMALL_STATE(127)] = 2191,
  [SMALL_STATE(128)] = 2210,
  [SMALL_STATE(129)] = 2229,
  [SMALL_STATE(130)] = 2248,
  [SMALL_STATE(131)] = 2267,
  [SMALL_STATE(132)] = 2286,
  [SMALL_STATE(133)] = 2305,
  [SMALL_STATE(134)] = 2324,
  [SMALL_STATE(135)] = 2343,
  [SMALL_STATE(136)] = 2356,
  [SMALL_STATE(137)] = 2375,
  [SMALL_STATE(138)] = 2394,
  [SMALL_STATE(139)] = 2413,
  [SMALL_STATE(140)] = 2432,
  [SMALL_STATE(141)] = 2451,
  [SMALL_STATE(142)] = 2462,
  [SMALL_STATE(143)] = 2481,
  [SMALL_STATE(144)] = 2500,
  [SMALL_STATE(145)] = 2517,
  [SMALL_STATE(146)] = 2536,
  [SMALL_STATE(147)] = 2555,
  [SMALL_STATE(148)] = 2574,
  [SMALL_STATE(149)] = 2593,
  [SMALL_STATE(150)] = 2612,
  [SMALL_STATE(151)] = 2631,
  [SMALL_STATE(152)] = 2650,
  [SMALL_STATE(153)] = 2669,
  [SMALL_STATE(154)] = 2678,
  [SMALL_STATE(155)] = 2697,
  [SMALL_STATE(156)] = 2708,
  [SMALL_STATE(157)] = 2727,
  [SMALL_STATE(158)] = 2746,
  [SMALL_STATE(159)] = 2765,
  [SMALL_STATE(160)] = 2784,
  [SMALL_STATE(161)] = 2803,
  [SMALL_STATE(162)] = 2815,
  [SMALL_STATE(163)] = 2827,
  [SMALL_STATE(164)] = 2843,
  [SMALL_STATE(165)] = 2859,
  [SMALL_STATE(166)] = 2871,
  [SMALL_STATE(167)] = 2887,
  [SMALL_STATE(168)] = 2899,
  [SMALL_STATE(169)] = 2915,
  [SMALL_STATE(170)] = 2927,
  [SMALL_STATE(171)] = 2939,
  [SMALL_STATE(172)] = 2955,
  [SMALL_STATE(173)] = 2967,
  [SMALL_STATE(174)] = 2979,
  [SMALL_STATE(175)] = 2991,
  [SMALL_STATE(176)] = 3003,
  [SMALL_STATE(177)] = 3019,
  [SMALL_STATE(178)] = 3031,
  [SMALL_STATE(179)] = 3047,
  [SMALL_STATE(180)] = 3063,
  [SMALL_STATE(181)] = 3075,
  [SMALL_STATE(182)] = 3087,
  [SMALL_STATE(183)] = 3103,
  [SMALL_STATE(184)] = 3119,
  [SMALL_STATE(185)] = 3135,
  [SMALL_STATE(186)] = 3147,
  [SMALL_STATE(187)] = 3159,
  [SMALL_STATE(188)] = 3171,
  [SMALL_STATE(189)] = 3187,
  [SMALL_STATE(190)] = 3199,
  [SMALL_STATE(191)] = 3211,
  [SMALL_STATE(192)] = 3219,
  [SMALL_STATE(193)] = 3235,
  [SMALL_STATE(194)] = 3243,
  [SMALL_STATE(195)] = 3257,
  [SMALL_STATE(196)] = 3269,
  [SMALL_STATE(197)] = 3285,
  [SMALL_STATE(198)] = 3301,
  [SMALL_STATE(199)] = 3317,
  [SMALL_STATE(200)] = 3329,
  [SMALL_STATE(201)] = 3341,
  [SMALL_STATE(202)] = 3353,
  [SMALL_STATE(203)] = 3365,
  [SMALL_STATE(204)] = 3381,
  [SMALL_STATE(205)] = 3393,
  [SMALL_STATE(206)] = 3405,
  [SMALL_STATE(207)] = 3417,
  [SMALL_STATE(208)] = 3429,
  [SMALL_STATE(209)] = 3441,
  [SMALL_STATE(210)] = 3455,
  [SMALL_STATE(211)] = 3467,
  [SMALL_STATE(212)] = 3479,
  [SMALL_STATE(213)] = 3491,
  [SMALL_STATE(214)] = 3503,
  [SMALL_STATE(215)] = 3517,
  [SMALL_STATE(216)] = 3527,
  [SMALL_STATE(217)] = 3539,
  [SMALL_STATE(218)] = 3551,
  [SMALL_STATE(219)] = 3563,
  [SMALL_STATE(220)] = 3575,
  [SMALL_STATE(221)] = 3587,
  [SMALL_STATE(222)] = 3599,
  [SMALL_STATE(223)] = 3611,
  [SMALL_STATE(224)] = 3623,
  [SMALL_STATE(225)] = 3635,
  [SMALL_STATE(226)] = 3647,
  [SMALL_STATE(227)] = 3659,
  [SMALL_STATE(228)] = 3671,
  [SMALL_STATE(229)] = 3683,
  [SMALL_STATE(230)] = 3695,
  [SMALL_STATE(231)] = 3707,
  [SMALL_STATE(232)] = 3719,
  [SMALL_STATE(233)] = 3733,
  [SMALL_STATE(234)] = 3745,
  [SMALL_STATE(235)] = 3759,
  [SMALL_STATE(236)] = 3775,
  [SMALL_STATE(237)] = 3789,
  [SMALL_STATE(238)] = 3801,
  [SMALL_STATE(239)] = 3813,
  [SMALL_STATE(240)] = 3827,
  [SMALL_STATE(241)] = 3839,
  [SMALL_STATE(242)] = 3853,
  [SMALL_STATE(243)] = 3865,
  [SMALL_STATE(244)] = 3877,
  [SMALL_STATE(245)] = 3885,
  [SMALL_STATE(246)] = 3893,
  [SMALL_STATE(247)] = 3901,
  [SMALL_STATE(248)] = 3909,
  [SMALL_STATE(249)] = 3917,
  [SMALL_STATE(250)] = 3925,
  [SMALL_STATE(251)] = 3937,
  [SMALL_STATE(252)] = 3944,
  [SMALL_STATE(253)] = 3955,
  [SMALL_STATE(254)] = 3962,
  [SMALL_STATE(255)] = 3969,
  [SMALL_STATE(256)] = 3976,
  [SMALL_STATE(257)] = 3985,
  [SMALL_STATE(258)] = 3996,
  [SMALL_STATE(259)] = 4003,
  [SMALL_STATE(260)] = 4010,
  [SMALL_STATE(261)] = 4017,
  [SMALL_STATE(262)] = 4024,
  [SMALL_STATE(263)] = 4037,
  [SMALL_STATE(264)] = 4044,
  [SMALL_STATE(265)] = 4051,
  [SMALL_STATE(266)] = 4058,
  [SMALL_STATE(267)] = 4065,
  [SMALL_STATE(268)] = 4072,
  [SMALL_STATE(269)] = 4079,
  [SMALL_STATE(270)] = 4086,
  [SMALL_STATE(271)] = 4093,
  [SMALL_STATE(272)] = 4100,
  [SMALL_STATE(273)] = 4107,
  [SMALL_STATE(274)] = 4114,
  [SMALL_STATE(275)] = 4121,
  [SMALL_STATE(276)] = 4128,
  [SMALL_STATE(277)] = 4135,
  [SMALL_STATE(278)] = 4142,
  [SMALL_STATE(279)] = 4149,
  [SMALL_STATE(280)] = 4156,
  [SMALL_STATE(281)] = 4163,
  [SMALL_STATE(282)] = 4170,
  [SMALL_STATE(283)] = 4177,
  [SMALL_STATE(284)] = 4184,
  [SMALL_STATE(285)] = 4191,
  [SMALL_STATE(286)] = 4204,
  [SMALL_STATE(287)] = 4211,
  [SMALL_STATE(288)] = 4218,
  [SMALL_STATE(289)] = 4225,
  [SMALL_STATE(290)] = 4232,
  [SMALL_STATE(291)] = 4239,
  [SMALL_STATE(292)] = 4246,
  [SMALL_STATE(293)] = 4253,
  [SMALL_STATE(294)] = 4260,
  [SMALL_STATE(295)] = 4267,
  [SMALL_STATE(296)] = 4274,
  [SMALL_STATE(297)] = 4281,
  [SMALL_STATE(298)] = 4288,
  [SMALL_STATE(299)] = 4295,
  [SMALL_STATE(300)] = 4302,
  [SMALL_STATE(301)] = 4309,
  [SMALL_STATE(302)] = 4316,
  [SMALL_STATE(303)] = 4323,
  [SMALL_STATE(304)] = 4330,
  [SMALL_STATE(305)] = 4337,
  [SMALL_STATE(306)] = 4344,
  [SMALL_STATE(307)] = 4351,
  [SMALL_STATE(308)] = 4364,
  [SMALL_STATE(309)] = 4377,
  [SMALL_STATE(310)] = 4384,
  [SMALL_STATE(311)] = 4390,
  [SMALL_STATE(312)] = 4396,
  [SMALL_STATE(313)] = 4402,
  [SMALL_STATE(314)] = 4408,
  [SMALL_STATE(315)] = 4414,
  [SMALL_STATE(316)] = 4420,
  [SMALL_STATE(317)] = 4426,
  [SMALL_STATE(318)] = 4432,
  [SMALL_STATE(319)] = 4438,
  [SMALL_STATE(320)] = 4444,
  [SMALL_STATE(321)] = 4450,
  [SMALL_STATE(322)] = 4456,
  [SMALL_STATE(323)] = 4462,
  [SMALL_STATE(324)] = 4468,
  [SMALL_STATE(325)] = 4474,
  [SMALL_STATE(326)] = 4480,
  [SMALL_STATE(327)] = 4486,
  [SMALL_STATE(328)] = 4492,
  [SMALL_STATE(329)] = 4498,
  [SMALL_STATE(330)] = 4504,
  [SMALL_STATE(331)] = 4510,
  [SMALL_STATE(332)] = 4516,
  [SMALL_STATE(333)] = 4522,
  [SMALL_STATE(334)] = 4528,
  [SMALL_STATE(335)] = 4534,
  [SMALL_STATE(336)] = 4540,
  [SMALL_STATE(337)] = 4546,
  [SMALL_STATE(338)] = 4552,
  [SMALL_STATE(339)] = 4562,
  [SMALL_STATE(340)] = 4568,
  [SMALL_STATE(341)] = 4574,
  [SMALL_STATE(342)] = 4580,
  [SMALL_STATE(343)] = 4586,
  [SMALL_STATE(344)] = 4592,
  [SMALL_STATE(345)] = 4598,
  [SMALL_STATE(346)] = 4604,
  [SMALL_STATE(347)] = 4610,
  [SMALL_STATE(348)] = 4616,
  [SMALL_STATE(349)] = 4622,
  [SMALL_STATE(350)] = 4628,
  [SMALL_STATE(351)] = 4634,
  [SMALL_STATE(352)] = 4640,
  [SMALL_STATE(353)] = 4646,
  [SMALL_STATE(354)] = 4652,
  [SMALL_STATE(355)] = 4658,
  [SMALL_STATE(356)] = 4664,
  [SMALL_STATE(357)] = 4670,
  [SMALL_STATE(358)] = 4676,
  [SMALL_STATE(359)] = 4682,
  [SMALL_STATE(360)] = 4692,
  [SMALL_STATE(361)] = 4698,
  [SMALL_STATE(362)] = 4704,
  [SMALL_STATE(363)] = 4710,
  [SMALL_STATE(364)] = 4716,
  [SMALL_STATE(365)] = 4722,
  [SMALL_STATE(366)] = 4728,
  [SMALL_STATE(367)] = 4734,
  [SMALL_STATE(368)] = 4740,
  [SMALL_STATE(369)] = 4746,
  [SMALL_STATE(370)] = 4752,
  [SMALL_STATE(371)] = 4760,
  [SMALL_STATE(372)] = 4766,
  [SMALL_STATE(373)] = 4772,
  [SMALL_STATE(374)] = 4778,
  [SMALL_STATE(375)] = 4784,
  [SMALL_STATE(376)] = 4790,
  [SMALL_STATE(377)] = 4800,
  [SMALL_STATE(378)] = 4806,
  [SMALL_STATE(379)] = 4812,
  [SMALL_STATE(380)] = 4818,
  [SMALL_STATE(381)] = 4824,
  [SMALL_STATE(382)] = 4830,
  [SMALL_STATE(383)] = 4836,
  [SMALL_STATE(384)] = 4842,
  [SMALL_STATE(385)] = 4848,
  [SMALL_STATE(386)] = 4858,
  [SMALL_STATE(387)] = 4864,
  [SMALL_STATE(388)] = 4870,
  [SMALL_STATE(389)] = 4876,
  [SMALL_STATE(390)] = 4882,
  [SMALL_STATE(391)] = 4888,
  [SMALL_STATE(392)] = 4894,
  [SMALL_STATE(393)] = 4900,
  [SMALL_STATE(394)] = 4906,
  [SMALL_STATE(395)] = 4912,
  [SMALL_STATE(396)] = 4918,
  [SMALL_STATE(397)] = 4924,
  [SMALL_STATE(398)] = 4930,
  [SMALL_STATE(399)] = 4936,
  [SMALL_STATE(400)] = 4942,
  [SMALL_STATE(401)] = 4948,
  [SMALL_STATE(402)] = 4954,
  [SMALL_STATE(403)] = 4960,
  [SMALL_STATE(404)] = 4966,
  [SMALL_STATE(405)] = 4972,
  [SMALL_STATE(406)] = 4978,
  [SMALL_STATE(407)] = 4984,
  [SMALL_STATE(408)] = 4990,
  [SMALL_STATE(409)] = 4996,
  [SMALL_STATE(410)] = 5002,
  [SMALL_STATE(411)] = 5008,
  [SMALL_STATE(412)] = 5014,
  [SMALL_STATE(413)] = 5020,
  [SMALL_STATE(414)] = 5026,
  [SMALL_STATE(415)] = 5032,
  [SMALL_STATE(416)] = 5038,
  [SMALL_STATE(417)] = 5044,
  [SMALL_STATE(418)] = 5050,
  [SMALL_STATE(419)] = 5056,
  [SMALL_STATE(420)] = 5062,
  [SMALL_STATE(421)] = 5068,
  [SMALL_STATE(422)] = 5074,
  [SMALL_STATE(423)] = 5080,
  [SMALL_STATE(424)] = 5086,
  [SMALL_STATE(425)] = 5092,
  [SMALL_STATE(426)] = 5098,
  [SMALL_STATE(427)] = 5104,
  [SMALL_STATE(428)] = 5110,
  [SMALL_STATE(429)] = 5116,
  [SMALL_STATE(430)] = 5122,
  [SMALL_STATE(431)] = 5128,
  [SMALL_STATE(432)] = 5134,
  [SMALL_STATE(433)] = 5140,
  [SMALL_STATE(434)] = 5146,
  [SMALL_STATE(435)] = 5152,
  [SMALL_STATE(436)] = 5158,
  [SMALL_STATE(437)] = 5164,
  [SMALL_STATE(438)] = 5170,
  [SMALL_STATE(439)] = 5176,
  [SMALL_STATE(440)] = 5182,
  [SMALL_STATE(441)] = 5188,
  [SMALL_STATE(442)] = 5194,
  [SMALL_STATE(443)] = 5200,
  [SMALL_STATE(444)] = 5206,
  [SMALL_STATE(445)] = 5212,
  [SMALL_STATE(446)] = 5218,
  [SMALL_STATE(447)] = 5224,
  [SMALL_STATE(448)] = 5230,
  [SMALL_STATE(449)] = 5236,
  [SMALL_STATE(450)] = 5243,
  [SMALL_STATE(451)] = 5250,
  [SMALL_STATE(452)] = 5257,
  [SMALL_STATE(453)] = 5264,
  [SMALL_STATE(454)] = 5271,
  [SMALL_STATE(455)] = 5278,
  [SMALL_STATE(456)] = 5285,
  [SMALL_STATE(457)] = 5292,
  [SMALL_STATE(458)] = 5299,
  [SMALL_STATE(459)] = 5306,
  [SMALL_STATE(460)] = 5313,
  [SMALL_STATE(461)] = 5320,
  [SMALL_STATE(462)] = 5327,
  [SMALL_STATE(463)] = 5334,
  [SMALL_STATE(464)] = 5341,
  [SMALL_STATE(465)] = 5345,
  [SMALL_STATE(466)] = 5349,
  [SMALL_STATE(467)] = 5353,
  [SMALL_STATE(468)] = 5357,
  [SMALL_STATE(469)] = 5361,
  [SMALL_STATE(470)] = 5365,
  [SMALL_STATE(471)] = 5369,
  [SMALL_STATE(472)] = 5373,
  [SMALL_STATE(473)] = 5377,
  [SMALL_STATE(474)] = 5381,
  [SMALL_STATE(475)] = 5385,
  [SMALL_STATE(476)] = 5389,
  [SMALL_STATE(477)] = 5393,
  [SMALL_STATE(478)] = 5397,
  [SMALL_STATE(479)] = 5401,
  [SMALL_STATE(480)] = 5405,
  [SMALL_STATE(481)] = 5409,
  [SMALL_STATE(482)] = 5413,
  [SMALL_STATE(483)] = 5417,
  [SMALL_STATE(484)] = 5421,
  [SMALL_STATE(485)] = 5425,
  [SMALL_STATE(486)] = 5429,
  [SMALL_STATE(487)] = 5433,
  [SMALL_STATE(488)] = 5437,
  [SMALL_STATE(489)] = 5441,
  [SMALL_STATE(490)] = 5445,
  [SMALL_STATE(491)] = 5449,
  [SMALL_STATE(492)] = 5453,
  [SMALL_STATE(493)] = 5457,
  [SMALL_STATE(494)] = 5461,
  [SMALL_STATE(495)] = 5465,
  [SMALL_STATE(496)] = 5469,
  [SMALL_STATE(497)] = 5473,
  [SMALL_STATE(498)] = 5477,
  [SMALL_STATE(499)] = 5481,
  [SMALL_STATE(500)] = 5485,
  [SMALL_STATE(501)] = 5489,
  [SMALL_STATE(502)] = 5493,
  [SMALL_STATE(503)] = 5497,
  [SMALL_STATE(504)] = 5501,
  [SMALL_STATE(505)] = 5505,
  [SMALL_STATE(506)] = 5509,
  [SMALL_STATE(507)] = 5513,
  [SMALL_STATE(508)] = 5517,
  [SMALL_STATE(509)] = 5521,
  [SMALL_STATE(510)] = 5525,
  [SMALL_STATE(511)] = 5529,
  [SMALL_STATE(512)] = 5533,
  [SMALL_STATE(513)] = 5537,
  [SMALL_STATE(514)] = 5541,
  [SMALL_STATE(515)] = 5545,
  [SMALL_STATE(516)] = 5549,
  [SMALL_STATE(517)] = 5553,
  [SMALL_STATE(518)] = 5557,
  [SMALL_STATE(519)] = 5561,
  [SMALL_STATE(520)] = 5565,
  [SMALL_STATE(521)] = 5569,
  [SMALL_STATE(522)] = 5573,
  [SMALL_STATE(523)] = 5577,
  [SMALL_STATE(524)] = 5581,
  [SMALL_STATE(525)] = 5585,
  [SMALL_STATE(526)] = 5589,
  [SMALL_STATE(527)] = 5593,
  [SMALL_STATE(528)] = 5597,
  [SMALL_STATE(529)] = 5601,
  [SMALL_STATE(530)] = 5605,
  [SMALL_STATE(531)] = 5609,
  [SMALL_STATE(532)] = 5613,
  [SMALL_STATE(533)] = 5617,
  [SMALL_STATE(534)] = 5621,
  [SMALL_STATE(535)] = 5625,
  [SMALL_STATE(536)] = 5629,
  [SMALL_STATE(537)] = 5633,
  [SMALL_STATE(538)] = 5637,
  [SMALL_STATE(539)] = 5641,
  [SMALL_STATE(540)] = 5645,
  [SMALL_STATE(541)] = 5649,
  [SMALL_STATE(542)] = 5653,
  [SMALL_STATE(543)] = 5657,
  [SMALL_STATE(544)] = 5661,
  [SMALL_STATE(545)] = 5665,
  [SMALL_STATE(546)] = 5669,
  [SMALL_STATE(547)] = 5673,
  [SMALL_STATE(548)] = 5677,
  [SMALL_STATE(549)] = 5681,
  [SMALL_STATE(550)] = 5685,
  [SMALL_STATE(551)] = 5689,
  [SMALL_STATE(552)] = 5693,
  [SMALL_STATE(553)] = 5697,
  [SMALL_STATE(554)] = 5701,
  [SMALL_STATE(555)] = 5705,
  [SMALL_STATE(556)] = 5709,
  [SMALL_STATE(557)] = 5713,
  [SMALL_STATE(558)] = 5717,
  [SMALL_STATE(559)] = 5721,
  [SMALL_STATE(560)] = 5725,
  [SMALL_STATE(561)] = 5729,
  [SMALL_STATE(562)] = 5733,
  [SMALL_STATE(563)] = 5737,
  [SMALL_STATE(564)] = 5741,
  [SMALL_STATE(565)] = 5745,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(376),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(475),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(485),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, 0, 9),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, 0, 9),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, 0, 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 3, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 3, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 3, 0, 10),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 3, 0, 10),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 3, 0, 9),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 3, 0, 9),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__regex, 1, 0, 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regex, 1, 0, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composeobject, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 1, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 2, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes_repeat1, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreground, 1, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 4, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 1, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 5, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 1, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 3, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [840] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [927] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mimes_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mimes_repeat1, 2, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__header_fields, 1, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functions, 2, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__headers, 2, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings, 2, 0, 8),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__headers, 1, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mailboxes, 2, 0, 0),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_mailboxes_directive, 3, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__header_fields, 2, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functions, 1, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 2, 0, 0),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__strings, 1, 0, 3),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__addresses, 2, 0, 0),
  [976] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, 0, 8), SHIFT_REPEAT(235),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, 0, 8),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mime_types, 2, 0, 0),
  [985] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__maps_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__maps_repeat1, 2, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1, 0, 3),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 1, 0, 0),
  [994] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__functions_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__functions_repeat1, 2, 0, 0),
  [999] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__headers_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__headers_repeat1, 2, 0, 0),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, 0, 8), SHIFT_REPEAT(168),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, 0, 8),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mailboxes_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mailboxes_repeat1, 2, 0, 0),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_mailboxes_directive, 4, 0, 0),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__header_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__header_fields_repeat1, 2, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options2, 3, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 3, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 3, 0, 7),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1033] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options_repeat1, 2, 0, 0),
  [1038] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__addresses_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__addresses_repeat1, 2, 0, 0),
  [1043] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mime_types_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mime_types_repeat1, 2, 0, 0),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regexes, 1, 0, 3),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime, 1, 0, 0),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mimes, 1, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__addresses, 1, 0, 0),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 2, 0, 0),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 4, 0, 0),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 4, 0, 12),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 4, 0, 16),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 5, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 5, 0, 15),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 5, 0, 18),
  [1079] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 2, 0, 8), SHIFT_REPEAT(470),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 2, 0, 8),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 6, 0, 17),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options3, 6, 0, 19),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__maps, 1, 0, 0),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__regexes, 2, 0, 8),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mimes, 2, 0, 0),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mime_types, 1, 0, 0),
  [1104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0), SHIFT_REPEAT(540),
  [1107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mailboxes, 1, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__maps, 2, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group, 2, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_name, 1, 0, 3),
  [1118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 2, 0, 0), SHIFT_REPEAT(370),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 2, 0, 0),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0),
  [1125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quadoption, 1, 0, 0),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime, 3, 0, 11),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1, 0, 0),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 1, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 4, 0, 0),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 4, 0, 12),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 5, 0, 0),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 5, 0, 15),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 6, 0, 0),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options3_repeat1, 6, 0, 17),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__strings_repeat1, 2, 0, 2),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, 0, 3),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset, 1, 0, 3),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__options2_repeat1, 3, 0, 0),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, 0, 3),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__regexes_repeat1, 2, 0, 2),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_field, 1, 0, 3),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_mailboxes_directive_repeat1, 3, 0, 0),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 3),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailbox, 1, 0, 3),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1, 0, 3),
  [1186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_directive, 4, 0, 4),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto_allow_directive, 2, 0, 0),
  [1190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmailto_allow_directive, 2, 0, 0),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_directive, 2, 0, 0),
  [1194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mbox_hook_directive, 3, 0, 6),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_hook_directive, 3, 0, 4),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1, 0, 3),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmono_directive, 3, 0, 0),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_hook_directive, 3, 0, 6),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_command, 1, 0, 3),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmailboxes_directive, 2, 0, 0),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append_hook_directive, 3, 0, 6),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reply_hook_directive, 3, 0, 4),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send_hook_directive, 3, 0, 4),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send2_hook_directive, 3, 0, 4),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spam_directive, 3, 0, 2),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 1, 0, 3),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectrx_directive, 3, 0, 2),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1, 0, 3),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cd_directive, 2, 0, 0),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directory, 1, 0, 3),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setenv_directive, 3, 0, 0),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_score_directive, 3, 0, 0),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mime_lookup_directive, 2, 0, 0),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmime_lookup_directive, 2, 0, 0),
  [1236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_my_hdr_directive, 2, 0, 2),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmy_hdr_directive, 2, 0, 0),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalias_directive, 2, 0, 0),
  [1242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_push_directive, 2, 0, 2),
  [1244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 4, 0, 0),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_directive, 2, 0, 0),
  [1248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 4, 0, 0),
  [1250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nospam_directive, 2, 0, 0),
  [1252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nospam_directive, 2, 0, 2),
  [1254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bind_directive, 4, 0, 0),
  [1256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finish_directive, 1, 0, 0),
  [1258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubjectrx_directive, 2, 0, 0),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubjectrx_directive, 2, 0, 2),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscribe_to_directive, 2, 0, 0),
  [1264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 1, 0, 3),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_from_directive, 2, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeout_hook_directive, 2, 0, 4),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_startup_hook_directive, 2, 0, 4),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_format_hook_directive, 4, 0, 12),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shutdown_hook_directive, 2, 0, 4),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hook_type, 1, 0, 0),
  [1278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folder_hook_directive, 4, 0, 13),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unhook_directive, 2, 0, 0),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 2, 0, 2),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_directive, 4, 0, 0),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1, 0, 3),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 2, 0, 0),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternates_directive, 2, 0, 2),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset_directive, 2, 0, 0),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reset_directive, 2, 0, 0),
  [1296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_toggle_directive, 2, 0, 0),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mbox_hook_directive, 4, 0, 14),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mono_directive, 4, 0, 12),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsetenv_directive, 2, 0, 0),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sidebar_pin_directive, 2, 0, 0),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sidebar_unpin_directive, 2, 0, 0),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unscore_directive, 2, 0, 0),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_directive, 2, 0, 5),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 2, 0, 0),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 2, 0, 2),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_hook_directive, 3, 0, 6),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 5, 0, 15),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_format_hook_directive, 5, 0, 15),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_directive, 3, 0, 4),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_directive, 2, 0, 2),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 2, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalias_directive, 3, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 6, 0, 0),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_directive, 6, 0, 17),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternates_directive, 3, 0, 7),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 2, 0, 2),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 3, 0, 0),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternates_directive, 3, 0, 7),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hdr_order_directive, 2, 0, 0),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative_order_directive, 2, 0, 0),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 3, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 3, 0, 0),
  [1352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unhdr_order_directive, 2, 0, 0),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unalternative_order_directive, 2, 0, 0),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbind_directive, 3, 0, 0),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_hook_directive, 3, 0, 4),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iconv_hook_directive, 3, 0, 4),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachments_directive, 2, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ignore_directive, 2, 0, 2),
  [1366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unignore_directive, 2, 0, 0),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unignore_directive, 2, 0, 2),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unattachments_directive, 2, 0, 0),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uncolor_directive, 3, 0, 0),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_crypt_hook_directive, 3, 0, 6),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyid, 1, 0, 3),
  [1378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auto_view_directive, 2, 0, 0),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fcc_save_hook_directive, 3, 0, 0),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fcc_hook_directive, 3, 0, 4),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_hook_directive, 3, 0, 4),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unauto_view_directive, 2, 0, 0),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folder_hook_directive, 3, 0, 6),
  [1390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rx_addr, 2, 0, 2),
  [1392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rx_addr, 2, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_directive, 3, 0, 7),
  [1396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 3, 0, 0),
  [1398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ungroup_directive, 3, 0, 7),
  [1400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailboxes_directive, 2, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifdef_directive, 3, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifndef_directive, 3, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 2, 0, 0),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_name, 1, 0, 3),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lists_directive, 3, 0, 7),
  [1412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlists_directive, 3, 0, 0),
  [1414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlists_directive, 3, 0, 7),
  [1416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscribe_directive, 3, 0, 7),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_directive, 3, 0, 0),
  [1420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsubscribe_directive, 3, 0, 7),
  [1422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmacro_directive, 3, 0, 0),
  [1424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_hook_directive, 3, 0, 6),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1448] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disposition, 1, 0, 3),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
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

TS_PUBLIC const TSLanguage *tree_sitter_muttrc(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
