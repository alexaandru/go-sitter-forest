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
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_comment = 3,
  anon_sym_flush = 4,
  anon_sym_ruleset = 5,
  anon_sym_define = 6,
  anon_sym_EQ = 7,
  anon_sym_table = 8,
  anon_sym_arp = 9,
  anon_sym_bridge = 10,
  anon_sym_inet = 11,
  anon_sym_ip = 12,
  anon_sym_ip6 = 13,
  anon_sym_netdev = 14,
  anon_sym_chain = 15,
  anon_sym_SEMI = 16,
  anon_sym_type = 17,
  anon_sym_filter = 18,
  anon_sym_nat = 19,
  anon_sym_route = 20,
  anon_sym_hook = 21,
  anon_sym_ingress = 22,
  anon_sym_prerouting = 23,
  anon_sym_input = 24,
  anon_sym_forward = 25,
  anon_sym_output = 26,
  anon_sym_postrouting = 27,
  anon_sym_egress = 28,
  anon_sym_priority = 29,
  anon_sym_raw = 30,
  anon_sym_srcnat = 31,
  anon_sym_dstnat = 32,
  anon_sym_policy = 33,
  anon_sym_accept = 34,
  anon_sym_drop = 35,
  anon_sym_reject = 36,
  anon_sym_jump = 37,
  anon_sym_goto = 38,
  anon_sym_return = 39,
  anon_sym_masquerade = 40,
  anon_sym_snat = 41,
  anon_sym_dnat = 42,
  anon_sym_iif = 43,
  anon_sym_oif = 44,
  anon_sym_iifname = 45,
  anon_sym_oifname = 46,
  anon_sym_meta = 47,
  anon_sym_ether = 48,
  anon_sym_saddr = 49,
  anon_sym_daddr = 50,
  anon_sym_protocol = 51,
  anon_sym_tcp = 52,
  anon_sym_udp = 53,
  anon_sym_icmp = 54,
  anon_sym_icmp6 = 55,
  anon_sym_esp = 56,
  anon_sym_exists = 57,
  anon_sym_COMMA = 58,
  aux_sym_identifier_token1 = 59,
  anon_sym_DOLLAR = 60,
  sym_string = 61,
  sym_number = 62,
  sym_ip_address = 63,
  sym_config_file = 64,
  sym__statement = 65,
  sym_block = 66,
  sym_flush_command = 67,
  sym_variable_definition = 68,
  sym_table_declaration = 69,
  sym_table_family = 70,
  sym_chain_declaration = 71,
  sym_chain_definition = 72,
  sym_chain_type = 73,
  sym_chain_type_value = 74,
  sym_chain_hook = 75,
  sym_chain_hook_value = 76,
  sym_chain_priority = 77,
  sym_chain_priority_value = 78,
  sym_chain_policy = 79,
  sym_default_policy = 80,
  sym_rule_definition = 81,
  sym_packet_criteria = 82,
  sym_rule_action = 83,
  sym__match = 84,
  sym_value = 85,
  sym_set = 86,
  sym_identifier = 87,
  sym_variable = 88,
  sym__varname = 89,
  sym__criteria_value = 90,
  aux_sym_config_file_repeat1 = 91,
  aux_sym_rule_definition_repeat1 = 92,
  aux_sym_packet_criteria_repeat1 = 93,
  aux_sym_set_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [anon_sym_flush] = "flush",
  [anon_sym_ruleset] = "ruleset",
  [anon_sym_define] = "define",
  [anon_sym_EQ] = "=",
  [anon_sym_table] = "table",
  [anon_sym_arp] = "arp",
  [anon_sym_bridge] = "bridge",
  [anon_sym_inet] = "inet",
  [anon_sym_ip] = "ip",
  [anon_sym_ip6] = "ip6",
  [anon_sym_netdev] = "netdev",
  [anon_sym_chain] = "chain",
  [anon_sym_SEMI] = ";",
  [anon_sym_type] = "type",
  [anon_sym_filter] = "filter",
  [anon_sym_nat] = "nat",
  [anon_sym_route] = "route",
  [anon_sym_hook] = "hook",
  [anon_sym_ingress] = "ingress",
  [anon_sym_prerouting] = "prerouting",
  [anon_sym_input] = "input",
  [anon_sym_forward] = "forward",
  [anon_sym_output] = "output",
  [anon_sym_postrouting] = "postrouting",
  [anon_sym_egress] = "egress",
  [anon_sym_priority] = "priority",
  [anon_sym_raw] = "raw",
  [anon_sym_srcnat] = "srcnat",
  [anon_sym_dstnat] = "dstnat",
  [anon_sym_policy] = "policy",
  [anon_sym_accept] = "accept",
  [anon_sym_drop] = "drop",
  [anon_sym_reject] = "reject",
  [anon_sym_jump] = "jump",
  [anon_sym_goto] = "goto",
  [anon_sym_return] = "return",
  [anon_sym_masquerade] = "masquerade",
  [anon_sym_snat] = "snat",
  [anon_sym_dnat] = "dnat",
  [anon_sym_iif] = "iif",
  [anon_sym_oif] = "oif",
  [anon_sym_iifname] = "iifname",
  [anon_sym_oifname] = "oifname",
  [anon_sym_meta] = "meta",
  [anon_sym_ether] = "ether",
  [anon_sym_saddr] = "saddr",
  [anon_sym_daddr] = "daddr",
  [anon_sym_protocol] = "protocol",
  [anon_sym_tcp] = "tcp",
  [anon_sym_udp] = "udp",
  [anon_sym_icmp] = "icmp",
  [anon_sym_icmp6] = "icmp6",
  [anon_sym_esp] = "esp",
  [anon_sym_exists] = "exists",
  [anon_sym_COMMA] = ",",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DOLLAR] = "$",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_ip_address] = "ip_address",
  [sym_config_file] = "config_file",
  [sym__statement] = "_statement",
  [sym_block] = "block",
  [sym_flush_command] = "flush_command",
  [sym_variable_definition] = "variable_definition",
  [sym_table_declaration] = "table_declaration",
  [sym_table_family] = "table_family",
  [sym_chain_declaration] = "chain_declaration",
  [sym_chain_definition] = "chain_definition",
  [sym_chain_type] = "chain_type",
  [sym_chain_type_value] = "chain_type_value",
  [sym_chain_hook] = "chain_hook",
  [sym_chain_hook_value] = "chain_hook_value",
  [sym_chain_priority] = "chain_priority",
  [sym_chain_priority_value] = "chain_priority_value",
  [sym_chain_policy] = "chain_policy",
  [sym_default_policy] = "default_policy",
  [sym_rule_definition] = "rule_definition",
  [sym_packet_criteria] = "packet_criteria",
  [sym_rule_action] = "rule_action",
  [sym__match] = "_match",
  [sym_value] = "value",
  [sym_set] = "set",
  [sym_identifier] = "identifier",
  [sym_variable] = "variable",
  [sym__varname] = "_varname",
  [sym__criteria_value] = "_criteria_value",
  [aux_sym_config_file_repeat1] = "config_file_repeat1",
  [aux_sym_rule_definition_repeat1] = "rule_definition_repeat1",
  [aux_sym_packet_criteria_repeat1] = "packet_criteria_repeat1",
  [aux_sym_set_repeat1] = "set_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [anon_sym_flush] = anon_sym_flush,
  [anon_sym_ruleset] = anon_sym_ruleset,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_arp] = anon_sym_arp,
  [anon_sym_bridge] = anon_sym_bridge,
  [anon_sym_inet] = anon_sym_inet,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_ip6] = anon_sym_ip6,
  [anon_sym_netdev] = anon_sym_netdev,
  [anon_sym_chain] = anon_sym_chain,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_route] = anon_sym_route,
  [anon_sym_hook] = anon_sym_hook,
  [anon_sym_ingress] = anon_sym_ingress,
  [anon_sym_prerouting] = anon_sym_prerouting,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_postrouting] = anon_sym_postrouting,
  [anon_sym_egress] = anon_sym_egress,
  [anon_sym_priority] = anon_sym_priority,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_srcnat] = anon_sym_srcnat,
  [anon_sym_dstnat] = anon_sym_dstnat,
  [anon_sym_policy] = anon_sym_policy,
  [anon_sym_accept] = anon_sym_accept,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_reject] = anon_sym_reject,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_masquerade] = anon_sym_masquerade,
  [anon_sym_snat] = anon_sym_snat,
  [anon_sym_dnat] = anon_sym_dnat,
  [anon_sym_iif] = anon_sym_iif,
  [anon_sym_oif] = anon_sym_oif,
  [anon_sym_iifname] = anon_sym_iifname,
  [anon_sym_oifname] = anon_sym_oifname,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_ether] = anon_sym_ether,
  [anon_sym_saddr] = anon_sym_saddr,
  [anon_sym_daddr] = anon_sym_daddr,
  [anon_sym_protocol] = anon_sym_protocol,
  [anon_sym_tcp] = anon_sym_tcp,
  [anon_sym_udp] = anon_sym_udp,
  [anon_sym_icmp] = anon_sym_icmp,
  [anon_sym_icmp6] = anon_sym_icmp6,
  [anon_sym_esp] = anon_sym_esp,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_ip_address] = sym_ip_address,
  [sym_config_file] = sym_config_file,
  [sym__statement] = sym__statement,
  [sym_block] = sym_block,
  [sym_flush_command] = sym_flush_command,
  [sym_variable_definition] = sym_variable_definition,
  [sym_table_declaration] = sym_table_declaration,
  [sym_table_family] = sym_table_family,
  [sym_chain_declaration] = sym_chain_declaration,
  [sym_chain_definition] = sym_chain_definition,
  [sym_chain_type] = sym_chain_type,
  [sym_chain_type_value] = sym_chain_type_value,
  [sym_chain_hook] = sym_chain_hook,
  [sym_chain_hook_value] = sym_chain_hook_value,
  [sym_chain_priority] = sym_chain_priority,
  [sym_chain_priority_value] = sym_chain_priority_value,
  [sym_chain_policy] = sym_chain_policy,
  [sym_default_policy] = sym_default_policy,
  [sym_rule_definition] = sym_rule_definition,
  [sym_packet_criteria] = sym_packet_criteria,
  [sym_rule_action] = sym_rule_action,
  [sym__match] = sym__match,
  [sym_value] = sym_value,
  [sym_set] = sym_set,
  [sym_identifier] = sym_identifier,
  [sym_variable] = sym_variable,
  [sym__varname] = sym__varname,
  [sym__criteria_value] = sym__criteria_value,
  [aux_sym_config_file_repeat1] = aux_sym_config_file_repeat1,
  [aux_sym_rule_definition_repeat1] = aux_sym_rule_definition_repeat1,
  [aux_sym_packet_criteria_repeat1] = aux_sym_packet_criteria_repeat1,
  [aux_sym_set_repeat1] = aux_sym_set_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_flush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bridge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netdev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ingress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prerouting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postrouting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_egress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srcnat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dstnat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_policy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_accept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_masquerade] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dnat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iifname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oifname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ether] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saddr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_daddr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protocol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_ip_address] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_flush_command] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_table_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_table_family] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_type] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_type_value] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_hook] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_hook_value] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_priority_value] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_default_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_packet_criteria] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_action] = {
    .visible = true,
    .named = true,
  },
  [sym__match] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__varname] = {
    .visible = false,
    .named = true,
  },
  [sym__criteria_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_packet_criteria_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_repeat1] = {
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
      if (eof) ADVANCE(217);
      ADVANCE_MAP(
        '"', 2,
        '#', 220,
        '$', 297,
        ',', 280,
        '-', 216,
        '2', 299,
        ';', 238,
        '=', 224,
        'a', 45,
        'b', 150,
        'c', 92,
        'd', 30,
        'e', 90,
        'f', 96,
        'g', 128,
        'h', 131,
        'i', 46,
        'j', 208,
        'm', 23,
        'n', 34,
        'o', 102,
        'p', 125,
        'r', 25,
        's', 43,
        't', 26,
        'u', 58,
        '{', 218,
        '}', 219,
        '0', 303,
        '1', 303,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '$', 297,
        '2', 5,
        'a', 149,
        'd', 29,
        'e', 171,
        'f', 95,
        'i', 47,
        'm', 72,
        'n', 33,
        'o', 101,
        'p', 163,
        'r', 129,
        's', 42,
        't', 50,
        'u', 58,
        '{', 218,
        '0', 8,
        '1', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '5') ADVANCE(6);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '5') ADVANCE(11);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '5') ADVANCE(16);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(312);
      if (lookahead == '2') ADVANCE(312);
      if (lookahead == '3') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(307);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(310);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'b') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'g') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(265);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(245);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(157);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 107:
      if (lookahead == 'j') ADVANCE(74);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 148:
      if (lookahead == 'q') ADVANCE(209);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 210:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 211:
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 212:
      if (lookahead == 'w') ADVANCE(36);
      END_STATE();
    case 213:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(251);
      END_STATE();
    case 215:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_flush);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_arp);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_arp);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_inet);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_inet);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '6') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '6') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_ip6);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_netdev);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_netdev);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_chain);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_hook);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_ingress);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_prerouting);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_postrouting);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_egress);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_srcnat);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_dstnat);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_policy);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_accept);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_masquerade);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_snat);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_dnat);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_iif);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_oif);
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_iifname);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_oifname);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_ether);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_saddr);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_daddr);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_protocol);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_icmp);
      if (lookahead == '6') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_icmp6);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_esp);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'v') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '5') ADVANCE(300);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_ip_address);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '5') ADVANCE(308);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(306);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ip_address);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ip_address);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(305);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ip_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 215},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 215},
  [44] = {.lex_state = 215},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 215},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 215},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_flush] = ACTIONS(1),
    [anon_sym_ruleset] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_arp] = ACTIONS(1),
    [anon_sym_bridge] = ACTIONS(1),
    [anon_sym_inet] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_ip6] = ACTIONS(1),
    [anon_sym_netdev] = ACTIONS(1),
    [anon_sym_chain] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [anon_sym_hook] = ACTIONS(1),
    [anon_sym_ingress] = ACTIONS(1),
    [anon_sym_prerouting] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_postrouting] = ACTIONS(1),
    [anon_sym_egress] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_srcnat] = ACTIONS(1),
    [anon_sym_dstnat] = ACTIONS(1),
    [anon_sym_policy] = ACTIONS(1),
    [anon_sym_accept] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_masquerade] = ACTIONS(1),
    [anon_sym_snat] = ACTIONS(1),
    [anon_sym_dnat] = ACTIONS(1),
    [anon_sym_iif] = ACTIONS(1),
    [anon_sym_oif] = ACTIONS(1),
    [anon_sym_iifname] = ACTIONS(1),
    [anon_sym_oifname] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_ether] = ACTIONS(1),
    [anon_sym_saddr] = ACTIONS(1),
    [anon_sym_daddr] = ACTIONS(1),
    [anon_sym_protocol] = ACTIONS(1),
    [anon_sym_tcp] = ACTIONS(1),
    [anon_sym_udp] = ACTIONS(1),
    [anon_sym_icmp] = ACTIONS(1),
    [anon_sym_icmp6] = ACTIONS(1),
    [anon_sym_esp] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_ip_address] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(62),
    [sym__statement] = STATE(5),
    [sym_flush_command] = STATE(5),
    [sym_variable_definition] = STATE(5),
    [sym_table_declaration] = STATE(5),
    [sym_chain_declaration] = STATE(5),
    [sym_chain_definition] = STATE(5),
    [sym_chain_type] = STATE(42),
    [sym_rule_definition] = STATE(5),
    [sym_packet_criteria] = STATE(21),
    [sym_rule_action] = STATE(8),
    [sym__match] = STATE(24),
    [aux_sym_config_file_repeat1] = STATE(5),
    [aux_sym_rule_definition_repeat1] = STATE(21),
    [aux_sym_packet_criteria_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_flush] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_arp] = ACTIONS(13),
    [anon_sym_inet] = ACTIONS(13),
    [anon_sym_ip] = ACTIONS(15),
    [anon_sym_ip6] = ACTIONS(13),
    [anon_sym_chain] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_accept] = ACTIONS(21),
    [anon_sym_drop] = ACTIONS(21),
    [anon_sym_reject] = ACTIONS(21),
    [anon_sym_jump] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_masquerade] = ACTIONS(21),
    [anon_sym_snat] = ACTIONS(21),
    [anon_sym_dnat] = ACTIONS(21),
    [anon_sym_iif] = ACTIONS(15),
    [anon_sym_oif] = ACTIONS(15),
    [anon_sym_iifname] = ACTIONS(13),
    [anon_sym_oifname] = ACTIONS(13),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_ether] = ACTIONS(13),
    [anon_sym_saddr] = ACTIONS(13),
    [anon_sym_daddr] = ACTIONS(13),
    [anon_sym_protocol] = ACTIONS(13),
    [anon_sym_tcp] = ACTIONS(13),
    [anon_sym_udp] = ACTIONS(13),
    [anon_sym_icmp] = ACTIONS(15),
    [anon_sym_icmp6] = ACTIONS(13),
    [anon_sym_esp] = ACTIONS(13),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_flush_command] = STATE(2),
    [sym_variable_definition] = STATE(2),
    [sym_table_declaration] = STATE(2),
    [sym_chain_declaration] = STATE(2),
    [sym_chain_definition] = STATE(2),
    [sym_chain_type] = STATE(42),
    [sym_rule_definition] = STATE(2),
    [sym_packet_criteria] = STATE(21),
    [sym_rule_action] = STATE(8),
    [sym__match] = STATE(24),
    [aux_sym_config_file_repeat1] = STATE(2),
    [aux_sym_rule_definition_repeat1] = STATE(21),
    [aux_sym_packet_criteria_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [anon_sym_flush] = ACTIONS(28),
    [anon_sym_define] = ACTIONS(31),
    [anon_sym_table] = ACTIONS(34),
    [anon_sym_arp] = ACTIONS(37),
    [anon_sym_inet] = ACTIONS(37),
    [anon_sym_ip] = ACTIONS(40),
    [anon_sym_ip6] = ACTIONS(37),
    [anon_sym_chain] = ACTIONS(43),
    [anon_sym_type] = ACTIONS(46),
    [anon_sym_accept] = ACTIONS(49),
    [anon_sym_drop] = ACTIONS(49),
    [anon_sym_reject] = ACTIONS(49),
    [anon_sym_jump] = ACTIONS(49),
    [anon_sym_goto] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(49),
    [anon_sym_masquerade] = ACTIONS(49),
    [anon_sym_snat] = ACTIONS(49),
    [anon_sym_dnat] = ACTIONS(49),
    [anon_sym_iif] = ACTIONS(40),
    [anon_sym_oif] = ACTIONS(40),
    [anon_sym_iifname] = ACTIONS(37),
    [anon_sym_oifname] = ACTIONS(37),
    [anon_sym_meta] = ACTIONS(37),
    [anon_sym_ether] = ACTIONS(37),
    [anon_sym_saddr] = ACTIONS(37),
    [anon_sym_daddr] = ACTIONS(37),
    [anon_sym_protocol] = ACTIONS(37),
    [anon_sym_tcp] = ACTIONS(37),
    [anon_sym_udp] = ACTIONS(37),
    [anon_sym_icmp] = ACTIONS(40),
    [anon_sym_icmp6] = ACTIONS(37),
    [anon_sym_esp] = ACTIONS(37),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym_flush_command] = STATE(4),
    [sym_variable_definition] = STATE(4),
    [sym_table_declaration] = STATE(4),
    [sym_chain_declaration] = STATE(4),
    [sym_chain_definition] = STATE(4),
    [sym_chain_type] = STATE(42),
    [sym_rule_definition] = STATE(4),
    [sym_packet_criteria] = STATE(21),
    [sym_rule_action] = STATE(8),
    [sym__match] = STATE(24),
    [aux_sym_config_file_repeat1] = STATE(4),
    [aux_sym_rule_definition_repeat1] = STATE(21),
    [aux_sym_packet_criteria_repeat1] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(54),
    [anon_sym_flush] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_arp] = ACTIONS(13),
    [anon_sym_inet] = ACTIONS(13),
    [anon_sym_ip] = ACTIONS(15),
    [anon_sym_ip6] = ACTIONS(13),
    [anon_sym_chain] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_accept] = ACTIONS(21),
    [anon_sym_drop] = ACTIONS(21),
    [anon_sym_reject] = ACTIONS(21),
    [anon_sym_jump] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_masquerade] = ACTIONS(21),
    [anon_sym_snat] = ACTIONS(21),
    [anon_sym_dnat] = ACTIONS(21),
    [anon_sym_iif] = ACTIONS(15),
    [anon_sym_oif] = ACTIONS(15),
    [anon_sym_iifname] = ACTIONS(13),
    [anon_sym_oifname] = ACTIONS(13),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_ether] = ACTIONS(13),
    [anon_sym_saddr] = ACTIONS(13),
    [anon_sym_daddr] = ACTIONS(13),
    [anon_sym_protocol] = ACTIONS(13),
    [anon_sym_tcp] = ACTIONS(13),
    [anon_sym_udp] = ACTIONS(13),
    [anon_sym_icmp] = ACTIONS(15),
    [anon_sym_icmp6] = ACTIONS(13),
    [anon_sym_esp] = ACTIONS(13),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym_flush_command] = STATE(2),
    [sym_variable_definition] = STATE(2),
    [sym_table_declaration] = STATE(2),
    [sym_chain_declaration] = STATE(2),
    [sym_chain_definition] = STATE(2),
    [sym_chain_type] = STATE(42),
    [sym_rule_definition] = STATE(2),
    [sym_packet_criteria] = STATE(21),
    [sym_rule_action] = STATE(8),
    [sym__match] = STATE(24),
    [aux_sym_config_file_repeat1] = STATE(2),
    [aux_sym_rule_definition_repeat1] = STATE(21),
    [aux_sym_packet_criteria_repeat1] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
    [anon_sym_flush] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_arp] = ACTIONS(13),
    [anon_sym_inet] = ACTIONS(13),
    [anon_sym_ip] = ACTIONS(15),
    [anon_sym_ip6] = ACTIONS(13),
    [anon_sym_chain] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_accept] = ACTIONS(21),
    [anon_sym_drop] = ACTIONS(21),
    [anon_sym_reject] = ACTIONS(21),
    [anon_sym_jump] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_masquerade] = ACTIONS(21),
    [anon_sym_snat] = ACTIONS(21),
    [anon_sym_dnat] = ACTIONS(21),
    [anon_sym_iif] = ACTIONS(15),
    [anon_sym_oif] = ACTIONS(15),
    [anon_sym_iifname] = ACTIONS(13),
    [anon_sym_oifname] = ACTIONS(13),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_ether] = ACTIONS(13),
    [anon_sym_saddr] = ACTIONS(13),
    [anon_sym_daddr] = ACTIONS(13),
    [anon_sym_protocol] = ACTIONS(13),
    [anon_sym_tcp] = ACTIONS(13),
    [anon_sym_udp] = ACTIONS(13),
    [anon_sym_icmp] = ACTIONS(15),
    [anon_sym_icmp6] = ACTIONS(13),
    [anon_sym_esp] = ACTIONS(13),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym_flush_command] = STATE(2),
    [sym_variable_definition] = STATE(2),
    [sym_table_declaration] = STATE(2),
    [sym_chain_declaration] = STATE(2),
    [sym_chain_definition] = STATE(2),
    [sym_chain_type] = STATE(42),
    [sym_rule_definition] = STATE(2),
    [sym_packet_criteria] = STATE(21),
    [sym_rule_action] = STATE(8),
    [sym__match] = STATE(24),
    [aux_sym_config_file_repeat1] = STATE(2),
    [aux_sym_rule_definition_repeat1] = STATE(21),
    [aux_sym_packet_criteria_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
    [anon_sym_flush] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_arp] = ACTIONS(13),
    [anon_sym_inet] = ACTIONS(13),
    [anon_sym_ip] = ACTIONS(15),
    [anon_sym_ip6] = ACTIONS(13),
    [anon_sym_chain] = ACTIONS(17),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_accept] = ACTIONS(21),
    [anon_sym_drop] = ACTIONS(21),
    [anon_sym_reject] = ACTIONS(21),
    [anon_sym_jump] = ACTIONS(21),
    [anon_sym_goto] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_masquerade] = ACTIONS(21),
    [anon_sym_snat] = ACTIONS(21),
    [anon_sym_dnat] = ACTIONS(21),
    [anon_sym_iif] = ACTIONS(15),
    [anon_sym_oif] = ACTIONS(15),
    [anon_sym_iifname] = ACTIONS(13),
    [anon_sym_oifname] = ACTIONS(13),
    [anon_sym_meta] = ACTIONS(13),
    [anon_sym_ether] = ACTIONS(13),
    [anon_sym_saddr] = ACTIONS(13),
    [anon_sym_daddr] = ACTIONS(13),
    [anon_sym_protocol] = ACTIONS(13),
    [anon_sym_tcp] = ACTIONS(13),
    [anon_sym_udp] = ACTIONS(13),
    [anon_sym_icmp] = ACTIONS(15),
    [anon_sym_icmp6] = ACTIONS(13),
    [anon_sym_esp] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(66), 1,
      anon_sym_policy,
    STATE(54), 1,
      sym_chain_policy,
    ACTIONS(64), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(62), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [46] = 2,
    ACTIONS(70), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(68), 32,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
      anon_sym_COMMA,
  [87] = 2,
    ACTIONS(74), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(72), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [127] = 2,
    ACTIONS(78), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(76), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [167] = 2,
    ACTIONS(82), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(80), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [207] = 2,
    ACTIONS(86), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(84), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [247] = 2,
    ACTIONS(90), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(88), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [287] = 2,
    ACTIONS(94), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(92), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [327] = 2,
    ACTIONS(98), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(96), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [367] = 2,
    ACTIONS(102), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(100), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [407] = 2,
    ACTIONS(106), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(104), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [447] = 2,
    ACTIONS(110), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(108), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [487] = 2,
    ACTIONS(114), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(112), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [527] = 2,
    ACTIONS(118), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(116), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [567] = 2,
    ACTIONS(122), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(120), 31,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_flush,
      anon_sym_define,
      anon_sym_table,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_chain,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [607] = 6,
    STATE(20), 1,
      sym_rule_action,
    STATE(22), 2,
      sym_packet_criteria,
      aux_sym_rule_definition_repeat1,
    STATE(24), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(15), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(21), 9,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
    ACTIONS(13), 15,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_type,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [653] = 5,
    STATE(22), 2,
      sym_packet_criteria,
      aux_sym_rule_definition_repeat1,
    STATE(24), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(127), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(130), 9,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
    ACTIONS(124), 15,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_type,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [696] = 2,
    ACTIONS(134), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(132), 26,
      anon_sym_RBRACE,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
      anon_sym_COMMA,
  [731] = 7,
    ACTIONS(140), 1,
      anon_sym_exists,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    ACTIONS(144), 2,
      sym_string,
      sym_ip_address,
    STATE(27), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    STATE(25), 3,
      sym_value,
      sym_variable,
      sym__criteria_value,
    ACTIONS(138), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(136), 15,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_type,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [774] = 2,
    ACTIONS(148), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(146), 24,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_type,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_reject,
      anon_sym_jump,
      anon_sym_goto,
      anon_sym_return,
      anon_sym_masquerade,
      anon_sym_snat,
      anon_sym_dnat,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [807] = 4,
    STATE(57), 1,
      sym_chain_type_value,
    ACTIONS(154), 3,
      anon_sym_filter,
      anon_sym_nat,
      anon_sym_route,
    ACTIONS(152), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(150), 19,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_type,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
      anon_sym_exists,
      anon_sym_DOLLAR,
      sym_string,
      sym_ip_address,
  [843] = 4,
    STATE(27), 2,
      sym__match,
      aux_sym_packet_criteria_repeat1,
    ACTIONS(159), 4,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
      anon_sym_icmp,
    ACTIONS(162), 4,
      anon_sym_exists,
      anon_sym_DOLLAR,
      sym_string,
      sym_ip_address,
    ACTIONS(156), 15,
      anon_sym_arp,
      anon_sym_inet,
      anon_sym_ip6,
      anon_sym_type,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_ether,
      anon_sym_saddr,
      anon_sym_daddr,
      anon_sym_protocol,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_icmp6,
      anon_sym_esp,
  [877] = 5,
    ACTIONS(166), 1,
      anon_sym_ip6,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    STATE(37), 1,
      sym_identifier,
    STATE(39), 1,
      sym_table_family,
    ACTIONS(164), 5,
      anon_sym_arp,
      anon_sym_bridge,
      anon_sym_inet,
      anon_sym_ip,
      anon_sym_netdev,
  [897] = 2,
    STATE(55), 1,
      sym_chain_hook_value,
    ACTIONS(170), 7,
      anon_sym_ingress,
      anon_sym_prerouting,
      anon_sym_input,
      anon_sym_forward,
      anon_sym_output,
      anon_sym_postrouting,
      anon_sym_egress,
  [910] = 5,
    ACTIONS(140), 1,
      anon_sym_exists,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      aux_sym_set_repeat1,
    ACTIONS(172), 2,
      sym_string,
      sym_ip_address,
    STATE(47), 3,
      sym_value,
      sym_variable,
      sym__criteria_value,
  [929] = 5,
    ACTIONS(140), 1,
      anon_sym_exists,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      aux_sym_set_repeat1,
    ACTIONS(174), 2,
      sym_string,
      sym_ip_address,
    STATE(45), 3,
      sym_value,
      sym_variable,
      sym__criteria_value,
  [948] = 5,
    ACTIONS(176), 1,
      anon_sym_exists,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      aux_sym_set_repeat1,
    ACTIONS(182), 2,
      sym_string,
      sym_ip_address,
    STATE(63), 3,
      sym_value,
      sym_variable,
      sym__criteria_value,
  [967] = 3,
    ACTIONS(187), 1,
      sym_number,
    STATE(53), 1,
      sym_chain_priority_value,
    ACTIONS(185), 4,
      anon_sym_filter,
      anon_sym_raw,
      anon_sym_srcnat,
      anon_sym_dstnat,
  [980] = 4,
    ACTIONS(140), 1,
      anon_sym_exists,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 2,
      sym_string,
      sym_ip_address,
    STATE(13), 2,
      sym_value,
      sym_set,
  [995] = 1,
    ACTIONS(193), 4,
      anon_sym_exists,
      anon_sym_DOLLAR,
      sym_string,
      sym_ip_address,
  [1002] = 2,
    STATE(60), 1,
      sym_default_policy,
    ACTIONS(195), 2,
      anon_sym_accept,
      anon_sym_drop,
  [1010] = 2,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [1017] = 2,
    ACTIONS(199), 1,
      anon_sym_priority,
    STATE(51), 1,
      sym_chain_priority,
  [1024] = 2,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
    STATE(41), 1,
      sym_identifier,
  [1031] = 1,
    ACTIONS(203), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [1036] = 2,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [1043] = 2,
    ACTIONS(205), 1,
      anon_sym_hook,
    STATE(38), 1,
      sym_chain_hook,
  [1050] = 2,
    ACTIONS(207), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym__varname,
  [1057] = 2,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
    STATE(46), 1,
      sym_identifier,
  [1064] = 2,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      anon_sym_COMMA,
  [1071] = 2,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [1078] = 2,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
  [1085] = 2,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
    STATE(49), 1,
      sym_identifier,
  [1092] = 1,
    ACTIONS(215), 1,
      anon_sym_EQ,
  [1096] = 1,
    ACTIONS(217), 1,
      anon_sym_priority,
  [1100] = 1,
    ACTIONS(219), 1,
      anon_sym_SEMI,
  [1104] = 1,
    ACTIONS(221), 1,
      anon_sym_SEMI,
  [1108] = 1,
    ACTIONS(223), 1,
      anon_sym_SEMI,
  [1112] = 1,
    ACTIONS(225), 1,
      anon_sym_SEMI,
  [1116] = 1,
    ACTIONS(227), 1,
      anon_sym_priority,
  [1120] = 1,
    ACTIONS(229), 1,
      anon_sym_ruleset,
  [1124] = 1,
    ACTIONS(231), 1,
      anon_sym_hook,
  [1128] = 1,
    ACTIONS(233), 1,
      anon_sym_hook,
  [1132] = 1,
    ACTIONS(235), 1,
      anon_sym_SEMI,
  [1136] = 1,
    ACTIONS(237), 1,
      anon_sym_SEMI,
  [1140] = 1,
    ACTIONS(239), 1,
      aux_sym_identifier_token1,
  [1144] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [1148] = 1,
    ACTIONS(211), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 46,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 247,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 327,
  [SMALL_STATE(15)] = 367,
  [SMALL_STATE(16)] = 407,
  [SMALL_STATE(17)] = 447,
  [SMALL_STATE(18)] = 487,
  [SMALL_STATE(19)] = 527,
  [SMALL_STATE(20)] = 567,
  [SMALL_STATE(21)] = 607,
  [SMALL_STATE(22)] = 653,
  [SMALL_STATE(23)] = 696,
  [SMALL_STATE(24)] = 731,
  [SMALL_STATE(25)] = 774,
  [SMALL_STATE(26)] = 807,
  [SMALL_STATE(27)] = 843,
  [SMALL_STATE(28)] = 877,
  [SMALL_STATE(29)] = 897,
  [SMALL_STATE(30)] = 910,
  [SMALL_STATE(31)] = 929,
  [SMALL_STATE(32)] = 948,
  [SMALL_STATE(33)] = 967,
  [SMALL_STATE(34)] = 980,
  [SMALL_STATE(35)] = 995,
  [SMALL_STATE(36)] = 1002,
  [SMALL_STATE(37)] = 1010,
  [SMALL_STATE(38)] = 1017,
  [SMALL_STATE(39)] = 1024,
  [SMALL_STATE(40)] = 1031,
  [SMALL_STATE(41)] = 1036,
  [SMALL_STATE(42)] = 1043,
  [SMALL_STATE(43)] = 1050,
  [SMALL_STATE(44)] = 1057,
  [SMALL_STATE(45)] = 1064,
  [SMALL_STATE(46)] = 1071,
  [SMALL_STATE(47)] = 1078,
  [SMALL_STATE(48)] = 1085,
  [SMALL_STATE(49)] = 1092,
  [SMALL_STATE(50)] = 1096,
  [SMALL_STATE(51)] = 1100,
  [SMALL_STATE(52)] = 1104,
  [SMALL_STATE(53)] = 1108,
  [SMALL_STATE(54)] = 1112,
  [SMALL_STATE(55)] = 1116,
  [SMALL_STATE(56)] = 1120,
  [SMALL_STATE(57)] = 1124,
  [SMALL_STATE(58)] = 1128,
  [SMALL_STATE(59)] = 1132,
  [SMALL_STATE(60)] = 1136,
  [SMALL_STATE(61)] = 1140,
  [SMALL_STATE(62)] = 1144,
  [SMALL_STATE(63)] = 1148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_definition, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chain_definition, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_definition, 6, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chain_definition, 6, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_declaration, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flush_command, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flush_command, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_declaration, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chain_declaration, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_action, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_action, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_declaration, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_declaration, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packet_criteria, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packet_criteria, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__match, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__match, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packet_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_packet_criteria_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packet_criteria_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_hook_value, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_priority_value, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_priority, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_hook, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_type, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_type_value, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_policy, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_policy, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_family, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_nftables(void) {
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
