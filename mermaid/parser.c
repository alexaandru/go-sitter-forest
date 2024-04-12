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
#define STATE_COUNT 987
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 372
#define ALIAS_COUNT 21
#define TOKEN_COUNT 172
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 29

enum ts_symbol_identifiers {
  anon_sym_PERCENT_PERCENT_LBRACE = 1,
  anon_sym_COLON = 2,
  anon_sym_RBRACE_PERCENT_PERCENT = 3,
  aux_sym_diagram_sequence_token1 = 4,
  aux_sym__sequence_participant_type_token1 = 5,
  aux_sym__sequence_participant_type_token2 = 6,
  aux_sym_sequence_stmt_participant_token1 = 7,
  aux_sym_sequence_stmt_actor_token1 = 8,
  aux_sym_sequence_stmt_autonumber_token1 = 9,
  aux_sym_sequence_stmt_activate_token1 = 10,
  aux_sym_sequence_stmt_deactivate_token1 = 11,
  aux_sym_sequence_stmt_note_token1 = 12,
  aux_sym_sequence_stmt_note_token2 = 13,
  anon_sym_COMMA = 14,
  aux_sym_sequence_stmt_links_token1 = 15,
  aux_sym_sequence_stmt_link_token1 = 16,
  aux_sym_sequence_stmt_properties_token1 = 17,
  aux_sym_sequence_stmt_details_token1 = 18,
  aux_sym_sequence_stmt_title_token1 = 19,
  aux_sym_sequence_stmt_loop_token1 = 20,
  aux_sym_sequence_stmt_loop_token2 = 21,
  aux_sym_sequence_stmt_rect_token1 = 22,
  aux_sym_sequence_stmt_opt_token1 = 23,
  aux_sym_sequence_stmt_alt_token1 = 24,
  aux_sym_sequence_stmt_alt_token2 = 25,
  aux_sym_sequence_stmt_par_token1 = 26,
  aux_sym_sequence_stmt_par_token2 = 27,
  aux_sym_diagram_class_token1 = 28,
  aux_sym_diagram_class_token2 = 29,
  anon_sym_TILDE = 30,
  aux_sym_class_generics_token1 = 31,
  anon_sym_class = 32,
  anon_sym_COLON_COLON_COLON = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_POUND = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_STAR = 41,
  anon_sym_DOLLAR = 42,
  anon_sym_LT_LT = 43,
  anon_sym_GT_GT = 44,
  aux_sym_diagram_state_token1 = 45,
  aux_sym_diagram_state_token2 = 46,
  aux_sym_state_stmt_simple_token1 = 47,
  aux_sym_diagram_gantt_token1 = 48,
  aux_sym_gantt_stmt_dateformat_token1 = 49,
  aux_sym_gantt_stmt_inclusiveenddates_token1 = 50,
  aux_sym_gantt_stmt_topaxis_token1 = 51,
  aux_sym_gantt_stmt_axisformat_token1 = 52,
  aux_sym_gantt_stmt_includes_token1 = 53,
  aux_sym_gantt_stmt_excludes_token1 = 54,
  aux_sym_gantt_stmt_todaymarker_token1 = 55,
  aux_sym_gantt_stmt_section_token1 = 56,
  aux_sym_diagram_pie_token1 = 57,
  aux_sym_diagram_flow_token1 = 58,
  anon_sym_SEMI = 59,
  aux_sym_flow_stmt_direction_token1 = 60,
  anon_sym_AMP = 61,
  anon_sym_PIPE = 62,
  anon_sym_LBRACK = 63,
  anon_sym_RBRACK = 64,
  anon_sym_LPAREN_LPAREN = 65,
  anon_sym_RPAREN_RPAREN = 66,
  anon_sym_LPAREN_DASH = 67,
  anon_sym_DASH_RPAREN = 68,
  anon_sym_LPAREN_LBRACK = 69,
  anon_sym_RBRACK_RPAREN = 70,
  anon_sym_LBRACK_LBRACK = 71,
  anon_sym_RBRACK_RBRACK = 72,
  anon_sym_LBRACK_PIPE = 73,
  anon_sym_PIPE_RBRACK = 74,
  anon_sym_LBRACK_LPAREN = 75,
  anon_sym_RPAREN_RBRACK = 76,
  anon_sym_LBRACE_LBRACE = 77,
  anon_sym_RBRACE_RBRACE = 78,
  anon_sym_GT = 79,
  anon_sym_LBRACK_SLASH = 80,
  anon_sym_BSLASH_RBRACK = 81,
  anon_sym_LBRACK_BSLASH = 82,
  anon_sym_SLASH_RBRACK = 83,
  anon_sym_subgraph = 84,
  anon_sym_end = 85,
  aux_sym_diagram_er_token1 = 86,
  aux_sym_diagram_mindmap_token1 = 87,
  aux_sym_mmap_markdown_token1 = 88,
  aux_sym_mmap_text_token1 = 89,
  aux_sym_mmap_class_token1 = 90,
  aux_sym_mmap_class_token2 = 91,
  aux_sym_mmap_icon_token1 = 92,
  aux_sym_mmap_icon_token2 = 93,
  sym__whitespace = 94,
  sym__newline = 95,
  sym_comment = 96,
  sym_md_start = 97,
  sym_md_end = 98,
  sym_type_directive = 99,
  sym_arg_directive = 100,
  aux_sym_direction_tb_token1 = 101,
  aux_sym_direction_bt_token1 = 102,
  aux_sym_direction_rl_token1 = 103,
  aux_sym_direction_lr_token1 = 104,
  aux_sym__sequence_rest_text_token1 = 105,
  sym__sequence_actor_word = 106,
  sym_solid_arrow = 107,
  sym_dotted_arrow = 108,
  sym_solid_open_arrow = 109,
  anon_sym_DASH_DASH_GT = 110,
  sym_solid_cross = 111,
  sym_dotted_cross = 112,
  sym_dotted_point = 113,
  aux_sym_note_placement_left_token1 = 114,
  aux_sym_note_placement_right_token1 = 115,
  sym__class_name = 116,
  sym__alpha_num_token = 117,
  sym__bquote_string = 118,
  sym__dquote_string = 119,
  sym_class_reltype_aggregation = 120,
  anon_sym_LT_PIPE = 121,
  anon_sym_PIPE_GT = 122,
  anon_sym_LT = 123,
  anon_sym_DASH_DASH = 124,
  anon_sym_DOT_DOT = 125,
  aux_sym_class_label_token1 = 126,
  anon_sym_LBRACK_STAR_RBRACK = 127,
  aux_sym_state_name_token1 = 128,
  aux_sym_state_hide_empty_description_token1 = 129,
  sym_state_id = 130,
  aux_sym_state_annotation_fork_token1 = 131,
  aux_sym_state_annotation_fork_token2 = 132,
  aux_sym_state_annotation_join_token1 = 133,
  aux_sym_state_annotation_join_token2 = 134,
  aux_sym_state_annotation_choice_token1 = 135,
  aux_sym_state_annotation_choice_token2 = 136,
  aux_sym_gantt_task_text_token1 = 137,
  sym_gantt_task_data = 138,
  aux_sym_pie_showdata_token1 = 139,
  sym_pie_title = 140,
  aux_sym_pie_label_token1 = 141,
  sym_pie_value = 142,
  aux_sym_flowchart_direction_lr_token1 = 143,
  aux_sym_flowchart_direction_lr_token2 = 144,
  aux_sym_flowchart_direction_rl_token1 = 145,
  aux_sym_flowchart_direction_tb_token1 = 146,
  aux_sym_flowchart_direction_tb_token2 = 147,
  anon_sym_v = 148,
  aux_sym_flowchart_direction_bt_token1 = 149,
  anon_sym_CARET = 150,
  aux_sym_flow_text_literal_token1 = 151,
  sym_flow_text_quoted = 152,
  aux_sym_flow_link_arrow_token1 = 153,
  aux_sym_flow_link_arrow_token2 = 154,
  aux_sym_flow_link_arrow_token3 = 155,
  aux_sym_flow_link_arrow_start_token1 = 156,
  aux_sym_flow_link_arrow_start_token2 = 157,
  aux_sym_flow_link_arrow_start_token3 = 158,
  sym__er_alphanum = 159,
  anon_sym_PIPEo = 160,
  anon_sym_o_PIPE = 161,
  anon_sym_RBRACEo = 162,
  anon_sym_o_LBRACE = 163,
  anon_sym_RBRACE_PIPE = 164,
  anon_sym_PIPE_LBRACE = 165,
  sym_er_cardinarity_only_one = 166,
  anon_sym_DOT_DASH = 167,
  anon_sym_DASH_DOT = 168,
  aux_sym_er_attribute_key_type_pk_token1 = 169,
  aux_sym_er_attribute_key_type_fk_token1 = 170,
  sym__mindmap_text = 171,
  sym_source_file = 172,
  sym_directive = 173,
  sym__direction = 174,
  sym_diagram_sequence = 175,
  sym__sequence_stmt = 176,
  sym__sequence_participant_type = 177,
  sym_sequence_stmt_participant = 178,
  sym_sequence_stmt_actor = 179,
  sym_sequence_actor = 180,
  sym_sequence_stmt_signal = 181,
  sym_sequence_signal_type = 182,
  sym_sequence_text = 183,
  sym_sequence_stmt_autonumber = 184,
  sym_sequence_stmt_activate = 185,
  sym_sequence_stmt_deactivate = 186,
  sym_sequence_stmt_note = 187,
  sym_sequence_stmt_links = 188,
  sym_sequence_stmt_link = 189,
  sym_sequence_stmt_properties = 190,
  sym_sequence_stmt_details = 191,
  sym_sequence_note_placement = 192,
  sym_sequence_stmt_title = 193,
  sym_sequence_stmt_loop = 194,
  sym_sequence_stmt_rect = 195,
  sym_sequence_stmt_opt = 196,
  aux_sym__sequence_subdocument = 197,
  sym_sequence_stmt_alt = 198,
  sym_sequence_stmt_par = 199,
  sym_diagram_class = 200,
  sym__class_stmt = 201,
  sym_class_stmt_relation = 202,
  sym_class_name = 203,
  sym_class_name_body = 204,
  sym_class_generics = 205,
  sym_class_relation = 206,
  sym__class_reltype = 207,
  sym__class_linetype = 208,
  sym_class_stmt_class = 209,
  sym_class_method_line = 210,
  sym_class_annotation_line = 211,
  sym_class_stmt_method = 212,
  sym_class_stmt_annotation = 213,
  sym_diagram_state = 214,
  sym__state_stmt = 215,
  sym_state_stmt_simple = 216,
  sym_state_stmt_arrow = 217,
  sym_state_stmt_composite = 218,
  sym_state_composite_body = 219,
  sym_state_stmt_annotation = 220,
  sym_state_alias = 221,
  sym_state_stmt_hide_empty_description = 222,
  sym__state_annotation = 223,
  sym_state_note = 224,
  sym_state_note_placement = 225,
  sym_diagram_gantt = 226,
  sym__gantt_stmt = 227,
  sym_gantt_stmt_dateformat = 228,
  sym_gantt_stmt_inclusiveenddates = 229,
  sym_gantt_stmt_topaxis = 230,
  sym_gantt_stmt_axisformat = 231,
  sym_gantt_stmt_includes = 232,
  sym_gantt_stmt_excludes = 233,
  sym_gantt_stmt_todaymarker = 234,
  sym_gantt_stmt_title = 235,
  sym_gantt_stmt_section = 236,
  sym_gantt_stmt_task = 237,
  sym_diagram_pie = 238,
  sym__pie_stmt = 239,
  sym_pie_stmt_title = 240,
  sym_pie_stmt_element = 241,
  sym_diagram_flow = 242,
  sym__flowchart_direction = 243,
  sym__flow_stmt = 244,
  sym_flow_stmt_direction = 245,
  sym_flow_stmt_vertice = 246,
  sym_flow_node = 247,
  sym__flow_link = 248,
  sym_flow_link_simplelink = 249,
  sym_flow_link_arrowtext = 250,
  sym_flow_link_middletext = 251,
  sym_flow_arrow_text = 252,
  sym_flow_vertex_id = 253,
  sym_flow_vertex = 254,
  sym__flow_vertex_kind = 255,
  sym_flow_vertex_square = 256,
  sym_flow_vertex_circle = 257,
  sym_flow_vertex_ellipse = 258,
  sym_flow_vertex_stadium = 259,
  sym_flow_vertex_subroutine = 260,
  sym_flow_vertex_rect = 261,
  sym_flow_vertex_cylinder = 262,
  sym_flow_vertex_round = 263,
  sym_flow_vertex_diamond = 264,
  sym_flow_vertex_hexagon = 265,
  sym_flow_vertex_odd = 266,
  sym_flow_vertex_trapezoid = 267,
  sym_flow_vertex_inv_trapezoid = 268,
  sym_flow_vertex_leanright = 269,
  sym_flow_vertex_leanleft = 270,
  sym__flow_text = 271,
  sym_flow_stmt_subgraph = 272,
  sym_flow_stmt_subgraph_inner = 273,
  sym_flow_vertex_text = 274,
  sym_diagram_er = 275,
  sym__er_stmt = 276,
  sym_er_stmt_entity = 277,
  sym_er_stmt_entity_relation = 278,
  sym_er_entity_name = 279,
  sym_er_relation = 280,
  sym__er_cardinarity = 281,
  sym__er_reltype = 282,
  sym_er_role = 283,
  sym_er_stmt_entity_block = 284,
  sym_er_stmt_entity_block_inner = 285,
  sym_er_attribute = 286,
  sym_er_attribute_type = 287,
  sym_er_attribute_name = 288,
  sym__er_attribute_key_type = 289,
  sym_er_attribute_comment = 290,
  sym_diagram_mindmap = 291,
  sym_mmap_node = 292,
  sym_mmap_node_id = 293,
  sym_mmap_markdown = 294,
  sym_mmap_text = 295,
  sym_mmap_node_content = 296,
  sym_mmap_node_square = 297,
  sym_mmap_node_rounded = 298,
  sym_mmap_node_circle = 299,
  sym_mmap_node_cloud = 300,
  sym_mmap_node_bang = 301,
  sym_mmap_node_hexagon = 302,
  sym_mmap_class = 303,
  sym_mmap_icon = 304,
  sym_direction_tb = 305,
  sym_direction_bt = 306,
  sym_direction_rl = 307,
  sym_direction_lr = 308,
  sym__sequence_rest_text = 309,
  sym_dotted_open_arrow = 310,
  sym_solid_point = 311,
  sym_sequence_signal_plus_sign = 312,
  sym_sequence_signal_minus_sign = 313,
  sym_note_placement_left = 314,
  sym_note_placement_right = 315,
  sym_class_reltype_extension = 316,
  sym_class_reltype_composition = 317,
  sym_class_reltype_dependency = 318,
  sym_class_linetype_solid = 319,
  sym_class_linetype_dotted = 320,
  sym_class_label = 321,
  sym_state_name = 322,
  sym_state_arrow = 323,
  sym_state_description = 324,
  sym_state_hide_empty_description = 325,
  sym_state_division = 326,
  sym_state_annotation_fork = 327,
  sym_state_annotation_join = 328,
  sym_state_annotation_choice = 329,
  sym_gantt_meta_format = 330,
  sym_gantt_task_text = 331,
  sym_pie_showdata = 332,
  sym_pie_label = 333,
  sym_flowchart_direction_lr = 334,
  sym_flowchart_direction_rl = 335,
  sym_flowchart_direction_tb = 336,
  sym_flowchart_direction_bt = 337,
  sym_flow_text_literal = 338,
  sym_flow_link_arrow = 339,
  sym_flow_link_arrow_start = 340,
  sym__er_word = 341,
  sym_er_cardinarity_zero_or_one = 342,
  sym_er_cardinarity_zero_or_more = 343,
  sym_er_cardinarity_one_or_more = 344,
  sym_er_reltype_non_identifying = 345,
  sym_er_reltype_identifying = 346,
  sym_er_attribute_key_type_pk = 347,
  sym_er_attribute_key_type_fk = 348,
  aux_sym_diagram_sequence_repeat1 = 349,
  aux_sym_diagram_sequence_repeat2 = 350,
  aux_sym_sequence_actor_repeat1 = 351,
  aux_sym_sequence_stmt_alt_repeat1 = 352,
  aux_sym_sequence_stmt_par_repeat1 = 353,
  aux_sym_diagram_class_repeat1 = 354,
  aux_sym_class_name_body_repeat1 = 355,
  aux_sym_class_stmt_class_repeat1 = 356,
  aux_sym_class_method_line_repeat1 = 357,
  aux_sym_diagram_state_repeat1 = 358,
  aux_sym_state_composite_body_repeat1 = 359,
  aux_sym_diagram_gantt_repeat1 = 360,
  aux_sym_diagram_pie_repeat1 = 361,
  aux_sym_diagram_flow_repeat1 = 362,
  aux_sym_flow_stmt_vertice_repeat1 = 363,
  aux_sym_flow_node_repeat1 = 364,
  aux_sym_flow_arrow_text_repeat1 = 365,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 366,
  aux_sym_diagram_er_repeat1 = 367,
  aux_sym_er_stmt_entity_block_inner_repeat1 = 368,
  aux_sym_diagram_mindmap_repeat1 = 369,
  aux_sym_gantt_task_text_repeat1 = 370,
  aux_sym_flow_text_literal_repeat1 = 371,
  alias_sym_annotation = 372,
  alias_sym_class_classifier_abstract = 373,
  alias_sym_class_style_name = 374,
  alias_sym_class_visibility_internal = 375,
  alias_sym_class_visibility_private = 376,
  alias_sym_class_visibility_public = 377,
  alias_sym_gantt_axis_format = 378,
  alias_sym_gantt_end_dates = 379,
  alias_sym_gantt_excludes = 380,
  alias_sym_gantt_includes = 381,
  alias_sym_gantt_section = 382,
  alias_sym_gantt_title = 383,
  alias_sym_gantt_today_marker = 384,
  alias_sym_gantt_top_axis = 385,
  alias_sym_note_content = 386,
  alias_sym_sequence_alias = 387,
  alias_sym_sequence_stmt_alt_branch = 388,
  alias_sym_sequence_stmt_loop_inner = 389,
  alias_sym_sequence_stmt_opt_inner = 390,
  alias_sym_sequence_stmt_rect_inner = 391,
  alias_sym_title = 392,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE_PERCENT_PERCENT] = "}%%",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym__sequence_participant_type_token1] = "participant",
  [aux_sym__sequence_participant_type_token2] = "actor",
  [aux_sym_sequence_stmt_participant_token1] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "sequence_actor",
  [aux_sym_sequence_stmt_autonumber_token1] = "autonumber",
  [aux_sym_sequence_stmt_activate_token1] = "activate",
  [aux_sym_sequence_stmt_deactivate_token1] = "deactivate",
  [aux_sym_sequence_stmt_note_token1] = "note ",
  [aux_sym_sequence_stmt_note_token2] = "over",
  [anon_sym_COMMA] = ",",
  [aux_sym_sequence_stmt_links_token1] = "links",
  [aux_sym_sequence_stmt_link_token1] = "link",
  [aux_sym_sequence_stmt_properties_token1] = "properties",
  [aux_sym_sequence_stmt_details_token1] = "details",
  [aux_sym_sequence_stmt_title_token1] = "title",
  [aux_sym_sequence_stmt_loop_token1] = "loop",
  [aux_sym_sequence_stmt_loop_token2] = "end",
  [aux_sym_sequence_stmt_rect_token1] = "rect",
  [aux_sym_sequence_stmt_opt_token1] = "opt",
  [aux_sym_sequence_stmt_alt_token1] = "alt",
  [aux_sym_sequence_stmt_alt_token2] = "else",
  [aux_sym_sequence_stmt_par_token1] = "par",
  [aux_sym_sequence_stmt_par_token2] = "and",
  [aux_sym_diagram_class_token1] = "classDiagram-v2",
  [aux_sym_diagram_class_token2] = "classDiagram",
  [anon_sym_TILDE] = "~",
  [aux_sym_class_generics_token1] = "class_name",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "class_visibility_protected",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_DOLLAR] = "class_classifier_static",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_diagram_state_token1] = "stateDiagram",
  [aux_sym_diagram_state_token2] = "stateDiagram-v2",
  [aux_sym_state_stmt_simple_token1] = "state ",
  [aux_sym_diagram_gantt_token1] = "gantt",
  [aux_sym_gantt_stmt_dateformat_token1] = "dateformat",
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = "inclusiveenddates",
  [aux_sym_gantt_stmt_topaxis_token1] = "topaxis",
  [aux_sym_gantt_stmt_axisformat_token1] = "axisformat",
  [aux_sym_gantt_stmt_includes_token1] = "includes",
  [aux_sym_gantt_stmt_excludes_token1] = "excludes",
  [aux_sym_gantt_stmt_todaymarker_token1] = "todaymarker",
  [aux_sym_gantt_stmt_section_token1] = "section",
  [aux_sym_diagram_pie_token1] = "pie",
  [aux_sym_diagram_flow_token1] = "flowchart",
  [anon_sym_SEMI] = ";",
  [aux_sym_flow_stmt_direction_token1] = "direction",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN_LPAREN] = "((",
  [anon_sym_RPAREN_RPAREN] = "))",
  [anon_sym_LPAREN_DASH] = "(-",
  [anon_sym_DASH_RPAREN] = "-)",
  [anon_sym_LPAREN_LBRACK] = "([",
  [anon_sym_RBRACK_RPAREN] = "])",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK_PIPE] = "[|",
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_LBRACK_LPAREN] = "[(",
  [anon_sym_RPAREN_RBRACK] = ")]",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK_SLASH] = "[/",
  [anon_sym_BSLASH_RBRACK] = "\\]",
  [anon_sym_LBRACK_BSLASH] = "[\\",
  [anon_sym_SLASH_RBRACK] = "/]",
  [anon_sym_subgraph] = "subgraph",
  [anon_sym_end] = "end",
  [aux_sym_diagram_er_token1] = "erdiagram",
  [aux_sym_diagram_mindmap_token1] = "diagram_mindmap_token1",
  [aux_sym_mmap_markdown_token1] = "md_text",
  [aux_sym_mmap_text_token1] = "mmap_text_token1",
  [aux_sym_mmap_class_token1] = "mmap_class_token1",
  [aux_sym_mmap_class_token2] = "mmap_class_token2",
  [aux_sym_mmap_icon_token1] = "mmap_icon_token1",
  [aux_sym_mmap_icon_token2] = "mmap_icon_token2",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym_md_start] = "md_start",
  [sym_md_end] = "md_end",
  [sym_type_directive] = "type_directive",
  [sym_arg_directive] = "arg_directive",
  [aux_sym_direction_tb_token1] = "direction tb",
  [aux_sym_direction_bt_token1] = "direction bt",
  [aux_sym_direction_rl_token1] = "direction rl",
  [aux_sym_direction_lr_token1] = "direction lr",
  [aux_sym__sequence_rest_text_token1] = "_sequence_rest_text_token1",
  [sym__sequence_actor_word] = "_sequence_actor_word",
  [sym_solid_arrow] = "solid_arrow",
  [sym_dotted_arrow] = "dotted_arrow",
  [sym_solid_open_arrow] = "solid_open_arrow",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_solid_cross] = "solid_cross",
  [sym_dotted_cross] = "dotted_cross",
  [sym_dotted_point] = "dotted_point",
  [aux_sym_note_placement_left_token1] = "left of",
  [aux_sym_note_placement_right_token1] = "right of",
  [sym__class_name] = "_class_name",
  [sym__alpha_num_token] = "_alpha_num_token",
  [sym__bquote_string] = "_bquote_string",
  [sym__dquote_string] = "cardinality",
  [sym_class_reltype_aggregation] = "class_reltype_aggregation",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_LT] = "<",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_class_label_token1] = "class_label_token1",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [aux_sym_state_name_token1] = "state_name_token1",
  [aux_sym_state_hide_empty_description_token1] = "hide empty description",
  [sym_state_id] = "state_id",
  [aux_sym_state_annotation_fork_token1] = "state_annotation_fork_token1",
  [aux_sym_state_annotation_fork_token2] = "state_annotation_fork_token2",
  [aux_sym_state_annotation_join_token1] = "state_annotation_join_token1",
  [aux_sym_state_annotation_join_token2] = "state_annotation_join_token2",
  [aux_sym_state_annotation_choice_token1] = "state_annotation_choice_token1",
  [aux_sym_state_annotation_choice_token2] = "state_annotation_choice_token2",
  [aux_sym_gantt_task_text_token1] = "gantt_task_text_token1",
  [sym_gantt_task_data] = "gantt_task_data",
  [aux_sym_pie_showdata_token1] = "showdata",
  [sym_pie_title] = "pie_title",
  [aux_sym_pie_label_token1] = "pie_label_token1",
  [sym_pie_value] = "pie_value",
  [aux_sym_flowchart_direction_lr_token1] = "lr",
  [aux_sym_flowchart_direction_lr_token2] = "br",
  [aux_sym_flowchart_direction_rl_token1] = "rl",
  [aux_sym_flowchart_direction_tb_token1] = "tb",
  [aux_sym_flowchart_direction_tb_token2] = "td",
  [anon_sym_v] = "v",
  [aux_sym_flowchart_direction_bt_token1] = "bt",
  [anon_sym_CARET] = "^",
  [aux_sym_flow_text_literal_token1] = "flow_text_literal_token1",
  [sym_flow_text_quoted] = "flow_text_quoted",
  [aux_sym_flow_link_arrow_token1] = "flow_link_arrow_token1",
  [aux_sym_flow_link_arrow_token2] = "flow_link_arrow_token2",
  [aux_sym_flow_link_arrow_token3] = "flow_link_arrow_token3",
  [aux_sym_flow_link_arrow_start_token1] = "flow_link_arrow_start_token1",
  [aux_sym_flow_link_arrow_start_token2] = "flow_link_arrow_start_token2",
  [aux_sym_flow_link_arrow_start_token3] = "flow_link_arrow_start_token3",
  [sym__er_alphanum] = "_er_alphanum",
  [anon_sym_PIPEo] = "|o",
  [anon_sym_o_PIPE] = "o|",
  [anon_sym_RBRACEo] = "}o",
  [anon_sym_o_LBRACE] = "o{",
  [anon_sym_RBRACE_PIPE] = "}|",
  [anon_sym_PIPE_LBRACE] = "|{",
  [sym_er_cardinarity_only_one] = "er_cardinarity_only_one",
  [anon_sym_DOT_DASH] = ".-",
  [anon_sym_DASH_DOT] = "-.",
  [aux_sym_er_attribute_key_type_pk_token1] = "pk",
  [aux_sym_er_attribute_key_type_fk_token1] = "fk",
  [sym__mindmap_text] = "_mindmap_text",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym__direction] = "_direction",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__sequence_stmt] = "_sequence_stmt",
  [sym__sequence_participant_type] = "_sequence_participant_type",
  [sym_sequence_stmt_participant] = "sequence_stmt_participant",
  [sym_sequence_stmt_actor] = "sequence_stmt_actor",
  [sym_sequence_actor] = "sequence_actor",
  [sym_sequence_stmt_signal] = "sequence_stmt_signal",
  [sym_sequence_signal_type] = "sequence_signal_type",
  [sym_sequence_text] = "sequence_text",
  [sym_sequence_stmt_autonumber] = "sequence_stmt_autonumber",
  [sym_sequence_stmt_activate] = "sequence_stmt_activate",
  [sym_sequence_stmt_deactivate] = "sequence_stmt_deactivate",
  [sym_sequence_stmt_note] = "sequence_stmt_note",
  [sym_sequence_stmt_links] = "sequence_stmt_links",
  [sym_sequence_stmt_link] = "sequence_stmt_link",
  [sym_sequence_stmt_properties] = "sequence_stmt_properties",
  [sym_sequence_stmt_details] = "sequence_stmt_details",
  [sym_sequence_note_placement] = "sequence_note_placement",
  [sym_sequence_stmt_title] = "sequence_stmt_title",
  [sym_sequence_stmt_loop] = "sequence_stmt_loop",
  [sym_sequence_stmt_rect] = "sequence_stmt_rect",
  [sym_sequence_stmt_opt] = "sequence_stmt_opt",
  [aux_sym__sequence_subdocument] = "_sequence_subdocument",
  [sym_sequence_stmt_alt] = "sequence_stmt_alt",
  [sym_sequence_stmt_par] = "sequence_stmt_par",
  [sym_diagram_class] = "diagram_class",
  [sym__class_stmt] = "_class_stmt",
  [sym_class_stmt_relation] = "class_stmt_relation",
  [sym_class_name] = "class_name",
  [sym_class_name_body] = "class_name_body",
  [sym_class_generics] = "class_generics",
  [sym_class_relation] = "class_relation",
  [sym__class_reltype] = "_class_reltype",
  [sym__class_linetype] = "_class_linetype",
  [sym_class_stmt_class] = "class_stmt_class",
  [sym_class_method_line] = "class_method_line",
  [sym_class_annotation_line] = "class_annotation_line",
  [sym_class_stmt_method] = "class_stmt_method",
  [sym_class_stmt_annotation] = "class_stmt_annotation",
  [sym_diagram_state] = "diagram_state",
  [sym__state_stmt] = "_state_stmt",
  [sym_state_stmt_simple] = "state_stmt_simple",
  [sym_state_stmt_arrow] = "state_stmt_arrow",
  [sym_state_stmt_composite] = "state_stmt_composite",
  [sym_state_composite_body] = "state_composite_body",
  [sym_state_stmt_annotation] = "state_stmt_annotation",
  [sym_state_alias] = "state_alias",
  [sym_state_stmt_hide_empty_description] = "state_stmt_hide_empty_description",
  [sym__state_annotation] = "_state_annotation",
  [sym_state_note] = "state_note",
  [sym_state_note_placement] = "state_note_placement",
  [sym_diagram_gantt] = "diagram_gantt",
  [sym__gantt_stmt] = "_gantt_stmt",
  [sym_gantt_stmt_dateformat] = "gantt_stmt_dateformat",
  [sym_gantt_stmt_inclusiveenddates] = "gantt_stmt_inclusiveenddates",
  [sym_gantt_stmt_topaxis] = "gantt_stmt_topaxis",
  [sym_gantt_stmt_axisformat] = "gantt_stmt_axisformat",
  [sym_gantt_stmt_includes] = "gantt_stmt_includes",
  [sym_gantt_stmt_excludes] = "gantt_stmt_excludes",
  [sym_gantt_stmt_todaymarker] = "gantt_stmt_todaymarker",
  [sym_gantt_stmt_title] = "gantt_stmt_title",
  [sym_gantt_stmt_section] = "gantt_stmt_section",
  [sym_gantt_stmt_task] = "gantt_stmt_task",
  [sym_diagram_pie] = "diagram_pie",
  [sym__pie_stmt] = "_pie_stmt",
  [sym_pie_stmt_title] = "pie_stmt_title",
  [sym_pie_stmt_element] = "pie_stmt_element",
  [sym_diagram_flow] = "diagram_flow",
  [sym__flowchart_direction] = "_flowchart_direction",
  [sym__flow_stmt] = "_flow_stmt",
  [sym_flow_stmt_direction] = "flow_stmt_direction",
  [sym_flow_stmt_vertice] = "flow_stmt_vertice",
  [sym_flow_node] = "flow_node",
  [sym__flow_link] = "_flow_link",
  [sym_flow_link_simplelink] = "flow_link_simplelink",
  [sym_flow_link_arrowtext] = "flow_link_arrowtext",
  [sym_flow_link_middletext] = "flow_link_middletext",
  [sym_flow_arrow_text] = "flow_arrow_text",
  [sym_flow_vertex_id] = "flow_vertex_id",
  [sym_flow_vertex] = "flow_vertex",
  [sym__flow_vertex_kind] = "_flow_vertex_kind",
  [sym_flow_vertex_square] = "flow_vertex_square",
  [sym_flow_vertex_circle] = "flow_vertex_circle",
  [sym_flow_vertex_ellipse] = "flow_vertex_ellipse",
  [sym_flow_vertex_stadium] = "flow_vertex_stadium",
  [sym_flow_vertex_subroutine] = "flow_vertex_subroutine",
  [sym_flow_vertex_rect] = "flow_vertex_rect",
  [sym_flow_vertex_cylinder] = "flow_vertex_cylinder",
  [sym_flow_vertex_round] = "flow_vertex_round",
  [sym_flow_vertex_diamond] = "flow_vertex_diamond",
  [sym_flow_vertex_hexagon] = "flow_vertex_hexagon",
  [sym_flow_vertex_odd] = "flow_vertex_odd",
  [sym_flow_vertex_trapezoid] = "flow_vertex_trapezoid",
  [sym_flow_vertex_inv_trapezoid] = "flow_vertex_inv_trapezoid",
  [sym_flow_vertex_leanright] = "flow_vertex_leanright",
  [sym_flow_vertex_leanleft] = "flow_vertex_leanleft",
  [sym__flow_text] = "_flow_text",
  [sym_flow_stmt_subgraph] = "flow_stmt_subgraph",
  [sym_flow_stmt_subgraph_inner] = "flow_stmt_subgraph_inner",
  [sym_flow_vertex_text] = "flow_vertex_text",
  [sym_diagram_er] = "diagram_er",
  [sym__er_stmt] = "_er_stmt",
  [sym_er_stmt_entity] = "er_stmt_entity",
  [sym_er_stmt_entity_relation] = "er_stmt_entity_relation",
  [sym_er_entity_name] = "er_entity_name",
  [sym_er_relation] = "er_relation",
  [sym__er_cardinarity] = "_er_cardinarity",
  [sym__er_reltype] = "_er_reltype",
  [sym_er_role] = "er_role",
  [sym_er_stmt_entity_block] = "er_stmt_entity_block",
  [sym_er_stmt_entity_block_inner] = "er_stmt_entity_block_inner",
  [sym_er_attribute] = "er_attribute",
  [sym_er_attribute_type] = "er_attribute_type",
  [sym_er_attribute_name] = "er_attribute_name",
  [sym__er_attribute_key_type] = "_er_attribute_key_type",
  [sym_er_attribute_comment] = "er_attribute_comment",
  [sym_diagram_mindmap] = "diagram_mindmap",
  [sym_mmap_node] = "mmap_node",
  [sym_mmap_node_id] = "mmap_node_id",
  [sym_mmap_markdown] = "mmap_markdown",
  [sym_mmap_text] = "mmap_text",
  [sym_mmap_node_content] = "mmap_node_content",
  [sym_mmap_node_square] = "mmap_node_square",
  [sym_mmap_node_rounded] = "mmap_node_rounded",
  [sym_mmap_node_circle] = "mmap_node_circle",
  [sym_mmap_node_cloud] = "mmap_node_cloud",
  [sym_mmap_node_bang] = "mmap_node_bang",
  [sym_mmap_node_hexagon] = "mmap_node_hexagon",
  [sym_mmap_class] = "mmap_class",
  [sym_mmap_icon] = "mmap_icon",
  [sym_direction_tb] = "direction_tb",
  [sym_direction_bt] = "direction_bt",
  [sym_direction_rl] = "direction_rl",
  [sym_direction_lr] = "direction_lr",
  [sym__sequence_rest_text] = "_sequence_rest_text",
  [sym_dotted_open_arrow] = "dotted_open_arrow",
  [sym_solid_point] = "solid_point",
  [sym_sequence_signal_plus_sign] = "sequence_signal_plus_sign",
  [sym_sequence_signal_minus_sign] = "sequence_signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_class_reltype_extension] = "class_reltype_extension",
  [sym_class_reltype_composition] = "class_reltype_composition",
  [sym_class_reltype_dependency] = "class_reltype_dependency",
  [sym_class_linetype_solid] = "class_linetype_solid",
  [sym_class_linetype_dotted] = "class_linetype_dotted",
  [sym_class_label] = "class_label",
  [sym_state_name] = "state_name",
  [sym_state_arrow] = "state_arrow",
  [sym_state_description] = "state_description",
  [sym_state_hide_empty_description] = "state_hide_empty_description",
  [sym_state_division] = "state_division",
  [sym_state_annotation_fork] = "state_annotation_fork",
  [sym_state_annotation_join] = "state_annotation_join",
  [sym_state_annotation_choice] = "state_annotation_choice",
  [sym_gantt_meta_format] = "gantt_date_format",
  [sym_gantt_task_text] = "gantt_task_text",
  [sym_pie_showdata] = "pie_showdata",
  [sym_pie_label] = "pie_label",
  [sym_flowchart_direction_lr] = "flowchart_direction_lr",
  [sym_flowchart_direction_rl] = "flowchart_direction_rl",
  [sym_flowchart_direction_tb] = "flowchart_direction_tb",
  [sym_flowchart_direction_bt] = "flowchart_direction_bt",
  [sym_flow_text_literal] = "flow_text_literal",
  [sym_flow_link_arrow] = "flow_link_arrow",
  [sym_flow_link_arrow_start] = "flow_link_arrow_start",
  [sym__er_word] = "_er_word",
  [sym_er_cardinarity_zero_or_one] = "er_cardinarity_zero_or_one",
  [sym_er_cardinarity_zero_or_more] = "er_cardinarity_zero_or_more",
  [sym_er_cardinarity_one_or_more] = "er_cardinarity_one_or_more",
  [sym_er_reltype_non_identifying] = "er_reltype_non_identifying",
  [sym_er_reltype_identifying] = "er_reltype_identifying",
  [sym_er_attribute_key_type_pk] = "er_attribute_key_type_pk",
  [sym_er_attribute_key_type_fk] = "er_attribute_key_type_fk",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_diagram_sequence_repeat2] = "diagram_sequence_repeat2",
  [aux_sym_sequence_actor_repeat1] = "sequence_actor_repeat1",
  [aux_sym_sequence_stmt_alt_repeat1] = "sequence_stmt_alt_repeat1",
  [aux_sym_sequence_stmt_par_repeat1] = "sequence_stmt_par_repeat1",
  [aux_sym_diagram_class_repeat1] = "diagram_class_repeat1",
  [aux_sym_class_name_body_repeat1] = "class_name_body_repeat1",
  [aux_sym_class_stmt_class_repeat1] = "class_stmt_class_repeat1",
  [aux_sym_class_method_line_repeat1] = "class_method_line_repeat1",
  [aux_sym_diagram_state_repeat1] = "diagram_state_repeat1",
  [aux_sym_state_composite_body_repeat1] = "state_composite_body_repeat1",
  [aux_sym_diagram_gantt_repeat1] = "diagram_gantt_repeat1",
  [aux_sym_diagram_pie_repeat1] = "diagram_pie_repeat1",
  [aux_sym_diagram_flow_repeat1] = "diagram_flow_repeat1",
  [aux_sym_flow_stmt_vertice_repeat1] = "flow_stmt_vertice_repeat1",
  [aux_sym_flow_node_repeat1] = "flow_node_repeat1",
  [aux_sym_flow_arrow_text_repeat1] = "flow_arrow_text_repeat1",
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = "flow_stmt_subgraph_inner_repeat1",
  [aux_sym_diagram_er_repeat1] = "diagram_er_repeat1",
  [aux_sym_er_stmt_entity_block_inner_repeat1] = "er_stmt_entity_block_inner_repeat1",
  [aux_sym_diagram_mindmap_repeat1] = "diagram_mindmap_repeat1",
  [aux_sym_gantt_task_text_repeat1] = "gantt_task_text_repeat1",
  [aux_sym_flow_text_literal_repeat1] = "flow_text_literal_repeat1",
  [alias_sym_annotation] = "annotation",
  [alias_sym_class_classifier_abstract] = "class_classifier_abstract",
  [alias_sym_class_style_name] = "class_style_name",
  [alias_sym_class_visibility_internal] = "class_visibility_internal",
  [alias_sym_class_visibility_private] = "class_visibility_private",
  [alias_sym_class_visibility_public] = "class_visibility_public",
  [alias_sym_gantt_axis_format] = "gantt_axis_format",
  [alias_sym_gantt_end_dates] = "gantt_end_dates",
  [alias_sym_gantt_excludes] = "gantt_excludes",
  [alias_sym_gantt_includes] = "gantt_includes",
  [alias_sym_gantt_section] = "gantt_section",
  [alias_sym_gantt_title] = "gantt_title",
  [alias_sym_gantt_today_marker] = "gantt_today_marker",
  [alias_sym_gantt_top_axis] = "gantt_top_axis",
  [alias_sym_note_content] = "note_content",
  [alias_sym_sequence_alias] = "sequence_alias",
  [alias_sym_sequence_stmt_alt_branch] = "sequence_stmt_alt_branch",
  [alias_sym_sequence_stmt_loop_inner] = "sequence_stmt_loop_inner",
  [alias_sym_sequence_stmt_opt_inner] = "sequence_stmt_opt_inner",
  [alias_sym_sequence_stmt_rect_inner] = "sequence_stmt_rect_inner",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT_LBRACE] = anon_sym_PERCENT_PERCENT_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE_PERCENT_PERCENT] = anon_sym_RBRACE_PERCENT_PERCENT,
  [aux_sym_diagram_sequence_token1] = aux_sym_diagram_sequence_token1,
  [aux_sym__sequence_participant_type_token1] = aux_sym__sequence_participant_type_token1,
  [aux_sym__sequence_participant_type_token2] = aux_sym__sequence_participant_type_token2,
  [aux_sym_sequence_stmt_participant_token1] = aux_sym_sequence_stmt_participant_token1,
  [aux_sym_sequence_stmt_actor_token1] = aux_sym_sequence_stmt_actor_token1,
  [aux_sym_sequence_stmt_autonumber_token1] = aux_sym_sequence_stmt_autonumber_token1,
  [aux_sym_sequence_stmt_activate_token1] = aux_sym_sequence_stmt_activate_token1,
  [aux_sym_sequence_stmt_deactivate_token1] = aux_sym_sequence_stmt_deactivate_token1,
  [aux_sym_sequence_stmt_note_token1] = aux_sym_sequence_stmt_note_token1,
  [aux_sym_sequence_stmt_note_token2] = aux_sym_sequence_stmt_note_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_sequence_stmt_links_token1] = aux_sym_sequence_stmt_links_token1,
  [aux_sym_sequence_stmt_link_token1] = aux_sym_sequence_stmt_link_token1,
  [aux_sym_sequence_stmt_properties_token1] = aux_sym_sequence_stmt_properties_token1,
  [aux_sym_sequence_stmt_details_token1] = aux_sym_sequence_stmt_details_token1,
  [aux_sym_sequence_stmt_title_token1] = aux_sym_sequence_stmt_title_token1,
  [aux_sym_sequence_stmt_loop_token1] = aux_sym_sequence_stmt_loop_token1,
  [aux_sym_sequence_stmt_loop_token2] = anon_sym_end,
  [aux_sym_sequence_stmt_rect_token1] = aux_sym_sequence_stmt_rect_token1,
  [aux_sym_sequence_stmt_opt_token1] = aux_sym_sequence_stmt_opt_token1,
  [aux_sym_sequence_stmt_alt_token1] = aux_sym_sequence_stmt_alt_token1,
  [aux_sym_sequence_stmt_alt_token2] = aux_sym_sequence_stmt_alt_token2,
  [aux_sym_sequence_stmt_par_token1] = aux_sym_sequence_stmt_par_token1,
  [aux_sym_sequence_stmt_par_token2] = aux_sym_sequence_stmt_par_token2,
  [aux_sym_diagram_class_token1] = aux_sym_diagram_class_token1,
  [aux_sym_diagram_class_token2] = aux_sym_diagram_class_token2,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_class_generics_token1] = sym_class_name,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON_COLON] = anon_sym_COLON_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_diagram_state_token1] = aux_sym_diagram_state_token1,
  [aux_sym_diagram_state_token2] = aux_sym_diagram_state_token2,
  [aux_sym_state_stmt_simple_token1] = aux_sym_state_stmt_simple_token1,
  [aux_sym_diagram_gantt_token1] = aux_sym_diagram_gantt_token1,
  [aux_sym_gantt_stmt_dateformat_token1] = aux_sym_gantt_stmt_dateformat_token1,
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = aux_sym_gantt_stmt_inclusiveenddates_token1,
  [aux_sym_gantt_stmt_topaxis_token1] = aux_sym_gantt_stmt_topaxis_token1,
  [aux_sym_gantt_stmt_axisformat_token1] = aux_sym_gantt_stmt_axisformat_token1,
  [aux_sym_gantt_stmt_includes_token1] = aux_sym_gantt_stmt_includes_token1,
  [aux_sym_gantt_stmt_excludes_token1] = aux_sym_gantt_stmt_excludes_token1,
  [aux_sym_gantt_stmt_todaymarker_token1] = aux_sym_gantt_stmt_todaymarker_token1,
  [aux_sym_gantt_stmt_section_token1] = aux_sym_gantt_stmt_section_token1,
  [aux_sym_diagram_pie_token1] = aux_sym_diagram_pie_token1,
  [aux_sym_diagram_flow_token1] = aux_sym_diagram_flow_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_flow_stmt_direction_token1] = aux_sym_flow_stmt_direction_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN,
  [anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN,
  [anon_sym_LPAREN_DASH] = anon_sym_LPAREN_DASH,
  [anon_sym_DASH_RPAREN] = anon_sym_DASH_RPAREN,
  [anon_sym_LPAREN_LBRACK] = anon_sym_LPAREN_LBRACK,
  [anon_sym_RBRACK_RPAREN] = anon_sym_RBRACK_RPAREN,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_LBRACK_LPAREN] = anon_sym_LBRACK_LPAREN,
  [anon_sym_RPAREN_RBRACK] = anon_sym_RPAREN_RBRACK,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK_SLASH] = anon_sym_LBRACK_SLASH,
  [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
  [anon_sym_LBRACK_BSLASH] = anon_sym_LBRACK_BSLASH,
  [anon_sym_SLASH_RBRACK] = anon_sym_SLASH_RBRACK,
  [anon_sym_subgraph] = anon_sym_subgraph,
  [anon_sym_end] = anon_sym_end,
  [aux_sym_diagram_er_token1] = aux_sym_diagram_er_token1,
  [aux_sym_diagram_mindmap_token1] = aux_sym_diagram_mindmap_token1,
  [aux_sym_mmap_markdown_token1] = aux_sym_mmap_markdown_token1,
  [aux_sym_mmap_text_token1] = aux_sym_mmap_text_token1,
  [aux_sym_mmap_class_token1] = aux_sym_mmap_class_token1,
  [aux_sym_mmap_class_token2] = aux_sym_mmap_class_token2,
  [aux_sym_mmap_icon_token1] = aux_sym_mmap_icon_token1,
  [aux_sym_mmap_icon_token2] = aux_sym_mmap_icon_token2,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym_md_start] = sym_md_start,
  [sym_md_end] = sym_md_end,
  [sym_type_directive] = sym_type_directive,
  [sym_arg_directive] = sym_arg_directive,
  [aux_sym_direction_tb_token1] = aux_sym_direction_tb_token1,
  [aux_sym_direction_bt_token1] = aux_sym_direction_bt_token1,
  [aux_sym_direction_rl_token1] = aux_sym_direction_rl_token1,
  [aux_sym_direction_lr_token1] = aux_sym_direction_lr_token1,
  [aux_sym__sequence_rest_text_token1] = aux_sym__sequence_rest_text_token1,
  [sym__sequence_actor_word] = sym__sequence_actor_word,
  [sym_solid_arrow] = sym_solid_arrow,
  [sym_dotted_arrow] = sym_dotted_arrow,
  [sym_solid_open_arrow] = sym_solid_open_arrow,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_solid_cross] = sym_solid_cross,
  [sym_dotted_cross] = sym_dotted_cross,
  [sym_dotted_point] = sym_dotted_point,
  [aux_sym_note_placement_left_token1] = aux_sym_note_placement_left_token1,
  [aux_sym_note_placement_right_token1] = aux_sym_note_placement_right_token1,
  [sym__class_name] = sym__class_name,
  [sym__alpha_num_token] = sym__alpha_num_token,
  [sym__bquote_string] = sym__bquote_string,
  [sym__dquote_string] = sym__dquote_string,
  [sym_class_reltype_aggregation] = sym_class_reltype_aggregation,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_class_label_token1] = aux_sym_class_label_token1,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [aux_sym_state_name_token1] = aux_sym_state_name_token1,
  [aux_sym_state_hide_empty_description_token1] = aux_sym_state_hide_empty_description_token1,
  [sym_state_id] = sym_state_id,
  [aux_sym_state_annotation_fork_token1] = aux_sym_state_annotation_fork_token1,
  [aux_sym_state_annotation_fork_token2] = aux_sym_state_annotation_fork_token2,
  [aux_sym_state_annotation_join_token1] = aux_sym_state_annotation_join_token1,
  [aux_sym_state_annotation_join_token2] = aux_sym_state_annotation_join_token2,
  [aux_sym_state_annotation_choice_token1] = aux_sym_state_annotation_choice_token1,
  [aux_sym_state_annotation_choice_token2] = aux_sym_state_annotation_choice_token2,
  [aux_sym_gantt_task_text_token1] = aux_sym_gantt_task_text_token1,
  [sym_gantt_task_data] = sym_gantt_task_data,
  [aux_sym_pie_showdata_token1] = aux_sym_pie_showdata_token1,
  [sym_pie_title] = sym_pie_title,
  [aux_sym_pie_label_token1] = aux_sym_pie_label_token1,
  [sym_pie_value] = sym_pie_value,
  [aux_sym_flowchart_direction_lr_token1] = aux_sym_flowchart_direction_lr_token1,
  [aux_sym_flowchart_direction_lr_token2] = aux_sym_flowchart_direction_lr_token2,
  [aux_sym_flowchart_direction_rl_token1] = aux_sym_flowchart_direction_rl_token1,
  [aux_sym_flowchart_direction_tb_token1] = aux_sym_flowchart_direction_tb_token1,
  [aux_sym_flowchart_direction_tb_token2] = aux_sym_flowchart_direction_tb_token2,
  [anon_sym_v] = anon_sym_v,
  [aux_sym_flowchart_direction_bt_token1] = aux_sym_flowchart_direction_bt_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_flow_text_literal_token1] = aux_sym_flow_text_literal_token1,
  [sym_flow_text_quoted] = sym_flow_text_quoted,
  [aux_sym_flow_link_arrow_token1] = aux_sym_flow_link_arrow_token1,
  [aux_sym_flow_link_arrow_token2] = aux_sym_flow_link_arrow_token2,
  [aux_sym_flow_link_arrow_token3] = aux_sym_flow_link_arrow_token3,
  [aux_sym_flow_link_arrow_start_token1] = aux_sym_flow_link_arrow_start_token1,
  [aux_sym_flow_link_arrow_start_token2] = aux_sym_flow_link_arrow_start_token2,
  [aux_sym_flow_link_arrow_start_token3] = aux_sym_flow_link_arrow_start_token3,
  [sym__er_alphanum] = sym__er_alphanum,
  [anon_sym_PIPEo] = anon_sym_PIPEo,
  [anon_sym_o_PIPE] = anon_sym_o_PIPE,
  [anon_sym_RBRACEo] = anon_sym_RBRACEo,
  [anon_sym_o_LBRACE] = anon_sym_o_LBRACE,
  [anon_sym_RBRACE_PIPE] = anon_sym_RBRACE_PIPE,
  [anon_sym_PIPE_LBRACE] = anon_sym_PIPE_LBRACE,
  [sym_er_cardinarity_only_one] = sym_er_cardinarity_only_one,
  [anon_sym_DOT_DASH] = anon_sym_DOT_DASH,
  [anon_sym_DASH_DOT] = anon_sym_DASH_DOT,
  [aux_sym_er_attribute_key_type_pk_token1] = aux_sym_er_attribute_key_type_pk_token1,
  [aux_sym_er_attribute_key_type_fk_token1] = aux_sym_er_attribute_key_type_fk_token1,
  [sym__mindmap_text] = sym__mindmap_text,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym__direction] = sym__direction,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__sequence_stmt] = sym__sequence_stmt,
  [sym__sequence_participant_type] = sym__sequence_participant_type,
  [sym_sequence_stmt_participant] = sym_sequence_stmt_participant,
  [sym_sequence_stmt_actor] = sym_sequence_stmt_actor,
  [sym_sequence_actor] = sym_sequence_actor,
  [sym_sequence_stmt_signal] = sym_sequence_stmt_signal,
  [sym_sequence_signal_type] = sym_sequence_signal_type,
  [sym_sequence_text] = sym_sequence_text,
  [sym_sequence_stmt_autonumber] = sym_sequence_stmt_autonumber,
  [sym_sequence_stmt_activate] = sym_sequence_stmt_activate,
  [sym_sequence_stmt_deactivate] = sym_sequence_stmt_deactivate,
  [sym_sequence_stmt_note] = sym_sequence_stmt_note,
  [sym_sequence_stmt_links] = sym_sequence_stmt_links,
  [sym_sequence_stmt_link] = sym_sequence_stmt_link,
  [sym_sequence_stmt_properties] = sym_sequence_stmt_properties,
  [sym_sequence_stmt_details] = sym_sequence_stmt_details,
  [sym_sequence_note_placement] = sym_sequence_note_placement,
  [sym_sequence_stmt_title] = sym_sequence_stmt_title,
  [sym_sequence_stmt_loop] = sym_sequence_stmt_loop,
  [sym_sequence_stmt_rect] = sym_sequence_stmt_rect,
  [sym_sequence_stmt_opt] = sym_sequence_stmt_opt,
  [aux_sym__sequence_subdocument] = aux_sym__sequence_subdocument,
  [sym_sequence_stmt_alt] = sym_sequence_stmt_alt,
  [sym_sequence_stmt_par] = sym_sequence_stmt_par,
  [sym_diagram_class] = sym_diagram_class,
  [sym__class_stmt] = sym__class_stmt,
  [sym_class_stmt_relation] = sym_class_stmt_relation,
  [sym_class_name] = sym_class_name,
  [sym_class_name_body] = sym_class_name_body,
  [sym_class_generics] = sym_class_generics,
  [sym_class_relation] = sym_class_relation,
  [sym__class_reltype] = sym__class_reltype,
  [sym__class_linetype] = sym__class_linetype,
  [sym_class_stmt_class] = sym_class_stmt_class,
  [sym_class_method_line] = sym_class_method_line,
  [sym_class_annotation_line] = sym_class_annotation_line,
  [sym_class_stmt_method] = sym_class_stmt_method,
  [sym_class_stmt_annotation] = sym_class_stmt_annotation,
  [sym_diagram_state] = sym_diagram_state,
  [sym__state_stmt] = sym__state_stmt,
  [sym_state_stmt_simple] = sym_state_stmt_simple,
  [sym_state_stmt_arrow] = sym_state_stmt_arrow,
  [sym_state_stmt_composite] = sym_state_stmt_composite,
  [sym_state_composite_body] = sym_state_composite_body,
  [sym_state_stmt_annotation] = sym_state_stmt_annotation,
  [sym_state_alias] = sym_state_alias,
  [sym_state_stmt_hide_empty_description] = sym_state_stmt_hide_empty_description,
  [sym__state_annotation] = sym__state_annotation,
  [sym_state_note] = sym_state_note,
  [sym_state_note_placement] = sym_state_note_placement,
  [sym_diagram_gantt] = sym_diagram_gantt,
  [sym__gantt_stmt] = sym__gantt_stmt,
  [sym_gantt_stmt_dateformat] = sym_gantt_stmt_dateformat,
  [sym_gantt_stmt_inclusiveenddates] = sym_gantt_stmt_inclusiveenddates,
  [sym_gantt_stmt_topaxis] = sym_gantt_stmt_topaxis,
  [sym_gantt_stmt_axisformat] = sym_gantt_stmt_axisformat,
  [sym_gantt_stmt_includes] = sym_gantt_stmt_includes,
  [sym_gantt_stmt_excludes] = sym_gantt_stmt_excludes,
  [sym_gantt_stmt_todaymarker] = sym_gantt_stmt_todaymarker,
  [sym_gantt_stmt_title] = sym_gantt_stmt_title,
  [sym_gantt_stmt_section] = sym_gantt_stmt_section,
  [sym_gantt_stmt_task] = sym_gantt_stmt_task,
  [sym_diagram_pie] = sym_diagram_pie,
  [sym__pie_stmt] = sym__pie_stmt,
  [sym_pie_stmt_title] = sym_pie_stmt_title,
  [sym_pie_stmt_element] = sym_pie_stmt_element,
  [sym_diagram_flow] = sym_diagram_flow,
  [sym__flowchart_direction] = sym__flowchart_direction,
  [sym__flow_stmt] = sym__flow_stmt,
  [sym_flow_stmt_direction] = sym_flow_stmt_direction,
  [sym_flow_stmt_vertice] = sym_flow_stmt_vertice,
  [sym_flow_node] = sym_flow_node,
  [sym__flow_link] = sym__flow_link,
  [sym_flow_link_simplelink] = sym_flow_link_simplelink,
  [sym_flow_link_arrowtext] = sym_flow_link_arrowtext,
  [sym_flow_link_middletext] = sym_flow_link_middletext,
  [sym_flow_arrow_text] = sym_flow_arrow_text,
  [sym_flow_vertex_id] = sym_flow_vertex_id,
  [sym_flow_vertex] = sym_flow_vertex,
  [sym__flow_vertex_kind] = sym__flow_vertex_kind,
  [sym_flow_vertex_square] = sym_flow_vertex_square,
  [sym_flow_vertex_circle] = sym_flow_vertex_circle,
  [sym_flow_vertex_ellipse] = sym_flow_vertex_ellipse,
  [sym_flow_vertex_stadium] = sym_flow_vertex_stadium,
  [sym_flow_vertex_subroutine] = sym_flow_vertex_subroutine,
  [sym_flow_vertex_rect] = sym_flow_vertex_rect,
  [sym_flow_vertex_cylinder] = sym_flow_vertex_cylinder,
  [sym_flow_vertex_round] = sym_flow_vertex_round,
  [sym_flow_vertex_diamond] = sym_flow_vertex_diamond,
  [sym_flow_vertex_hexagon] = sym_flow_vertex_hexagon,
  [sym_flow_vertex_odd] = sym_flow_vertex_odd,
  [sym_flow_vertex_trapezoid] = sym_flow_vertex_trapezoid,
  [sym_flow_vertex_inv_trapezoid] = sym_flow_vertex_inv_trapezoid,
  [sym_flow_vertex_leanright] = sym_flow_vertex_leanright,
  [sym_flow_vertex_leanleft] = sym_flow_vertex_leanleft,
  [sym__flow_text] = sym__flow_text,
  [sym_flow_stmt_subgraph] = sym_flow_stmt_subgraph,
  [sym_flow_stmt_subgraph_inner] = sym_flow_stmt_subgraph_inner,
  [sym_flow_vertex_text] = sym_flow_vertex_text,
  [sym_diagram_er] = sym_diagram_er,
  [sym__er_stmt] = sym__er_stmt,
  [sym_er_stmt_entity] = sym_er_stmt_entity,
  [sym_er_stmt_entity_relation] = sym_er_stmt_entity_relation,
  [sym_er_entity_name] = sym_er_entity_name,
  [sym_er_relation] = sym_er_relation,
  [sym__er_cardinarity] = sym__er_cardinarity,
  [sym__er_reltype] = sym__er_reltype,
  [sym_er_role] = sym_er_role,
  [sym_er_stmt_entity_block] = sym_er_stmt_entity_block,
  [sym_er_stmt_entity_block_inner] = sym_er_stmt_entity_block_inner,
  [sym_er_attribute] = sym_er_attribute,
  [sym_er_attribute_type] = sym_er_attribute_type,
  [sym_er_attribute_name] = sym_er_attribute_name,
  [sym__er_attribute_key_type] = sym__er_attribute_key_type,
  [sym_er_attribute_comment] = sym_er_attribute_comment,
  [sym_diagram_mindmap] = sym_diagram_mindmap,
  [sym_mmap_node] = sym_mmap_node,
  [sym_mmap_node_id] = sym_mmap_node_id,
  [sym_mmap_markdown] = sym_mmap_markdown,
  [sym_mmap_text] = sym_mmap_text,
  [sym_mmap_node_content] = sym_mmap_node_content,
  [sym_mmap_node_square] = sym_mmap_node_square,
  [sym_mmap_node_rounded] = sym_mmap_node_rounded,
  [sym_mmap_node_circle] = sym_mmap_node_circle,
  [sym_mmap_node_cloud] = sym_mmap_node_cloud,
  [sym_mmap_node_bang] = sym_mmap_node_bang,
  [sym_mmap_node_hexagon] = sym_mmap_node_hexagon,
  [sym_mmap_class] = sym_mmap_class,
  [sym_mmap_icon] = sym_mmap_icon,
  [sym_direction_tb] = sym_direction_tb,
  [sym_direction_bt] = sym_direction_bt,
  [sym_direction_rl] = sym_direction_rl,
  [sym_direction_lr] = sym_direction_lr,
  [sym__sequence_rest_text] = sym__sequence_rest_text,
  [sym_dotted_open_arrow] = sym_dotted_open_arrow,
  [sym_solid_point] = sym_solid_point,
  [sym_sequence_signal_plus_sign] = sym_sequence_signal_plus_sign,
  [sym_sequence_signal_minus_sign] = sym_sequence_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_class_reltype_extension] = sym_class_reltype_extension,
  [sym_class_reltype_composition] = sym_class_reltype_composition,
  [sym_class_reltype_dependency] = sym_class_reltype_dependency,
  [sym_class_linetype_solid] = sym_class_linetype_solid,
  [sym_class_linetype_dotted] = sym_class_linetype_dotted,
  [sym_class_label] = sym_class_label,
  [sym_state_name] = sym_state_name,
  [sym_state_arrow] = sym_state_arrow,
  [sym_state_description] = sym_state_description,
  [sym_state_hide_empty_description] = sym_state_hide_empty_description,
  [sym_state_division] = sym_state_division,
  [sym_state_annotation_fork] = sym_state_annotation_fork,
  [sym_state_annotation_join] = sym_state_annotation_join,
  [sym_state_annotation_choice] = sym_state_annotation_choice,
  [sym_gantt_meta_format] = sym_gantt_meta_format,
  [sym_gantt_task_text] = sym_gantt_task_text,
  [sym_pie_showdata] = sym_pie_showdata,
  [sym_pie_label] = sym_pie_label,
  [sym_flowchart_direction_lr] = sym_flowchart_direction_lr,
  [sym_flowchart_direction_rl] = sym_flowchart_direction_rl,
  [sym_flowchart_direction_tb] = sym_flowchart_direction_tb,
  [sym_flowchart_direction_bt] = sym_flowchart_direction_bt,
  [sym_flow_text_literal] = sym_flow_text_literal,
  [sym_flow_link_arrow] = sym_flow_link_arrow,
  [sym_flow_link_arrow_start] = sym_flow_link_arrow_start,
  [sym__er_word] = sym__er_word,
  [sym_er_cardinarity_zero_or_one] = sym_er_cardinarity_zero_or_one,
  [sym_er_cardinarity_zero_or_more] = sym_er_cardinarity_zero_or_more,
  [sym_er_cardinarity_one_or_more] = sym_er_cardinarity_one_or_more,
  [sym_er_reltype_non_identifying] = sym_er_reltype_non_identifying,
  [sym_er_reltype_identifying] = sym_er_reltype_identifying,
  [sym_er_attribute_key_type_pk] = sym_er_attribute_key_type_pk,
  [sym_er_attribute_key_type_fk] = sym_er_attribute_key_type_fk,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_diagram_sequence_repeat2] = aux_sym_diagram_sequence_repeat2,
  [aux_sym_sequence_actor_repeat1] = aux_sym_sequence_actor_repeat1,
  [aux_sym_sequence_stmt_alt_repeat1] = aux_sym_sequence_stmt_alt_repeat1,
  [aux_sym_sequence_stmt_par_repeat1] = aux_sym_sequence_stmt_par_repeat1,
  [aux_sym_diagram_class_repeat1] = aux_sym_diagram_class_repeat1,
  [aux_sym_class_name_body_repeat1] = aux_sym_class_name_body_repeat1,
  [aux_sym_class_stmt_class_repeat1] = aux_sym_class_stmt_class_repeat1,
  [aux_sym_class_method_line_repeat1] = aux_sym_class_method_line_repeat1,
  [aux_sym_diagram_state_repeat1] = aux_sym_diagram_state_repeat1,
  [aux_sym_state_composite_body_repeat1] = aux_sym_state_composite_body_repeat1,
  [aux_sym_diagram_gantt_repeat1] = aux_sym_diagram_gantt_repeat1,
  [aux_sym_diagram_pie_repeat1] = aux_sym_diagram_pie_repeat1,
  [aux_sym_diagram_flow_repeat1] = aux_sym_diagram_flow_repeat1,
  [aux_sym_flow_stmt_vertice_repeat1] = aux_sym_flow_stmt_vertice_repeat1,
  [aux_sym_flow_node_repeat1] = aux_sym_flow_node_repeat1,
  [aux_sym_flow_arrow_text_repeat1] = aux_sym_flow_arrow_text_repeat1,
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = aux_sym_flow_stmt_subgraph_inner_repeat1,
  [aux_sym_diagram_er_repeat1] = aux_sym_diagram_er_repeat1,
  [aux_sym_er_stmt_entity_block_inner_repeat1] = aux_sym_er_stmt_entity_block_inner_repeat1,
  [aux_sym_diagram_mindmap_repeat1] = aux_sym_diagram_mindmap_repeat1,
  [aux_sym_gantt_task_text_repeat1] = aux_sym_gantt_task_text_repeat1,
  [aux_sym_flow_text_literal_repeat1] = aux_sym_flow_text_literal_repeat1,
  [alias_sym_annotation] = alias_sym_annotation,
  [alias_sym_class_classifier_abstract] = alias_sym_class_classifier_abstract,
  [alias_sym_class_style_name] = alias_sym_class_style_name,
  [alias_sym_class_visibility_internal] = alias_sym_class_visibility_internal,
  [alias_sym_class_visibility_private] = alias_sym_class_visibility_private,
  [alias_sym_class_visibility_public] = alias_sym_class_visibility_public,
  [alias_sym_gantt_axis_format] = alias_sym_gantt_axis_format,
  [alias_sym_gantt_end_dates] = alias_sym_gantt_end_dates,
  [alias_sym_gantt_excludes] = alias_sym_gantt_excludes,
  [alias_sym_gantt_includes] = alias_sym_gantt_includes,
  [alias_sym_gantt_section] = alias_sym_gantt_section,
  [alias_sym_gantt_title] = alias_sym_gantt_title,
  [alias_sym_gantt_today_marker] = alias_sym_gantt_today_marker,
  [alias_sym_gantt_top_axis] = alias_sym_gantt_top_axis,
  [alias_sym_note_content] = alias_sym_note_content,
  [alias_sym_sequence_alias] = alias_sym_sequence_alias,
  [alias_sym_sequence_stmt_alt_branch] = alias_sym_sequence_stmt_alt_branch,
  [alias_sym_sequence_stmt_loop_inner] = alias_sym_sequence_stmt_loop_inner,
  [alias_sym_sequence_stmt_opt_inner] = alias_sym_sequence_stmt_opt_inner,
  [alias_sym_sequence_stmt_rect_inner] = alias_sym_sequence_stmt_rect_inner,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_sequence_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_participant_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_actor_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_autonumber_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_activate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_deactivate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_links_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_link_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_properties_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_details_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_title_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_rect_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_opt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_generics_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_stmt_simple_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_gantt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_dateformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_topaxis_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_axisformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_includes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_excludes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_todaymarker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_section_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_pie_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_flow_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_stmt_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RPAREN] = {
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
  [anon_sym_LBRACK_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RBRACK] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subgraph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_er_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_mindmap_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_markdown_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_mmap_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_class_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_class_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_icon_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mmap_icon_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_md_start] = {
    .visible = true,
    .named = true,
  },
  [sym_md_end] = {
    .visible = true,
    .named = true,
  },
  [sym_type_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__sequence_rest_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__sequence_actor_word] = {
    .visible = false,
    .named = true,
  },
  [sym_solid_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_solid_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_point] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_placement_left_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_placement_right_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_num_token] = {
    .visible = false,
    .named = true,
  },
  [sym__bquote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__dquote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_aggregation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_hide_empty_description_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_state_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_state_annotation_fork_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_fork_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_gantt_task_data] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_showdata_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_pie_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_pie_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flowchart_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_lr_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_text_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_flow_text_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flow_link_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__er_alphanum] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_er_cardinarity_only_one] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_pk_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_fk_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__mindmap_text] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_diagram_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__sequence_participant_type] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence_stmt_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_text] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_autonumber] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_activate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_deactivate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_note] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_links] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_link] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_details] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sequence_subdocument] = {
    .visible = false,
    .named = false,
  },
  [sym_sequence_stmt_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_par] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_class] = {
    .visible = true,
    .named = true,
  },
  [sym__class_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_generics] = {
    .visible = true,
    .named = true,
  },
  [sym_class_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__class_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__class_linetype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_annotation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_state] = {
    .visible = true,
    .named = true,
  },
  [sym__state_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_stmt_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_state_composite_body] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_state_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym__state_annotation] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_note] = {
    .visible = true,
    .named = true,
  },
  [sym_state_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_gantt] = {
    .visible = true,
    .named = true,
  },
  [sym__gantt_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_gantt_stmt_dateformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_inclusiveenddates] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_topaxis] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_axisformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_todaymarker] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_task] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_pie] = {
    .visible = true,
    .named = true,
  },
  [sym__pie_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pie_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_stmt_element] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_flow] = {
    .visible = true,
    .named = true,
  },
  [sym__flowchart_direction] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__flow_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_stmt_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_vertice] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_node] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_link] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_link_simplelink] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrowtext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_middletext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_arrow_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_id] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_vertex_kind] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_vertex_square] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_ellipse] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_stadium] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_cylinder] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_round] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_diamond] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_odd] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_inv_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanright] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanleft] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_text] = {
    .visible = false,
    .named = true,
  },
  [sym_flow_stmt_subgraph] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_subgraph_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_text] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_er] = {
    .visible = true,
    .named = true,
  },
  [sym__er_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_stmt_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_er_entity_name] = {
    .visible = true,
    .named = true,
  },
  [sym_er_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__er_cardinarity] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__er_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_role] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_type] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__er_attribute_key_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_er_attribute_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_mindmap] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_id] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_text] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_content] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_square] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_rounded] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_cloud] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_node_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_class] = {
    .visible = true,
    .named = true,
  },
  [sym_mmap_icon] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_rest_text] = {
    .visible = false,
    .named = true,
  },
  [sym_dotted_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_point] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_plus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_minus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_left] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_right] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_solid] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_dotted] = {
    .visible = true,
    .named = true,
  },
  [sym_class_label] = {
    .visible = true,
    .named = true,
  },
  [sym_state_name] = {
    .visible = true,
    .named = true,
  },
  [sym_state_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_division] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_fork] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_join] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_meta_format] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_task_text] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_showdata] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_label] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow_start] = {
    .visible = true,
    .named = true,
  },
  [sym__er_word] = {
    .visible = false,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_non_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_pk] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_fk] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagram_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_actor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_stmt_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_state_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_composite_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_gantt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_pie_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_vertice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_arrow_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_er_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_er_stmt_entity_block_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_mindmap_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_text_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_classifier_abstract] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_style_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_private] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_public] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_axis_format] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_end_dates] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_excludes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_includes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_section] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_today_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_top_axis] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_alt_branch] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_loop_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_opt_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_rect_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_gantt_title,
  },
  [2] = {
    [1] = alias_sym_gantt_end_dates,
  },
  [3] = {
    [1] = alias_sym_gantt_top_axis,
  },
  [4] = {
    [1] = alias_sym_gantt_axis_format,
  },
  [5] = {
    [1] = alias_sym_gantt_includes,
  },
  [6] = {
    [1] = alias_sym_gantt_excludes,
  },
  [7] = {
    [1] = alias_sym_gantt_today_marker,
  },
  [8] = {
    [1] = alias_sym_gantt_section,
  },
  [9] = {
    [2] = alias_sym_title,
  },
  [10] = {
    [2] = alias_sym_sequence_stmt_alt_branch,
  },
  [11] = {
    [0] = sym_state_description,
  },
  [12] = {
    [3] = alias_sym_sequence_alias,
  },
  [13] = {
    [3] = alias_sym_sequence_stmt_loop_inner,
  },
  [14] = {
    [3] = alias_sym_sequence_stmt_rect_inner,
  },
  [15] = {
    [3] = alias_sym_sequence_stmt_opt_inner,
  },
  [16] = {
    [3] = alias_sym_sequence_stmt_alt_branch,
  },
  [17] = {
    [3] = alias_sym_class_style_name,
  },
  [18] = {
    [1] = alias_sym_annotation,
  },
  [19] = {
    [0] = alias_sym_class_visibility_internal,
  },
  [20] = {
    [0] = alias_sym_class_visibility_public,
  },
  [21] = {
    [0] = alias_sym_class_visibility_private,
  },
  [22] = {
    [1] = alias_sym_class_classifier_abstract,
  },
  [23] = {
    [4] = alias_sym_note_content,
  },
  [24] = {
    [1] = alias_sym_sequence_stmt_alt_branch,
  },
  [25] = {
    [0] = alias_sym_class_visibility_internal,
    [2] = alias_sym_class_classifier_abstract,
  },
  [26] = {
    [0] = alias_sym_class_visibility_public,
    [2] = alias_sym_class_classifier_abstract,
  },
  [27] = {
    [0] = alias_sym_class_visibility_private,
    [2] = alias_sym_class_classifier_abstract,
  },
  [28] = {
    [2] = alias_sym_class_classifier_abstract,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__sequence_subdocument, 5,
    aux_sym__sequence_subdocument,
    alias_sym_sequence_stmt_alt_branch,
    alias_sym_sequence_stmt_loop_inner,
    alias_sym_sequence_stmt_opt_inner,
    alias_sym_sequence_stmt_rect_inner,
  sym__sequence_rest_text, 3,
    sym__sequence_rest_text,
    alias_sym_sequence_alias,
    alias_sym_title,
  sym_state_description, 2,
    sym_state_description,
    alias_sym_note_content,
  sym_gantt_meta_format, 9,
    sym_gantt_meta_format,
    alias_sym_gantt_axis_format,
    alias_sym_gantt_end_dates,
    alias_sym_gantt_excludes,
    alias_sym_gantt_includes,
    alias_sym_gantt_section,
    alias_sym_gantt_title,
    alias_sym_gantt_today_marker,
    alias_sym_gantt_top_axis,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 5,
  [8] = 3,
  [9] = 5,
  [10] = 2,
  [11] = 3,
  [12] = 5,
  [13] = 2,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 14,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 19,
  [29] = 29,
  [30] = 24,
  [31] = 25,
  [32] = 23,
  [33] = 33,
  [34] = 27,
  [35] = 35,
  [36] = 19,
  [37] = 29,
  [38] = 29,
  [39] = 24,
  [40] = 25,
  [41] = 23,
  [42] = 42,
  [43] = 27,
  [44] = 19,
  [45] = 29,
  [46] = 25,
  [47] = 24,
  [48] = 27,
  [49] = 49,
  [50] = 49,
  [51] = 49,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 49,
  [56] = 56,
  [57] = 57,
  [58] = 54,
  [59] = 59,
  [60] = 52,
  [61] = 54,
  [62] = 54,
  [63] = 52,
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
  [97] = 94,
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
  [121] = 96,
  [122] = 95,
  [123] = 123,
  [124] = 113,
  [125] = 93,
  [126] = 126,
  [127] = 127,
  [128] = 98,
  [129] = 99,
  [130] = 130,
  [131] = 131,
  [132] = 127,
  [133] = 100,
  [134] = 101,
  [135] = 102,
  [136] = 103,
  [137] = 104,
  [138] = 105,
  [139] = 92,
  [140] = 91,
  [141] = 123,
  [142] = 106,
  [143] = 107,
  [144] = 108,
  [145] = 109,
  [146] = 110,
  [147] = 120,
  [148] = 111,
  [149] = 119,
  [150] = 126,
  [151] = 130,
  [152] = 112,
  [153] = 118,
  [154] = 131,
  [155] = 114,
  [156] = 115,
  [157] = 116,
  [158] = 117,
  [159] = 109,
  [160] = 105,
  [161] = 96,
  [162] = 123,
  [163] = 93,
  [164] = 96,
  [165] = 113,
  [166] = 95,
  [167] = 120,
  [168] = 126,
  [169] = 130,
  [170] = 131,
  [171] = 118,
  [172] = 98,
  [173] = 99,
  [174] = 94,
  [175] = 127,
  [176] = 123,
  [177] = 100,
  [178] = 126,
  [179] = 130,
  [180] = 131,
  [181] = 117,
  [182] = 120,
  [183] = 110,
  [184] = 116,
  [185] = 119,
  [186] = 95,
  [187] = 115,
  [188] = 99,
  [189] = 118,
  [190] = 117,
  [191] = 116,
  [192] = 115,
  [193] = 114,
  [194] = 114,
  [195] = 102,
  [196] = 127,
  [197] = 103,
  [198] = 112,
  [199] = 111,
  [200] = 104,
  [201] = 101,
  [202] = 100,
  [203] = 119,
  [204] = 108,
  [205] = 107,
  [206] = 98,
  [207] = 92,
  [208] = 93,
  [209] = 91,
  [210] = 106,
  [211] = 106,
  [212] = 91,
  [213] = 107,
  [214] = 108,
  [215] = 109,
  [216] = 110,
  [217] = 111,
  [218] = 112,
  [219] = 92,
  [220] = 105,
  [221] = 104,
  [222] = 103,
  [223] = 101,
  [224] = 94,
  [225] = 102,
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
  [238] = 94,
  [239] = 93,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
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
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 93,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 244,
  [293] = 293,
  [294] = 294,
  [295] = 94,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 244,
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
  [326] = 323,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 323,
  [335] = 323,
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
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 260,
  [390] = 390,
  [391] = 391,
  [392] = 282,
  [393] = 393,
  [394] = 390,
  [395] = 395,
  [396] = 390,
  [397] = 390,
  [398] = 398,
  [399] = 282,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 260,
  [409] = 409,
  [410] = 406,
  [411] = 242,
  [412] = 412,
  [413] = 413,
  [414] = 406,
  [415] = 406,
  [416] = 416,
  [417] = 417,
  [418] = 281,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 286,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 236,
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
  [457] = 328,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 332,
  [462] = 417,
  [463] = 456,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 317,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 312,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 288,
  [483] = 241,
  [484] = 265,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 488,
  [502] = 488,
  [503] = 488,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 512,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 511,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 514,
  [545] = 545,
  [546] = 512,
  [547] = 543,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 514,
  [552] = 516,
  [553] = 553,
  [554] = 554,
  [555] = 519,
  [556] = 524,
  [557] = 523,
  [558] = 522,
  [559] = 519,
  [560] = 516,
  [561] = 514,
  [562] = 562,
  [563] = 554,
  [564] = 512,
  [565] = 522,
  [566] = 548,
  [567] = 549,
  [568] = 568,
  [569] = 569,
  [570] = 553,
  [571] = 549,
  [572] = 523,
  [573] = 573,
  [574] = 548,
  [575] = 575,
  [576] = 543,
  [577] = 516,
  [578] = 527,
  [579] = 553,
  [580] = 524,
  [581] = 581,
  [582] = 539,
  [583] = 511,
  [584] = 519,
  [585] = 522,
  [586] = 586,
  [587] = 523,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 510,
  [593] = 524,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 543,
  [606] = 548,
  [607] = 549,
  [608] = 553,
  [609] = 517,
  [610] = 590,
  [611] = 554,
  [612] = 612,
  [613] = 539,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 521,
  [621] = 621,
  [622] = 622,
  [623] = 621,
  [624] = 517,
  [625] = 521,
  [626] = 539,
  [627] = 615,
  [628] = 617,
  [629] = 617,
  [630] = 521,
  [631] = 621,
  [632] = 632,
  [633] = 527,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 420,
  [642] = 642,
  [643] = 643,
  [644] = 525,
  [645] = 604,
  [646] = 612,
  [647] = 594,
  [648] = 527,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 517,
  [653] = 653,
  [654] = 654,
  [655] = 650,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 612,
  [660] = 604,
  [661] = 525,
  [662] = 662,
  [663] = 663,
  [664] = 650,
  [665] = 590,
  [666] = 666,
  [667] = 619,
  [668] = 510,
  [669] = 669,
  [670] = 615,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 617,
  [675] = 675,
  [676] = 510,
  [677] = 596,
  [678] = 669,
  [679] = 554,
  [680] = 594,
  [681] = 681,
  [682] = 621,
  [683] = 596,
  [684] = 594,
  [685] = 615,
  [686] = 596,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 590,
  [692] = 511,
  [693] = 650,
  [694] = 612,
  [695] = 525,
  [696] = 604,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 700,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 699,
  [714] = 714,
  [715] = 709,
  [716] = 716,
  [717] = 486,
  [718] = 718,
  [719] = 499,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 494,
  [728] = 728,
  [729] = 729,
  [730] = 707,
  [731] = 699,
  [732] = 732,
  [733] = 699,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 700,
  [739] = 707,
  [740] = 740,
  [741] = 711,
  [742] = 742,
  [743] = 743,
  [744] = 701,
  [745] = 707,
  [746] = 709,
  [747] = 747,
  [748] = 700,
  [749] = 709,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 765,
  [772] = 772,
  [773] = 773,
  [774] = 707,
  [775] = 711,
  [776] = 776,
  [777] = 701,
  [778] = 701,
  [779] = 765,
  [780] = 711,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 707,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 765,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 743,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 807,
  [810] = 808,
  [811] = 806,
  [812] = 803,
  [813] = 813,
  [814] = 802,
  [815] = 805,
  [816] = 816,
  [817] = 817,
  [818] = 801,
  [819] = 800,
  [820] = 798,
  [821] = 821,
  [822] = 799,
  [823] = 798,
  [824] = 824,
  [825] = 805,
  [826] = 808,
  [827] = 799,
  [828] = 800,
  [829] = 807,
  [830] = 806,
  [831] = 801,
  [832] = 802,
  [833] = 803,
  [834] = 834,
  [835] = 808,
  [836] = 836,
  [837] = 808,
  [838] = 796,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 795,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 843,
  [854] = 806,
  [855] = 807,
  [856] = 856,
  [857] = 697,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 845,
  [862] = 862,
  [863] = 846,
  [864] = 796,
  [865] = 847,
  [866] = 99,
  [867] = 849,
  [868] = 98,
  [869] = 843,
  [870] = 795,
  [871] = 845,
  [872] = 846,
  [873] = 847,
  [874] = 850,
  [875] = 849,
  [876] = 850,
  [877] = 851,
  [878] = 878,
  [879] = 851,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 798,
  [885] = 885,
  [886] = 886,
  [887] = 796,
  [888] = 799,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 843,
  [893] = 795,
  [894] = 845,
  [895] = 846,
  [896] = 847,
  [897] = 897,
  [898] = 849,
  [899] = 850,
  [900] = 851,
  [901] = 901,
  [902] = 821,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 808,
  [907] = 907,
  [908] = 908,
  [909] = 824,
  [910] = 796,
  [911] = 843,
  [912] = 796,
  [913] = 843,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 803,
  [918] = 817,
  [919] = 813,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 805,
  [924] = 882,
  [925] = 883,
  [926] = 926,
  [927] = 915,
  [928] = 928,
  [929] = 891,
  [930] = 930,
  [931] = 802,
  [932] = 932,
  [933] = 933,
  [934] = 928,
  [935] = 817,
  [936] = 936,
  [937] = 937,
  [938] = 938,
  [939] = 939,
  [940] = 882,
  [941] = 883,
  [942] = 942,
  [943] = 915,
  [944] = 928,
  [945] = 891,
  [946] = 930,
  [947] = 947,
  [948] = 948,
  [949] = 949,
  [950] = 950,
  [951] = 817,
  [952] = 952,
  [953] = 953,
  [954] = 862,
  [955] = 816,
  [956] = 882,
  [957] = 883,
  [958] = 958,
  [959] = 915,
  [960] = 928,
  [961] = 891,
  [962] = 930,
  [963] = 963,
  [964] = 964,
  [965] = 965,
  [966] = 966,
  [967] = 967,
  [968] = 968,
  [969] = 969,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 973,
  [974] = 974,
  [975] = 975,
  [976] = 976,
  [977] = 801,
  [978] = 978,
  [979] = 858,
  [980] = 930,
  [981] = 800,
  [982] = 982,
  [983] = 983,
  [984] = 984,
  [985] = 985,
  [986] = 986,
};

static inline bool aux_sym_flow_text_literal_token1_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= ' ' || c == ')'))
    : (c <= '-' || (c < '\\'
      ? (c < ';'
        ? c == '/'
        : c <= ';')
      : (c <= ']' || (c >= '|' && c <= '}')))));
}

static inline bool sym_flow_text_quoted_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || c == ')'))
    : (c <= '-' || (c < '\\'
      ? (c < ';'
        ? c == '/'
        : c <= ';')
      : (c <= ']' || (c >= '|' && c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == '$') ADVANCE(500);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '&') ADVANCE(520);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(499);
      if (lookahead == '+') ADVANCE(490);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == ';') ADVANCE(517);
      if (lookahead == '<') ADVANCE(742);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(541);
      if (lookahead == 'C') ADVANCE(284);
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == '[') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(526);
      if (lookahead == '^') ADVANCE(934);
      if (lookahead == '`') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(738);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 'v') ADVANCE(932);
      if (lookahead == 'x') ADVANCE(80);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead == '|') ADVANCE(522);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '~') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(338);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(143);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(613);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(613);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(613);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(656);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == '+') ADVANCE(490);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '#') ADVANCE(493);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '(') ADVANCE(494);
      if (lookahead == ')') ADVANCE(497);
      if (lookahead == '+') ADVANCE(490);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '~') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(734);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(756);
      if (lookahead == '-') ADVANCE(758);
      if (lookahead == '[') ADVANCE(757);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(573);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(774);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(784);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(814);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(815);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(442);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(456);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(505);
      if (lookahead == 'D') ADVANCE(272);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(316);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(592);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(924);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '*') ADVANCE(499);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(743);
      if (lookahead == '>') ADVANCE(541);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '~') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(736);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(937);
      if (lookahead == '%') ADVANCE(938);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(939);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(447);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(938);
      if (lookahead == ')') ADVANCE(497);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == ']') ADVANCE(526);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(939);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(938);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '}') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(939);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(557);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(963);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(964);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(596);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(481);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(556);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(912);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(913);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(831);
      END_STATE();
    case 41:
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(568);
      END_STATE();
    case 42:
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(952);
      if (lookahead == '|') ADVANCE(954);
      if (lookahead == '}') ADVANCE(540);
      END_STATE();
    case 43:
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(716);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 44:
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(722);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(728);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(579);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      END_STATE();
    case 46:
      if (lookahead == '%') ADVANCE(842);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 47:
      if (lookahead == '(') ADVANCE(563);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(528);
      if (lookahead == ']') ADVANCE(538);
      END_STATE();
    case 49:
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == ']') ADVANCE(534);
      END_STATE();
    case 50:
      if (lookahead == ')') ADVANCE(708);
      if (lookahead == '>') ADVANCE(705);
      if (lookahead == 'x') ADVANCE(707);
      END_STATE();
    case 51:
      if (lookahead == ')') ADVANCE(530);
      END_STATE();
    case 52:
      if (lookahead == ')') ADVANCE(530);
      if (lookahead == '-') ADVANCE(946);
      if (lookahead == '.') ADVANCE(948);
      END_STATE();
    case 53:
      if (lookahead == ')') ADVANCE(530);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '>') ADVANCE(703);
      if (lookahead == 'x') ADVANCE(706);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '[') ADVANCE(189);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(957);
      if (lookahead == '.') ADVANCE(748);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(946);
      if (lookahead == '.') ADVANCE(948);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(942);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(941);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(744);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(744);
      if (lookahead == '.') ADVANCE(958);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(746);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '{') ADVANCE(953);
      if (lookahead == '|') ADVANCE(951);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(748);
      END_STATE();
    case 68:
      if (lookahead == '2') ADVANCE(473);
      END_STATE();
    case 69:
      if (lookahead == '2') ADVANCE(504);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(560);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(484);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '<') ADVANCE(501);
      END_STATE();
    case 79:
      if (lookahead == '<') ADVANCE(177);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(947);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(944);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(943);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(741);
      END_STATE();
    case 85:
      if (lookahead == '>') ADVANCE(502);
      END_STATE();
    case 86:
      if (lookahead == '>') ADVANCE(832);
      END_STATE();
    case 87:
      if (lookahead == '>') ADVANCE(834);
      END_STATE();
    case 88:
      if (lookahead == '>') ADVANCE(836);
      END_STATE();
    case 89:
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(465);
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(271);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(272);
      END_STATE();
    case 96:
      if (lookahead == 'D') ADVANCE(273);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(273);
      if (lookahead == '_') ADVANCE(162);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 's') ADVANCE(482);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '[') ADVANCE(189);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(545);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(543);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(536);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(536);
      if (lookahead == 'o') ADVANCE(950);
      if (lookahead == '{') ADVANCE(955);
      if (lookahead == '|') ADVANCE(956);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(538);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(801);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(833);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(835);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(837);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == ']') ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == '`') ADVANCE(591);
      END_STATE();
    case 116:
      if (lookahead == '`') ADVANCE(735);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(546);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(950);
      if (lookahead == '{') ADVANCE(955);
      if (lookahead == '|') ADVANCE(956);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(952);
      if (lookahead == '|') ADVANCE(954);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(551);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == '{') ADVANCE(953);
      if (lookahead == '|') ADVANCE(951);
      END_STATE();
    case 138:
      if (lookahead == '{') ADVANCE(539);
      END_STATE();
    case 139:
      if (lookahead == '}') ADVANCE(540);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(959);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 146:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 164:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 166:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 167:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 169:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(930);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(931);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(930);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(931);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 171:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(601);
      END_STATE();
    case 172:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 173:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(380);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(344);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 174:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(372);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(386);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(254);
      END_STATE();
    case 175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(327);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(325);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(403);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(329);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(326);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(140);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 236:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(709);
      END_STATE();
    case 237:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(710);
      END_STATE();
    case 238:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(322);
      END_STATE();
    case 239:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 240:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(331);
      END_STATE();
    case 241:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 242:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(351);
      END_STATE();
    case 243:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(353);
      END_STATE();
    case 244:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 245:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(356);
      END_STATE();
    case 246:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 247:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 248:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(398);
      END_STATE();
    case 249:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(330);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(959);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(410);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 255:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 256:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 257:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 258:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 259:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 260:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 263:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 264:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 265:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 267:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 268:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 269:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 270:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 271:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 272:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 273:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 274:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 275:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(960);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 276:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(460);
      END_STATE();
    case 277:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 278:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 279:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(223);
      END_STATE();
    case 280:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(175);
      END_STATE();
    case 282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(550);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(474);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(334);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 312:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 326:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 328:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 329:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 332:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(464);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 337:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(405);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(928);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(933);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 360:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      END_STATE();
    case 361:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 362:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(506);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(507);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 401:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 402:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 403:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 404:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 405:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 406:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 407:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 408:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 409:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 410:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 411:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 412:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 413:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 414:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 415:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(295);
      END_STATE();
    case 416:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 417:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(945);
      END_STATE();
    case 418:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      END_STATE();
    case 419:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      END_STATE();
    case 420:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(600);
      if (lookahead == '%') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(581);
      END_STATE();
    case 421:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 422:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(116);
      END_STATE();
    case 423:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(557);
      END_STATE();
    case 424:
      if (eof) ADVANCE(441);
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(613);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(647);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(616);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(639);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 425:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '&') ADVANCE(520);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == ')') ADVANCE(497);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == ';') ADVANCE(517);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(541);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead == '[') ADVANCE(524);
      if (lookahead == ']') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == '{') ADVANCE(486);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == '<' ||
          lookahead == 'x') ADVANCE(64);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(143);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(250);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 426:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 427:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '(') ADVANCE(494);
      if (lookahead == ')') ADVANCE(497);
      if (lookahead == '*') ADVANCE(499);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(743);
      if (lookahead == '>') ADVANCE(541);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == ']') ADVANCE(525);
      if (lookahead == '^') ADVANCE(934);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(737);
      if (lookahead == 'v') ADVANCE(932);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(139);
      if (lookahead == '~') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(338);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(282);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 428:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == '~') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 429:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(917);
      if (lookahead == '%') ADVANCE(918);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 430:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '$') ADVANCE(500);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '(') ADVANCE(494);
      if (lookahead == ')') ADVANCE(497);
      if (lookahead == '*') ADVANCE(499);
      if (lookahead == ';') ADVANCE(517);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == ']') ADVANCE(525);
      if (lookahead == '|') ADVANCE(521);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 431:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(905);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(843);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(859);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      if (lookahead != 0 &&
          (lookahead < 11 || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 432:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 433:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '(') ADVANCE(494);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == '|') ADVANCE(521);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(814);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(815);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 434:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '~') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(821);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(814);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(815);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 435:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '{') ADVANCE(485);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 436:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == '~') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 437:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == ';') ADVANCE(517);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(728);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 438:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '(') ADVANCE(495);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '[') ADVANCE(523);
      if (lookahead == '{') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(570);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(70);
      END_STATE();
    case 439:
      if (eof) ADVANCE(441);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(571);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(77);
      END_STATE();
    case 440:
      if (eof) ADVANCE(441);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(406);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(477);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == 'D') ADVANCE(271);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(539);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '|') ADVANCE(954);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == '>') ADVANCE(703);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(527);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(527);
      if (lookahead == '-') ADVANCE(529);
      if (lookahead == '[') ADVANCE(531);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(528);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(741);
      if (lookahead == ']') ADVANCE(536);
      if (lookahead == '{') ADVANCE(955);
      if (lookahead == '|') ADVANCE(956);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '/') ADVANCE(542);
      if (lookahead == '[') ADVANCE(533);
      if (lookahead == '\\') ADVANCE(544);
      if (lookahead == '|') ADVANCE(535);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == ']') ADVANCE(534);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_diagram_er_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_diagram_mindmap_token1);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(556);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(552);
      if (lookahead == '{') ADVANCE(556);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(14);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(556);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_mmap_class_token1);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token1);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(568);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(14);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(14);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '%') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(568);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(570);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(70);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(571);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(77);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(557);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(964);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(596);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(913);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(579);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == ':') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == ':') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(594);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(596);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(600);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_md_start);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_md_end);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(587);
      if (lookahead == '{') ADVANCE(596);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(594);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(596);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '{') ADVANCE(600);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(600);
      if (lookahead == '%') ADVANCE(597);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '%') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(700);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(14);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(444);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(14);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(14);
      if (lookahead != 0) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '_') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(688);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(632);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(688);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(659);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(682);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(701);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(702);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(724);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(717);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(718);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(733);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(731);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(518);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(730);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(734);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '{') ADVANCE(953);
      if (lookahead == '|') ADVANCE(951);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(501);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '|') ADVANCE(740);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(740);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(708);
      if (lookahead == '>') ADVANCE(704);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(704);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(800);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(791);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(800);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(826);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(586);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(829);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(585);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(14);
      if (lookahead != 0) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(831);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(831);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(909);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(840);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(443);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(840);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(840);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(838);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(898);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(908);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(896);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(901);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(907);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(875);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(899);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(844);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(849);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(861);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(863);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(848);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(884);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(886);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(895);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(904);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(900);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(853);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(891);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(862);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(902);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(903);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(858);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(845);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(846);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(847);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(854);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(852);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(889);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(890);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(874);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(879);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(880);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(867);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(866);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(877);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(855);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(856);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(865);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(850);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(878);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(909);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(913);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(911);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(911);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(913);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(913);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(916);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(916);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(923);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(917);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_pie_label_token1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(925);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token2);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_rl_token1);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token1);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token2);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_bt_token1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '{') ADVANCE(939);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(936);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(936);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(939);
      if (sym_flow_text_quoted_character_set_1(lookahead)) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(935);
      if (!aux_sym_flow_text_literal_token1_character_set_1(lookahead)) ADVANCE(939);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (!aux_sym_flow_text_literal_token1_character_set_1(lookahead)) ADVANCE(939);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(942);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(941);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(944);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(943);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(942);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(941);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(944);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(943);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(948);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__er_alphanum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_PIPEo);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_o_PIPE);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_RBRACEo);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_o_LBRACE);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_RBRACE_PIPE);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACE);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_er_cardinarity_only_one);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_pk_token1);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_fk_token1);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(962);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(962);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '%') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(964);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(964);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 425},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 424},
  [21] = {.lex_state = 424},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 424},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 424},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 424},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 424},
  [50] = {.lex_state = 424},
  [51] = {.lex_state = 424},
  [52] = {.lex_state = 424},
  [53] = {.lex_state = 424},
  [54] = {.lex_state = 424},
  [55] = {.lex_state = 424},
  [56] = {.lex_state = 424},
  [57] = {.lex_state = 424},
  [58] = {.lex_state = 424},
  [59] = {.lex_state = 424},
  [60] = {.lex_state = 424},
  [61] = {.lex_state = 424},
  [62] = {.lex_state = 424},
  [63] = {.lex_state = 424},
  [64] = {.lex_state = 425},
  [65] = {.lex_state = 433},
  [66] = {.lex_state = 433},
  [67] = {.lex_state = 431},
  [68] = {.lex_state = 433},
  [69] = {.lex_state = 431},
  [70] = {.lex_state = 431},
  [71] = {.lex_state = 431},
  [72] = {.lex_state = 431},
  [73] = {.lex_state = 433},
  [74] = {.lex_state = 433},
  [75] = {.lex_state = 433},
  [76] = {.lex_state = 433},
  [77] = {.lex_state = 433},
  [78] = {.lex_state = 433},
  [79] = {.lex_state = 433},
  [80] = {.lex_state = 433},
  [81] = {.lex_state = 433},
  [82] = {.lex_state = 433},
  [83] = {.lex_state = 433},
  [84] = {.lex_state = 433},
  [85] = {.lex_state = 433},
  [86] = {.lex_state = 433},
  [87] = {.lex_state = 433},
  [88] = {.lex_state = 433},
  [89] = {.lex_state = 433},
  [90] = {.lex_state = 425},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 424},
  [162] = {.lex_state = 424},
  [163] = {.lex_state = 424},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 424},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 424},
  [172] = {.lex_state = 424},
  [173] = {.lex_state = 424},
  [174] = {.lex_state = 424},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 424},
  [178] = {.lex_state = 424},
  [179] = {.lex_state = 424},
  [180] = {.lex_state = 424},
  [181] = {.lex_state = 424},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 424},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 424},
  [187] = {.lex_state = 424},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 424},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 424},
  [196] = {.lex_state = 424},
  [197] = {.lex_state = 424},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 424},
  [201] = {.lex_state = 424},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 424},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 424},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 424},
  [210] = {.lex_state = 424},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 424},
  [214] = {.lex_state = 424},
  [215] = {.lex_state = 424},
  [216] = {.lex_state = 424},
  [217] = {.lex_state = 424},
  [218] = {.lex_state = 424},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 424},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 427},
  [227] = {.lex_state = 438},
  [228] = {.lex_state = 427},
  [229] = {.lex_state = 427},
  [230] = {.lex_state = 427},
  [231] = {.lex_state = 434},
  [232] = {.lex_state = 425},
  [233] = {.lex_state = 425},
  [234] = {.lex_state = 425},
  [235] = {.lex_state = 435},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 434},
  [238] = {.lex_state = 425},
  [239] = {.lex_state = 425},
  [240] = {.lex_state = 427},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 427},
  [243] = {.lex_state = 433},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 425},
  [246] = {.lex_state = 425},
  [247] = {.lex_state = 431},
  [248] = {.lex_state = 431},
  [249] = {.lex_state = 431},
  [250] = {.lex_state = 434},
  [251] = {.lex_state = 433},
  [252] = {.lex_state = 433},
  [253] = {.lex_state = 433},
  [254] = {.lex_state = 44},
  [255] = {.lex_state = 433},
  [256] = {.lex_state = 433},
  [257] = {.lex_state = 433},
  [258] = {.lex_state = 24},
  [259] = {.lex_state = 440},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 425},
  [262] = {.lex_state = 440},
  [263] = {.lex_state = 433},
  [264] = {.lex_state = 431},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 431},
  [267] = {.lex_state = 433},
  [268] = {.lex_state = 431},
  [269] = {.lex_state = 433},
  [270] = {.lex_state = 433},
  [271] = {.lex_state = 433},
  [272] = {.lex_state = 433},
  [273] = {.lex_state = 431},
  [274] = {.lex_state = 433},
  [275] = {.lex_state = 433},
  [276] = {.lex_state = 433},
  [277] = {.lex_state = 433},
  [278] = {.lex_state = 433},
  [279] = {.lex_state = 431},
  [280] = {.lex_state = 44},
  [281] = {.lex_state = 427},
  [282] = {.lex_state = 24},
  [283] = {.lex_state = 433},
  [284] = {.lex_state = 433},
  [285] = {.lex_state = 44},
  [286] = {.lex_state = 427},
  [287] = {.lex_state = 431},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 433},
  [290] = {.lex_state = 431},
  [291] = {.lex_state = 433},
  [292] = {.lex_state = 433},
  [293] = {.lex_state = 24},
  [294] = {.lex_state = 431},
  [295] = {.lex_state = 431},
  [296] = {.lex_state = 440},
  [297] = {.lex_state = 431},
  [298] = {.lex_state = 433},
  [299] = {.lex_state = 433},
  [300] = {.lex_state = 425},
  [301] = {.lex_state = 433},
  [302] = {.lex_state = 431},
  [303] = {.lex_state = 440},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 44},
  [310] = {.lex_state = 433},
  [311] = {.lex_state = 435},
  [312] = {.lex_state = 427},
  [313] = {.lex_state = 440},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 44},
  [317] = {.lex_state = 427},
  [318] = {.lex_state = 440},
  [319] = {.lex_state = 8},
  [320] = {.lex_state = 425},
  [321] = {.lex_state = 425},
  [322] = {.lex_state = 435},
  [323] = {.lex_state = 435},
  [324] = {.lex_state = 425},
  [325] = {.lex_state = 8},
  [326] = {.lex_state = 435},
  [327] = {.lex_state = 437},
  [328] = {.lex_state = 32},
  [329] = {.lex_state = 425},
  [330] = {.lex_state = 425},
  [331] = {.lex_state = 425},
  [332] = {.lex_state = 32},
  [333] = {.lex_state = 437},
  [334] = {.lex_state = 435},
  [335] = {.lex_state = 435},
  [336] = {.lex_state = 437},
  [337] = {.lex_state = 425},
  [338] = {.lex_state = 425},
  [339] = {.lex_state = 425},
  [340] = {.lex_state = 437},
  [341] = {.lex_state = 425},
  [342] = {.lex_state = 8},
  [343] = {.lex_state = 8},
  [344] = {.lex_state = 437},
  [345] = {.lex_state = 437},
  [346] = {.lex_state = 425},
  [347] = {.lex_state = 425},
  [348] = {.lex_state = 437},
  [349] = {.lex_state = 438},
  [350] = {.lex_state = 425},
  [351] = {.lex_state = 437},
  [352] = {.lex_state = 425},
  [353] = {.lex_state = 425},
  [354] = {.lex_state = 437},
  [355] = {.lex_state = 425},
  [356] = {.lex_state = 425},
  [357] = {.lex_state = 425},
  [358] = {.lex_state = 425},
  [359] = {.lex_state = 425},
  [360] = {.lex_state = 425},
  [361] = {.lex_state = 425},
  [362] = {.lex_state = 425},
  [363] = {.lex_state = 425},
  [364] = {.lex_state = 425},
  [365] = {.lex_state = 425},
  [366] = {.lex_state = 425},
  [367] = {.lex_state = 425},
  [368] = {.lex_state = 8},
  [369] = {.lex_state = 425},
  [370] = {.lex_state = 426},
  [371] = {.lex_state = 430},
  [372] = {.lex_state = 426},
  [373] = {.lex_state = 426},
  [374] = {.lex_state = 426},
  [375] = {.lex_state = 430},
  [376] = {.lex_state = 425},
  [377] = {.lex_state = 430},
  [378] = {.lex_state = 430},
  [379] = {.lex_state = 426},
  [380] = {.lex_state = 430},
  [381] = {.lex_state = 24},
  [382] = {.lex_state = 24},
  [383] = {.lex_state = 430},
  [384] = {.lex_state = 24},
  [385] = {.lex_state = 426},
  [386] = {.lex_state = 426},
  [387] = {.lex_state = 426},
  [388] = {.lex_state = 426},
  [389] = {.lex_state = 428},
  [390] = {.lex_state = 7},
  [391] = {.lex_state = 425},
  [392] = {.lex_state = 428},
  [393] = {.lex_state = 433},
  [394] = {.lex_state = 7},
  [395] = {.lex_state = 425},
  [396] = {.lex_state = 7},
  [397] = {.lex_state = 7},
  [398] = {.lex_state = 425},
  [399] = {.lex_state = 436},
  [400] = {.lex_state = 437},
  [401] = {.lex_state = 430},
  [402] = {.lex_state = 437},
  [403] = {.lex_state = 429},
  [404] = {.lex_state = 428},
  [405] = {.lex_state = 428},
  [406] = {.lex_state = 425},
  [407] = {.lex_state = 438},
  [408] = {.lex_state = 436},
  [409] = {.lex_state = 426},
  [410] = {.lex_state = 425},
  [411] = {.lex_state = 434},
  [412] = {.lex_state = 437},
  [413] = {.lex_state = 437},
  [414] = {.lex_state = 425},
  [415] = {.lex_state = 425},
  [416] = {.lex_state = 437},
  [417] = {.lex_state = 430},
  [418] = {.lex_state = 434},
  [419] = {.lex_state = 428},
  [420] = {.lex_state = 43},
  [421] = {.lex_state = 425},
  [422] = {.lex_state = 25},
  [423] = {.lex_state = 426},
  [424] = {.lex_state = 426},
  [425] = {.lex_state = 27},
  [426] = {.lex_state = 21},
  [427] = {.lex_state = 21},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 21},
  [430] = {.lex_state = 21},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 27},
  [433] = {.lex_state = 27},
  [434] = {.lex_state = 27},
  [435] = {.lex_state = 428},
  [436] = {.lex_state = 27},
  [437] = {.lex_state = 434},
  [438] = {.lex_state = 27},
  [439] = {.lex_state = 27},
  [440] = {.lex_state = 27},
  [441] = {.lex_state = 426},
  [442] = {.lex_state = 27},
  [443] = {.lex_state = 27},
  [444] = {.lex_state = 435},
  [445] = {.lex_state = 27},
  [446] = {.lex_state = 27},
  [447] = {.lex_state = 430},
  [448] = {.lex_state = 433},
  [449] = {.lex_state = 425},
  [450] = {.lex_state = 425},
  [451] = {.lex_state = 27},
  [452] = {.lex_state = 428},
  [453] = {.lex_state = 428},
  [454] = {.lex_state = 428},
  [455] = {.lex_state = 426},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 33},
  [458] = {.lex_state = 426},
  [459] = {.lex_state = 425},
  [460] = {.lex_state = 428},
  [461] = {.lex_state = 33},
  [462] = {.lex_state = 43},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 428},
  [465] = {.lex_state = 428},
  [466] = {.lex_state = 426},
  [467] = {.lex_state = 432},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 44},
  [470] = {.lex_state = 434},
  [471] = {.lex_state = 10},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 430},
  [475] = {.lex_state = 430},
  [476] = {.lex_state = 434},
  [477] = {.lex_state = 430},
  [478] = {.lex_state = 430},
  [479] = {.lex_state = 430},
  [480] = {.lex_state = 439},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 6},
  [483] = {.lex_state = 432},
  [484] = {.lex_state = 6},
  [485] = {.lex_state = 430},
  [486] = {.lex_state = 427},
  [487] = {.lex_state = 425},
  [488] = {.lex_state = 10},
  [489] = {.lex_state = 426},
  [490] = {.lex_state = 432},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 438},
  [493] = {.lex_state = 438},
  [494] = {.lex_state = 427},
  [495] = {.lex_state = 438},
  [496] = {.lex_state = 438},
  [497] = {.lex_state = 438},
  [498] = {.lex_state = 438},
  [499] = {.lex_state = 427},
  [500] = {.lex_state = 425},
  [501] = {.lex_state = 10},
  [502] = {.lex_state = 10},
  [503] = {.lex_state = 10},
  [504] = {.lex_state = 439},
  [505] = {.lex_state = 432},
  [506] = {.lex_state = 434},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 425},
  [510] = {.lex_state = 10},
  [511] = {.lex_state = 10},
  [512] = {.lex_state = 10},
  [513] = {.lex_state = 10},
  [514] = {.lex_state = 10},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 10},
  [517] = {.lex_state = 10},
  [518] = {.lex_state = 10},
  [519] = {.lex_state = 5},
  [520] = {.lex_state = 425},
  [521] = {.lex_state = 5},
  [522] = {.lex_state = 5},
  [523] = {.lex_state = 5},
  [524] = {.lex_state = 5},
  [525] = {.lex_state = 5},
  [526] = {.lex_state = 433},
  [527] = {.lex_state = 425},
  [528] = {.lex_state = 430},
  [529] = {.lex_state = 433},
  [530] = {.lex_state = 433},
  [531] = {.lex_state = 433},
  [532] = {.lex_state = 433},
  [533] = {.lex_state = 433},
  [534] = {.lex_state = 433},
  [535] = {.lex_state = 433},
  [536] = {.lex_state = 433},
  [537] = {.lex_state = 433},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 425},
  [540] = {.lex_state = 430},
  [541] = {.lex_state = 46},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 10},
  [544] = {.lex_state = 10},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 10},
  [547] = {.lex_state = 10},
  [548] = {.lex_state = 10},
  [549] = {.lex_state = 10},
  [550] = {.lex_state = 433},
  [551] = {.lex_state = 10},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 428},
  [555] = {.lex_state = 5},
  [556] = {.lex_state = 5},
  [557] = {.lex_state = 5},
  [558] = {.lex_state = 5},
  [559] = {.lex_state = 5},
  [560] = {.lex_state = 10},
  [561] = {.lex_state = 10},
  [562] = {.lex_state = 439},
  [563] = {.lex_state = 428},
  [564] = {.lex_state = 10},
  [565] = {.lex_state = 5},
  [566] = {.lex_state = 10},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 430},
  [569] = {.lex_state = 433},
  [570] = {.lex_state = 10},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 5},
  [573] = {.lex_state = 433},
  [574] = {.lex_state = 10},
  [575] = {.lex_state = 433},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 10},
  [578] = {.lex_state = 425},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 5},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 425},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 5},
  [585] = {.lex_state = 5},
  [586] = {.lex_state = 433},
  [587] = {.lex_state = 5},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 433},
  [590] = {.lex_state = 425},
  [591] = {.lex_state = 428},
  [592] = {.lex_state = 10},
  [593] = {.lex_state = 5},
  [594] = {.lex_state = 10},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 10},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 433},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 5},
  [605] = {.lex_state = 10},
  [606] = {.lex_state = 10},
  [607] = {.lex_state = 10},
  [608] = {.lex_state = 10},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 425},
  [611] = {.lex_state = 428},
  [612] = {.lex_state = 5},
  [613] = {.lex_state = 425},
  [614] = {.lex_state = 428},
  [615] = {.lex_state = 5},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 5},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 25},
  [620] = {.lex_state = 5},
  [621] = {.lex_state = 5},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 5},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 5},
  [626] = {.lex_state = 425},
  [627] = {.lex_state = 5},
  [628] = {.lex_state = 5},
  [629] = {.lex_state = 5},
  [630] = {.lex_state = 5},
  [631] = {.lex_state = 5},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 425},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 425},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 428},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 430},
  [642] = {.lex_state = 433},
  [643] = {.lex_state = 433},
  [644] = {.lex_state = 5},
  [645] = {.lex_state = 5},
  [646] = {.lex_state = 5},
  [647] = {.lex_state = 10},
  [648] = {.lex_state = 425},
  [649] = {.lex_state = 430},
  [650] = {.lex_state = 5},
  [651] = {.lex_state = 433},
  [652] = {.lex_state = 10},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 5},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 5},
  [660] = {.lex_state = 5},
  [661] = {.lex_state = 5},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 5},
  [665] = {.lex_state = 425},
  [666] = {.lex_state = 46},
  [667] = {.lex_state = 25},
  [668] = {.lex_state = 10},
  [669] = {.lex_state = 25},
  [670] = {.lex_state = 5},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 5},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 10},
  [677] = {.lex_state = 10},
  [678] = {.lex_state = 25},
  [679] = {.lex_state = 428},
  [680] = {.lex_state = 10},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 5},
  [683] = {.lex_state = 10},
  [684] = {.lex_state = 10},
  [685] = {.lex_state = 5},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 7},
  [689] = {.lex_state = 7},
  [690] = {.lex_state = 7},
  [691] = {.lex_state = 425},
  [692] = {.lex_state = 10},
  [693] = {.lex_state = 5},
  [694] = {.lex_state = 5},
  [695] = {.lex_state = 5},
  [696] = {.lex_state = 5},
  [697] = {.lex_state = 25},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 10},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 25},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 10},
  [707] = {.lex_state = 425},
  [708] = {.lex_state = 432},
  [709] = {.lex_state = 10},
  [710] = {.lex_state = 25},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 10},
  [713] = {.lex_state = 10},
  [714] = {.lex_state = 10},
  [715] = {.lex_state = 10},
  [716] = {.lex_state = 10},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 10},
  [722] = {.lex_state = 10},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 10},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 425},
  [731] = {.lex_state = 10},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 10},
  [734] = {.lex_state = 426},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 35},
  [738] = {.lex_state = 10},
  [739] = {.lex_state = 425},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 430},
  [743] = {.lex_state = 25},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 425},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 433},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 10},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 433},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 426},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 432},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 426},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 433},
  [774] = {.lex_state = 425},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 425},
  [782] = {.lex_state = 425},
  [783] = {.lex_state = 425},
  [784] = {.lex_state = 426},
  [785] = {.lex_state = 425},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 430},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 426},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 36},
  [797] = {.lex_state = 430},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 5},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 425},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 425},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 35},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 425},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 425},
  [836] = {.lex_state = 430},
  [837] = {.lex_state = 425},
  [838] = {.lex_state = 36},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 420},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 420},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 5},
  [858] = {.lex_state = 37},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 5},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 38},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 36},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 420},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 0},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 39},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 430},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 36},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 45},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 420},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 430},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 425},
  [907] = {.lex_state = 427},
  [908] = {.lex_state = 40},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 36},
  [911] = {.lex_state = 420},
  [912] = {.lex_state = 36},
  [913] = {.lex_state = 420},
  [914] = {.lex_state = 0},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 427},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 426},
  [922] = {.lex_state = 430},
  [923] = {.lex_state = 0},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 433},
  [927] = {.lex_state = 0},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 0},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 5},
  [933] = {.lex_state = 5},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 433},
  [937] = {.lex_state = 433},
  [938] = {.lex_state = 425},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 425},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 425},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 425},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 433},
  [953] = {.lex_state = 425},
  [954] = {.lex_state = 38},
  [955] = {.lex_state = 35},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 425},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 0},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 40},
  [964] = {.lex_state = 425},
  [965] = {.lex_state = 433},
  [966] = {.lex_state = 433},
  [967] = {.lex_state = 425},
  [968] = {.lex_state = 433},
  [969] = {.lex_state = 425},
  [970] = {.lex_state = 425},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 430},
  [973] = {.lex_state = 433},
  [974] = {.lex_state = 427},
  [975] = {.lex_state = 425},
  [976] = {.lex_state = 430},
  [977] = {.lex_state = 0},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 37},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 427},
  [983] = {.lex_state = 41},
  [984] = {.lex_state = 1},
  [985] = {.lex_state = 426},
  [986] = {.lex_state = 433},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_diagram_sequence_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_actor_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_autonumber_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_activate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_deactivate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_note_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_sequence_stmt_links_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_link_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_properties_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_details_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_title_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_rect_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token2] = ACTIONS(1),
    [aux_sym_diagram_class_token1] = ACTIONS(1),
    [aux_sym_diagram_class_token2] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [aux_sym_diagram_state_token1] = ACTIONS(1),
    [aux_sym_diagram_state_token2] = ACTIONS(1),
    [aux_sym_state_stmt_simple_token1] = ACTIONS(1),
    [aux_sym_diagram_gantt_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_dateformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_inclusiveenddates_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_topaxis_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_axisformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_includes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_excludes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_todaymarker_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_section_token1] = ACTIONS(1),
    [aux_sym_diagram_pie_token1] = ACTIONS(1),
    [aux_sym_diagram_flow_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_flow_stmt_direction_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_DASH] = ACTIONS(1),
    [anon_sym_LPAREN_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_RBRACK] = ACTIONS(1),
    [anon_sym_subgraph] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_diagram_er_token1] = ACTIONS(1),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_md_start] = ACTIONS(1),
    [sym_md_end] = ACTIONS(1),
    [aux_sym_direction_tb_token1] = ACTIONS(1),
    [aux_sym_direction_bt_token1] = ACTIONS(1),
    [aux_sym_direction_rl_token1] = ACTIONS(1),
    [aux_sym_direction_lr_token1] = ACTIONS(1),
    [sym_solid_arrow] = ACTIONS(1),
    [sym_solid_open_arrow] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_dotted_point] = ACTIONS(1),
    [aux_sym_note_placement_left_token1] = ACTIONS(1),
    [aux_sym_note_placement_right_token1] = ACTIONS(1),
    [sym_class_reltype_aggregation] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_state_hide_empty_description_token1] = ACTIONS(1),
    [aux_sym_pie_showdata_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token2] = ACTIONS(1),
    [aux_sym_flowchart_direction_rl_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token2] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [aux_sym_flowchart_direction_bt_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [aux_sym_flow_link_arrow_token2] = ACTIONS(1),
    [aux_sym_flow_link_arrow_start_token2] = ACTIONS(1),
    [anon_sym_o_PIPE] = ACTIONS(1),
    [anon_sym_o_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_LBRACE] = ACTIONS(1),
    [sym_er_cardinarity_only_one] = ACTIONS(1),
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_pk_token1] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_fk_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(878),
    [sym_directive] = STATE(246),
    [sym_diagram_sequence] = STATE(856),
    [sym_diagram_class] = STATE(856),
    [sym_diagram_state] = STATE(856),
    [sym_diagram_gantt] = STATE(856),
    [sym_diagram_pie] = STATE(856),
    [sym_diagram_flow] = STATE(856),
    [sym_diagram_er] = STATE(856),
    [sym_diagram_mindmap] = STATE(856),
    [aux_sym_diagram_sequence_repeat1] = STATE(246),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(5),
    [aux_sym_diagram_sequence_token1] = ACTIONS(7),
    [aux_sym_diagram_class_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token2] = ACTIONS(11),
    [aux_sym_diagram_state_token1] = ACTIONS(13),
    [aux_sym_diagram_state_token2] = ACTIONS(15),
    [aux_sym_diagram_gantt_token1] = ACTIONS(17),
    [aux_sym_diagram_pie_token1] = ACTIONS(19),
    [aux_sym_diagram_flow_token1] = ACTIONS(21),
    [aux_sym_diagram_er_token1] = ACTIONS(23),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(25),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(527), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [109] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    STATE(665), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [218] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(648), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [327] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(626), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [436] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(590), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [545] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(539), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [654] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(610), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [763] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(123), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(582), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [872] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(125), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(633), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [981] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(127), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    STATE(691), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1090] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(129), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(613), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1199] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(131), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(578), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1308] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(133), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(139), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(142), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(145), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(148), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(151), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(154), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(157), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(160), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(163), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(166), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(169), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(174), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(177), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(180), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(183), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(189), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(136), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(172), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1412] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(192), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1516] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(194), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1620] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(196), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1724] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym__sequence_actor_word,
    ACTIONS(198), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(204), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(207), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(210), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(213), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(216), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(219), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(222), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(225), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(228), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(231), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(237), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(243), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(249), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(172), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(201), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1828] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1931] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(326), 1,
      sym__newline,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(334), 1,
      sym_sequence_actor,
    STATE(525), 1,
      sym__sequence_participant_type,
    ACTIONS(294), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(33), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(186), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2032] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(339), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(345), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(351), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(357), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(363), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(366), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(369), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(372), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(378), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(381), 1,
      sym__newline,
    ACTIONS(384), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(334), 1,
      sym_sequence_actor,
    STATE(525), 1,
      sym__sequence_participant_type,
    ACTIONS(333), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(21), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(186), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2133] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(172), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(189), 1,
      sym__sequence_actor_word,
    ACTIONS(387), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(393), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(396), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(399), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(402), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(405), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(408), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(411), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(414), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(417), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(420), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(423), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(426), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(429), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(432), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(435), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(438), 1,
      sym__newline,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(390), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2236] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(441), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2339] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(443), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2442] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(445), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2545] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(447), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2648] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(449), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(24), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2751] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2854] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(453), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(26), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2957] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(455), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3060] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3163] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(459), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3266] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(292), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 1,
      sym__newline,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(334), 1,
      sym_sequence_actor,
    STATE(525), 1,
      sym__sequence_participant_type,
    ACTIONS(294), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(21), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(186), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3367] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(30), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3470] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(463), 1,
      sym__newline,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(334), 1,
      sym_sequence_actor,
    STATE(525), 1,
      sym__sequence_participant_type,
    ACTIONS(294), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(21), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(186), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3571] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(467), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3674] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3777] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(471), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3880] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(473), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3983] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4086] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(477), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4189] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(292), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(481), 1,
      sym__newline,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(334), 1,
      sym_sequence_actor,
    STATE(525), 1,
      sym__sequence_participant_type,
    ACTIONS(294), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(35), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(186), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4290] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(483), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4393] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(485), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(46), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4496] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(487), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4599] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(489), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4702] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(491), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4805] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(288), 1,
      sym__newline,
    ACTIONS(493), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(47), 1,
      aux_sym__sequence_subdocument,
    STATE(165), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(323), 1,
      sym_sequence_actor,
    STATE(695), 1,
      sym__sequence_participant_type,
    ACTIONS(254), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(166), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4908] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5008] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5108] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5208] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5308] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5408] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5508] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5608] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5708] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(16), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5808] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5908] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [6008] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [6108] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [6208] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(115), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(124), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(335), 1,
      sym_sequence_actor,
    STATE(644), 1,
      sym__sequence_participant_type,
    ACTIONS(79), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(95), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [6308] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(113), 1,
      sym__sequence_stmt,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(326), 1,
      sym_sequence_actor,
    STATE(661), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(122), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [6408] = 18,
    ACTIONS(497), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(505), 1,
      anon_sym_LPAREN_DASH,
    ACTIONS(507), 1,
      anon_sym_LPAREN_LBRACK,
    ACTIONS(509), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(511), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(513), 1,
      anon_sym_LBRACK_LPAREN,
    ACTIONS(515), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(517), 1,
      anon_sym_GT,
    ACTIONS(519), 1,
      anon_sym_LBRACK_SLASH,
    ACTIONS(521), 1,
      anon_sym_LBRACK_BSLASH,
    STATE(365), 1,
      sym__flow_vertex_kind,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(523), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(495), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    STATE(364), 15,
      sym_flow_vertex_square,
      sym_flow_vertex_circle,
      sym_flow_vertex_ellipse,
      sym_flow_vertex_stadium,
      sym_flow_vertex_subroutine,
      sym_flow_vertex_rect,
      sym_flow_vertex_cylinder,
      sym_flow_vertex_round,
      sym_flow_vertex_diamond,
      sym_flow_vertex_hexagon,
      sym_flow_vertex_odd,
      sym_flow_vertex_trapezoid,
      sym_flow_vertex_inv_trapezoid,
      sym_flow_vertex_leanright,
      sym_flow_vertex_leanleft,
  [6486] = 18,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(73), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6553] = 18,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      sym__newline,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(68), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6620] = 18,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
    ACTIONS(555), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(558), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(561), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(564), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(567), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(570), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(573), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(576), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(579), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(582), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(585), 1,
      sym__newline,
    ACTIONS(588), 1,
      aux_sym_gantt_task_text_token1,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(889), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(67), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(290), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6687] = 18,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(74), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6754] = 18,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(595), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(603), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(605), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(607), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(609), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(611), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(613), 1,
      sym__newline,
    ACTIONS(615), 1,
      aux_sym_gantt_task_text_token1,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(889), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(67), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(290), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6821] = 18,
    ACTIONS(593), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(595), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(603), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(605), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(607), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(609), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(611), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(615), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(617), 1,
      ts_builtin_sym_end,
    ACTIONS(619), 1,
      sym__newline,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(889), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(71), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(290), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6888] = 18,
    ACTIONS(593), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(595), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(603), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(605), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(607), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(609), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(611), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(613), 1,
      sym__newline,
    ACTIONS(615), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(621), 1,
      ts_builtin_sym_end,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(889), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(67), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(290), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [6955] = 18,
    ACTIONS(593), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(595), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(603), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(605), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(607), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(609), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(611), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(615), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(621), 1,
      ts_builtin_sym_end,
    ACTIONS(623), 1,
      sym__newline,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(889), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(69), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(290), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [7022] = 18,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    ACTIONS(627), 1,
      sym__newline,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(74), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7089] = 18,
    ACTIONS(629), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    ACTIONS(634), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(637), 1,
      sym__newline,
    ACTIONS(640), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(643), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(646), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(649), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(652), 1,
      anon_sym_DASH_DASH,
    ACTIONS(655), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(661), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(74), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7156] = 17,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(705), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7219] = 17,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    ACTIONS(672), 1,
      sym__newline,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(672), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7282] = 17,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(310), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7345] = 17,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(310), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7408] = 17,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(705), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7471] = 17,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(705), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7534] = 17,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    ACTIONS(680), 1,
      sym__newline,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(618), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7597] = 17,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(310), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7660] = 17,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(705), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7723] = 17,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(684), 1,
      sym__newline,
    STATE(66), 1,
      sym__state_stmt,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7786] = 16,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(672), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7846] = 16,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(310), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7906] = 16,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(662), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7966] = 16,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(543), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(545), 1,
      aux_sym_state_name_token1,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(65), 1,
      sym__state_stmt,
    STATE(236), 1,
      sym_state_name,
    STATE(277), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [8026] = 16,
    ACTIONS(529), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(535), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(537), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(539), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH,
    ACTIONS(547), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(666), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(668), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(670), 1,
      aux_sym_state_name_token1,
    STATE(277), 1,
      sym_state_hide_empty_description,
    STATE(444), 1,
      sym_state_name,
    STATE(705), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(276), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(275), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [8086] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(688), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(686), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LPAREN_LPAREN,
      anon_sym_LPAREN_DASH,
      anon_sym_LPAREN_LBRACK,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK_PIPE,
      anon_sym_LBRACK_LPAREN,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_LBRACK_SLASH,
      anon_sym_LBRACK_BSLASH,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [8118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(692), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(696), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(700), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(704), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(708), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(712), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(704), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(716), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(720), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(724), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(728), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(732), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(736), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(740), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(744), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(748), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(752), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(756), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(760), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(764), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(768), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(772), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(776), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(780), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(784), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(788), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(792), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(796), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(800), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(802), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(804), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(712), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(708), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(806), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(808), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(776), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(700), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(810), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(812), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(814), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(816), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [9339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(716), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(720), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(818), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(820), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(822), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(824), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(814), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(816), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(724), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(728), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(732), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(736), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(740), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(744), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(696), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(692), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(806), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(808), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(748), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(752), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(756), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(760), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(764), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(802), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(804), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [9999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(768), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [10032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(800), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [10065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(810), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(812), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [10098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(818), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(820), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [10131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(772), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [10164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(796), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [10197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(822), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(824), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [10230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(780), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [10263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(784), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [10296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(788), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [10329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(792), 18,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [10362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(760), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(744), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(712), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(806), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(808), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(700), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(712), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(776), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(708), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(802), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(804), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(810), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(812), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(818), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(820), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(822), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(824), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(796), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(716), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(720), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(704), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(814), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(816), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(806), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(808), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(724), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(810), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(812), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(818), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(820), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(822), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(824), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(792), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(802), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(804), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(764), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(788), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(800), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(708), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(784), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(720), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(796), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(792), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(788), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(784), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(780), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(780), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(732), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(814), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(816), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(736), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(772), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(768), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(740), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(728), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(724), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(800), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(756), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(752), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(716), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(696), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(700), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(692), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [11994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(748), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(748), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(692), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(752), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(756), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(760), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(764), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(768), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(772), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(696), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(744), 17,
      ts_builtin_sym_end,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(740), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(736), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(728), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(704), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(732), 17,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [12506] = 15,
    ACTIONS(826), 1,
      anon_sym_COLON,
    ACTIONS(828), 1,
      anon_sym_STAR,
    ACTIONS(830), 1,
      anon_sym_GT,
    ACTIONS(832), 1,
      sym__dquote_string,
    ACTIONS(834), 1,
      sym_class_reltype_aggregation,
    ACTIONS(838), 1,
      anon_sym_LT,
    ACTIONS(840), 1,
      anon_sym_DASH_DASH,
    ACTIONS(842), 1,
      anon_sym_DOT_DOT,
    STATE(258), 1,
      sym__class_linetype,
    STATE(405), 1,
      sym_class_relation,
    STATE(448), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(384), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(454), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12557] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    ACTIONS(846), 1,
      anon_sym_LPAREN,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
    ACTIONS(852), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(854), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(856), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(858), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(860), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(862), 1,
      sym__newline,
    STATE(480), 1,
      sym_mmap_icon,
    STATE(760), 1,
      sym_mmap_class,
    STATE(407), 6,
      sym_mmap_node_square,
      sym_mmap_node_rounded,
      sym_mmap_node_circle,
      sym_mmap_node_cloud,
      sym_mmap_node_bang,
      sym_mmap_node_hexagon,
  [12608] = 8,
    ACTIONS(866), 1,
      sym__newline,
    STATE(340), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(868), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(872), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(864), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(870), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(412), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [12643] = 13,
    ACTIONS(828), 1,
      anon_sym_STAR,
    ACTIONS(830), 1,
      anon_sym_GT,
    ACTIONS(834), 1,
      sym_class_reltype_aggregation,
    ACTIONS(838), 1,
      anon_sym_LT,
    ACTIONS(840), 1,
      anon_sym_DASH_DASH,
    ACTIONS(842), 1,
      anon_sym_DOT_DOT,
    STATE(258), 1,
      sym__class_linetype,
    STATE(404), 1,
      sym_class_relation,
    STATE(448), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(384), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(454), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12688] = 8,
    ACTIONS(874), 1,
      sym__newline,
    STATE(345), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(868), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(872), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(864), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(870), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(412), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [12723] = 6,
    ACTIONS(878), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(882), 1,
      aux_sym_state_name_token1,
    STATE(256), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(876), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12754] = 9,
    STATE(234), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(474), 1,
      sym__flow_link,
    STATE(540), 1,
      sym_flow_link_arrow_start,
    STATE(788), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(884), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(886), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(888), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(797), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [12791] = 9,
    STATE(233), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(474), 1,
      sym__flow_link,
    STATE(540), 1,
      sym_flow_link_arrow_start,
    STATE(788), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(890), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(892), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(895), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(797), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [12828] = 9,
    STATE(233), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(474), 1,
      sym__flow_link,
    STATE(540), 1,
      sym_flow_link_arrow_start,
    STATE(788), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(886), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(888), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(898), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(797), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [12865] = 10,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 1,
      sym_er_cardinarity_only_one,
    STATE(393), 1,
      sym__er_cardinarity,
    STATE(734), 1,
      sym_er_relation,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(900), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(904), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(906), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(908), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(441), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [12903] = 6,
    ACTIONS(912), 1,
      anon_sym_COLON,
    ACTIONS(916), 1,
      anon_sym_DASH_DASH_GT,
    STATE(619), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(918), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(914), 10,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12933] = 3,
    ACTIONS(922), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(920), 14,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12957] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(702), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(704), 13,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [12981] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(698), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(700), 13,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [13005] = 7,
    STATE(588), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(868), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(872), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(864), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(870), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(412), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [13037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(928), 1,
      aux_sym_class_label_token1,
    STATE(255), 1,
      sym_state_description,
    ACTIONS(926), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(924), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [13066] = 5,
    ACTIONS(932), 1,
      anon_sym_TILDE,
    ACTIONS(934), 1,
      anon_sym_LT,
    STATE(312), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [13093] = 4,
    ACTIONS(938), 1,
      anon_sym_COLON,
    ACTIONS(940), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(936), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13118] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(944), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(942), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13141] = 6,
    ACTIONS(946), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(953), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(951), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(245), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(949), 8,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
  [13170] = 14,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(956), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(958), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(960), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(962), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(964), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(966), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(968), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(970), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(972), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(974), 1,
      aux_sym_diagram_mindmap_token1,
    ACTIONS(976), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(245), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [13215] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(980), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(978), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13237] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(982), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13259] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(988), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(986), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13281] = 9,
    ACTIONS(878), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_state_composite_body,
    STATE(298), 1,
      sym__state_annotation,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(990), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(992), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(994), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(284), 3,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [13315] = 3,
    ACTIONS(998), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(996), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13337] = 3,
    ACTIONS(1002), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1000), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13359] = 3,
    ACTIONS(1006), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1004), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13381] = 12,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1012), 1,
      anon_sym_end,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(309), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(768), 1,
      sym__flow_stmt,
    STATE(916), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13421] = 3,
    ACTIONS(1018), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1016), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13443] = 3,
    ACTIONS(1022), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1020), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13465] = 3,
    ACTIONS(1026), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1024), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13487] = 10,
    ACTIONS(828), 1,
      anon_sym_STAR,
    ACTIONS(830), 1,
      anon_sym_GT,
    ACTIONS(838), 1,
      anon_sym_LT,
    ACTIONS(1028), 1,
      sym__class_name,
    ACTIONS(1032), 1,
      sym_class_reltype_aggregation,
    STATE(614), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1030), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(454), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [13523] = 11,
    ACTIONS(1034), 1,
      ts_builtin_sym_end,
    ACTIONS(1036), 1,
      anon_sym_class,
    ACTIONS(1038), 1,
      anon_sym_LT_LT,
    ACTIONS(1040), 1,
      sym__class_name,
    ACTIONS(1042), 1,
      sym__bquote_string,
    STATE(226), 1,
      sym_class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(679), 1,
      aux_sym_class_name_body_repeat1,
    STATE(732), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13561] = 5,
    ACTIONS(1046), 1,
      sym__class_name,
    ACTIONS(1048), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1050), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1044), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [13587] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1052), 1,
      ts_builtin_sym_end,
    ACTIONS(1054), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1056), 1,
      sym__newline,
    ACTIONS(1058), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1060), 1,
      aux_sym_pie_label_token1,
    STATE(341), 1,
      sym_pie_showdata,
    STATE(839), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(337), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(450), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13625] = 11,
    ACTIONS(1036), 1,
      anon_sym_class,
    ACTIONS(1038), 1,
      anon_sym_LT_LT,
    ACTIONS(1040), 1,
      sym__class_name,
    ACTIONS(1042), 1,
      sym__bquote_string,
    ACTIONS(1062), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(679), 1,
      aux_sym_class_name_body_repeat1,
    STATE(732), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13663] = 3,
    ACTIONS(1066), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1064), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13685] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1070), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1068), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1074), 1,
      sym__sequence_actor_word,
    STATE(288), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1076), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1072), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13735] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1080), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1078), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13757] = 3,
    ACTIONS(1084), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1082), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13779] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1088), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1086), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13801] = 3,
    ACTIONS(1092), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1090), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13823] = 3,
    ACTIONS(1096), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1094), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13845] = 3,
    ACTIONS(1100), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1098), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13867] = 3,
    ACTIONS(1104), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1102), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13889] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1108), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1106), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [13911] = 3,
    ACTIONS(1112), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1110), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13933] = 3,
    ACTIONS(1116), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1114), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13955] = 3,
    ACTIONS(1120), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1118), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13977] = 3,
    ACTIONS(1124), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1122), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [13999] = 3,
    ACTIONS(1128), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14021] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(700), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [14043] = 12,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1130), 1,
      anon_sym_end,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(309), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(768), 1,
      sym__flow_stmt,
    STATE(974), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14083] = 3,
    ACTIONS(1134), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [14105] = 5,
    ACTIONS(1046), 1,
      sym__class_name,
    ACTIONS(1048), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1134), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1132), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [14131] = 3,
    ACTIONS(1138), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1136), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14153] = 3,
    ACTIONS(1142), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1140), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14175] = 12,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1144), 1,
      anon_sym_end,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(309), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(768), 1,
      sym__flow_stmt,
    STATE(907), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14215] = 3,
    ACTIONS(1050), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1044), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [14237] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1148), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1146), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [14259] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1152), 1,
      sym__sequence_actor_word,
    STATE(288), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1155), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1150), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14287] = 3,
    ACTIONS(1159), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1157), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14309] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1163), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1161), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [14331] = 3,
    ACTIONS(1167), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14353] = 3,
    ACTIONS(944), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(942), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14375] = 10,
    ACTIONS(828), 1,
      anon_sym_STAR,
    ACTIONS(830), 1,
      anon_sym_GT,
    ACTIONS(838), 1,
      anon_sym_LT,
    ACTIONS(1032), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1169), 1,
      sym__class_name,
    STATE(639), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1171), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(454), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [14411] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1173), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [14433] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(704), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [14455] = 11,
    ACTIONS(1036), 1,
      anon_sym_class,
    ACTIONS(1038), 1,
      anon_sym_LT_LT,
    ACTIONS(1040), 1,
      sym__class_name,
    ACTIONS(1042), 1,
      sym__bquote_string,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(679), 1,
      aux_sym_class_name_body_repeat1,
    STATE(732), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [14493] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1181), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1179), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [14515] = 3,
    ACTIONS(1185), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1183), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14537] = 3,
    ACTIONS(1189), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1187), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14559] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1054), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1058), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1060), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1191), 1,
      ts_builtin_sym_end,
    ACTIONS(1193), 1,
      sym__newline,
    STATE(339), 1,
      sym_pie_showdata,
    STATE(839), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(329), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(450), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14597] = 3,
    ACTIONS(1197), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1195), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14619] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1201), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1199), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [14641] = 10,
    ACTIONS(1036), 1,
      anon_sym_class,
    ACTIONS(1038), 1,
      anon_sym_LT_LT,
    ACTIONS(1040), 1,
      sym__class_name,
    ACTIONS(1042), 1,
      sym__bquote_string,
    STATE(226), 1,
      sym_class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(657), 1,
      sym__class_stmt,
    STATE(679), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [14676] = 11,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1205), 1,
      anon_sym_RBRACE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(747), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14713] = 11,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    ACTIONS(1219), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(747), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14750] = 11,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(747), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14787] = 11,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(747), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14824] = 11,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(747), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14861] = 11,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1227), 1,
      anon_sym_end,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(316), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(768), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14898] = 3,
    ACTIONS(1229), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(632), 11,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [14919] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(942), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      aux_sym_sequence_stmt_participant_token1,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
  [14938] = 3,
    ACTIONS(1233), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1231), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [14959] = 10,
    ACTIONS(1036), 1,
      anon_sym_class,
    ACTIONS(1038), 1,
      anon_sym_LT_LT,
    ACTIONS(1040), 1,
      sym__class_name,
    ACTIONS(1042), 1,
      sym__bquote_string,
    STATE(226), 1,
      sym_class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(679), 1,
      aux_sym_class_name_body_repeat1,
    STATE(681), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [14994] = 11,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    ACTIONS(1235), 1,
      anon_sym_RBRACE,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(747), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [15031] = 11,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    ACTIONS(1237), 1,
      sym__newline,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(569), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [15068] = 11,
    ACTIONS(1239), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1242), 1,
      anon_sym_subgraph,
    ACTIONS(1245), 1,
      anon_sym_end,
    ACTIONS(1247), 1,
      sym__alpha_num_token,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(316), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(768), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [15105] = 3,
    ACTIONS(1252), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1250), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15126] = 10,
    ACTIONS(1036), 1,
      anon_sym_class,
    ACTIONS(1038), 1,
      anon_sym_LT_LT,
    ACTIONS(1040), 1,
      sym__class_name,
    ACTIONS(1042), 1,
      sym__bquote_string,
    STATE(226), 1,
      sym_class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(679), 1,
      aux_sym_class_name_body_repeat1,
    STATE(732), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [15161] = 11,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    ACTIONS(1254), 1,
      sym__newline,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(651), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [15198] = 5,
    ACTIONS(1258), 1,
      anon_sym_AMP,
    STATE(338), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1260), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1256), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15222] = 7,
    ACTIONS(910), 1,
      sym_er_cardinarity_only_one,
    STATE(985), 1,
      sym__er_cardinarity,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(904), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(906), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(908), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(441), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [15250] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1262), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15268] = 7,
    ACTIONS(1264), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1268), 1,
      sym_solid_open_arrow,
    ACTIONS(1270), 1,
      anon_sym_DASH_DASH_GT,
    STATE(390), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(689), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1266), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [15296] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1054), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1060), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1272), 1,
      ts_builtin_sym_end,
    ACTIONS(1274), 1,
      sym__newline,
    STATE(839), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(330), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(450), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15328] = 10,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(526), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [15362] = 7,
    ACTIONS(1264), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1268), 1,
      sym_solid_open_arrow,
    ACTIONS(1270), 1,
      anon_sym_DASH_DASH_GT,
    STATE(396), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(689), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1266), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [15390] = 10,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1276), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(542), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [15424] = 5,
    ACTIONS(1280), 1,
      anon_sym_RBRACK,
    ACTIONS(1282), 1,
      aux_sym_flow_text_literal_token1,
    STATE(328), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1278), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [15448] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1054), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1060), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1274), 1,
      sym__newline,
    ACTIONS(1285), 1,
      ts_builtin_sym_end,
    STATE(839), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(330), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(450), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15480] = 9,
    ACTIONS(1287), 1,
      ts_builtin_sym_end,
    ACTIONS(1289), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1292), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1295), 1,
      sym__newline,
    ACTIONS(1298), 1,
      aux_sym_pie_label_token1,
    STATE(839), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(330), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(450), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15512] = 5,
    ACTIONS(1303), 1,
      anon_sym_AMP,
    STATE(331), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1306), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1301), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15536] = 5,
    ACTIONS(1310), 1,
      anon_sym_RBRACK,
    ACTIONS(1312), 1,
      aux_sym_flow_text_literal_token1,
    STATE(328), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1308), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [15560] = 10,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1314), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(542), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [15594] = 7,
    ACTIONS(1264), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1268), 1,
      sym_solid_open_arrow,
    ACTIONS(1270), 1,
      anon_sym_DASH_DASH_GT,
    STATE(394), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(689), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1266), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [15622] = 7,
    ACTIONS(1264), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1268), 1,
      sym_solid_open_arrow,
    ACTIONS(1270), 1,
      anon_sym_DASH_DASH_GT,
    STATE(397), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(689), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1266), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [15650] = 10,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1316), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(542), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [15684] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1054), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1060), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1191), 1,
      ts_builtin_sym_end,
    ACTIONS(1274), 1,
      sym__newline,
    STATE(839), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(330), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(450), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15716] = 5,
    ACTIONS(1258), 1,
      anon_sym_AMP,
    STATE(331), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1320), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1318), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15740] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1054), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1060), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1285), 1,
      ts_builtin_sym_end,
    ACTIONS(1322), 1,
      sym__newline,
    STATE(839), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(324), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(450), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15772] = 10,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1324), 1,
      sym__newline,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(468), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [15806] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1054), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1060), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1191), 1,
      ts_builtin_sym_end,
    ACTIONS(1193), 1,
      sym__newline,
    STATE(839), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(329), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(450), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [15838] = 10,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(747), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [15872] = 10,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1215), 1,
      anon_sym_LT_LT,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(586), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [15906] = 10,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1326), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(542), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [15940] = 10,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    ACTIONS(1328), 1,
      sym__newline,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(473), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [15974] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1332), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1330), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15993] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1336), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1334), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16012] = 9,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(472), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [16043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1340), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__newline,
    ACTIONS(1338), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
      anon_sym_LBRACE_LBRACE,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [16064] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1344), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1342), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16083] = 9,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(542), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [16114] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1346), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16133] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1352), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1350), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16152] = 9,
    ACTIONS(1008), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1010), 1,
      anon_sym_subgraph,
    ACTIONS(1014), 1,
      sym__alpha_num_token,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(232), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(473), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(638), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [16183] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1306), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1301), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16202] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1356), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1354), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16221] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1360), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1358), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16240] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1364), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1362), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16259] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1368), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1366), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16278] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1372), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1370), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16297] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1376), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1374), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16316] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1380), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1378), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16335] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1384), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1382), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16354] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1388), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1386), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16373] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1392), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1390), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16392] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1396), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1394), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16411] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1400), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1398), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16430] = 9,
    ACTIONS(1203), 1,
      anon_sym_TILDE,
    ACTIONS(1207), 1,
      anon_sym_PLUS,
    ACTIONS(1209), 1,
      anon_sym_DASH,
    ACTIONS(1211), 1,
      anon_sym_POUND,
    ACTIONS(1217), 1,
      sym__alpha_num_token,
    STATE(380), 1,
      aux_sym_class_method_line_repeat1,
    STATE(740), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1213), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [16460] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1402), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(890), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16478] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1404), 1,
      sym__newline,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(636), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16504] = 6,
    ACTIONS(1412), 1,
      anon_sym_STAR,
    ACTIONS(1414), 1,
      anon_sym_DOLLAR,
    STATE(383), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1408), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1410), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16528] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    ACTIONS(1416), 1,
      ts_builtin_sym_end,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(726), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16554] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    ACTIONS(1418), 1,
      sym__newline,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(658), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16580] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    ACTIONS(1420), 1,
      ts_builtin_sym_end,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(726), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16606] = 6,
    ACTIONS(1424), 1,
      anon_sym_STAR,
    ACTIONS(1426), 1,
      anon_sym_DOLLAR,
    STATE(383), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1410), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1422), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16630] = 9,
    ACTIONS(1428), 1,
      sym__newline,
    ACTIONS(1430), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1432), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1434), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(500), 1,
      sym__er_attribute_key_type,
    STATE(886), 1,
      sym_er_attribute_comment,
    STATE(920), 1,
      sym__er_word,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(781), 2,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [16660] = 6,
    ACTIONS(1438), 1,
      anon_sym_STAR,
    ACTIONS(1440), 1,
      anon_sym_DOLLAR,
    STATE(383), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1410), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1436), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16684] = 6,
    ACTIONS(1444), 1,
      anon_sym_STAR,
    ACTIONS(1446), 1,
      anon_sym_DOLLAR,
    STATE(383), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1410), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1442), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16708] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    ACTIONS(1448), 1,
      ts_builtin_sym_end,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(726), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16734] = 6,
    ACTIONS(1452), 1,
      anon_sym_STAR,
    ACTIONS(1454), 1,
      anon_sym_DOLLAR,
    STATE(383), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1410), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1450), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16758] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1458), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1456), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [16776] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1462), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1460), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [16794] = 4,
    STATE(383), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1466), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1464), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [16814] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1471), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1469), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [16832] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    ACTIONS(1473), 1,
      ts_builtin_sym_end,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(726), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16858] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(636), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16881] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(726), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16904] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    STATE(235), 1,
      sym_er_entity_name,
    STATE(663), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(720), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [16927] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1048), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1044), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16943] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(1475), 1,
      anon_sym_PLUS,
    ACTIONS(1477), 1,
      anon_sym_DASH,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(944), 1,
      sym_sequence_actor,
    STATE(630), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [16969] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1479), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [16983] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1048), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1132), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16999] = 5,
    ACTIONS(1481), 1,
      anon_sym_DASH_DASH,
    STATE(321), 1,
      sym__er_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(395), 2,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
    ACTIONS(1483), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [17019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(1475), 1,
      anon_sym_PLUS,
    ACTIONS(1477), 1,
      anon_sym_DASH,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(934), 1,
      sym_sequence_actor,
    STATE(521), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [17045] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1485), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [17059] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(1475), 1,
      anon_sym_PLUS,
    ACTIONS(1477), 1,
      anon_sym_DASH,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(928), 1,
      sym_sequence_actor,
    STATE(620), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [17085] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    ACTIONS(1475), 1,
      anon_sym_PLUS,
    ACTIONS(1477), 1,
      anon_sym_DASH,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(960), 1,
      sym_sequence_actor,
    STATE(625), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [17111] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1487), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [17125] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1048), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1132), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [17140] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1491), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1489), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [17155] = 6,
    ACTIONS(1495), 1,
      sym__alpha_num_token,
    STATE(447), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(761), 1,
      sym_flow_vertex_text,
    STATE(982), 1,
      sym_flow_vertex_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1493), 2,
      anon_sym_SEMI,
      sym__newline,
  [17176] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1499), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1497), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [17191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1505), 1,
      sym_pie_title,
    ACTIONS(1503), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_pie_label_token1,
    ACTIONS(1501), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [17210] = 7,
    ACTIONS(1042), 1,
      sym__bquote_string,
    ACTIONS(1507), 1,
      sym__class_name,
    ACTIONS(1509), 1,
      sym__dquote_string,
    STATE(242), 1,
      sym_class_name_body,
    STATE(554), 1,
      aux_sym_class_name_body_repeat1,
    STATE(640), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17233] = 7,
    ACTIONS(1042), 1,
      sym__bquote_string,
    ACTIONS(1507), 1,
      sym__class_name,
    ACTIONS(1511), 1,
      sym__dquote_string,
    STATE(242), 1,
      sym_class_name_body,
    STATE(554), 1,
      aux_sym_class_name_body_repeat1,
    STATE(616), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17256] = 6,
    ACTIONS(1513), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1515), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1517), 1,
      aux_sym_note_placement_right_token1,
    STATE(617), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(860), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [17277] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(858), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(860), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(1519), 1,
      ts_builtin_sym_end,
    ACTIONS(1521), 1,
      sym__newline,
    STATE(504), 1,
      sym_mmap_icon,
    STATE(794), 1,
      sym_mmap_class,
  [17302] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1048), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1044), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [17317] = 6,
    ACTIONS(1523), 1,
      anon_sym_RBRACE,
    ACTIONS(1525), 1,
      sym__er_alphanum,
    STATE(792), 1,
      sym_er_attribute_type,
    STATE(986), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(423), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [17338] = 6,
    ACTIONS(1515), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1517), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1527), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(629), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(860), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [17359] = 4,
    ACTIONS(1529), 1,
      anon_sym_TILDE,
    STATE(476), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17376] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1533), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1531), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [17391] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1537), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1535), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [17406] = 6,
    ACTIONS(1515), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1517), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1539), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(674), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(860), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [17427] = 6,
    ACTIONS(1515), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1517), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1541), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(628), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(860), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [17448] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1545), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1543), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [17463] = 4,
    ACTIONS(1549), 1,
      sym__alpha_num_token,
    STATE(417), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1547), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [17480] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1132), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17492] = 6,
    ACTIONS(1042), 1,
      sym__bquote_string,
    ACTIONS(1507), 1,
      sym__class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(538), 1,
      sym_class_name,
    STATE(554), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17512] = 4,
    ACTIONS(1552), 1,
      sym__alpha_num_token,
    STATE(462), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1554), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [17528] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1556), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [17540] = 5,
    ACTIONS(1558), 1,
      sym__dquote_string,
    STATE(231), 1,
      sym_state_alias,
    STATE(250), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17558] = 5,
    ACTIONS(1525), 1,
      sym__er_alphanum,
    ACTIONS(1560), 1,
      anon_sym_RBRACE,
    STATE(792), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(424), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [17576] = 5,
    ACTIONS(1562), 1,
      anon_sym_RBRACE,
    ACTIONS(1564), 1,
      sym__er_alphanum,
    STATE(792), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(424), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [17594] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1569), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(937), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17612] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1571), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1573), 1,
      sym_md_start,
    STATE(953), 1,
      sym_mmap_node_content,
    STATE(494), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [17632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1571), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1573), 1,
      sym_md_start,
    STATE(952), 1,
      sym_mmap_node_content,
    STATE(494), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [17652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1571), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1573), 1,
      sym_md_start,
    STATE(950), 1,
      sym_mmap_node_content,
    STATE(494), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [17672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1575), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1577), 1,
      sym_md_start,
    STATE(949), 1,
      sym_mmap_node_content,
    STATE(727), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [17692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1575), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1577), 1,
      sym_md_start,
    STATE(948), 1,
      sym_mmap_node_content,
    STATE(727), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [17712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1571), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1573), 1,
      sym_md_start,
    STATE(947), 1,
      sym_mmap_node_content,
    STATE(494), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [17732] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1579), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(736), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17750] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1581), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(938), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17768] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1583), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(958), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17786] = 6,
    ACTIONS(1042), 1,
      sym__bquote_string,
    ACTIONS(1507), 1,
      sym__class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(554), 1,
      aux_sym_class_name_body_repeat1,
    STATE(640), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17806] = 5,
    ACTIONS(1585), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1587), 1,
      sym_flow_text_quoted,
    STATE(461), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(971), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17824] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1044), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17836] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1589), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(964), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17854] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1591), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(965), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17872] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1593), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(966), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17890] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1595), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [17902] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1597), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(967), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17920] = 5,
    ACTIONS(1585), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1599), 1,
      sym_flow_text_quoted,
    STATE(461), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(968), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17938] = 5,
    ACTIONS(912), 1,
      anon_sym_COLON,
    ACTIONS(916), 1,
      anon_sym_DASH_DASH_GT,
    STATE(667), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(914), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17956] = 5,
    ACTIONS(1585), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1601), 1,
      sym_flow_text_quoted,
    STATE(461), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(969), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17974] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1603), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(970), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [17992] = 4,
    ACTIONS(1607), 1,
      sym__alpha_num_token,
    STATE(417), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1605), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [18008] = 5,
    ACTIONS(840), 1,
      anon_sym_DASH_DASH,
    ACTIONS(842), 1,
      anon_sym_DOT_DOT,
    STATE(293), 1,
      sym__class_linetype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(384), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [18026] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1609), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [18038] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1611), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [18050] = 5,
    ACTIONS(1567), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1613), 1,
      sym_flow_text_quoted,
    STATE(332), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(735), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [18068] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1615), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [18080] = 6,
    ACTIONS(1617), 1,
      sym__class_name,
    ACTIONS(1619), 1,
      sym__bquote_string,
    STATE(411), 1,
      sym_class_name_body,
    STATE(506), 1,
      sym_class_name,
    STATE(611), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18100] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1621), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [18112] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1623), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [18124] = 5,
    ACTIONS(1625), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1627), 1,
      aux_sym_note_placement_right_token1,
    STATE(678), 1,
      sym_state_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(704), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [18142] = 4,
    ACTIONS(1629), 1,
      aux_sym_flow_text_literal_token1,
    STATE(457), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1278), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [18158] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1632), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [18170] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1634), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [18182] = 6,
    ACTIONS(1042), 1,
      sym__bquote_string,
    ACTIONS(1617), 1,
      sym__class_name,
    STATE(242), 1,
      sym_class_name_body,
    STATE(563), 1,
      aux_sym_class_name_body_repeat1,
    STATE(729), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18202] = 4,
    ACTIONS(1636), 1,
      aux_sym_flow_text_literal_token1,
    STATE(457), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1308), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [18218] = 4,
    ACTIONS(1638), 1,
      sym__alpha_num_token,
    STATE(462), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1547), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [18234] = 5,
    ACTIONS(1625), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1627), 1,
      aux_sym_note_placement_right_token1,
    STATE(669), 1,
      sym_state_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(704), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [18252] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1641), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [18264] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1643), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [18276] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1645), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [18288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1649), 1,
      aux_sym_class_label_token1,
    STATE(787), 1,
      sym_class_label,
    ACTIONS(1647), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18305] = 4,
    ACTIONS(1651), 1,
      ts_builtin_sym_end,
    STATE(481), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1653), 2,
      anon_sym_SEMI,
      sym__newline,
  [18320] = 3,
    ACTIONS(1655), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1245), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [18333] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1250), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [18344] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1657), 1,
      sym__newline,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(978), 1,
      sym_sequence_text,
  [18363] = 4,
    ACTIONS(1326), 1,
      ts_builtin_sym_end,
    STATE(508), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1661), 2,
      anon_sym_SEMI,
      sym__newline,
  [18378] = 4,
    ACTIONS(1314), 1,
      ts_builtin_sym_end,
    STATE(491), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1663), 2,
      anon_sym_SEMI,
      sym__newline,
  [18393] = 5,
    ACTIONS(1665), 1,
      sym__alpha_num_token,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(369), 1,
      sym_flow_node,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18410] = 3,
    STATE(377), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1667), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [18423] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1231), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [18434] = 3,
    STATE(371), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1669), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [18447] = 3,
    STATE(375), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1671), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [18460] = 3,
    STATE(378), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1673), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [18473] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(858), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1519), 1,
      ts_builtin_sym_end,
    ACTIONS(1521), 1,
      sym__newline,
    STATE(794), 1,
      sym_mmap_class,
  [18492] = 4,
    ACTIONS(1314), 1,
      ts_builtin_sym_end,
    STATE(507), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1663), 2,
      anon_sym_SEMI,
      sym__newline,
  [18507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1675), 1,
      sym__sequence_actor_word,
    STATE(482), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1150), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [18524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(928), 1,
      aux_sym_class_label_token1,
    STATE(255), 1,
      sym_state_description,
    ACTIONS(924), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1678), 1,
      sym__sequence_actor_word,
    STATE(482), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1072), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [18558] = 3,
    ACTIONS(686), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1680), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [18571] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1682), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [18582] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1684), 4,
      sym__newline,
      aux_sym_pie_label_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [18593] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1686), 1,
      sym__newline,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(957), 1,
      sym_sequence_text,
  [18612] = 4,
    STATE(766), 1,
      sym__er_word,
    STATE(770), 1,
      sym_er_role,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1688), 2,
      aux_sym_pie_label_token1,
      sym__er_alphanum,
  [18627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1649), 1,
      aux_sym_class_label_token1,
    STATE(757), 1,
      sym_class_label,
    ACTIONS(1690), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18644] = 4,
    ACTIONS(1326), 1,
      ts_builtin_sym_end,
    STATE(507), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1661), 2,
      anon_sym_SEMI,
      sym__newline,
  [18659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1694), 1,
      sym__newline,
    ACTIONS(1692), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [18674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1698), 1,
      sym__newline,
    ACTIONS(1696), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [18689] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1700), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [18700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1704), 1,
      sym__newline,
    ACTIONS(1702), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [18715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1708), 1,
      sym__newline,
    ACTIONS(1706), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [18730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1712), 1,
      sym__newline,
    ACTIONS(1710), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [18745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1716), 1,
      sym__newline,
    ACTIONS(1714), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [18760] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1718), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [18771] = 5,
    ACTIONS(1430), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1720), 1,
      sym__newline,
    STATE(914), 1,
      sym_er_attribute_comment,
    STATE(920), 1,
      sym__er_word,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18788] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1722), 1,
      sym__newline,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(883), 1,
      sym_sequence_text,
  [18807] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1724), 1,
      sym__newline,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(941), 1,
      sym_sequence_text,
  [18826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1726), 1,
      sym__newline,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(925), 1,
      sym_sequence_text,
  [18845] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(858), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1728), 1,
      ts_builtin_sym_end,
    ACTIONS(1730), 1,
      sym__newline,
    STATE(776), 1,
      sym_mmap_class,
  [18864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1649), 1,
      aux_sym_class_label_token1,
    STATE(769), 1,
      sym_class_label,
    ACTIONS(1732), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18881] = 4,
    ACTIONS(1736), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1738), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1734), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18896] = 4,
    ACTIONS(1740), 1,
      ts_builtin_sym_end,
    STATE(507), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1742), 2,
      anon_sym_SEMI,
      sym__newline,
  [18911] = 4,
    ACTIONS(1276), 1,
      ts_builtin_sym_end,
    STATE(507), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1745), 2,
      anon_sym_SEMI,
      sym__newline,
  [18926] = 3,
    STATE(972), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(886), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [18939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(814), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [18955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(803), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [18971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(879), 1,
      sym_sequence_text,
  [18987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(877), 1,
      sym_sequence_text,
  [19003] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(876), 1,
      sym_sequence_text,
  [19019] = 4,
    ACTIONS(1062), 1,
      ts_builtin_sym_end,
    ACTIONS(1747), 1,
      sym__newline,
    STATE(635), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(875), 1,
      sym_sequence_text,
  [19049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(882), 1,
      sym_sequence_text,
  [19065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(917), 1,
      sym_sequence_text,
  [19081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(873), 1,
      sym_sequence_actor,
  [19097] = 4,
    ACTIONS(1749), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1751), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(520), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(891), 1,
      sym_sequence_actor,
  [19127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(872), 1,
      sym_sequence_actor,
  [19143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(871), 1,
      sym_sequence_actor,
  [19159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(870), 1,
      sym_sequence_actor,
  [19175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      sym__sequence_actor_word,
    STATE(484), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(701), 1,
      sym_sequence_actor,
  [19191] = 4,
    ACTIONS(1235), 1,
      anon_sym_RBRACE,
    ACTIONS(1756), 1,
      sym__newline,
    STATE(573), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19205] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1758), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19219] = 4,
    ACTIONS(1760), 1,
      sym__alpha_num_token,
    STATE(641), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(973), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19233] = 4,
    ACTIONS(1235), 1,
      anon_sym_RBRACE,
    ACTIONS(1756), 1,
      sym__newline,
    STATE(575), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19247] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1762), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [19257] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1764), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [19267] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1766), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [19277] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1768), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [19287] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1770), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [19297] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1772), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [19307] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1774), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [19317] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1776), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [19327] = 3,
    ACTIONS(1778), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1732), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19339] = 4,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1780), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(520), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19353] = 4,
    ACTIONS(1782), 1,
      sym__alpha_num_token,
    STATE(420), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(509), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19367] = 4,
    ACTIONS(1784), 1,
      anon_sym_COLON,
    ACTIONS(1786), 1,
      aux_sym_gantt_task_text_token1,
    STATE(666), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19381] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1740), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1788), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(171), 1,
      sym_sequence_text,
    STATE(172), 1,
      sym__sequence_rest_text,
  [19407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(874), 1,
      sym_sequence_text,
  [19423] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1790), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(851), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [19449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1792), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(189), 1,
      sym_sequence_text,
    STATE(206), 1,
      sym__sequence_rest_text,
  [19465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1792), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(185), 1,
      sym_sequence_text,
    STATE(206), 1,
      sym__sequence_rest_text,
  [19481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1792), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(182), 1,
      sym_sequence_text,
    STATE(206), 1,
      sym__sequence_rest_text,
  [19497] = 3,
    ACTIONS(1796), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1794), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(850), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [19525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(849), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [19541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1792), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(176), 1,
      sym_sequence_text,
    STATE(206), 1,
      sym__sequence_rest_text,
  [19557] = 4,
    ACTIONS(1798), 1,
      sym__class_name,
    ACTIONS(1800), 1,
      sym__bquote_string,
    STATE(591), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(847), 1,
      sym_sequence_actor,
  [19587] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(893), 1,
      sym_sequence_actor,
  [19603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(894), 1,
      sym_sequence_actor,
  [19619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(895), 1,
      sym_sequence_actor,
  [19635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(896), 1,
      sym_sequence_actor,
  [19651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(898), 1,
      sym_sequence_text,
  [19667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(899), 1,
      sym_sequence_text,
  [19683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1804), 1,
      sym__newline,
    ACTIONS(1802), 2,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
  [19697] = 4,
    ACTIONS(1800), 1,
      sym__bquote_string,
    ACTIONS(1806), 1,
      sym__class_name,
    STATE(591), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(900), 1,
      sym_sequence_text,
  [19727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(846), 1,
      sym_sequence_actor,
  [19743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1788), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(172), 1,
      sym__sequence_rest_text,
    STATE(203), 1,
      sym_sequence_text,
  [19759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1788), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(167), 1,
      sym_sequence_text,
    STATE(172), 1,
      sym__sequence_rest_text,
  [19775] = 4,
    ACTIONS(1808), 1,
      sym__alpha_num_token,
    STATE(447), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(975), 1,
      sym_flow_vertex_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19789] = 4,
    ACTIONS(1810), 1,
      anon_sym_RBRACE,
    ACTIONS(1812), 1,
      sym__newline,
    STATE(589), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1814), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(98), 1,
      sym__sequence_rest_text,
    STATE(123), 1,
      sym_sequence_text,
  [19819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1814), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(98), 1,
      sym__sequence_rest_text,
    STATE(120), 1,
      sym_sequence_text,
  [19835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(845), 1,
      sym_sequence_actor,
  [19851] = 4,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
    ACTIONS(1816), 1,
      sym__newline,
    STATE(575), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19865] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1814), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(98), 1,
      sym__sequence_rest_text,
    STATE(119), 1,
      sym_sequence_text,
  [19881] = 4,
    ACTIONS(1818), 1,
      anon_sym_RBRACE,
    ACTIONS(1820), 1,
      sym__newline,
    STATE(575), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1814), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(98), 1,
      sym__sequence_rest_text,
    STATE(118), 1,
      sym_sequence_text,
  [19911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(867), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [19927] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1823), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1788), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(162), 1,
      sym_sequence_text,
    STATE(172), 1,
      sym__sequence_rest_text,
  [19957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(844), 1,
      sym_sequence_actor,
  [19973] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1825), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19983] = 4,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1827), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(520), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(833), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [20013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(865), 1,
      sym_sequence_actor,
  [20029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(863), 1,
      sym_sequence_actor,
  [20045] = 4,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    ACTIONS(1829), 1,
      sym__newline,
    STATE(600), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(861), 1,
      sym_sequence_actor,
  [20075] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1831), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [20085] = 4,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    ACTIONS(1829), 1,
      sym__newline,
    STATE(575), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20099] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1833), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20113] = 4,
    ACTIONS(1835), 1,
      sym__class_name,
    ACTIONS(1838), 1,
      sym__bquote_string,
    STATE(591), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(832), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [20143] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(795), 1,
      sym_sequence_actor,
  [20159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(831), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [20175] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1840), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [20185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(828), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [20201] = 4,
    ACTIONS(1842), 1,
      ts_builtin_sym_end,
    ACTIONS(1844), 1,
      sym__newline,
    STATE(597), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20215] = 4,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    ACTIONS(1847), 1,
      sym__newline,
    STATE(635), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20229] = 4,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(1849), 1,
      sym__newline,
    STATE(675), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20243] = 4,
    ACTIONS(1219), 1,
      anon_sym_RBRACE,
    ACTIONS(1851), 1,
      sym__newline,
    STATE(575), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20257] = 4,
    ACTIONS(1473), 1,
      ts_builtin_sym_end,
    ACTIONS(1853), 1,
      sym__newline,
    STATE(654), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20271] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1855), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [20281] = 4,
    ACTIONS(1857), 1,
      ts_builtin_sym_end,
    ACTIONS(1859), 1,
      sym__newline,
    STATE(597), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(855), 1,
      sym_sequence_actor,
  [20311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1861), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(128), 1,
      sym__sequence_rest_text,
    STATE(153), 1,
      sym_sequence_text,
  [20327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1861), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(128), 1,
      sym__sequence_rest_text,
    STATE(149), 1,
      sym_sequence_text,
  [20343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1861), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(128), 1,
      sym__sequence_rest_text,
    STATE(147), 1,
      sym_sequence_text,
  [20359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1861), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(128), 1,
      sym__sequence_rest_text,
    STATE(141), 1,
      sym_sequence_text,
  [20375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(924), 1,
      sym_sequence_text,
  [20391] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1863), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20405] = 4,
    ACTIONS(1806), 1,
      sym__class_name,
    ACTIONS(1865), 1,
      sym__bquote_string,
    STATE(591), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(854), 1,
      sym_sequence_actor,
  [20435] = 4,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1867), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(520), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20449] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1171), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [20459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(791), 1,
      sym_sequence_actor,
  [20475] = 3,
    ACTIONS(1871), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1869), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(927), 1,
      sym_sequence_actor,
  [20503] = 4,
    ACTIONS(1873), 1,
      ts_builtin_sym_end,
    ACTIONS(1875), 1,
      sym__newline,
    STATE(671), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20517] = 3,
    STATE(243), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1877), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(929), 1,
      sym_sequence_actor,
  [20545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(930), 1,
      sym_sequence_actor,
  [20561] = 4,
    ACTIONS(1879), 1,
      ts_builtin_sym_end,
    ACTIONS(1881), 1,
      sym__newline,
    STATE(656), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(962), 1,
      sym_sequence_actor,
  [20591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(940), 1,
      sym_sequence_text,
  [20607] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(961), 1,
      sym_sequence_actor,
  [20623] = 4,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1883), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(520), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(779), 1,
      sym_sequence_actor,
  [20653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(959), 1,
      sym_sequence_actor,
  [20669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(943), 1,
      sym_sequence_actor,
  [20685] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(945), 1,
      sym_sequence_actor,
  [20701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(946), 1,
      sym_sequence_actor,
  [20717] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1885), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [20727] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1887), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20741] = 4,
    ACTIONS(1420), 1,
      ts_builtin_sym_end,
    ACTIONS(1889), 1,
      sym__newline,
    STATE(654), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20755] = 4,
    ACTIONS(1891), 1,
      ts_builtin_sym_end,
    ACTIONS(1893), 1,
      sym__newline,
    STATE(635), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20769] = 4,
    ACTIONS(1420), 1,
      ts_builtin_sym_end,
    ACTIONS(1889), 1,
      sym__newline,
    STATE(653), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20783] = 4,
    ACTIONS(1896), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1898), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20797] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1901), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [20807] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1903), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [20817] = 3,
    ACTIONS(1905), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1647), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20829] = 4,
    ACTIONS(1554), 1,
      anon_sym_PIPE,
    ACTIONS(1607), 1,
      sym__alpha_num_token,
    STATE(417), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20843] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1442), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [20853] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1907), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [20863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      sym__sequence_actor_word,
    STATE(484), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(777), 1,
      sym_sequence_actor,
  [20879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(807), 1,
      sym_sequence_actor,
  [20895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(806), 1,
      sym_sequence_actor,
  [20911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(977), 1,
      sym_sequence_text,
  [20927] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1909), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20941] = 4,
    ACTIONS(1665), 1,
      sym__alpha_num_token,
    STATE(64), 1,
      sym_flow_vertex_id,
    STATE(355), 1,
      sym_flow_vertex,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      sym__sequence_actor_word,
    STATE(484), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(780), 1,
      sym_sequence_actor,
  [20971] = 4,
    ACTIONS(1911), 1,
      anon_sym_RBRACE,
    ACTIONS(1913), 1,
      sym__newline,
    STATE(529), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(956), 1,
      sym_sequence_text,
  [21001] = 4,
    ACTIONS(1448), 1,
      ts_builtin_sym_end,
    ACTIONS(1915), 1,
      sym__newline,
    STATE(654), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21015] = 4,
    ACTIONS(1917), 1,
      ts_builtin_sym_end,
    ACTIONS(1919), 1,
      sym__newline,
    STATE(654), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      sym__sequence_actor_word,
    STATE(484), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(741), 1,
      sym_sequence_actor,
  [21045] = 4,
    ACTIONS(1922), 1,
      ts_builtin_sym_end,
    ACTIONS(1924), 1,
      sym__newline,
    STATE(597), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21059] = 4,
    ACTIONS(1062), 1,
      ts_builtin_sym_end,
    ACTIONS(1747), 1,
      sym__newline,
    STATE(598), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21073] = 4,
    ACTIONS(1926), 1,
      ts_builtin_sym_end,
    ACTIONS(1928), 1,
      sym__newline,
    STATE(634), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(830), 1,
      sym_sequence_actor,
  [21103] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(829), 1,
      sym_sequence_actor,
  [21119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      sym__sequence_actor_word,
    STATE(484), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(744), 1,
      sym_sequence_actor,
  [21135] = 4,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(1930), 1,
      sym__newline,
    STATE(599), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21149] = 4,
    ACTIONS(1448), 1,
      ts_builtin_sym_end,
    ACTIONS(1915), 1,
      sym__newline,
    STATE(601), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      sym__sequence_actor_word,
    STATE(484), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(711), 1,
      sym_sequence_actor,
  [21179] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1932), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21193] = 4,
    ACTIONS(1934), 1,
      anon_sym_COLON,
    ACTIONS(1936), 1,
      aux_sym_gantt_task_text_token1,
    STATE(666), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21207] = 3,
    STATE(243), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [21219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(931), 1,
      sym_sequence_text,
  [21235] = 3,
    STATE(824), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [21247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(765), 1,
      sym_sequence_actor,
  [21263] = 4,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(1939), 1,
      sym__newline,
    STATE(675), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21277] = 4,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
    ACTIONS(1939), 1,
      sym__newline,
    STATE(673), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21291] = 4,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    ACTIONS(1930), 1,
      sym__newline,
    STATE(675), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(915), 1,
      sym_sequence_actor,
  [21321] = 4,
    ACTIONS(1941), 1,
      ts_builtin_sym_end,
    ACTIONS(1943), 1,
      sym__newline,
    STATE(675), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21335] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(802), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [21351] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(819), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [21367] = 3,
    STATE(909), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [21379] = 4,
    ACTIONS(1800), 1,
      sym__bquote_string,
    ACTIONS(1946), 1,
      sym__class_name,
    STATE(591), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(818), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [21409] = 4,
    ACTIONS(1948), 1,
      ts_builtin_sym_end,
    ACTIONS(1950), 1,
      sym__newline,
    STATE(515), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(980), 1,
      sym_sequence_actor,
  [21439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(868), 1,
      sym__sequence_rest_text,
    STATE(981), 1,
      sym_sequence_text,
  [21455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [21471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(771), 1,
      sym_sequence_actor,
  [21487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(800), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [21503] = 4,
    ACTIONS(1922), 1,
      ts_builtin_sym_end,
    ACTIONS(1924), 1,
      sym__newline,
    STATE(603), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1954), 1,
      sym__sequence_actor_word,
    ACTIONS(1952), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [21531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1958), 1,
      sym__sequence_actor_word,
    ACTIONS(1956), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [21545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1962), 1,
      sym__sequence_actor_word,
    ACTIONS(1960), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [21559] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1964), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(637), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(812), 1,
      sym_sequence_text,
    STATE(868), 1,
      sym__sequence_rest_text,
  [21589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      sym__sequence_actor_word,
    STATE(484), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(775), 1,
      sym_sequence_actor,
  [21605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(811), 1,
      sym_sequence_actor,
  [21621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      sym__sequence_actor_word,
    STATE(484), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(778), 1,
      sym_sequence_actor,
  [21637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      sym__sequence_actor_word,
    STATE(265), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(809), 1,
      sym_sequence_actor,
  [21653] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1966), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [21662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(287), 1,
      sym_gantt_meta_format,
  [21675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(923), 1,
      sym__sequence_rest_text,
  [21688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(799), 1,
      sym__sequence_rest_text,
  [21701] = 3,
    ACTIONS(1970), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1972), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21712] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1974), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21721] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1976), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21730] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1978), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [21739] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1941), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(822), 1,
      sym__sequence_rest_text,
  [21761] = 3,
    ACTIONS(1980), 1,
      anon_sym_COLON,
    ACTIONS(1982), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(928), 1,
      aux_sym_class_label_token1,
    STATE(263), 1,
      sym_state_description,
  [21785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(823), 1,
      sym__sequence_rest_text,
  [21798] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1984), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [21807] = 3,
    ACTIONS(1986), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1988), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(268), 1,
      sym_gantt_meta_format,
  [21831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(825), 1,
      sym__sequence_rest_text,
  [21844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(273), 1,
      sym_gantt_meta_format,
  [21857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(820), 1,
      sym__sequence_rest_text,
  [21870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(302), 1,
      sym_gantt_meta_format,
  [21883] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1682), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [21892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(297), 1,
      sym_gantt_meta_format,
  [21905] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1718), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [21914] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1990), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(247), 1,
      sym_gantt_meta_format,
  [21936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(294), 1,
      sym_gantt_meta_format,
  [21949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1922), 1,
      ts_builtin_sym_end,
    ACTIONS(1992), 1,
      sym__whitespace,
    STATE(759), 1,
      sym_mmap_node,
  [21962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(249), 1,
      sym_gantt_meta_format,
  [21975] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1994), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21984] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1917), 2,
      ts_builtin_sym_end,
      sym__newline,
  [21993] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1700), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [22002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1968), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(266), 1,
      sym_gantt_meta_format,
  [22015] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1996), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22024] = 3,
    ACTIONS(1998), 1,
      anon_sym_COLON,
    ACTIONS(2000), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(805), 1,
      sym__sequence_rest_text,
  [22048] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1891), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(815), 1,
      sym__sequence_rest_text,
  [22070] = 3,
    ACTIONS(1406), 1,
      sym__er_alphanum,
    STATE(840), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22081] = 3,
    ACTIONS(2002), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(2004), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22092] = 3,
    ACTIONS(2006), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(2008), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2010), 1,
      sym__mindmap_text,
    STATE(227), 1,
      sym_mmap_node_id,
  [22116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(888), 1,
      sym__sequence_rest_text,
  [22129] = 3,
    ACTIONS(2012), 1,
      anon_sym_COLON,
    ACTIONS(2014), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22140] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2016), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22149] = 3,
    ACTIONS(2018), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2020), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22160] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2022), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [22169] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2024), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [22178] = 3,
    ACTIONS(2026), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2028), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22189] = 3,
    ACTIONS(2030), 1,
      anon_sym_COLON,
    ACTIONS(2032), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(798), 1,
      sym__sequence_rest_text,
  [22213] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1818), 2,
      anon_sym_RBRACE,
      sym__newline,
  [22222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(827), 1,
      sym__sequence_rest_text,
  [22235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(1659), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(884), 1,
      sym__sequence_rest_text,
  [22248] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2034), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22257] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2036), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22266] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2038), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22275] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2040), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22284] = 3,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22295] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2042), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22304] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2044), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [22313] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2046), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1857), 1,
      ts_builtin_sym_end,
    ACTIONS(1992), 1,
      sym__whitespace,
    STATE(759), 1,
      sym_mmap_node,
  [22335] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1842), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22344] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1519), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22353] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2048), 2,
      anon_sym_SEMI,
      sym__newline,
  [22362] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2050), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(928), 1,
      aux_sym_class_label_token1,
    STATE(251), 1,
      sym_state_description,
  [22384] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2052), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22393] = 3,
    ACTIONS(2054), 1,
      anon_sym_COLON,
    ACTIONS(2056), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22404] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2058), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22413] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2060), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [22422] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2062), 2,
      anon_sym_SEMI,
      sym__newline,
  [22431] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1690), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22440] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2064), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22449] = 3,
    ACTIONS(2066), 1,
      anon_sym_COLON,
    ACTIONS(2068), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22460] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2070), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22469] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2072), 2,
      anon_sym_RBRACE,
      sym__newline,
  [22478] = 3,
    ACTIONS(2074), 1,
      anon_sym_COLON,
    ACTIONS(2076), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22489] = 3,
    ACTIONS(2078), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2080), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22500] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2082), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22509] = 3,
    ACTIONS(2084), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2086), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22520] = 3,
    ACTIONS(2088), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2090), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22531] = 3,
    ACTIONS(2092), 1,
      anon_sym_COLON,
    ACTIONS(2094), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22542] = 3,
    ACTIONS(2096), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(2098), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22553] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2100), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [22562] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2102), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [22571] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2104), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [22580] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2106), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [22589] = 3,
    ACTIONS(2108), 1,
      anon_sym_COLON,
    ACTIONS(2110), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22600] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2112), 2,
      anon_sym_SEMI,
      sym__newline,
  [22609] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1732), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22618] = 3,
    ACTIONS(2114), 1,
      anon_sym_PIPE,
    ACTIONS(2116), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22629] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2118), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22638] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2120), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22647] = 3,
    ACTIONS(2122), 1,
      anon_sym_COLON,
    ACTIONS(2124), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22658] = 3,
    ACTIONS(2126), 1,
      sym__er_alphanum,
    STATE(376), 1,
      sym_er_attribute_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1992), 1,
      sym__whitespace,
    ACTIONS(2128), 1,
      ts_builtin_sym_end,
    STATE(759), 1,
      sym_mmap_node,
  [22682] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1728), 2,
      ts_builtin_sym_end,
      sym__newline,
  [22691] = 2,
    ACTIONS(2130), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22699] = 2,
    ACTIONS(2132), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [22707] = 2,
    ACTIONS(2134), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22715] = 2,
    ACTIONS(2136), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22723] = 2,
    ACTIONS(2138), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22731] = 2,
    ACTIONS(2140), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22739] = 2,
    ACTIONS(2142), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22747] = 2,
    ACTIONS(2144), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22755] = 2,
    ACTIONS(2146), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2148), 1,
      sym__sequence_actor_word,
  [22773] = 2,
    ACTIONS(2150), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22781] = 2,
    ACTIONS(2152), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22789] = 2,
    ACTIONS(2154), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22797] = 2,
    ACTIONS(2156), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22805] = 2,
    ACTIONS(2158), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22813] = 2,
    ACTIONS(2160), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22821] = 2,
    ACTIONS(2162), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22829] = 2,
    ACTIONS(2164), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22837] = 2,
    ACTIONS(2166), 1,
      sym_md_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22845] = 2,
    ACTIONS(2168), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22853] = 2,
    ACTIONS(2170), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2172), 1,
      sym__mindmap_text,
  [22871] = 2,
    ACTIONS(2174), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22879] = 2,
    ACTIONS(2176), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22887] = 2,
    ACTIONS(2178), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22895] = 2,
    ACTIONS(2180), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22903] = 2,
    ACTIONS(2182), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22911] = 2,
    ACTIONS(2184), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22919] = 2,
    ACTIONS(2186), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22927] = 2,
    ACTIONS(2188), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22935] = 2,
    ACTIONS(2190), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22943] = 2,
    ACTIONS(2192), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22951] = 2,
    ACTIONS(2194), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22959] = 2,
    ACTIONS(2196), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22967] = 2,
    ACTIONS(2198), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22975] = 2,
    ACTIONS(2200), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22983] = 2,
    ACTIONS(2202), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22991] = 2,
    ACTIONS(2204), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [22999] = 2,
    ACTIONS(2206), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23007] = 2,
    ACTIONS(2208), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23015] = 2,
    ACTIONS(2210), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23023] = 2,
    ACTIONS(2212), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23031] = 2,
    ACTIONS(2214), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23039] = 2,
    ACTIONS(2216), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23047] = 2,
    ACTIONS(2218), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23055] = 2,
    ACTIONS(2220), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1992), 1,
      sym__whitespace,
    STATE(622), 1,
      sym_mmap_node,
  [23073] = 2,
    ACTIONS(2222), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23081] = 2,
    ACTIONS(2224), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23089] = 2,
    ACTIONS(2226), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23097] = 2,
    ACTIONS(2228), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23105] = 2,
    ACTIONS(2230), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23113] = 2,
    ACTIONS(2232), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23121] = 2,
    ACTIONS(2234), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23129] = 2,
    ACTIONS(2236), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23137] = 2,
    ACTIONS(2238), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23145] = 2,
    ACTIONS(2240), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23153] = 2,
    ACTIONS(2242), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23161] = 2,
    ACTIONS(2244), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23169] = 2,
    ACTIONS(2246), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23177] = 2,
    ACTIONS(2248), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23185] = 2,
    ACTIONS(2250), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2252), 1,
      sym__sequence_actor_word,
  [23203] = 2,
    ACTIONS(2254), 1,
      aux_sym_class_generics_token1,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23211] = 2,
    ACTIONS(2256), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2258), 1,
      sym__sequence_actor_word,
  [23229] = 2,
    ACTIONS(2260), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23237] = 2,
    ACTIONS(2262), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23245] = 2,
    ACTIONS(2264), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23253] = 2,
    ACTIONS(2266), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23261] = 2,
    ACTIONS(2268), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23269] = 2,
    ACTIONS(720), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23277] = 2,
    ACTIONS(2270), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23285] = 2,
    ACTIONS(716), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23293] = 2,
    ACTIONS(2272), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23301] = 2,
    ACTIONS(2274), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23309] = 2,
    ACTIONS(2276), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23317] = 2,
    ACTIONS(2278), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23325] = 2,
    ACTIONS(2280), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23333] = 2,
    ACTIONS(2282), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23341] = 2,
    ACTIONS(2284), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23349] = 2,
    ACTIONS(2286), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23357] = 2,
    ACTIONS(2288), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23365] = 2,
    ACTIONS(2290), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23373] = 2,
    ACTIONS(2292), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23381] = 2,
    ACTIONS(2294), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2296), 1,
      sym_gantt_task_data,
  [23399] = 2,
    ACTIONS(2298), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23407] = 2,
    ACTIONS(2300), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23415] = 2,
    ACTIONS(2302), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23423] = 2,
    ACTIONS(2304), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23431] = 2,
    ACTIONS(1720), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23439] = 2,
    ACTIONS(2306), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23447] = 2,
    ACTIONS(2308), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23455] = 2,
    ACTIONS(2310), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2312), 1,
      sym_pie_value,
  [23473] = 2,
    ACTIONS(2314), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23481] = 2,
    ACTIONS(2316), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23489] = 2,
    ACTIONS(2318), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23497] = 2,
    ACTIONS(2320), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23505] = 2,
    ACTIONS(2322), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23513] = 2,
    ACTIONS(2324), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23521] = 2,
    ACTIONS(2326), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23529] = 2,
    ACTIONS(2328), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23537] = 2,
    ACTIONS(2330), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23545] = 2,
    ACTIONS(2332), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23553] = 2,
    ACTIONS(2334), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23561] = 2,
    ACTIONS(2336), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23569] = 2,
    ACTIONS(2338), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23577] = 2,
    ACTIONS(2340), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1992), 1,
      sym__whitespace,
    STATE(687), 1,
      sym_mmap_node,
  [23595] = 2,
    ACTIONS(2342), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23603] = 2,
    ACTIONS(2344), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23611] = 2,
    ACTIONS(2346), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23619] = 2,
    ACTIONS(2348), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23627] = 2,
    ACTIONS(2350), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23635] = 2,
    ACTIONS(2352), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23643] = 2,
    ACTIONS(2354), 1,
      sym_type_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23651] = 2,
    ACTIONS(2356), 1,
      sym_arg_directive,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23659] = 2,
    ACTIONS(2358), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23667] = 2,
    ACTIONS(2054), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23675] = 2,
    ACTIONS(2360), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23683] = 2,
    ACTIONS(2362), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23691] = 2,
    ACTIONS(2364), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23699] = 2,
    ACTIONS(2366), 1,
      sym_md_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23707] = 2,
    ACTIONS(2368), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23715] = 2,
    ACTIONS(2370), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23723] = 2,
    ACTIONS(2372), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23731] = 2,
    ACTIONS(2374), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23739] = 2,
    ACTIONS(2376), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23747] = 2,
    ACTIONS(2378), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23755] = 2,
    ACTIONS(2380), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23763] = 2,
    ACTIONS(2122), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23771] = 2,
    ACTIONS(2382), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23779] = 2,
    ACTIONS(2384), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23787] = 2,
    ACTIONS(2386), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23795] = 2,
    ACTIONS(2388), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2390), 1,
      sym__sequence_actor_word,
  [23813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2392), 1,
      sym__sequence_actor_word,
  [23823] = 2,
    ACTIONS(2394), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23831] = 2,
    ACTIONS(2396), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23839] = 2,
    ACTIONS(2398), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23847] = 2,
    ACTIONS(2400), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23855] = 2,
    ACTIONS(2402), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1992), 1,
      sym__whitespace,
    STATE(759), 1,
      sym_mmap_node,
  [23873] = 2,
    ACTIONS(2404), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23881] = 2,
    ACTIONS(2406), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23889] = 2,
    ACTIONS(2408), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23897] = 2,
    ACTIONS(2092), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23905] = 2,
    ACTIONS(2410), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23913] = 2,
    ACTIONS(2412), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23921] = 2,
    ACTIONS(2414), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23929] = 2,
    ACTIONS(2416), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23937] = 2,
    ACTIONS(2418), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23945] = 2,
    ACTIONS(2420), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23953] = 2,
    ACTIONS(2422), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23961] = 2,
    ACTIONS(2424), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23969] = 2,
    ACTIONS(2426), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23977] = 2,
    ACTIONS(2428), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [23985] = 2,
    ACTIONS(2430), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [23993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2432), 1,
      sym__mindmap_text,
  [24003] = 2,
    ACTIONS(2434), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24011] = 2,
    ACTIONS(2436), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24019] = 2,
    ACTIONS(2438), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24027] = 2,
    ACTIONS(2066), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24035] = 2,
    ACTIONS(2440), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24043] = 2,
    ACTIONS(2442), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24051] = 2,
    ACTIONS(2444), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24059] = 2,
    ACTIONS(2446), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24067] = 2,
    ACTIONS(2448), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24075] = 2,
    ACTIONS(2450), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24083] = 2,
    ACTIONS(2452), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24091] = 2,
    ACTIONS(2454), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24099] = 2,
    ACTIONS(2456), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24107] = 2,
    ACTIONS(2458), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24115] = 2,
    ACTIONS(2460), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24123] = 2,
    ACTIONS(2462), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24131] = 2,
    ACTIONS(2464), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24139] = 2,
    ACTIONS(2466), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24147] = 2,
    ACTIONS(2468), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24155] = 2,
    ACTIONS(2470), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24163] = 2,
    ACTIONS(2472), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24171] = 2,
    ACTIONS(2474), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24179] = 2,
    ACTIONS(2476), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24187] = 2,
    ACTIONS(2478), 1,
      aux_sym_class_generics_token1,
    ACTIONS(67), 2,
      sym__whitespace,
      sym_comment,
  [24195] = 2,
    ACTIONS(2480), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24203] = 2,
    ACTIONS(2482), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24211] = 2,
    ACTIONS(2484), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2486), 1,
      aux_sym_mmap_icon_token2,
  [24229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym__whitespace,
    ACTIONS(2488), 1,
      aux_sym_mmap_class_token2,
  [24239] = 2,
    ACTIONS(2490), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [24247] = 2,
    ACTIONS(2492), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 109,
  [SMALL_STATE(4)] = 218,
  [SMALL_STATE(5)] = 327,
  [SMALL_STATE(6)] = 436,
  [SMALL_STATE(7)] = 545,
  [SMALL_STATE(8)] = 654,
  [SMALL_STATE(9)] = 763,
  [SMALL_STATE(10)] = 872,
  [SMALL_STATE(11)] = 981,
  [SMALL_STATE(12)] = 1090,
  [SMALL_STATE(13)] = 1199,
  [SMALL_STATE(14)] = 1308,
  [SMALL_STATE(15)] = 1412,
  [SMALL_STATE(16)] = 1516,
  [SMALL_STATE(17)] = 1620,
  [SMALL_STATE(18)] = 1724,
  [SMALL_STATE(19)] = 1828,
  [SMALL_STATE(20)] = 1931,
  [SMALL_STATE(21)] = 2032,
  [SMALL_STATE(22)] = 2133,
  [SMALL_STATE(23)] = 2236,
  [SMALL_STATE(24)] = 2339,
  [SMALL_STATE(25)] = 2442,
  [SMALL_STATE(26)] = 2545,
  [SMALL_STATE(27)] = 2648,
  [SMALL_STATE(28)] = 2751,
  [SMALL_STATE(29)] = 2854,
  [SMALL_STATE(30)] = 2957,
  [SMALL_STATE(31)] = 3060,
  [SMALL_STATE(32)] = 3163,
  [SMALL_STATE(33)] = 3266,
  [SMALL_STATE(34)] = 3367,
  [SMALL_STATE(35)] = 3470,
  [SMALL_STATE(36)] = 3571,
  [SMALL_STATE(37)] = 3674,
  [SMALL_STATE(38)] = 3777,
  [SMALL_STATE(39)] = 3880,
  [SMALL_STATE(40)] = 3983,
  [SMALL_STATE(41)] = 4086,
  [SMALL_STATE(42)] = 4189,
  [SMALL_STATE(43)] = 4290,
  [SMALL_STATE(44)] = 4393,
  [SMALL_STATE(45)] = 4496,
  [SMALL_STATE(46)] = 4599,
  [SMALL_STATE(47)] = 4702,
  [SMALL_STATE(48)] = 4805,
  [SMALL_STATE(49)] = 4908,
  [SMALL_STATE(50)] = 5008,
  [SMALL_STATE(51)] = 5108,
  [SMALL_STATE(52)] = 5208,
  [SMALL_STATE(53)] = 5308,
  [SMALL_STATE(54)] = 5408,
  [SMALL_STATE(55)] = 5508,
  [SMALL_STATE(56)] = 5608,
  [SMALL_STATE(57)] = 5708,
  [SMALL_STATE(58)] = 5808,
  [SMALL_STATE(59)] = 5908,
  [SMALL_STATE(60)] = 6008,
  [SMALL_STATE(61)] = 6108,
  [SMALL_STATE(62)] = 6208,
  [SMALL_STATE(63)] = 6308,
  [SMALL_STATE(64)] = 6408,
  [SMALL_STATE(65)] = 6486,
  [SMALL_STATE(66)] = 6553,
  [SMALL_STATE(67)] = 6620,
  [SMALL_STATE(68)] = 6687,
  [SMALL_STATE(69)] = 6754,
  [SMALL_STATE(70)] = 6821,
  [SMALL_STATE(71)] = 6888,
  [SMALL_STATE(72)] = 6955,
  [SMALL_STATE(73)] = 7022,
  [SMALL_STATE(74)] = 7089,
  [SMALL_STATE(75)] = 7156,
  [SMALL_STATE(76)] = 7219,
  [SMALL_STATE(77)] = 7282,
  [SMALL_STATE(78)] = 7345,
  [SMALL_STATE(79)] = 7408,
  [SMALL_STATE(80)] = 7471,
  [SMALL_STATE(81)] = 7534,
  [SMALL_STATE(82)] = 7597,
  [SMALL_STATE(83)] = 7660,
  [SMALL_STATE(84)] = 7723,
  [SMALL_STATE(85)] = 7786,
  [SMALL_STATE(86)] = 7846,
  [SMALL_STATE(87)] = 7906,
  [SMALL_STATE(88)] = 7966,
  [SMALL_STATE(89)] = 8026,
  [SMALL_STATE(90)] = 8086,
  [SMALL_STATE(91)] = 8118,
  [SMALL_STATE(92)] = 8151,
  [SMALL_STATE(93)] = 8184,
  [SMALL_STATE(94)] = 8217,
  [SMALL_STATE(95)] = 8250,
  [SMALL_STATE(96)] = 8283,
  [SMALL_STATE(97)] = 8316,
  [SMALL_STATE(98)] = 8349,
  [SMALL_STATE(99)] = 8382,
  [SMALL_STATE(100)] = 8415,
  [SMALL_STATE(101)] = 8448,
  [SMALL_STATE(102)] = 8481,
  [SMALL_STATE(103)] = 8514,
  [SMALL_STATE(104)] = 8547,
  [SMALL_STATE(105)] = 8580,
  [SMALL_STATE(106)] = 8613,
  [SMALL_STATE(107)] = 8646,
  [SMALL_STATE(108)] = 8679,
  [SMALL_STATE(109)] = 8712,
  [SMALL_STATE(110)] = 8745,
  [SMALL_STATE(111)] = 8778,
  [SMALL_STATE(112)] = 8811,
  [SMALL_STATE(113)] = 8844,
  [SMALL_STATE(114)] = 8877,
  [SMALL_STATE(115)] = 8910,
  [SMALL_STATE(116)] = 8943,
  [SMALL_STATE(117)] = 8976,
  [SMALL_STATE(118)] = 9009,
  [SMALL_STATE(119)] = 9042,
  [SMALL_STATE(120)] = 9075,
  [SMALL_STATE(121)] = 9108,
  [SMALL_STATE(122)] = 9141,
  [SMALL_STATE(123)] = 9174,
  [SMALL_STATE(124)] = 9207,
  [SMALL_STATE(125)] = 9240,
  [SMALL_STATE(126)] = 9273,
  [SMALL_STATE(127)] = 9306,
  [SMALL_STATE(128)] = 9339,
  [SMALL_STATE(129)] = 9372,
  [SMALL_STATE(130)] = 9405,
  [SMALL_STATE(131)] = 9438,
  [SMALL_STATE(132)] = 9471,
  [SMALL_STATE(133)] = 9504,
  [SMALL_STATE(134)] = 9537,
  [SMALL_STATE(135)] = 9570,
  [SMALL_STATE(136)] = 9603,
  [SMALL_STATE(137)] = 9636,
  [SMALL_STATE(138)] = 9669,
  [SMALL_STATE(139)] = 9702,
  [SMALL_STATE(140)] = 9735,
  [SMALL_STATE(141)] = 9768,
  [SMALL_STATE(142)] = 9801,
  [SMALL_STATE(143)] = 9834,
  [SMALL_STATE(144)] = 9867,
  [SMALL_STATE(145)] = 9900,
  [SMALL_STATE(146)] = 9933,
  [SMALL_STATE(147)] = 9966,
  [SMALL_STATE(148)] = 9999,
  [SMALL_STATE(149)] = 10032,
  [SMALL_STATE(150)] = 10065,
  [SMALL_STATE(151)] = 10098,
  [SMALL_STATE(152)] = 10131,
  [SMALL_STATE(153)] = 10164,
  [SMALL_STATE(154)] = 10197,
  [SMALL_STATE(155)] = 10230,
  [SMALL_STATE(156)] = 10263,
  [SMALL_STATE(157)] = 10296,
  [SMALL_STATE(158)] = 10329,
  [SMALL_STATE(159)] = 10362,
  [SMALL_STATE(160)] = 10394,
  [SMALL_STATE(161)] = 10426,
  [SMALL_STATE(162)] = 10458,
  [SMALL_STATE(163)] = 10490,
  [SMALL_STATE(164)] = 10522,
  [SMALL_STATE(165)] = 10554,
  [SMALL_STATE(166)] = 10586,
  [SMALL_STATE(167)] = 10618,
  [SMALL_STATE(168)] = 10650,
  [SMALL_STATE(169)] = 10682,
  [SMALL_STATE(170)] = 10714,
  [SMALL_STATE(171)] = 10746,
  [SMALL_STATE(172)] = 10778,
  [SMALL_STATE(173)] = 10810,
  [SMALL_STATE(174)] = 10842,
  [SMALL_STATE(175)] = 10874,
  [SMALL_STATE(176)] = 10906,
  [SMALL_STATE(177)] = 10938,
  [SMALL_STATE(178)] = 10970,
  [SMALL_STATE(179)] = 11002,
  [SMALL_STATE(180)] = 11034,
  [SMALL_STATE(181)] = 11066,
  [SMALL_STATE(182)] = 11098,
  [SMALL_STATE(183)] = 11130,
  [SMALL_STATE(184)] = 11162,
  [SMALL_STATE(185)] = 11194,
  [SMALL_STATE(186)] = 11226,
  [SMALL_STATE(187)] = 11258,
  [SMALL_STATE(188)] = 11290,
  [SMALL_STATE(189)] = 11322,
  [SMALL_STATE(190)] = 11354,
  [SMALL_STATE(191)] = 11386,
  [SMALL_STATE(192)] = 11418,
  [SMALL_STATE(193)] = 11450,
  [SMALL_STATE(194)] = 11482,
  [SMALL_STATE(195)] = 11514,
  [SMALL_STATE(196)] = 11546,
  [SMALL_STATE(197)] = 11578,
  [SMALL_STATE(198)] = 11610,
  [SMALL_STATE(199)] = 11642,
  [SMALL_STATE(200)] = 11674,
  [SMALL_STATE(201)] = 11706,
  [SMALL_STATE(202)] = 11738,
  [SMALL_STATE(203)] = 11770,
  [SMALL_STATE(204)] = 11802,
  [SMALL_STATE(205)] = 11834,
  [SMALL_STATE(206)] = 11866,
  [SMALL_STATE(207)] = 11898,
  [SMALL_STATE(208)] = 11930,
  [SMALL_STATE(209)] = 11962,
  [SMALL_STATE(210)] = 11994,
  [SMALL_STATE(211)] = 12026,
  [SMALL_STATE(212)] = 12058,
  [SMALL_STATE(213)] = 12090,
  [SMALL_STATE(214)] = 12122,
  [SMALL_STATE(215)] = 12154,
  [SMALL_STATE(216)] = 12186,
  [SMALL_STATE(217)] = 12218,
  [SMALL_STATE(218)] = 12250,
  [SMALL_STATE(219)] = 12282,
  [SMALL_STATE(220)] = 12314,
  [SMALL_STATE(221)] = 12346,
  [SMALL_STATE(222)] = 12378,
  [SMALL_STATE(223)] = 12410,
  [SMALL_STATE(224)] = 12442,
  [SMALL_STATE(225)] = 12474,
  [SMALL_STATE(226)] = 12506,
  [SMALL_STATE(227)] = 12557,
  [SMALL_STATE(228)] = 12608,
  [SMALL_STATE(229)] = 12643,
  [SMALL_STATE(230)] = 12688,
  [SMALL_STATE(231)] = 12723,
  [SMALL_STATE(232)] = 12754,
  [SMALL_STATE(233)] = 12791,
  [SMALL_STATE(234)] = 12828,
  [SMALL_STATE(235)] = 12865,
  [SMALL_STATE(236)] = 12903,
  [SMALL_STATE(237)] = 12933,
  [SMALL_STATE(238)] = 12957,
  [SMALL_STATE(239)] = 12981,
  [SMALL_STATE(240)] = 13005,
  [SMALL_STATE(241)] = 13037,
  [SMALL_STATE(242)] = 13066,
  [SMALL_STATE(243)] = 13093,
  [SMALL_STATE(244)] = 13118,
  [SMALL_STATE(245)] = 13141,
  [SMALL_STATE(246)] = 13170,
  [SMALL_STATE(247)] = 13215,
  [SMALL_STATE(248)] = 13237,
  [SMALL_STATE(249)] = 13259,
  [SMALL_STATE(250)] = 13281,
  [SMALL_STATE(251)] = 13315,
  [SMALL_STATE(252)] = 13337,
  [SMALL_STATE(253)] = 13359,
  [SMALL_STATE(254)] = 13381,
  [SMALL_STATE(255)] = 13421,
  [SMALL_STATE(256)] = 13443,
  [SMALL_STATE(257)] = 13465,
  [SMALL_STATE(258)] = 13487,
  [SMALL_STATE(259)] = 13523,
  [SMALL_STATE(260)] = 13561,
  [SMALL_STATE(261)] = 13587,
  [SMALL_STATE(262)] = 13625,
  [SMALL_STATE(263)] = 13663,
  [SMALL_STATE(264)] = 13685,
  [SMALL_STATE(265)] = 13707,
  [SMALL_STATE(266)] = 13735,
  [SMALL_STATE(267)] = 13757,
  [SMALL_STATE(268)] = 13779,
  [SMALL_STATE(269)] = 13801,
  [SMALL_STATE(270)] = 13823,
  [SMALL_STATE(271)] = 13845,
  [SMALL_STATE(272)] = 13867,
  [SMALL_STATE(273)] = 13889,
  [SMALL_STATE(274)] = 13911,
  [SMALL_STATE(275)] = 13933,
  [SMALL_STATE(276)] = 13955,
  [SMALL_STATE(277)] = 13977,
  [SMALL_STATE(278)] = 13999,
  [SMALL_STATE(279)] = 14021,
  [SMALL_STATE(280)] = 14043,
  [SMALL_STATE(281)] = 14083,
  [SMALL_STATE(282)] = 14105,
  [SMALL_STATE(283)] = 14131,
  [SMALL_STATE(284)] = 14153,
  [SMALL_STATE(285)] = 14175,
  [SMALL_STATE(286)] = 14215,
  [SMALL_STATE(287)] = 14237,
  [SMALL_STATE(288)] = 14259,
  [SMALL_STATE(289)] = 14287,
  [SMALL_STATE(290)] = 14309,
  [SMALL_STATE(291)] = 14331,
  [SMALL_STATE(292)] = 14353,
  [SMALL_STATE(293)] = 14375,
  [SMALL_STATE(294)] = 14411,
  [SMALL_STATE(295)] = 14433,
  [SMALL_STATE(296)] = 14455,
  [SMALL_STATE(297)] = 14493,
  [SMALL_STATE(298)] = 14515,
  [SMALL_STATE(299)] = 14537,
  [SMALL_STATE(300)] = 14559,
  [SMALL_STATE(301)] = 14597,
  [SMALL_STATE(302)] = 14619,
  [SMALL_STATE(303)] = 14641,
  [SMALL_STATE(304)] = 14676,
  [SMALL_STATE(305)] = 14713,
  [SMALL_STATE(306)] = 14750,
  [SMALL_STATE(307)] = 14787,
  [SMALL_STATE(308)] = 14824,
  [SMALL_STATE(309)] = 14861,
  [SMALL_STATE(310)] = 14898,
  [SMALL_STATE(311)] = 14919,
  [SMALL_STATE(312)] = 14938,
  [SMALL_STATE(313)] = 14959,
  [SMALL_STATE(314)] = 14994,
  [SMALL_STATE(315)] = 15031,
  [SMALL_STATE(316)] = 15068,
  [SMALL_STATE(317)] = 15105,
  [SMALL_STATE(318)] = 15126,
  [SMALL_STATE(319)] = 15161,
  [SMALL_STATE(320)] = 15198,
  [SMALL_STATE(321)] = 15222,
  [SMALL_STATE(322)] = 15250,
  [SMALL_STATE(323)] = 15268,
  [SMALL_STATE(324)] = 15296,
  [SMALL_STATE(325)] = 15328,
  [SMALL_STATE(326)] = 15362,
  [SMALL_STATE(327)] = 15390,
  [SMALL_STATE(328)] = 15424,
  [SMALL_STATE(329)] = 15448,
  [SMALL_STATE(330)] = 15480,
  [SMALL_STATE(331)] = 15512,
  [SMALL_STATE(332)] = 15536,
  [SMALL_STATE(333)] = 15560,
  [SMALL_STATE(334)] = 15594,
  [SMALL_STATE(335)] = 15622,
  [SMALL_STATE(336)] = 15650,
  [SMALL_STATE(337)] = 15684,
  [SMALL_STATE(338)] = 15716,
  [SMALL_STATE(339)] = 15740,
  [SMALL_STATE(340)] = 15772,
  [SMALL_STATE(341)] = 15806,
  [SMALL_STATE(342)] = 15838,
  [SMALL_STATE(343)] = 15872,
  [SMALL_STATE(344)] = 15906,
  [SMALL_STATE(345)] = 15940,
  [SMALL_STATE(346)] = 15974,
  [SMALL_STATE(347)] = 15993,
  [SMALL_STATE(348)] = 16012,
  [SMALL_STATE(349)] = 16043,
  [SMALL_STATE(350)] = 16064,
  [SMALL_STATE(351)] = 16083,
  [SMALL_STATE(352)] = 16114,
  [SMALL_STATE(353)] = 16133,
  [SMALL_STATE(354)] = 16152,
  [SMALL_STATE(355)] = 16183,
  [SMALL_STATE(356)] = 16202,
  [SMALL_STATE(357)] = 16221,
  [SMALL_STATE(358)] = 16240,
  [SMALL_STATE(359)] = 16259,
  [SMALL_STATE(360)] = 16278,
  [SMALL_STATE(361)] = 16297,
  [SMALL_STATE(362)] = 16316,
  [SMALL_STATE(363)] = 16335,
  [SMALL_STATE(364)] = 16354,
  [SMALL_STATE(365)] = 16373,
  [SMALL_STATE(366)] = 16392,
  [SMALL_STATE(367)] = 16411,
  [SMALL_STATE(368)] = 16430,
  [SMALL_STATE(369)] = 16460,
  [SMALL_STATE(370)] = 16478,
  [SMALL_STATE(371)] = 16504,
  [SMALL_STATE(372)] = 16528,
  [SMALL_STATE(373)] = 16554,
  [SMALL_STATE(374)] = 16580,
  [SMALL_STATE(375)] = 16606,
  [SMALL_STATE(376)] = 16630,
  [SMALL_STATE(377)] = 16660,
  [SMALL_STATE(378)] = 16684,
  [SMALL_STATE(379)] = 16708,
  [SMALL_STATE(380)] = 16734,
  [SMALL_STATE(381)] = 16758,
  [SMALL_STATE(382)] = 16776,
  [SMALL_STATE(383)] = 16794,
  [SMALL_STATE(384)] = 16814,
  [SMALL_STATE(385)] = 16832,
  [SMALL_STATE(386)] = 16858,
  [SMALL_STATE(387)] = 16881,
  [SMALL_STATE(388)] = 16904,
  [SMALL_STATE(389)] = 16927,
  [SMALL_STATE(390)] = 16943,
  [SMALL_STATE(391)] = 16969,
  [SMALL_STATE(392)] = 16983,
  [SMALL_STATE(393)] = 16999,
  [SMALL_STATE(394)] = 17019,
  [SMALL_STATE(395)] = 17045,
  [SMALL_STATE(396)] = 17059,
  [SMALL_STATE(397)] = 17085,
  [SMALL_STATE(398)] = 17111,
  [SMALL_STATE(399)] = 17125,
  [SMALL_STATE(400)] = 17140,
  [SMALL_STATE(401)] = 17155,
  [SMALL_STATE(402)] = 17176,
  [SMALL_STATE(403)] = 17191,
  [SMALL_STATE(404)] = 17210,
  [SMALL_STATE(405)] = 17233,
  [SMALL_STATE(406)] = 17256,
  [SMALL_STATE(407)] = 17277,
  [SMALL_STATE(408)] = 17302,
  [SMALL_STATE(409)] = 17317,
  [SMALL_STATE(410)] = 17338,
  [SMALL_STATE(411)] = 17359,
  [SMALL_STATE(412)] = 17376,
  [SMALL_STATE(413)] = 17391,
  [SMALL_STATE(414)] = 17406,
  [SMALL_STATE(415)] = 17427,
  [SMALL_STATE(416)] = 17448,
  [SMALL_STATE(417)] = 17463,
  [SMALL_STATE(418)] = 17480,
  [SMALL_STATE(419)] = 17492,
  [SMALL_STATE(420)] = 17512,
  [SMALL_STATE(421)] = 17528,
  [SMALL_STATE(422)] = 17540,
  [SMALL_STATE(423)] = 17558,
  [SMALL_STATE(424)] = 17576,
  [SMALL_STATE(425)] = 17594,
  [SMALL_STATE(426)] = 17612,
  [SMALL_STATE(427)] = 17632,
  [SMALL_STATE(428)] = 17652,
  [SMALL_STATE(429)] = 17672,
  [SMALL_STATE(430)] = 17692,
  [SMALL_STATE(431)] = 17712,
  [SMALL_STATE(432)] = 17732,
  [SMALL_STATE(433)] = 17750,
  [SMALL_STATE(434)] = 17768,
  [SMALL_STATE(435)] = 17786,
  [SMALL_STATE(436)] = 17806,
  [SMALL_STATE(437)] = 17824,
  [SMALL_STATE(438)] = 17836,
  [SMALL_STATE(439)] = 17854,
  [SMALL_STATE(440)] = 17872,
  [SMALL_STATE(441)] = 17890,
  [SMALL_STATE(442)] = 17902,
  [SMALL_STATE(443)] = 17920,
  [SMALL_STATE(444)] = 17938,
  [SMALL_STATE(445)] = 17956,
  [SMALL_STATE(446)] = 17974,
  [SMALL_STATE(447)] = 17992,
  [SMALL_STATE(448)] = 18008,
  [SMALL_STATE(449)] = 18026,
  [SMALL_STATE(450)] = 18038,
  [SMALL_STATE(451)] = 18050,
  [SMALL_STATE(452)] = 18068,
  [SMALL_STATE(453)] = 18080,
  [SMALL_STATE(454)] = 18100,
  [SMALL_STATE(455)] = 18112,
  [SMALL_STATE(456)] = 18124,
  [SMALL_STATE(457)] = 18142,
  [SMALL_STATE(458)] = 18158,
  [SMALL_STATE(459)] = 18170,
  [SMALL_STATE(460)] = 18182,
  [SMALL_STATE(461)] = 18202,
  [SMALL_STATE(462)] = 18218,
  [SMALL_STATE(463)] = 18234,
  [SMALL_STATE(464)] = 18252,
  [SMALL_STATE(465)] = 18264,
  [SMALL_STATE(466)] = 18276,
  [SMALL_STATE(467)] = 18288,
  [SMALL_STATE(468)] = 18305,
  [SMALL_STATE(469)] = 18320,
  [SMALL_STATE(470)] = 18333,
  [SMALL_STATE(471)] = 18344,
  [SMALL_STATE(472)] = 18363,
  [SMALL_STATE(473)] = 18378,
  [SMALL_STATE(474)] = 18393,
  [SMALL_STATE(475)] = 18410,
  [SMALL_STATE(476)] = 18423,
  [SMALL_STATE(477)] = 18434,
  [SMALL_STATE(478)] = 18447,
  [SMALL_STATE(479)] = 18460,
  [SMALL_STATE(480)] = 18473,
  [SMALL_STATE(481)] = 18492,
  [SMALL_STATE(482)] = 18507,
  [SMALL_STATE(483)] = 18524,
  [SMALL_STATE(484)] = 18541,
  [SMALL_STATE(485)] = 18558,
  [SMALL_STATE(486)] = 18571,
  [SMALL_STATE(487)] = 18582,
  [SMALL_STATE(488)] = 18593,
  [SMALL_STATE(489)] = 18612,
  [SMALL_STATE(490)] = 18627,
  [SMALL_STATE(491)] = 18644,
  [SMALL_STATE(492)] = 18659,
  [SMALL_STATE(493)] = 18674,
  [SMALL_STATE(494)] = 18689,
  [SMALL_STATE(495)] = 18700,
  [SMALL_STATE(496)] = 18715,
  [SMALL_STATE(497)] = 18730,
  [SMALL_STATE(498)] = 18745,
  [SMALL_STATE(499)] = 18760,
  [SMALL_STATE(500)] = 18771,
  [SMALL_STATE(501)] = 18788,
  [SMALL_STATE(502)] = 18807,
  [SMALL_STATE(503)] = 18826,
  [SMALL_STATE(504)] = 18845,
  [SMALL_STATE(505)] = 18864,
  [SMALL_STATE(506)] = 18881,
  [SMALL_STATE(507)] = 18896,
  [SMALL_STATE(508)] = 18911,
  [SMALL_STATE(509)] = 18926,
  [SMALL_STATE(510)] = 18939,
  [SMALL_STATE(511)] = 18955,
  [SMALL_STATE(512)] = 18971,
  [SMALL_STATE(513)] = 18987,
  [SMALL_STATE(514)] = 19003,
  [SMALL_STATE(515)] = 19019,
  [SMALL_STATE(516)] = 19033,
  [SMALL_STATE(517)] = 19049,
  [SMALL_STATE(518)] = 19065,
  [SMALL_STATE(519)] = 19081,
  [SMALL_STATE(520)] = 19097,
  [SMALL_STATE(521)] = 19111,
  [SMALL_STATE(522)] = 19127,
  [SMALL_STATE(523)] = 19143,
  [SMALL_STATE(524)] = 19159,
  [SMALL_STATE(525)] = 19175,
  [SMALL_STATE(526)] = 19191,
  [SMALL_STATE(527)] = 19205,
  [SMALL_STATE(528)] = 19219,
  [SMALL_STATE(529)] = 19233,
  [SMALL_STATE(530)] = 19247,
  [SMALL_STATE(531)] = 19257,
  [SMALL_STATE(532)] = 19267,
  [SMALL_STATE(533)] = 19277,
  [SMALL_STATE(534)] = 19287,
  [SMALL_STATE(535)] = 19297,
  [SMALL_STATE(536)] = 19307,
  [SMALL_STATE(537)] = 19317,
  [SMALL_STATE(538)] = 19327,
  [SMALL_STATE(539)] = 19339,
  [SMALL_STATE(540)] = 19353,
  [SMALL_STATE(541)] = 19367,
  [SMALL_STATE(542)] = 19381,
  [SMALL_STATE(543)] = 19391,
  [SMALL_STATE(544)] = 19407,
  [SMALL_STATE(545)] = 19423,
  [SMALL_STATE(546)] = 19433,
  [SMALL_STATE(547)] = 19449,
  [SMALL_STATE(548)] = 19465,
  [SMALL_STATE(549)] = 19481,
  [SMALL_STATE(550)] = 19497,
  [SMALL_STATE(551)] = 19509,
  [SMALL_STATE(552)] = 19525,
  [SMALL_STATE(553)] = 19541,
  [SMALL_STATE(554)] = 19557,
  [SMALL_STATE(555)] = 19571,
  [SMALL_STATE(556)] = 19587,
  [SMALL_STATE(557)] = 19603,
  [SMALL_STATE(558)] = 19619,
  [SMALL_STATE(559)] = 19635,
  [SMALL_STATE(560)] = 19651,
  [SMALL_STATE(561)] = 19667,
  [SMALL_STATE(562)] = 19683,
  [SMALL_STATE(563)] = 19697,
  [SMALL_STATE(564)] = 19711,
  [SMALL_STATE(565)] = 19727,
  [SMALL_STATE(566)] = 19743,
  [SMALL_STATE(567)] = 19759,
  [SMALL_STATE(568)] = 19775,
  [SMALL_STATE(569)] = 19789,
  [SMALL_STATE(570)] = 19803,
  [SMALL_STATE(571)] = 19819,
  [SMALL_STATE(572)] = 19835,
  [SMALL_STATE(573)] = 19851,
  [SMALL_STATE(574)] = 19865,
  [SMALL_STATE(575)] = 19881,
  [SMALL_STATE(576)] = 19895,
  [SMALL_STATE(577)] = 19911,
  [SMALL_STATE(578)] = 19927,
  [SMALL_STATE(579)] = 19941,
  [SMALL_STATE(580)] = 19957,
  [SMALL_STATE(581)] = 19973,
  [SMALL_STATE(582)] = 19983,
  [SMALL_STATE(583)] = 19997,
  [SMALL_STATE(584)] = 20013,
  [SMALL_STATE(585)] = 20029,
  [SMALL_STATE(586)] = 20045,
  [SMALL_STATE(587)] = 20059,
  [SMALL_STATE(588)] = 20075,
  [SMALL_STATE(589)] = 20085,
  [SMALL_STATE(590)] = 20099,
  [SMALL_STATE(591)] = 20113,
  [SMALL_STATE(592)] = 20127,
  [SMALL_STATE(593)] = 20143,
  [SMALL_STATE(594)] = 20159,
  [SMALL_STATE(595)] = 20175,
  [SMALL_STATE(596)] = 20185,
  [SMALL_STATE(597)] = 20201,
  [SMALL_STATE(598)] = 20215,
  [SMALL_STATE(599)] = 20229,
  [SMALL_STATE(600)] = 20243,
  [SMALL_STATE(601)] = 20257,
  [SMALL_STATE(602)] = 20271,
  [SMALL_STATE(603)] = 20281,
  [SMALL_STATE(604)] = 20295,
  [SMALL_STATE(605)] = 20311,
  [SMALL_STATE(606)] = 20327,
  [SMALL_STATE(607)] = 20343,
  [SMALL_STATE(608)] = 20359,
  [SMALL_STATE(609)] = 20375,
  [SMALL_STATE(610)] = 20391,
  [SMALL_STATE(611)] = 20405,
  [SMALL_STATE(612)] = 20419,
  [SMALL_STATE(613)] = 20435,
  [SMALL_STATE(614)] = 20449,
  [SMALL_STATE(615)] = 20459,
  [SMALL_STATE(616)] = 20475,
  [SMALL_STATE(617)] = 20487,
  [SMALL_STATE(618)] = 20503,
  [SMALL_STATE(619)] = 20517,
  [SMALL_STATE(620)] = 20529,
  [SMALL_STATE(621)] = 20545,
  [SMALL_STATE(622)] = 20561,
  [SMALL_STATE(623)] = 20575,
  [SMALL_STATE(624)] = 20591,
  [SMALL_STATE(625)] = 20607,
  [SMALL_STATE(626)] = 20623,
  [SMALL_STATE(627)] = 20637,
  [SMALL_STATE(628)] = 20653,
  [SMALL_STATE(629)] = 20669,
  [SMALL_STATE(630)] = 20685,
  [SMALL_STATE(631)] = 20701,
  [SMALL_STATE(632)] = 20717,
  [SMALL_STATE(633)] = 20727,
  [SMALL_STATE(634)] = 20741,
  [SMALL_STATE(635)] = 20755,
  [SMALL_STATE(636)] = 20769,
  [SMALL_STATE(637)] = 20783,
  [SMALL_STATE(638)] = 20797,
  [SMALL_STATE(639)] = 20807,
  [SMALL_STATE(640)] = 20817,
  [SMALL_STATE(641)] = 20829,
  [SMALL_STATE(642)] = 20843,
  [SMALL_STATE(643)] = 20853,
  [SMALL_STATE(644)] = 20863,
  [SMALL_STATE(645)] = 20879,
  [SMALL_STATE(646)] = 20895,
  [SMALL_STATE(647)] = 20911,
  [SMALL_STATE(648)] = 20927,
  [SMALL_STATE(649)] = 20941,
  [SMALL_STATE(650)] = 20955,
  [SMALL_STATE(651)] = 20971,
  [SMALL_STATE(652)] = 20985,
  [SMALL_STATE(653)] = 21001,
  [SMALL_STATE(654)] = 21015,
  [SMALL_STATE(655)] = 21029,
  [SMALL_STATE(656)] = 21045,
  [SMALL_STATE(657)] = 21059,
  [SMALL_STATE(658)] = 21073,
  [SMALL_STATE(659)] = 21087,
  [SMALL_STATE(660)] = 21103,
  [SMALL_STATE(661)] = 21119,
  [SMALL_STATE(662)] = 21135,
  [SMALL_STATE(663)] = 21149,
  [SMALL_STATE(664)] = 21163,
  [SMALL_STATE(665)] = 21179,
  [SMALL_STATE(666)] = 21193,
  [SMALL_STATE(667)] = 21207,
  [SMALL_STATE(668)] = 21219,
  [SMALL_STATE(669)] = 21235,
  [SMALL_STATE(670)] = 21247,
  [SMALL_STATE(671)] = 21263,
  [SMALL_STATE(672)] = 21277,
  [SMALL_STATE(673)] = 21291,
  [SMALL_STATE(674)] = 21305,
  [SMALL_STATE(675)] = 21321,
  [SMALL_STATE(676)] = 21335,
  [SMALL_STATE(677)] = 21351,
  [SMALL_STATE(678)] = 21367,
  [SMALL_STATE(679)] = 21379,
  [SMALL_STATE(680)] = 21393,
  [SMALL_STATE(681)] = 21409,
  [SMALL_STATE(682)] = 21423,
  [SMALL_STATE(683)] = 21439,
  [SMALL_STATE(684)] = 21455,
  [SMALL_STATE(685)] = 21471,
  [SMALL_STATE(686)] = 21487,
  [SMALL_STATE(687)] = 21503,
  [SMALL_STATE(688)] = 21517,
  [SMALL_STATE(689)] = 21531,
  [SMALL_STATE(690)] = 21545,
  [SMALL_STATE(691)] = 21559,
  [SMALL_STATE(692)] = 21573,
  [SMALL_STATE(693)] = 21589,
  [SMALL_STATE(694)] = 21605,
  [SMALL_STATE(695)] = 21621,
  [SMALL_STATE(696)] = 21637,
  [SMALL_STATE(697)] = 21653,
  [SMALL_STATE(698)] = 21662,
  [SMALL_STATE(699)] = 21675,
  [SMALL_STATE(700)] = 21688,
  [SMALL_STATE(701)] = 21701,
  [SMALL_STATE(702)] = 21712,
  [SMALL_STATE(703)] = 21721,
  [SMALL_STATE(704)] = 21730,
  [SMALL_STATE(705)] = 21739,
  [SMALL_STATE(706)] = 21748,
  [SMALL_STATE(707)] = 21761,
  [SMALL_STATE(708)] = 21772,
  [SMALL_STATE(709)] = 21785,
  [SMALL_STATE(710)] = 21798,
  [SMALL_STATE(711)] = 21807,
  [SMALL_STATE(712)] = 21818,
  [SMALL_STATE(713)] = 21831,
  [SMALL_STATE(714)] = 21844,
  [SMALL_STATE(715)] = 21857,
  [SMALL_STATE(716)] = 21870,
  [SMALL_STATE(717)] = 21883,
  [SMALL_STATE(718)] = 21892,
  [SMALL_STATE(719)] = 21905,
  [SMALL_STATE(720)] = 21914,
  [SMALL_STATE(721)] = 21923,
  [SMALL_STATE(722)] = 21936,
  [SMALL_STATE(723)] = 21949,
  [SMALL_STATE(724)] = 21962,
  [SMALL_STATE(725)] = 21975,
  [SMALL_STATE(726)] = 21984,
  [SMALL_STATE(727)] = 21993,
  [SMALL_STATE(728)] = 22002,
  [SMALL_STATE(729)] = 22015,
  [SMALL_STATE(730)] = 22024,
  [SMALL_STATE(731)] = 22035,
  [SMALL_STATE(732)] = 22048,
  [SMALL_STATE(733)] = 22057,
  [SMALL_STATE(734)] = 22070,
  [SMALL_STATE(735)] = 22081,
  [SMALL_STATE(736)] = 22092,
  [SMALL_STATE(737)] = 22103,
  [SMALL_STATE(738)] = 22116,
  [SMALL_STATE(739)] = 22129,
  [SMALL_STATE(740)] = 22140,
  [SMALL_STATE(741)] = 22149,
  [SMALL_STATE(742)] = 22160,
  [SMALL_STATE(743)] = 22169,
  [SMALL_STATE(744)] = 22178,
  [SMALL_STATE(745)] = 22189,
  [SMALL_STATE(746)] = 22200,
  [SMALL_STATE(747)] = 22213,
  [SMALL_STATE(748)] = 22222,
  [SMALL_STATE(749)] = 22235,
  [SMALL_STATE(750)] = 22248,
  [SMALL_STATE(751)] = 22257,
  [SMALL_STATE(752)] = 22266,
  [SMALL_STATE(753)] = 22275,
  [SMALL_STATE(754)] = 22284,
  [SMALL_STATE(755)] = 22295,
  [SMALL_STATE(756)] = 22304,
  [SMALL_STATE(757)] = 22313,
  [SMALL_STATE(758)] = 22322,
  [SMALL_STATE(759)] = 22335,
  [SMALL_STATE(760)] = 22344,
  [SMALL_STATE(761)] = 22353,
  [SMALL_STATE(762)] = 22362,
  [SMALL_STATE(763)] = 22371,
  [SMALL_STATE(764)] = 22384,
  [SMALL_STATE(765)] = 22393,
  [SMALL_STATE(766)] = 22404,
  [SMALL_STATE(767)] = 22413,
  [SMALL_STATE(768)] = 22422,
  [SMALL_STATE(769)] = 22431,
  [SMALL_STATE(770)] = 22440,
  [SMALL_STATE(771)] = 22449,
  [SMALL_STATE(772)] = 22460,
  [SMALL_STATE(773)] = 22469,
  [SMALL_STATE(774)] = 22478,
  [SMALL_STATE(775)] = 22489,
  [SMALL_STATE(776)] = 22500,
  [SMALL_STATE(777)] = 22509,
  [SMALL_STATE(778)] = 22520,
  [SMALL_STATE(779)] = 22531,
  [SMALL_STATE(780)] = 22542,
  [SMALL_STATE(781)] = 22553,
  [SMALL_STATE(782)] = 22562,
  [SMALL_STATE(783)] = 22571,
  [SMALL_STATE(784)] = 22580,
  [SMALL_STATE(785)] = 22589,
  [SMALL_STATE(786)] = 22600,
  [SMALL_STATE(787)] = 22609,
  [SMALL_STATE(788)] = 22618,
  [SMALL_STATE(789)] = 22629,
  [SMALL_STATE(790)] = 22638,
  [SMALL_STATE(791)] = 22647,
  [SMALL_STATE(792)] = 22658,
  [SMALL_STATE(793)] = 22669,
  [SMALL_STATE(794)] = 22682,
  [SMALL_STATE(795)] = 22691,
  [SMALL_STATE(796)] = 22699,
  [SMALL_STATE(797)] = 22707,
  [SMALL_STATE(798)] = 22715,
  [SMALL_STATE(799)] = 22723,
  [SMALL_STATE(800)] = 22731,
  [SMALL_STATE(801)] = 22739,
  [SMALL_STATE(802)] = 22747,
  [SMALL_STATE(803)] = 22755,
  [SMALL_STATE(804)] = 22763,
  [SMALL_STATE(805)] = 22773,
  [SMALL_STATE(806)] = 22781,
  [SMALL_STATE(807)] = 22789,
  [SMALL_STATE(808)] = 22797,
  [SMALL_STATE(809)] = 22805,
  [SMALL_STATE(810)] = 22813,
  [SMALL_STATE(811)] = 22821,
  [SMALL_STATE(812)] = 22829,
  [SMALL_STATE(813)] = 22837,
  [SMALL_STATE(814)] = 22845,
  [SMALL_STATE(815)] = 22853,
  [SMALL_STATE(816)] = 22861,
  [SMALL_STATE(817)] = 22871,
  [SMALL_STATE(818)] = 22879,
  [SMALL_STATE(819)] = 22887,
  [SMALL_STATE(820)] = 22895,
  [SMALL_STATE(821)] = 22903,
  [SMALL_STATE(822)] = 22911,
  [SMALL_STATE(823)] = 22919,
  [SMALL_STATE(824)] = 22927,
  [SMALL_STATE(825)] = 22935,
  [SMALL_STATE(826)] = 22943,
  [SMALL_STATE(827)] = 22951,
  [SMALL_STATE(828)] = 22959,
  [SMALL_STATE(829)] = 22967,
  [SMALL_STATE(830)] = 22975,
  [SMALL_STATE(831)] = 22983,
  [SMALL_STATE(832)] = 22991,
  [SMALL_STATE(833)] = 22999,
  [SMALL_STATE(834)] = 23007,
  [SMALL_STATE(835)] = 23015,
  [SMALL_STATE(836)] = 23023,
  [SMALL_STATE(837)] = 23031,
  [SMALL_STATE(838)] = 23039,
  [SMALL_STATE(839)] = 23047,
  [SMALL_STATE(840)] = 23055,
  [SMALL_STATE(841)] = 23063,
  [SMALL_STATE(842)] = 23073,
  [SMALL_STATE(843)] = 23081,
  [SMALL_STATE(844)] = 23089,
  [SMALL_STATE(845)] = 23097,
  [SMALL_STATE(846)] = 23105,
  [SMALL_STATE(847)] = 23113,
  [SMALL_STATE(848)] = 23121,
  [SMALL_STATE(849)] = 23129,
  [SMALL_STATE(850)] = 23137,
  [SMALL_STATE(851)] = 23145,
  [SMALL_STATE(852)] = 23153,
  [SMALL_STATE(853)] = 23161,
  [SMALL_STATE(854)] = 23169,
  [SMALL_STATE(855)] = 23177,
  [SMALL_STATE(856)] = 23185,
  [SMALL_STATE(857)] = 23193,
  [SMALL_STATE(858)] = 23203,
  [SMALL_STATE(859)] = 23211,
  [SMALL_STATE(860)] = 23219,
  [SMALL_STATE(861)] = 23229,
  [SMALL_STATE(862)] = 23237,
  [SMALL_STATE(863)] = 23245,
  [SMALL_STATE(864)] = 23253,
  [SMALL_STATE(865)] = 23261,
  [SMALL_STATE(866)] = 23269,
  [SMALL_STATE(867)] = 23277,
  [SMALL_STATE(868)] = 23285,
  [SMALL_STATE(869)] = 23293,
  [SMALL_STATE(870)] = 23301,
  [SMALL_STATE(871)] = 23309,
  [SMALL_STATE(872)] = 23317,
  [SMALL_STATE(873)] = 23325,
  [SMALL_STATE(874)] = 23333,
  [SMALL_STATE(875)] = 23341,
  [SMALL_STATE(876)] = 23349,
  [SMALL_STATE(877)] = 23357,
  [SMALL_STATE(878)] = 23365,
  [SMALL_STATE(879)] = 23373,
  [SMALL_STATE(880)] = 23381,
  [SMALL_STATE(881)] = 23389,
  [SMALL_STATE(882)] = 23399,
  [SMALL_STATE(883)] = 23407,
  [SMALL_STATE(884)] = 23415,
  [SMALL_STATE(885)] = 23423,
  [SMALL_STATE(886)] = 23431,
  [SMALL_STATE(887)] = 23439,
  [SMALL_STATE(888)] = 23447,
  [SMALL_STATE(889)] = 23455,
  [SMALL_STATE(890)] = 23463,
  [SMALL_STATE(891)] = 23473,
  [SMALL_STATE(892)] = 23481,
  [SMALL_STATE(893)] = 23489,
  [SMALL_STATE(894)] = 23497,
  [SMALL_STATE(895)] = 23505,
  [SMALL_STATE(896)] = 23513,
  [SMALL_STATE(897)] = 23521,
  [SMALL_STATE(898)] = 23529,
  [SMALL_STATE(899)] = 23537,
  [SMALL_STATE(900)] = 23545,
  [SMALL_STATE(901)] = 23553,
  [SMALL_STATE(902)] = 23561,
  [SMALL_STATE(903)] = 23569,
  [SMALL_STATE(904)] = 23577,
  [SMALL_STATE(905)] = 23585,
  [SMALL_STATE(906)] = 23595,
  [SMALL_STATE(907)] = 23603,
  [SMALL_STATE(908)] = 23611,
  [SMALL_STATE(909)] = 23619,
  [SMALL_STATE(910)] = 23627,
  [SMALL_STATE(911)] = 23635,
  [SMALL_STATE(912)] = 23643,
  [SMALL_STATE(913)] = 23651,
  [SMALL_STATE(914)] = 23659,
  [SMALL_STATE(915)] = 23667,
  [SMALL_STATE(916)] = 23675,
  [SMALL_STATE(917)] = 23683,
  [SMALL_STATE(918)] = 23691,
  [SMALL_STATE(919)] = 23699,
  [SMALL_STATE(920)] = 23707,
  [SMALL_STATE(921)] = 23715,
  [SMALL_STATE(922)] = 23723,
  [SMALL_STATE(923)] = 23731,
  [SMALL_STATE(924)] = 23739,
  [SMALL_STATE(925)] = 23747,
  [SMALL_STATE(926)] = 23755,
  [SMALL_STATE(927)] = 23763,
  [SMALL_STATE(928)] = 23771,
  [SMALL_STATE(929)] = 23779,
  [SMALL_STATE(930)] = 23787,
  [SMALL_STATE(931)] = 23795,
  [SMALL_STATE(932)] = 23803,
  [SMALL_STATE(933)] = 23813,
  [SMALL_STATE(934)] = 23823,
  [SMALL_STATE(935)] = 23831,
  [SMALL_STATE(936)] = 23839,
  [SMALL_STATE(937)] = 23847,
  [SMALL_STATE(938)] = 23855,
  [SMALL_STATE(939)] = 23863,
  [SMALL_STATE(940)] = 23873,
  [SMALL_STATE(941)] = 23881,
  [SMALL_STATE(942)] = 23889,
  [SMALL_STATE(943)] = 23897,
  [SMALL_STATE(944)] = 23905,
  [SMALL_STATE(945)] = 23913,
  [SMALL_STATE(946)] = 23921,
  [SMALL_STATE(947)] = 23929,
  [SMALL_STATE(948)] = 23937,
  [SMALL_STATE(949)] = 23945,
  [SMALL_STATE(950)] = 23953,
  [SMALL_STATE(951)] = 23961,
  [SMALL_STATE(952)] = 23969,
  [SMALL_STATE(953)] = 23977,
  [SMALL_STATE(954)] = 23985,
  [SMALL_STATE(955)] = 23993,
  [SMALL_STATE(956)] = 24003,
  [SMALL_STATE(957)] = 24011,
  [SMALL_STATE(958)] = 24019,
  [SMALL_STATE(959)] = 24027,
  [SMALL_STATE(960)] = 24035,
  [SMALL_STATE(961)] = 24043,
  [SMALL_STATE(962)] = 24051,
  [SMALL_STATE(963)] = 24059,
  [SMALL_STATE(964)] = 24067,
  [SMALL_STATE(965)] = 24075,
  [SMALL_STATE(966)] = 24083,
  [SMALL_STATE(967)] = 24091,
  [SMALL_STATE(968)] = 24099,
  [SMALL_STATE(969)] = 24107,
  [SMALL_STATE(970)] = 24115,
  [SMALL_STATE(971)] = 24123,
  [SMALL_STATE(972)] = 24131,
  [SMALL_STATE(973)] = 24139,
  [SMALL_STATE(974)] = 24147,
  [SMALL_STATE(975)] = 24155,
  [SMALL_STATE(976)] = 24163,
  [SMALL_STATE(977)] = 24171,
  [SMALL_STATE(978)] = 24179,
  [SMALL_STATE(979)] = 24187,
  [SMALL_STATE(980)] = 24195,
  [SMALL_STATE(981)] = 24203,
  [SMALL_STATE(982)] = 24211,
  [SMALL_STATE(983)] = 24219,
  [SMALL_STATE(984)] = 24229,
  [SMALL_STATE(985)] = 24239,
  [SMALL_STATE(986)] = 24247,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(912),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(644),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(650),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(96),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(646),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(645),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(415),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(556),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(557),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(558),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(559),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(951),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(560),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(561),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(564),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(652),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(488),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(124),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(265),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 4, .production_id = 16),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 3, .production_id = 10),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 24),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(887),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(661),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(655),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(121),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(659),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(660),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(406),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(580),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(572),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(565),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(555),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(918),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(552),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(551),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(546),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(609),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(503),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(113),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(838),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(525),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(664),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(161),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(612),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(604),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(414),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(593),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(587),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(585),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(584),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(817),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(577),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(544),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(512),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(517),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(501),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(21),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(265),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(910),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(695),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(693),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(164),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(694),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(696),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(410),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(524),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(523),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(522),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(519),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(935),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(516),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(514),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(513),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(624),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(502),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(165),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(864),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(728),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(712),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(714),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(698),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(716),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(718),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(721),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(722),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(724),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(67),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(541),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 4),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(864),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(463),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(422),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(86),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(267),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(269),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(270),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(271),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(272),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(244),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(244),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(274),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 16),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 16),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 12),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 12),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_text, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_text, 1),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_rest_text, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_rest_text, 1),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 16),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 16),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 16),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 16),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 10),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 10),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 16),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 16),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 15),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 15),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 14),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 14),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 13),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 13),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 12),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 12),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 4, .production_id = 10),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 4, .production_id = 10),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 2),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(742),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(836),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 11),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 11),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(796),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(245),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 23),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 23),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_actor, 1),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_actor, 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__direction, 1),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__direction, 1),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_annotation, 1),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_annotation, 1),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_actor_repeat1, 2),
  [1152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2), SHIFT_REPEAT(288),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [1185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(240),
  [1242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(401),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(90),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [1252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 4),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(328),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2),
  [1289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(796),
  [1292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(403),
  [1295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(330),
  [1298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(834),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2), SHIFT_REPEAT(649),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 7),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_id, 1),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_id, 1),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3),
  [1352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2),
  [1392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 20),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 6),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 21),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 19),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [1458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1),
  [1462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [1466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(383),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [1471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_reltype, 1),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1),
  [1503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1),
  [1505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 3),
  [1521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 3),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flowchart_direction, 1),
  [1533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flowchart_direction, 1),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2),
  [1549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(417),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2),
  [1564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2), SHIFT_REPEAT(921),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(955),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(958),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [1589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(964),
  [1591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [1593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [1595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_cardinarity, 1),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(967),
  [1599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(968),
  [1601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(969),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(970),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(457),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2),
  [1636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(462),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2), SHIFT_REPEAT(482),
  [1678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_markdown, 3),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_hexagon, 3),
  [1694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_hexagon, 3),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_bang, 3),
  [1698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_bang, 3),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_content, 1),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_circle, 3),
  [1704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_circle, 3),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_square, 3),
  [1708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_square, 3),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_cloud, 3),
  [1712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_cloud, 3),
  [1714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_rounded, 3),
  [1716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_rounded, 3),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_text, 2),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 4),
  [1730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 4),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2),
  [1742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2), SHIFT_REPEAT(351),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(56),
  [1754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 25),
  [1764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 26),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 20),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 27),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 21),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 28),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1),
  [1786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 17),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_icon, 3),
  [1804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_icon, 3),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(342),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(591),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2),
  [1844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2), SHIFT_REPEAT(939),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 5),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 3),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(318),
  [1896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(471),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 22),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2),
  [1919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2), SHIFT_REPEAT(387),
  [1922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 4),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2),
  [1936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2), SHIFT_REPEAT(666),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(89),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_signal_type, 1),
  [1958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_type, 1),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1),
  [1962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4),
  [1978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note_placement, 1),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_stmt, 1),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_class, 2),
  [1996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 18),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1),
  [2024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 17),
  [2036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5),
  [2038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 17),
  [2040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [2042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 17),
  [2044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5),
  [2046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [2052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 17),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1),
  [2060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [2064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [2072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 18),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 5),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_attribute_key_type, 1),
  [2102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1),
  [2106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1),
  [2118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [2120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 6),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [2134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(739),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [2224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [2244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [2252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [2254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_note_placement, 1),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [2266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2290] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [2304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [2306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [2308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [2342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [2348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [2350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [2352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [2354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [2356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [2364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [2368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1),
  [2370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1),
  [2372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4),
  [2374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [2388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_plus_sign, 1),
  [2392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_minus_sign, 1),
  [2394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [2396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [2410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [2412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [2416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [2420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [2424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [2432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [2434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [2460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3),
  [2466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [2480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [2482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(942),
  [2488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [2490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3),
  [2492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
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

TS_PUBLIC const TSLanguage *tree_sitter_mermaid() {
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
