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
#define STATE_COUNT 921
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 371
#define ALIAS_COUNT 21
#define TOKEN_COUNT 171
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 29

enum ts_symbol_identifiers {
  anon_sym_PERCENT_PERCENT_LBRACE = 1,
  aux_sym_directive_token1 = 2,
  aux_sym_diagram_sequence_token1 = 3,
  aux_sym__sequence_participant_type_token1 = 4,
  aux_sym__sequence_participant_type_token2 = 5,
  aux_sym_sequence_stmt_participant_token1 = 6,
  aux_sym_sequence_stmt_actor_token1 = 7,
  anon_sym_COLON = 8,
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
  sym__md_start = 97,
  sym__md_end = 98,
  sym_type_directive = 99,
  aux_sym_direction_tb_token1 = 100,
  aux_sym_direction_bt_token1 = 101,
  aux_sym_direction_rl_token1 = 102,
  aux_sym_direction_lr_token1 = 103,
  aux_sym__sequence_rest_text_token1 = 104,
  sym__sequence_actor_word = 105,
  sym_solid_arrow = 106,
  sym_dotted_arrow = 107,
  sym_solid_open_arrow = 108,
  anon_sym_DASH_DASH_GT = 109,
  sym_solid_cross = 110,
  sym_dotted_cross = 111,
  sym_dotted_point = 112,
  aux_sym_note_placement_left_token1 = 113,
  aux_sym_note_placement_right_token1 = 114,
  sym__class_name = 115,
  sym__alpha_num_token = 116,
  sym__bquote_string = 117,
  sym__dquote_string = 118,
  sym_class_reltype_aggregation = 119,
  anon_sym_LT_PIPE = 120,
  anon_sym_PIPE_GT = 121,
  anon_sym_LT = 122,
  anon_sym_DASH_DASH = 123,
  anon_sym_DOT_DOT = 124,
  aux_sym_class_label_token1 = 125,
  anon_sym_LBRACK_STAR_RBRACK = 126,
  aux_sym_state_name_token1 = 127,
  aux_sym_state_hide_empty_description_token1 = 128,
  sym_state_id = 129,
  aux_sym_state_annotation_fork_token1 = 130,
  aux_sym_state_annotation_fork_token2 = 131,
  aux_sym_state_annotation_join_token1 = 132,
  aux_sym_state_annotation_join_token2 = 133,
  aux_sym_state_annotation_choice_token1 = 134,
  aux_sym_state_annotation_choice_token2 = 135,
  aux_sym_gantt_task_text_token1 = 136,
  sym_gantt_task_data = 137,
  aux_sym_pie_showdata_token1 = 138,
  sym_pie_title = 139,
  aux_sym_pie_label_token1 = 140,
  sym_pie_value = 141,
  aux_sym_flowchart_direction_lr_token1 = 142,
  aux_sym_flowchart_direction_lr_token2 = 143,
  aux_sym_flowchart_direction_rl_token1 = 144,
  aux_sym_flowchart_direction_tb_token1 = 145,
  aux_sym_flowchart_direction_tb_token2 = 146,
  anon_sym_v = 147,
  aux_sym_flowchart_direction_bt_token1 = 148,
  anon_sym_CARET = 149,
  aux_sym_flow_text_literal_token1 = 150,
  sym_flow_text_quoted = 151,
  aux_sym_flow_link_arrow_token1 = 152,
  aux_sym_flow_link_arrow_token2 = 153,
  aux_sym_flow_link_arrow_token3 = 154,
  aux_sym_flow_link_arrow_start_token1 = 155,
  aux_sym_flow_link_arrow_start_token2 = 156,
  aux_sym_flow_link_arrow_start_token3 = 157,
  sym__er_alphanum = 158,
  anon_sym_PIPEo = 159,
  anon_sym_o_PIPE = 160,
  anon_sym_RBRACEo = 161,
  anon_sym_o_LBRACE = 162,
  anon_sym_RBRACE_PIPE = 163,
  anon_sym_PIPE_LBRACE = 164,
  sym_er_cardinarity_only_one = 165,
  anon_sym_DOT_DASH = 166,
  anon_sym_DASH_DOT = 167,
  aux_sym_er_attribute_key_type_pk_token1 = 168,
  aux_sym_er_attribute_key_type_fk_token1 = 169,
  sym__mindmap_text = 170,
  sym_source_file = 171,
  sym_directive = 172,
  sym__direction = 173,
  sym_diagram_sequence = 174,
  sym__sequence_stmt = 175,
  sym__sequence_participant_type = 176,
  sym_sequence_stmt_participant = 177,
  sym_sequence_stmt_actor = 178,
  sym_sequence_actor = 179,
  sym_sequence_stmt_signal = 180,
  sym_sequence_signal_type = 181,
  sym_sequence_text = 182,
  sym_sequence_stmt_autonumber = 183,
  sym_sequence_stmt_activate = 184,
  sym_sequence_stmt_deactivate = 185,
  sym_sequence_stmt_note = 186,
  sym_sequence_stmt_links = 187,
  sym_sequence_stmt_link = 188,
  sym_sequence_stmt_properties = 189,
  sym_sequence_stmt_details = 190,
  sym_sequence_note_placement = 191,
  sym_sequence_stmt_title = 192,
  sym_sequence_stmt_loop = 193,
  sym_sequence_stmt_rect = 194,
  sym_sequence_stmt_opt = 195,
  aux_sym__sequence_subdocument = 196,
  sym_sequence_stmt_alt = 197,
  sym_sequence_stmt_par = 198,
  sym_diagram_class = 199,
  sym__class_stmt = 200,
  sym_class_stmt_relation = 201,
  sym_class_name = 202,
  sym_class_name_body = 203,
  sym_class_generics = 204,
  sym_class_relation = 205,
  sym__class_reltype = 206,
  sym__class_linetype = 207,
  sym_class_stmt_class = 208,
  sym_class_method_line = 209,
  sym_class_annotation_line = 210,
  sym_class_stmt_method = 211,
  sym_class_stmt_annotation = 212,
  sym_diagram_state = 213,
  sym__state_stmt = 214,
  sym_state_stmt_simple = 215,
  sym_state_stmt_arrow = 216,
  sym_state_stmt_composite = 217,
  sym_state_composite_body = 218,
  sym_state_stmt_annotation = 219,
  sym_state_alias = 220,
  sym_state_stmt_hide_empty_description = 221,
  sym__state_annotation = 222,
  sym_state_note = 223,
  sym_state_note_placement = 224,
  sym_diagram_gantt = 225,
  sym__gantt_stmt = 226,
  sym_gantt_stmt_dateformat = 227,
  sym_gantt_stmt_inclusiveenddates = 228,
  sym_gantt_stmt_topaxis = 229,
  sym_gantt_stmt_axisformat = 230,
  sym_gantt_stmt_includes = 231,
  sym_gantt_stmt_excludes = 232,
  sym_gantt_stmt_todaymarker = 233,
  sym_gantt_stmt_title = 234,
  sym_gantt_stmt_section = 235,
  sym_gantt_stmt_task = 236,
  sym_diagram_pie = 237,
  sym__pie_stmt = 238,
  sym_pie_stmt_title = 239,
  sym_pie_stmt_element = 240,
  sym_diagram_flow = 241,
  sym__flowchart_direction = 242,
  sym__flow_stmt = 243,
  sym_flow_stmt_direction = 244,
  sym_flow_stmt_vertice = 245,
  sym_flow_node = 246,
  sym__flow_link = 247,
  sym_flow_link_simplelink = 248,
  sym_flow_link_arrowtext = 249,
  sym_flow_link_middletext = 250,
  sym_flow_arrow_text = 251,
  sym_flow_vertex_id = 252,
  sym_flow_vertex = 253,
  sym__flow_vertex_kind = 254,
  sym_flow_vertex_square = 255,
  sym_flow_vertex_circle = 256,
  sym_flow_vertex_ellipse = 257,
  sym_flow_vertex_stadium = 258,
  sym_flow_vertex_subroutine = 259,
  sym_flow_vertex_rect = 260,
  sym_flow_vertex_cylinder = 261,
  sym_flow_vertex_round = 262,
  sym_flow_vertex_diamond = 263,
  sym_flow_vertex_hexagon = 264,
  sym_flow_vertex_odd = 265,
  sym_flow_vertex_trapezoid = 266,
  sym_flow_vertex_inv_trapezoid = 267,
  sym_flow_vertex_leanright = 268,
  sym_flow_vertex_leanleft = 269,
  sym__flow_text = 270,
  sym_flow_stmt_subgraph = 271,
  sym_flow_stmt_subgraph_inner = 272,
  sym_flow_vertex_text = 273,
  sym_diagram_er = 274,
  sym__er_stmt = 275,
  sym_er_stmt_entity = 276,
  sym_er_stmt_entity_relation = 277,
  sym_er_entity_name = 278,
  sym_er_relation = 279,
  sym__er_cardinarity = 280,
  sym__er_reltype = 281,
  sym_er_role = 282,
  sym_er_stmt_entity_block = 283,
  sym_er_stmt_entity_block_inner = 284,
  sym_er_attribute = 285,
  sym_er_attribute_type = 286,
  sym_er_attribute_name = 287,
  sym__er_attribute_key_type = 288,
  sym_er_attribute_comment = 289,
  sym_diagram_mindmap = 290,
  sym_mmap_node = 291,
  sym_mmap_node_id = 292,
  sym_mmap_markdown = 293,
  sym_mmap_text = 294,
  sym_mmap_node_content = 295,
  sym_mmap_node_square = 296,
  sym_mmap_node_rounded = 297,
  sym_mmap_node_circle = 298,
  sym_mmap_node_cloud = 299,
  sym_mmap_node_bang = 300,
  sym_mmap_node_hexagon = 301,
  sym_mmap_class = 302,
  sym_mmap_icon = 303,
  sym_direction_tb = 304,
  sym_direction_bt = 305,
  sym_direction_rl = 306,
  sym_direction_lr = 307,
  sym__sequence_rest_text = 308,
  sym_dotted_open_arrow = 309,
  sym_solid_point = 310,
  sym_sequence_signal_plus_sign = 311,
  sym_sequence_signal_minus_sign = 312,
  sym_note_placement_left = 313,
  sym_note_placement_right = 314,
  sym_class_reltype_extension = 315,
  sym_class_reltype_composition = 316,
  sym_class_reltype_dependency = 317,
  sym_class_linetype_solid = 318,
  sym_class_linetype_dotted = 319,
  sym_class_label = 320,
  sym_state_name = 321,
  sym_state_arrow = 322,
  sym_state_description = 323,
  sym_state_hide_empty_description = 324,
  sym_state_division = 325,
  sym_state_annotation_fork = 326,
  sym_state_annotation_join = 327,
  sym_state_annotation_choice = 328,
  sym_gantt_meta_format = 329,
  sym_gantt_task_text = 330,
  sym_pie_showdata = 331,
  sym_pie_label = 332,
  sym_flowchart_direction_lr = 333,
  sym_flowchart_direction_rl = 334,
  sym_flowchart_direction_tb = 335,
  sym_flowchart_direction_bt = 336,
  sym_flow_text_literal = 337,
  sym_flow_link_arrow = 338,
  sym_flow_link_arrow_start = 339,
  sym__er_word = 340,
  sym_er_cardinarity_zero_or_one = 341,
  sym_er_cardinarity_zero_or_more = 342,
  sym_er_cardinarity_one_or_more = 343,
  sym_er_reltype_non_identifying = 344,
  sym_er_reltype_identifying = 345,
  sym_er_attribute_key_type_pk = 346,
  sym_er_attribute_key_type_fk = 347,
  aux_sym_source_file_repeat1 = 348,
  aux_sym_diagram_sequence_repeat1 = 349,
  aux_sym_sequence_actor_repeat1 = 350,
  aux_sym_sequence_stmt_alt_repeat1 = 351,
  aux_sym_sequence_stmt_par_repeat1 = 352,
  aux_sym_diagram_class_repeat1 = 353,
  aux_sym_class_name_body_repeat1 = 354,
  aux_sym_class_stmt_class_repeat1 = 355,
  aux_sym_class_method_line_repeat1 = 356,
  aux_sym_diagram_state_repeat1 = 357,
  aux_sym_state_composite_body_repeat1 = 358,
  aux_sym_diagram_gantt_repeat1 = 359,
  aux_sym_diagram_pie_repeat1 = 360,
  aux_sym_diagram_flow_repeat1 = 361,
  aux_sym_flow_stmt_vertice_repeat1 = 362,
  aux_sym_flow_node_repeat1 = 363,
  aux_sym_flow_arrow_text_repeat1 = 364,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 365,
  aux_sym_diagram_er_repeat1 = 366,
  aux_sym_er_stmt_entity_block_inner_repeat1 = 367,
  aux_sym_diagram_mindmap_repeat1 = 368,
  aux_sym_gantt_task_text_repeat1 = 369,
  aux_sym_flow_text_literal_repeat1 = 370,
  alias_sym_annotation = 371,
  alias_sym_class_classifier_abstract = 372,
  alias_sym_class_style_name = 373,
  alias_sym_class_visibility_internal = 374,
  alias_sym_class_visibility_private = 375,
  alias_sym_class_visibility_public = 376,
  alias_sym_gantt_axis_format = 377,
  alias_sym_gantt_end_dates = 378,
  alias_sym_gantt_excludes = 379,
  alias_sym_gantt_includes = 380,
  alias_sym_gantt_section = 381,
  alias_sym_gantt_title = 382,
  alias_sym_gantt_today_marker = 383,
  alias_sym_gantt_top_axis = 384,
  alias_sym_note_content = 385,
  alias_sym_sequence_alias = 386,
  alias_sym_sequence_stmt_alt_branch = 387,
  alias_sym_sequence_stmt_loop_inner = 388,
  alias_sym_sequence_stmt_opt_inner = 389,
  alias_sym_sequence_stmt_rect_inner = 390,
  alias_sym_title = 391,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [aux_sym_directive_token1] = "arg_directive",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym__sequence_participant_type_token1] = "participant",
  [aux_sym__sequence_participant_type_token2] = "actor",
  [aux_sym_sequence_stmt_participant_token1] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "sequence_actor",
  [anon_sym_COLON] = ":",
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
  [sym__md_start] = "_md_start",
  [sym__md_end] = "_md_end",
  [sym_type_directive] = "type_directive",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
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
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_diagram_sequence_token1] = aux_sym_diagram_sequence_token1,
  [aux_sym__sequence_participant_type_token1] = aux_sym__sequence_participant_type_token1,
  [aux_sym__sequence_participant_type_token2] = aux_sym__sequence_participant_type_token2,
  [aux_sym_sequence_stmt_participant_token1] = aux_sym_sequence_stmt_participant_token1,
  [aux_sym_sequence_stmt_actor_token1] = aux_sym_sequence_stmt_actor_token1,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym__md_start] = sym__md_start,
  [sym__md_end] = sym__md_end,
  [sym_type_directive] = sym_type_directive,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
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
  [aux_sym_directive_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_COLON] = {
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
  [sym__md_start] = {
    .visible = false,
    .named = true,
  },
  [sym__md_end] = {
    .visible = false,
    .named = true,
  },
  [sym_type_directive] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat1] = {
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
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 3,
  [8] = 3,
  [9] = 2,
  [10] = 3,
  [11] = 4,
  [12] = 2,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 20,
  [27] = 27,
  [28] = 14,
  [29] = 21,
  [30] = 22,
  [31] = 23,
  [32] = 24,
  [33] = 25,
  [34] = 20,
  [35] = 35,
  [36] = 21,
  [37] = 22,
  [38] = 23,
  [39] = 24,
  [40] = 25,
  [41] = 20,
  [42] = 21,
  [43] = 22,
  [44] = 23,
  [45] = 24,
  [46] = 25,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 47,
  [55] = 51,
  [56] = 50,
  [57] = 47,
  [58] = 51,
  [59] = 50,
  [60] = 51,
  [61] = 50,
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
  [88] = 85,
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
  [117] = 113,
  [118] = 86,
  [119] = 87,
  [120] = 116,
  [121] = 89,
  [122] = 90,
  [123] = 91,
  [124] = 92,
  [125] = 93,
  [126] = 94,
  [127] = 95,
  [128] = 96,
  [129] = 97,
  [130] = 98,
  [131] = 99,
  [132] = 100,
  [133] = 101,
  [134] = 102,
  [135] = 103,
  [136] = 104,
  [137] = 105,
  [138] = 106,
  [139] = 107,
  [140] = 108,
  [141] = 109,
  [142] = 110,
  [143] = 111,
  [144] = 112,
  [145] = 145,
  [146] = 114,
  [147] = 115,
  [148] = 145,
  [149] = 106,
  [150] = 100,
  [151] = 101,
  [152] = 102,
  [153] = 103,
  [154] = 104,
  [155] = 105,
  [156] = 109,
  [157] = 107,
  [158] = 108,
  [159] = 105,
  [160] = 101,
  [161] = 106,
  [162] = 103,
  [163] = 104,
  [164] = 107,
  [165] = 108,
  [166] = 100,
  [167] = 110,
  [168] = 111,
  [169] = 102,
  [170] = 112,
  [171] = 145,
  [172] = 114,
  [173] = 115,
  [174] = 116,
  [175] = 113,
  [176] = 86,
  [177] = 87,
  [178] = 85,
  [179] = 89,
  [180] = 90,
  [181] = 91,
  [182] = 99,
  [183] = 116,
  [184] = 113,
  [185] = 86,
  [186] = 87,
  [187] = 85,
  [188] = 89,
  [189] = 114,
  [190] = 90,
  [191] = 112,
  [192] = 91,
  [193] = 110,
  [194] = 92,
  [195] = 111,
  [196] = 93,
  [197] = 94,
  [198] = 95,
  [199] = 145,
  [200] = 96,
  [201] = 97,
  [202] = 98,
  [203] = 93,
  [204] = 94,
  [205] = 95,
  [206] = 96,
  [207] = 97,
  [208] = 115,
  [209] = 98,
  [210] = 99,
  [211] = 92,
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
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 226,
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
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 226,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
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
  [311] = 311,
  [312] = 312,
  [313] = 306,
  [314] = 306,
  [315] = 306,
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
  [359] = 257,
  [360] = 360,
  [361] = 246,
  [362] = 362,
  [363] = 363,
  [364] = 353,
  [365] = 353,
  [366] = 353,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 367,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 257,
  [381] = 381,
  [382] = 382,
  [383] = 246,
  [384] = 367,
  [385] = 227,
  [386] = 367,
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
  [400] = 372,
  [401] = 401,
  [402] = 308,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 220,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 247,
  [420] = 420,
  [421] = 421,
  [422] = 387,
  [423] = 299,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 258,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 229,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
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
  [460] = 268,
  [461] = 228,
  [462] = 462,
  [463] = 451,
  [464] = 464,
  [465] = 465,
  [466] = 451,
  [467] = 451,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 256,
  [474] = 474,
  [475] = 475,
  [476] = 277,
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
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 404,
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
  [541] = 516,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 532,
  [556] = 497,
  [557] = 498,
  [558] = 499,
  [559] = 500,
  [560] = 560,
  [561] = 561,
  [562] = 505,
  [563] = 563,
  [564] = 540,
  [565] = 543,
  [566] = 532,
  [567] = 497,
  [568] = 498,
  [569] = 499,
  [570] = 500,
  [571] = 478,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 505,
  [576] = 576,
  [577] = 540,
  [578] = 543,
  [579] = 532,
  [580] = 497,
  [581] = 498,
  [582] = 499,
  [583] = 500,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 505,
  [589] = 540,
  [590] = 543,
  [591] = 538,
  [592] = 553,
  [593] = 560,
  [594] = 526,
  [595] = 533,
  [596] = 596,
  [597] = 597,
  [598] = 493,
  [599] = 506,
  [600] = 544,
  [601] = 601,
  [602] = 538,
  [603] = 553,
  [604] = 560,
  [605] = 526,
  [606] = 493,
  [607] = 506,
  [608] = 544,
  [609] = 601,
  [610] = 538,
  [611] = 553,
  [612] = 560,
  [613] = 526,
  [614] = 614,
  [615] = 493,
  [616] = 506,
  [617] = 544,
  [618] = 601,
  [619] = 478,
  [620] = 572,
  [621] = 573,
  [622] = 622,
  [623] = 586,
  [624] = 597,
  [625] = 524,
  [626] = 572,
  [627] = 573,
  [628] = 622,
  [629] = 586,
  [630] = 597,
  [631] = 524,
  [632] = 478,
  [633] = 572,
  [634] = 573,
  [635] = 622,
  [636] = 586,
  [637] = 597,
  [638] = 524,
  [639] = 525,
  [640] = 479,
  [641] = 496,
  [642] = 513,
  [643] = 494,
  [644] = 525,
  [645] = 479,
  [646] = 496,
  [647] = 513,
  [648] = 494,
  [649] = 525,
  [650] = 479,
  [651] = 496,
  [652] = 513,
  [653] = 494,
  [654] = 654,
  [655] = 601,
  [656] = 622,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 679,
  [692] = 680,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 679,
  [699] = 680,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 680,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 662,
  [709] = 709,
  [710] = 710,
  [711] = 674,
  [712] = 712,
  [713] = 713,
  [714] = 678,
  [715] = 715,
  [716] = 716,
  [717] = 662,
  [718] = 679,
  [719] = 674,
  [720] = 720,
  [721] = 721,
  [722] = 678,
  [723] = 455,
  [724] = 662,
  [725] = 674,
  [726] = 678,
  [727] = 445,
  [728] = 434,
  [729] = 729,
  [730] = 730,
  [731] = 705,
  [732] = 732,
  [733] = 733,
  [734] = 705,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 705,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 107,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 695,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 762,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 750,
  [777] = 777,
  [778] = 750,
  [779] = 751,
  [780] = 752,
  [781] = 781,
  [782] = 751,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 767,
  [790] = 777,
  [791] = 791,
  [792] = 761,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 788,
  [799] = 799,
  [800] = 774,
  [801] = 801,
  [802] = 760,
  [803] = 803,
  [804] = 752,
  [805] = 762,
  [806] = 799,
  [807] = 807,
  [808] = 808,
  [809] = 785,
  [810] = 786,
  [811] = 787,
  [812] = 788,
  [813] = 775,
  [814] = 777,
  [815] = 791,
  [816] = 761,
  [817] = 817,
  [818] = 818,
  [819] = 750,
  [820] = 820,
  [821] = 751,
  [822] = 822,
  [823] = 823,
  [824] = 785,
  [825] = 825,
  [826] = 783,
  [827] = 827,
  [828] = 828,
  [829] = 770,
  [830] = 785,
  [831] = 786,
  [832] = 787,
  [833] = 788,
  [834] = 752,
  [835] = 777,
  [836] = 791,
  [837] = 761,
  [838] = 820,
  [839] = 775,
  [840] = 791,
  [841] = 841,
  [842] = 754,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 755,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 765,
  [852] = 852,
  [853] = 853,
  [854] = 754,
  [855] = 855,
  [856] = 856,
  [857] = 764,
  [858] = 771,
  [859] = 859,
  [860] = 781,
  [861] = 861,
  [862] = 848,
  [863] = 863,
  [864] = 864,
  [865] = 865,
  [866] = 866,
  [867] = 867,
  [868] = 765,
  [869] = 869,
  [870] = 861,
  [871] = 871,
  [872] = 872,
  [873] = 764,
  [874] = 771,
  [875] = 762,
  [876] = 781,
  [877] = 861,
  [878] = 848,
  [879] = 863,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 765,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 888,
  [889] = 764,
  [890] = 771,
  [891] = 891,
  [892] = 781,
  [893] = 861,
  [894] = 848,
  [895] = 863,
  [896] = 767,
  [897] = 897,
  [898] = 786,
  [899] = 899,
  [900] = 696,
  [901] = 901,
  [902] = 902,
  [903] = 767,
  [904] = 755,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 774,
  [909] = 108,
  [910] = 910,
  [911] = 911,
  [912] = 775,
  [913] = 863,
  [914] = 914,
  [915] = 774,
  [916] = 916,
  [917] = 755,
  [918] = 787,
  [919] = 754,
  [920] = 803,
};

static TSCharacterRange aux_sym_flow_text_literal_token1_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '('}, {'*', ','}, {'.', '.'}, {'0', ':'}, {'<', '['}, {'^', '{'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 581,
        '"', 114,
        '#', 492,
        '$', 499,
        '%', 28,
        '&', 519,
        '(', 495,
        ')', 497,
        '*', 498,
        '+', 489,
        ',', 457,
        '-', 491,
        '.', 55,
        '/', 103,
        ':', 451,
        ';', 516,
        '<', 729,
        '=', 81,
        '>', 540,
        'C', 285,
        'E', 282,
        'S', 203,
        '[', 523,
        '\\', 104,
        ']', 525,
        '^', 919,
        '`', 21,
        'c', 98,
        'e', 99,
        'm', 124,
        'o', 725,
        's', 136,
        'v', 917,
        'x', 80,
        '{', 485,
        '|', 521,
        '}', 487,
        '~', 474,
        '\t', 569,
        ' ', 569,
        'A', 175,
        'a', 175,
        'B', 339,
        'b', 339,
        'D', 148,
        'd', 148,
        'F', 276,
        'f', 276,
        'G', 144,
        'g', 144,
        'H', 257,
        'h', 257,
        'I', 312,
        'i', 312,
        'L', 205,
        'l', 205,
        'N', 321,
        'n', 321,
        'P', 146,
        'p', 146,
        'R', 215,
        'r', 215,
        'T', 171,
        't', 171,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == ' ') ADVANCE(560);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(568);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(601);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == ':') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\t', 568,
        '\n', 582,
        ' ', 572,
        '%', 601,
        'A', 611,
        'a', 611,
        'D', 624,
        'd', 624,
        'E', 647,
        'e', 647,
        'L', 634,
        'l', 634,
        'N', 654,
        'n', 654,
        'O', 659,
        'o', 659,
        'P', 603,
        'p', 603,
        'R', 625,
        'r', 625,
        'S', 626,
        's', 626,
        'T', 638,
        't', 638,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\t', 568,
        '\n', 582,
        ' ', 572,
        '%', 601,
        'A', 612,
        'a', 612,
        'D', 624,
        'd', 624,
        'E', 647,
        'e', 647,
        'L', 634,
        'l', 634,
        'N', 654,
        'n', 654,
        'O', 659,
        'o', 659,
        'P', 603,
        'p', 603,
        'R', 625,
        'r', 625,
        'S', 626,
        's', 626,
        'T', 638,
        't', 638,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 568,
        '\n', 582,
        ' ', 572,
        '%', 601,
        'A', 612,
        'a', 612,
        'D', 624,
        'd', 624,
        'E', 643,
        'e', 643,
        'L', 634,
        'l', 634,
        'N', 654,
        'n', 654,
        'O', 659,
        'o', 659,
        'P', 603,
        'p', 603,
        'R', 625,
        'r', 625,
        'S', 626,
        's', 626,
        'T', 638,
        't', 638,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(568);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(601);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(568);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead == '%') ADVANCE(601);
      if (lookahead == '+') ADVANCE(489);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(443);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 582,
        '#', 492,
        '%', 29,
        '(', 493,
        ')', 496,
        '+', 489,
        '-', 490,
        '<', 78,
        '}', 486,
        '~', 475,
        '\t', 572,
        ' ', 572,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(721);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 582,
        '%', 743,
        '-', 745,
        '[', 744,
        '}', 488,
        '\t', 573,
        ' ', 573,
        'D', 760,
        'd', 760,
        'H', 761,
        'h', 761,
        'N', 771,
        'n', 771,
        'S', 779,
        's', 779,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(597);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(455);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(504);
      if (lookahead == 'D') ADVANCE(273);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(587);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(909);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '"', 421,
        '%', 29,
        '*', 498,
        '-', 59,
        '.', 66,
        ':', 450,
        '<', 730,
        '>', 540,
        '`', 422,
        'o', 726,
        '|', 84,
        '~', 474,
        '\t', 572,
        ' ', 572,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(723);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(922);
      if (lookahead == '%') ADVANCE(923);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(924);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(827);
      if (lookahead == ':') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(923);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '}') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(924);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '%', 923,
        ')', 496,
        '-', 50,
        '/', 103,
        '\\', 104,
        ']', 525,
        '|', 105,
        '}', 486,
        '\t', 572,
        ' ', 572,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';') ADVANCE(924);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(556);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(948);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(949);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(897);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(480);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(555);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(817);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(818);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(567);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(444);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '%', 29,
        '-', 62,
        '.', 57,
        '<', 65,
        '=', 83,
        '\t', 572,
        ' ', 572,
        'o', 703,
        'x', 703,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 42:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(715);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 43:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(571);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 44:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(579);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(40);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 46:
      if (lookahead == '(') ADVANCE(562);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(527);
      if (lookahead == ']') ADVANCE(537);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ']') ADVANCE(533);
      END_STATE();
    case 49:
      if (lookahead == ')') ADVANCE(695);
      if (lookahead == '>') ADVANCE(692);
      if (lookahead == 'x') ADVANCE(694);
      END_STATE();
    case 50:
      if (lookahead == ')') ADVANCE(529);
      END_STATE();
    case 51:
      if (lookahead == ')') ADVANCE(529);
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '.') ADVANCE(933);
      END_STATE();
    case 52:
      if (lookahead == ')') ADVANCE(529);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '>') ADVANCE(690);
      if (lookahead == 'x') ADVANCE(693);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '[') ADVANCE(190);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(942);
      if (lookahead == '.') ADVANCE(735);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(931);
      if (lookahead == '.') ADVANCE(933);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(927);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(926);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(731);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(731);
      if (lookahead == '.') ADVANCE(943);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(733);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '{') ADVANCE(938);
      if (lookahead == '|') ADVANCE(936);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(735);
      END_STATE();
    case 67:
      if (lookahead == '2') ADVANCE(472);
      END_STATE();
    case 68:
      if (lookahead == '2') ADVANCE(503);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(483);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(559);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(559);
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(70);
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
      if (lookahead == '<') ADVANCE(500);
      END_STATE();
    case 79:
      if (lookahead == '<') ADVANCE(178);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(932);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(929);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(928);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(728);
      END_STATE();
    case 85:
      if (lookahead == '>') ADVANCE(501);
      END_STATE();
    case 86:
      if (lookahead == '>') ADVANCE(819);
      END_STATE();
    case 87:
      if (lookahead == '>') ADVANCE(821);
      END_STATE();
    case 88:
      if (lookahead == '>') ADVANCE(823);
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
      if (lookahead == 'A') ADVANCE(371);
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(464);
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(272);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(273);
      END_STATE();
    case 96:
      if (lookahead == 'D') ADVANCE(274);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(274);
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 99:
      ADVANCE_MAP(
        'N', 192,
        'n', 93,
        'L', 370,
        'l', 370,
        'R', 194,
        'r', 194,
        'X', 176,
        'x', 176,
      );
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(362);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '[') ADVANCE(190);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(544);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(542);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(535);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(535);
      if (lookahead == 'o') ADVANCE(935);
      if (lookahead == '{') ADVANCE(940);
      if (lookahead == '|') ADVANCE(941);
      END_STATE();
    case 107:
      if (lookahead == ']') ADVANCE(788);
      END_STATE();
    case 108:
      if (lookahead == ']') ADVANCE(820);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(822);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(824);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == '`') ADVANCE(586);
      END_STATE();
    case 115:
      if (lookahead == '`') ADVANCE(722);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(545);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == '|') ADVANCE(939);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == '|') ADVANCE(939);
      if (lookahead == '}') ADVANCE(539);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(935);
      if (lookahead == '{') ADVANCE(940);
      if (lookahead == '|') ADVANCE(941);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(550);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == '{') ADVANCE(938);
      if (lookahead == '|') ADVANCE(936);
      END_STATE();
    case 138:
      if (lookahead == '{') ADVANCE(538);
      END_STATE();
    case 139:
      if (lookahead == '}') ADVANCE(539);
      END_STATE();
    case 140:
      if (lookahead == '}') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(899);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 146:
      ADVANCE_MAP(
        'A', 341,
        'a', 341,
        'I', 206,
        'i', 206,
        'K', 944,
        'k', 944,
        'R', 316,
        'r', 316,
      );
      END_STATE();
    case 147:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 148:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 149:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 151:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 152:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 153:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 154:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 158:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 163:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
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
          lookahead == 'a') ADVANCE(398);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 170:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(915);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(916);
      END_STATE();
    case 171:
      ADVANCE_MAP(
        'B', 915,
        'b', 915,
        'D', 916,
        'd', 916,
        'I', 384,
        'i', 384,
        'O', 195,
        'o', 195,
      );
      END_STATE();
    case 172:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(590);
      END_STATE();
    case 173:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 174:
      ADVANCE_MAP(
        'B', 381,
        'b', 381,
        'L', 345,
        'l', 345,
        'R', 284,
        'r', 284,
        'T', 172,
        't', 172,
      );
      END_STATE();
    case 175:
      ADVANCE_MAP(
        'C', 373,
        'c', 373,
        'L', 374,
        'l', 374,
        'N', 193,
        'n', 193,
        'S', 448,
        's', 448,
        'U', 387,
        'u', 387,
        'X', 255,
        'x', 255,
      );
      END_STATE();
    case 176:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 178:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(328);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(326);
      END_STATE();
    case 179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(404);
      END_STATE();
    case 180:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 183:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 185:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 187:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 188:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 190:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(330);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(327);
      END_STATE();
    case 191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 193:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 194:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 195:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 197:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 205:
      ADVANCE_MAP(
        'E', 240,
        'e', 240,
        'I', 299,
        'i', 299,
        'O', 314,
        'o', 314,
        'R', 912,
        'r', 912,
      );
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 237:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(696);
      END_STATE();
    case 238:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(697);
      END_STATE();
    case 239:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(323);
      END_STATE();
    case 240:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      END_STATE();
    case 241:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 242:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 243:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(352);
      END_STATE();
    case 244:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 245:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(355);
      END_STATE();
    case 246:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(357);
      END_STATE();
    case 247:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 248:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(329);
      END_STATE();
    case 249:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      END_STATE();
    case 250:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(944);
      END_STATE();
    case 252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 253:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 254:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 255:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 256:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 257:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 258:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 259:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 260:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 263:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 264:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 265:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 267:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 268:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 269:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 270:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 271:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
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
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 275:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 276:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(945);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 277:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(459);
      END_STATE();
    case 278:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 279:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 280:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(224);
      END_STATE();
    case 281:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 282:
      ADVANCE_MAP(
        'L', 370,
        'l', 370,
        'N', 192,
        'n', 192,
        'R', 194,
        'r', 194,
        'X', 176,
        'x', 176,
      );
      END_STATE();
    case 283:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 284:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(592);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 288:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 289:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 291:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 292:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(473);
      END_STATE();
    case 293:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      END_STATE();
    case 294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 296:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 297:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 298:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 314:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 326:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 328:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 329:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 332:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(463);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 337:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 338:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(406);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(913);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(918);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 361:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      END_STATE();
    case 362:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(506);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(446);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(213);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 402:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 403:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 404:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 405:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 406:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 407:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 408:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 409:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 410:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 411:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 412:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 413:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 414:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 415:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(260);
      END_STATE();
    case 416:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 417:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 418:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(930);
      END_STATE();
    case 419:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      END_STATE();
    case 420:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      END_STATE();
    case 421:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(25);
      END_STATE();
    case 422:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(115);
      END_STATE();
    case 423:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(556);
      END_STATE();
    case 424:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\t', 568,
        '\n', 582,
        ' ', 572,
        '%', 601,
        'A', 612,
        'a', 612,
        'D', 624,
        'd', 624,
        'L', 634,
        'l', 634,
        'N', 654,
        'n', 654,
        'O', 659,
        'o', 659,
        'P', 603,
        'p', 603,
        'R', 625,
        'r', 625,
        'S', 626,
        's', 626,
        'T', 638,
        't', 638,
      );
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 425:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 581,
        '%', 29,
        '(', 494,
        ')', 497,
        ':', 74,
        '[', 522,
        '{', 138,
        '\t', 569,
        ' ', 569,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 426:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '"', 22,
        '%', 28,
        '&', 519,
        '(', 495,
        ')', 47,
        ',', 457,
        '-', 51,
        '.', 57,
        '/', 103,
        ':', 450,
        ';', 516,
        '=', 81,
        '>', 540,
        'O', 410,
        '[', 523,
        '\\', 104,
        ']', 524,
        '`', 21,
        'm', 124,
        'o', 64,
        '{', 485,
        '|', 106,
        '}', 130,
        '~', 474,
        '\t', 572,
        ' ', 572,
        '<', 63,
        'x', 63,
        'A', 303,
        'a', 303,
        'C', 285,
        'c', 285,
        'E', 281,
        'e', 281,
        'F', 276,
        'f', 276,
        'G', 144,
        'g', 144,
        'L', 204,
        'l', 204,
        'P', 251,
        'p', 251,
        'R', 252,
        'r', 252,
        'S', 214,
        's', 214,
        'T', 261,
        't', 261,
      );
      END_STATE();
    case 427:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '"', 22,
        '%', 29,
        '-', 60,
        '.', 55,
        '}', 486,
        '\t', 572,
        ' ', 572,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 428:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '"', 421,
        '%', 29,
        '(', 493,
        ')', 496,
        '*', 498,
        '-', 59,
        '.', 66,
        ':', 450,
        '<', 730,
        '>', 540,
        '[', 522,
        ']', 524,
        '^', 919,
        'e', 128,
        'o', 724,
        'v', 917,
        '|', 84,
        '}', 139,
        '~', 474,
        '\t', 572,
        ' ', 572,
        'B', 339,
        'b', 339,
        'L', 340,
        'l', 340,
        'R', 283,
        'r', 283,
        'T', 170,
        't', 170,
      );
      END_STATE();
    case 429:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '"', 421,
        '%', 29,
        '-', 59,
        '.', 66,
        ':', 75,
        '`', 422,
        '{', 484,
        '~', 474,
        '\t', 572,
        ' ', 572,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 430:
      if (eof) ADVANCE(442);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '"') ADVANCE(902);
      if (lookahead == '%') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(908);
      END_STATE();
    case 431:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '$', 499,
        '%', 29,
        '(', 493,
        ')', 496,
        '*', 498,
        ';', 516,
        '[', 522,
        ']', 524,
        '|', 520,
        '}', 486,
        '\t', 572,
        ' ', 572,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 432:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '%', 827,
        '\t', 572,
        ' ', 572,
        'A', 890,
        'a', 890,
        'D', 828,
        'd', 828,
        'E', 891,
        'e', 891,
        'I', 868,
        'i', 868,
        'S', 844,
        's', 844,
        'T', 856,
        't', 856,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 433:
      if (eof) ADVANCE(442);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(743);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 434:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '%', 29,
        '(', 493,
        ')', 496,
        '-', 60,
        '.', 55,
        ':', 450,
        '>', 85,
        '[', 53,
        ']', 48,
        '{', 484,
        '|', 520,
        '}', 486,
        '\t', 572,
        ' ', 572,
        'D', 801,
        'd', 801,
        'H', 802,
        'h', 802,
        'N', 806,
        'n', 806,
        'S', 809,
        's', 809,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 435:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '%', 29,
        '-', 59,
        ':', 75,
        '<', 79,
        '[', 54,
        '{', 484,
        '}', 486,
        '~', 474,
        '\t', 572,
        ' ', 572,
        'A', 808,
        'a', 808,
        'D', 801,
        'd', 801,
        'H', 802,
        'h', 802,
        'N', 806,
        'n', 806,
        'S', 809,
        's', 809,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 436:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '%', 29,
        '-', 52,
        ':', 450,
        '<', 79,
        '[', 102,
        'o', 137,
        '{', 484,
        '|', 131,
        '}', 129,
        '\t', 572,
        ' ', 572,
        'A', 361,
        'a', 361,
      );
      END_STATE();
    case 437:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '%', 29,
        '-', 61,
        ':', 450,
        '[', 53,
        '}', 486,
        '\t', 572,
        ' ', 572,
        'D', 801,
        'd', 801,
        'H', 802,
        'h', 802,
        'N', 806,
        'n', 806,
        'S', 809,
        's', 809,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 438:
      if (eof) ADVANCE(442);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ':') ADVANCE(450);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == '~') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 439:
      if (eof) ADVANCE(442);
      ADVANCE_MAP(
        '\n', 582,
        '%', 29,
        ';', 516,
        's', 712,
        '\t', 572,
        ' ', 572,
        'D', 715,
        'd', 715,
      );
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 440:
      if (eof) ADVANCE(442);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(570);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(77);
      END_STATE();
    case 441:
      if (eof) ADVANCE(442);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token1);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__sequence_participant_type_token2);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(458);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == '{') ADVANCE(480);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(480);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == 'D') ADVANCE(272);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(538);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == 'o') ADVANCE(937);
      if (lookahead == '|') ADVANCE(939);
      if (lookahead == '}') ADVANCE(539);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(732);
      if (lookahead == '>') ADVANCE(690);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(526);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(526);
      if (lookahead == '-') ADVANCE(528);
      if (lookahead == '[') ADVANCE(530);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(527);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      if (lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(728);
      if (lookahead == ']') ADVANCE(535);
      if (lookahead == '{') ADVANCE(940);
      if (lookahead == '|') ADVANCE(941);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == '/') ADVANCE(541);
      if (lookahead == '[') ADVANCE(532);
      if (lookahead == '\\') ADVANCE(543);
      if (lookahead == '|') ADVANCE(534);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ']') ADVANCE(533);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_diagram_er_token1);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_diagram_mindmap_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(555);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\n') ADVANCE(551);
      if (lookahead == '{') ADVANCE(555);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(10);
      if (lookahead != 0) ADVANCE(551);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '%') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(555);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_mmap_markdown_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(10);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_mmap_text_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(572);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_mmap_class_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == '\t') ADVANCE(572);
      if (lookahead == ' ') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_mmap_class_token2);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token1);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(567);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(10);
      if (lookahead != 0) ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == '\r' ||
          lookahead == ')') ADVANCE(10);
      if (lookahead != 0) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '%') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(567);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_mmap_icon_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(568);
      if (lookahead == ' ') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(569);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(69);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(570);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(77);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(140);
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
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(908);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(556);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(949);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(589);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(579);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(597);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == ':') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__md_start);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__md_end);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(597);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '%') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(597);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(687);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(10);
      if (lookahead != 0) ADVANCE(599);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(10);
      if (lookahead != 0) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == ' ') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '_') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      ADVANCE_MAP(
        'C', 675,
        'c', 675,
        'L', 670,
        'l', 670,
        'N', 619,
        'n', 619,
        'U', 676,
        'u', 676,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(675);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(688);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(689);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(707);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(548);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(711);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(708);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(704);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(705);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(720);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(718);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(517);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(717);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(716);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '{') ADVANCE(938);
      if (lookahead == '|') ADVANCE(936);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(702);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(500);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '|') ADVANCE(727);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(727);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(695);
      if (lookahead == '>') ADVANCE(691);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(691);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      ADVANCE_MAP(
        'B', 778,
        'b', 778,
        'L', 774,
        'l', 774,
        'R', 765,
        'r', 765,
        'T', 748,
        't', 748,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(787);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(787);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(585);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(584);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(10);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(815);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(818);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(818);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(894);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(826);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(826);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(825);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(893);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(860);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(884);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(861);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(829);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(834);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(842);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(846);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(848);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(855);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(833);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(871);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(889);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(838);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(847);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(887);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(843);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(830);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(831);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(832);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(839);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(874);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(866);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(875);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(859);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(864);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(852);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(851);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(858);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(862);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(849);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(840);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(841);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(850);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(854);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(835);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(857);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(863);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(898);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(898);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(908);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(10);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(908);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(22);
      if (lookahead != 0) ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(908);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(908);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(908);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(908);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(908);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(908);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_pie_label_token1);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token1);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token2);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_rl_token1);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token1);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token2);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_bt_token1);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '{') ADVANCE(924);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(924);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(922);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(920);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(924);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if ((!eof && set_contains(aux_sym_flow_text_literal_token1_character_set_1, 9, lookahead))) ADVANCE(924);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(927);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(926);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(929);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(928);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(927);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(926);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(929);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(928);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '.') ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__er_alphanum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_PIPEo);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_o_PIPE);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_RBRACEo);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_o_LBRACE);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_RBRACE_PIPE);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACE);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_er_cardinarity_only_one);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_pk_token1);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_fk_token1);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(947);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(947);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead == '%') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(949);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__mindmap_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(949);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 426},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 424},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 424},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 424},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 424},
  [48] = {.lex_state = 424},
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
  [62] = {.lex_state = 426},
  [63] = {.lex_state = 434},
  [64] = {.lex_state = 434},
  [65] = {.lex_state = 434},
  [66] = {.lex_state = 434},
  [67] = {.lex_state = 434},
  [68] = {.lex_state = 434},
  [69] = {.lex_state = 434},
  [70] = {.lex_state = 434},
  [71] = {.lex_state = 434},
  [72] = {.lex_state = 434},
  [73] = {.lex_state = 432},
  [74] = {.lex_state = 434},
  [75] = {.lex_state = 432},
  [76] = {.lex_state = 434},
  [77] = {.lex_state = 434},
  [78] = {.lex_state = 432},
  [79] = {.lex_state = 434},
  [80] = {.lex_state = 434},
  [81] = {.lex_state = 434},
  [82] = {.lex_state = 434},
  [83] = {.lex_state = 426},
  [84] = {.lex_state = 426},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 424},
  [160] = {.lex_state = 424},
  [161] = {.lex_state = 424},
  [162] = {.lex_state = 424},
  [163] = {.lex_state = 424},
  [164] = {.lex_state = 424},
  [165] = {.lex_state = 424},
  [166] = {.lex_state = 424},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 424},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 424},
  [183] = {.lex_state = 424},
  [184] = {.lex_state = 424},
  [185] = {.lex_state = 424},
  [186] = {.lex_state = 424},
  [187] = {.lex_state = 424},
  [188] = {.lex_state = 424},
  [189] = {.lex_state = 424},
  [190] = {.lex_state = 424},
  [191] = {.lex_state = 424},
  [192] = {.lex_state = 424},
  [193] = {.lex_state = 424},
  [194] = {.lex_state = 424},
  [195] = {.lex_state = 424},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 424},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 424},
  [204] = {.lex_state = 424},
  [205] = {.lex_state = 424},
  [206] = {.lex_state = 424},
  [207] = {.lex_state = 424},
  [208] = {.lex_state = 424},
  [209] = {.lex_state = 424},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 428},
  [213] = {.lex_state = 425},
  [214] = {.lex_state = 426},
  [215] = {.lex_state = 428},
  [216] = {.lex_state = 426},
  [217] = {.lex_state = 426},
  [218] = {.lex_state = 435},
  [219] = {.lex_state = 428},
  [220] = {.lex_state = 437},
  [221] = {.lex_state = 436},
  [222] = {.lex_state = 428},
  [223] = {.lex_state = 435},
  [224] = {.lex_state = 434},
  [225] = {.lex_state = 426},
  [226] = {.lex_state = 437},
  [227] = {.lex_state = 428},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 434},
  [231] = {.lex_state = 434},
  [232] = {.lex_state = 434},
  [233] = {.lex_state = 434},
  [234] = {.lex_state = 434},
  [235] = {.lex_state = 434},
  [236] = {.lex_state = 434},
  [237] = {.lex_state = 434},
  [238] = {.lex_state = 434},
  [239] = {.lex_state = 434},
  [240] = {.lex_state = 434},
  [241] = {.lex_state = 441},
  [242] = {.lex_state = 42},
  [243] = {.lex_state = 434},
  [244] = {.lex_state = 434},
  [245] = {.lex_state = 23},
  [246] = {.lex_state = 23},
  [247] = {.lex_state = 428},
  [248] = {.lex_state = 434},
  [249] = {.lex_state = 434},
  [250] = {.lex_state = 434},
  [251] = {.lex_state = 434},
  [252] = {.lex_state = 434},
  [253] = {.lex_state = 434},
  [254] = {.lex_state = 434},
  [255] = {.lex_state = 42},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 23},
  [258] = {.lex_state = 428},
  [259] = {.lex_state = 435},
  [260] = {.lex_state = 441},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 434},
  [263] = {.lex_state = 434},
  [264] = {.lex_state = 42},
  [265] = {.lex_state = 434},
  [266] = {.lex_state = 434},
  [267] = {.lex_state = 434},
  [268] = {.lex_state = 428},
  [269] = {.lex_state = 432},
  [270] = {.lex_state = 432},
  [271] = {.lex_state = 432},
  [272] = {.lex_state = 432},
  [273] = {.lex_state = 432},
  [274] = {.lex_state = 432},
  [275] = {.lex_state = 432},
  [276] = {.lex_state = 432},
  [277] = {.lex_state = 428},
  [278] = {.lex_state = 441},
  [279] = {.lex_state = 426},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 441},
  [282] = {.lex_state = 42},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 434},
  [287] = {.lex_state = 436},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 432},
  [290] = {.lex_state = 11},
  [291] = {.lex_state = 432},
  [292] = {.lex_state = 42},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 432},
  [296] = {.lex_state = 432},
  [297] = {.lex_state = 439},
  [298] = {.lex_state = 439},
  [299] = {.lex_state = 32},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 439},
  [302] = {.lex_state = 426},
  [303] = {.lex_state = 426},
  [304] = {.lex_state = 436},
  [305] = {.lex_state = 426},
  [306] = {.lex_state = 436},
  [307] = {.lex_state = 439},
  [308] = {.lex_state = 32},
  [309] = {.lex_state = 426},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 426},
  [312] = {.lex_state = 11},
  [313] = {.lex_state = 436},
  [314] = {.lex_state = 436},
  [315] = {.lex_state = 436},
  [316] = {.lex_state = 425},
  [317] = {.lex_state = 426},
  [318] = {.lex_state = 426},
  [319] = {.lex_state = 426},
  [320] = {.lex_state = 426},
  [321] = {.lex_state = 426},
  [322] = {.lex_state = 426},
  [323] = {.lex_state = 426},
  [324] = {.lex_state = 439},
  [325] = {.lex_state = 426},
  [326] = {.lex_state = 426},
  [327] = {.lex_state = 426},
  [328] = {.lex_state = 426},
  [329] = {.lex_state = 426},
  [330] = {.lex_state = 426},
  [331] = {.lex_state = 439},
  [332] = {.lex_state = 426},
  [333] = {.lex_state = 426},
  [334] = {.lex_state = 426},
  [335] = {.lex_state = 426},
  [336] = {.lex_state = 426},
  [337] = {.lex_state = 431},
  [338] = {.lex_state = 426},
  [339] = {.lex_state = 426},
  [340] = {.lex_state = 431},
  [341] = {.lex_state = 426},
  [342] = {.lex_state = 426},
  [343] = {.lex_state = 23},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 23},
  [346] = {.lex_state = 426},
  [347] = {.lex_state = 431},
  [348] = {.lex_state = 431},
  [349] = {.lex_state = 23},
  [350] = {.lex_state = 426},
  [351] = {.lex_state = 431},
  [352] = {.lex_state = 431},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 434},
  [355] = {.lex_state = 427},
  [356] = {.lex_state = 426},
  [357] = {.lex_state = 426},
  [358] = {.lex_state = 426},
  [359] = {.lex_state = 429},
  [360] = {.lex_state = 427},
  [361] = {.lex_state = 429},
  [362] = {.lex_state = 427},
  [363] = {.lex_state = 427},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 7},
  [367] = {.lex_state = 426},
  [368] = {.lex_state = 439},
  [369] = {.lex_state = 439},
  [370] = {.lex_state = 426},
  [371] = {.lex_state = 429},
  [372] = {.lex_state = 431},
  [373] = {.lex_state = 439},
  [374] = {.lex_state = 429},
  [375] = {.lex_state = 439},
  [376] = {.lex_state = 439},
  [377] = {.lex_state = 427},
  [378] = {.lex_state = 425},
  [379] = {.lex_state = 431},
  [380] = {.lex_state = 438},
  [381] = {.lex_state = 427},
  [382] = {.lex_state = 427},
  [383] = {.lex_state = 438},
  [384] = {.lex_state = 426},
  [385] = {.lex_state = 435},
  [386] = {.lex_state = 426},
  [387] = {.lex_state = 426},
  [388] = {.lex_state = 26},
  [389] = {.lex_state = 427},
  [390] = {.lex_state = 430},
  [391] = {.lex_state = 429},
  [392] = {.lex_state = 429},
  [393] = {.lex_state = 26},
  [394] = {.lex_state = 24},
  [395] = {.lex_state = 26},
  [396] = {.lex_state = 429},
  [397] = {.lex_state = 429},
  [398] = {.lex_state = 26},
  [399] = {.lex_state = 429},
  [400] = {.lex_state = 41},
  [401] = {.lex_state = 26},
  [402] = {.lex_state = 31},
  [403] = {.lex_state = 429},
  [404] = {.lex_state = 41},
  [405] = {.lex_state = 26},
  [406] = {.lex_state = 26},
  [407] = {.lex_state = 437},
  [408] = {.lex_state = 429},
  [409] = {.lex_state = 431},
  [410] = {.lex_state = 427},
  [411] = {.lex_state = 20},
  [412] = {.lex_state = 20},
  [413] = {.lex_state = 20},
  [414] = {.lex_state = 20},
  [415] = {.lex_state = 20},
  [416] = {.lex_state = 20},
  [417] = {.lex_state = 427},
  [418] = {.lex_state = 427},
  [419] = {.lex_state = 435},
  [420] = {.lex_state = 427},
  [421] = {.lex_state = 427},
  [422] = {.lex_state = 426},
  [423] = {.lex_state = 31},
  [424] = {.lex_state = 26},
  [425] = {.lex_state = 26},
  [426] = {.lex_state = 429},
  [427] = {.lex_state = 26},
  [428] = {.lex_state = 26},
  [429] = {.lex_state = 435},
  [430] = {.lex_state = 434},
  [431] = {.lex_state = 26},
  [432] = {.lex_state = 26},
  [433] = {.lex_state = 425},
  [434] = {.lex_state = 428},
  [435] = {.lex_state = 426},
  [436] = {.lex_state = 6},
  [437] = {.lex_state = 426},
  [438] = {.lex_state = 426},
  [439] = {.lex_state = 13},
  [440] = {.lex_state = 431},
  [441] = {.lex_state = 426},
  [442] = {.lex_state = 426},
  [443] = {.lex_state = 433},
  [444] = {.lex_state = 427},
  [445] = {.lex_state = 428},
  [446] = {.lex_state = 431},
  [447] = {.lex_state = 431},
  [448] = {.lex_state = 431},
  [449] = {.lex_state = 431},
  [450] = {.lex_state = 426},
  [451] = {.lex_state = 13},
  [452] = {.lex_state = 440},
  [453] = {.lex_state = 426},
  [454] = {.lex_state = 433},
  [455] = {.lex_state = 428},
  [456] = {.lex_state = 440},
  [457] = {.lex_state = 426},
  [458] = {.lex_state = 42},
  [459] = {.lex_state = 433},
  [460] = {.lex_state = 435},
  [461] = {.lex_state = 433},
  [462] = {.lex_state = 425},
  [463] = {.lex_state = 13},
  [464] = {.lex_state = 425},
  [465] = {.lex_state = 425},
  [466] = {.lex_state = 13},
  [467] = {.lex_state = 13},
  [468] = {.lex_state = 426},
  [469] = {.lex_state = 435},
  [470] = {.lex_state = 425},
  [471] = {.lex_state = 425},
  [472] = {.lex_state = 431},
  [473] = {.lex_state = 6},
  [474] = {.lex_state = 426},
  [475] = {.lex_state = 426},
  [476] = {.lex_state = 435},
  [477] = {.lex_state = 426},
  [478] = {.lex_state = 2},
  [479] = {.lex_state = 2},
  [480] = {.lex_state = 426},
  [481] = {.lex_state = 434},
  [482] = {.lex_state = 434},
  [483] = {.lex_state = 434},
  [484] = {.lex_state = 434},
  [485] = {.lex_state = 434},
  [486] = {.lex_state = 434},
  [487] = {.lex_state = 434},
  [488] = {.lex_state = 434},
  [489] = {.lex_state = 434},
  [490] = {.lex_state = 434},
  [491] = {.lex_state = 426},
  [492] = {.lex_state = 426},
  [493] = {.lex_state = 13},
  [494] = {.lex_state = 2},
  [495] = {.lex_state = 426},
  [496] = {.lex_state = 2},
  [497] = {.lex_state = 13},
  [498] = {.lex_state = 13},
  [499] = {.lex_state = 13},
  [500] = {.lex_state = 13},
  [501] = {.lex_state = 440},
  [502] = {.lex_state = 434},
  [503] = {.lex_state = 434},
  [504] = {.lex_state = 434},
  [505] = {.lex_state = 426},
  [506] = {.lex_state = 13},
  [507] = {.lex_state = 434},
  [508] = {.lex_state = 434},
  [509] = {.lex_state = 426},
  [510] = {.lex_state = 434},
  [511] = {.lex_state = 426},
  [512] = {.lex_state = 426},
  [513] = {.lex_state = 2},
  [514] = {.lex_state = 426},
  [515] = {.lex_state = 426},
  [516] = {.lex_state = 24},
  [517] = {.lex_state = 429},
  [518] = {.lex_state = 426},
  [519] = {.lex_state = 7},
  [520] = {.lex_state = 7},
  [521] = {.lex_state = 426},
  [522] = {.lex_state = 7},
  [523] = {.lex_state = 431},
  [524] = {.lex_state = 13},
  [525] = {.lex_state = 13},
  [526] = {.lex_state = 2},
  [527] = {.lex_state = 431},
  [528] = {.lex_state = 426},
  [529] = {.lex_state = 431},
  [530] = {.lex_state = 429},
  [531] = {.lex_state = 426},
  [532] = {.lex_state = 429},
  [533] = {.lex_state = 24},
  [534] = {.lex_state = 426},
  [535] = {.lex_state = 426},
  [536] = {.lex_state = 426},
  [537] = {.lex_state = 426},
  [538] = {.lex_state = 2},
  [539] = {.lex_state = 426},
  [540] = {.lex_state = 426},
  [541] = {.lex_state = 24},
  [542] = {.lex_state = 426},
  [543] = {.lex_state = 426},
  [544] = {.lex_state = 13},
  [545] = {.lex_state = 434},
  [546] = {.lex_state = 434},
  [547] = {.lex_state = 30},
  [548] = {.lex_state = 434},
  [549] = {.lex_state = 434},
  [550] = {.lex_state = 426},
  [551] = {.lex_state = 426},
  [552] = {.lex_state = 429},
  [553] = {.lex_state = 2},
  [554] = {.lex_state = 30},
  [555] = {.lex_state = 429},
  [556] = {.lex_state = 13},
  [557] = {.lex_state = 13},
  [558] = {.lex_state = 13},
  [559] = {.lex_state = 13},
  [560] = {.lex_state = 2},
  [561] = {.lex_state = 426},
  [562] = {.lex_state = 426},
  [563] = {.lex_state = 431},
  [564] = {.lex_state = 426},
  [565] = {.lex_state = 426},
  [566] = {.lex_state = 429},
  [567] = {.lex_state = 13},
  [568] = {.lex_state = 13},
  [569] = {.lex_state = 13},
  [570] = {.lex_state = 13},
  [571] = {.lex_state = 2},
  [572] = {.lex_state = 2},
  [573] = {.lex_state = 2},
  [574] = {.lex_state = 426},
  [575] = {.lex_state = 426},
  [576] = {.lex_state = 426},
  [577] = {.lex_state = 426},
  [578] = {.lex_state = 426},
  [579] = {.lex_state = 429},
  [580] = {.lex_state = 13},
  [581] = {.lex_state = 13},
  [582] = {.lex_state = 13},
  [583] = {.lex_state = 13},
  [584] = {.lex_state = 426},
  [585] = {.lex_state = 426},
  [586] = {.lex_state = 13},
  [587] = {.lex_state = 426},
  [588] = {.lex_state = 426},
  [589] = {.lex_state = 426},
  [590] = {.lex_state = 426},
  [591] = {.lex_state = 2},
  [592] = {.lex_state = 2},
  [593] = {.lex_state = 2},
  [594] = {.lex_state = 2},
  [595] = {.lex_state = 24},
  [596] = {.lex_state = 431},
  [597] = {.lex_state = 13},
  [598] = {.lex_state = 13},
  [599] = {.lex_state = 13},
  [600] = {.lex_state = 13},
  [601] = {.lex_state = 13},
  [602] = {.lex_state = 2},
  [603] = {.lex_state = 2},
  [604] = {.lex_state = 2},
  [605] = {.lex_state = 2},
  [606] = {.lex_state = 13},
  [607] = {.lex_state = 13},
  [608] = {.lex_state = 13},
  [609] = {.lex_state = 13},
  [610] = {.lex_state = 2},
  [611] = {.lex_state = 2},
  [612] = {.lex_state = 2},
  [613] = {.lex_state = 2},
  [614] = {.lex_state = 426},
  [615] = {.lex_state = 13},
  [616] = {.lex_state = 13},
  [617] = {.lex_state = 13},
  [618] = {.lex_state = 13},
  [619] = {.lex_state = 2},
  [620] = {.lex_state = 2},
  [621] = {.lex_state = 2},
  [622] = {.lex_state = 2},
  [623] = {.lex_state = 13},
  [624] = {.lex_state = 13},
  [625] = {.lex_state = 13},
  [626] = {.lex_state = 2},
  [627] = {.lex_state = 2},
  [628] = {.lex_state = 2},
  [629] = {.lex_state = 13},
  [630] = {.lex_state = 13},
  [631] = {.lex_state = 13},
  [632] = {.lex_state = 2},
  [633] = {.lex_state = 2},
  [634] = {.lex_state = 2},
  [635] = {.lex_state = 2},
  [636] = {.lex_state = 13},
  [637] = {.lex_state = 13},
  [638] = {.lex_state = 13},
  [639] = {.lex_state = 13},
  [640] = {.lex_state = 2},
  [641] = {.lex_state = 2},
  [642] = {.lex_state = 2},
  [643] = {.lex_state = 2},
  [644] = {.lex_state = 13},
  [645] = {.lex_state = 2},
  [646] = {.lex_state = 2},
  [647] = {.lex_state = 2},
  [648] = {.lex_state = 2},
  [649] = {.lex_state = 13},
  [650] = {.lex_state = 2},
  [651] = {.lex_state = 2},
  [652] = {.lex_state = 2},
  [653] = {.lex_state = 2},
  [654] = {.lex_state = 426},
  [655] = {.lex_state = 13},
  [656] = {.lex_state = 2},
  [657] = {.lex_state = 426},
  [658] = {.lex_state = 433},
  [659] = {.lex_state = 24},
  [660] = {.lex_state = 426},
  [661] = {.lex_state = 13},
  [662] = {.lex_state = 13},
  [663] = {.lex_state = 13},
  [664] = {.lex_state = 13},
  [665] = {.lex_state = 427},
  [666] = {.lex_state = 13},
  [667] = {.lex_state = 426},
  [668] = {.lex_state = 13},
  [669] = {.lex_state = 13},
  [670] = {.lex_state = 13},
  [671] = {.lex_state = 426},
  [672] = {.lex_state = 426},
  [673] = {.lex_state = 13},
  [674] = {.lex_state = 13},
  [675] = {.lex_state = 13},
  [676] = {.lex_state = 426},
  [677] = {.lex_state = 426},
  [678] = {.lex_state = 13},
  [679] = {.lex_state = 426},
  [680] = {.lex_state = 426},
  [681] = {.lex_state = 426},
  [682] = {.lex_state = 426},
  [683] = {.lex_state = 427},
  [684] = {.lex_state = 431},
  [685] = {.lex_state = 426},
  [686] = {.lex_state = 431},
  [687] = {.lex_state = 427},
  [688] = {.lex_state = 426},
  [689] = {.lex_state = 426},
  [690] = {.lex_state = 426},
  [691] = {.lex_state = 426},
  [692] = {.lex_state = 426},
  [693] = {.lex_state = 426},
  [694] = {.lex_state = 426},
  [695] = {.lex_state = 24},
  [696] = {.lex_state = 24},
  [697] = {.lex_state = 426},
  [698] = {.lex_state = 426},
  [699] = {.lex_state = 426},
  [700] = {.lex_state = 426},
  [701] = {.lex_state = 34},
  [702] = {.lex_state = 426},
  [703] = {.lex_state = 434},
  [704] = {.lex_state = 426},
  [705] = {.lex_state = 426},
  [706] = {.lex_state = 433},
  [707] = {.lex_state = 426},
  [708] = {.lex_state = 13},
  [709] = {.lex_state = 426},
  [710] = {.lex_state = 427},
  [711] = {.lex_state = 13},
  [712] = {.lex_state = 426},
  [713] = {.lex_state = 426},
  [714] = {.lex_state = 13},
  [715] = {.lex_state = 426},
  [716] = {.lex_state = 426},
  [717] = {.lex_state = 13},
  [718] = {.lex_state = 426},
  [719] = {.lex_state = 13},
  [720] = {.lex_state = 426},
  [721] = {.lex_state = 426},
  [722] = {.lex_state = 13},
  [723] = {.lex_state = 426},
  [724] = {.lex_state = 13},
  [725] = {.lex_state = 13},
  [726] = {.lex_state = 13},
  [727] = {.lex_state = 426},
  [728] = {.lex_state = 426},
  [729] = {.lex_state = 426},
  [730] = {.lex_state = 426},
  [731] = {.lex_state = 426},
  [732] = {.lex_state = 426},
  [733] = {.lex_state = 426},
  [734] = {.lex_state = 426},
  [735] = {.lex_state = 427},
  [736] = {.lex_state = 434},
  [737] = {.lex_state = 426},
  [738] = {.lex_state = 426},
  [739] = {.lex_state = 24},
  [740] = {.lex_state = 426},
  [741] = {.lex_state = 426},
  [742] = {.lex_state = 426},
  [743] = {.lex_state = 426},
  [744] = {.lex_state = 434},
  [745] = {.lex_state = 426},
  [746] = {.lex_state = 426},
  [747] = {.lex_state = 426},
  [748] = {.lex_state = 426},
  [749] = {.lex_state = 426},
  [750] = {.lex_state = 426},
  [751] = {.lex_state = 426},
  [752] = {.lex_state = 426},
  [753] = {.lex_state = 431},
  [754] = {.lex_state = 426},
  [755] = {.lex_state = 426},
  [756] = {.lex_state = 431},
  [757] = {.lex_state = 426},
  [758] = {.lex_state = 428},
  [759] = {.lex_state = 2},
  [760] = {.lex_state = 426},
  [761] = {.lex_state = 426},
  [762] = {.lex_state = 426},
  [763] = {.lex_state = 426},
  [764] = {.lex_state = 426},
  [765] = {.lex_state = 426},
  [766] = {.lex_state = 426},
  [767] = {.lex_state = 426},
  [768] = {.lex_state = 426},
  [769] = {.lex_state = 426},
  [770] = {.lex_state = 426},
  [771] = {.lex_state = 426},
  [772] = {.lex_state = 431},
  [773] = {.lex_state = 426},
  [774] = {.lex_state = 426},
  [775] = {.lex_state = 426},
  [776] = {.lex_state = 426},
  [777] = {.lex_state = 426},
  [778] = {.lex_state = 426},
  [779] = {.lex_state = 426},
  [780] = {.lex_state = 426},
  [781] = {.lex_state = 426},
  [782] = {.lex_state = 426},
  [783] = {.lex_state = 426},
  [784] = {.lex_state = 428},
  [785] = {.lex_state = 426},
  [786] = {.lex_state = 426},
  [787] = {.lex_state = 426},
  [788] = {.lex_state = 426},
  [789] = {.lex_state = 426},
  [790] = {.lex_state = 426},
  [791] = {.lex_state = 426},
  [792] = {.lex_state = 426},
  [793] = {.lex_state = 431},
  [794] = {.lex_state = 426},
  [795] = {.lex_state = 428},
  [796] = {.lex_state = 35},
  [797] = {.lex_state = 428},
  [798] = {.lex_state = 426},
  [799] = {.lex_state = 36},
  [800] = {.lex_state = 426},
  [801] = {.lex_state = 426},
  [802] = {.lex_state = 426},
  [803] = {.lex_state = 37},
  [804] = {.lex_state = 426},
  [805] = {.lex_state = 426},
  [806] = {.lex_state = 36},
  [807] = {.lex_state = 431},
  [808] = {.lex_state = 2},
  [809] = {.lex_state = 426},
  [810] = {.lex_state = 426},
  [811] = {.lex_state = 426},
  [812] = {.lex_state = 426},
  [813] = {.lex_state = 426},
  [814] = {.lex_state = 426},
  [815] = {.lex_state = 426},
  [816] = {.lex_state = 426},
  [817] = {.lex_state = 588},
  [818] = {.lex_state = 426},
  [819] = {.lex_state = 426},
  [820] = {.lex_state = 34},
  [821] = {.lex_state = 426},
  [822] = {.lex_state = 426},
  [823] = {.lex_state = 426},
  [824] = {.lex_state = 426},
  [825] = {.lex_state = 434},
  [826] = {.lex_state = 426},
  [827] = {.lex_state = 434},
  [828] = {.lex_state = 426},
  [829] = {.lex_state = 426},
  [830] = {.lex_state = 426},
  [831] = {.lex_state = 426},
  [832] = {.lex_state = 426},
  [833] = {.lex_state = 426},
  [834] = {.lex_state = 426},
  [835] = {.lex_state = 426},
  [836] = {.lex_state = 426},
  [837] = {.lex_state = 426},
  [838] = {.lex_state = 34},
  [839] = {.lex_state = 426},
  [840] = {.lex_state = 426},
  [841] = {.lex_state = 426},
  [842] = {.lex_state = 426},
  [843] = {.lex_state = 426},
  [844] = {.lex_state = 434},
  [845] = {.lex_state = 434},
  [846] = {.lex_state = 426},
  [847] = {.lex_state = 426},
  [848] = {.lex_state = 426},
  [849] = {.lex_state = 426},
  [850] = {.lex_state = 426},
  [851] = {.lex_state = 426},
  [852] = {.lex_state = 426},
  [853] = {.lex_state = 426},
  [854] = {.lex_state = 426},
  [855] = {.lex_state = 434},
  [856] = {.lex_state = 434},
  [857] = {.lex_state = 426},
  [858] = {.lex_state = 426},
  [859] = {.lex_state = 2},
  [860] = {.lex_state = 426},
  [861] = {.lex_state = 426},
  [862] = {.lex_state = 426},
  [863] = {.lex_state = 426},
  [864] = {.lex_state = 426},
  [865] = {.lex_state = 38},
  [866] = {.lex_state = 38},
  [867] = {.lex_state = 434},
  [868] = {.lex_state = 426},
  [869] = {.lex_state = 2},
  [870] = {.lex_state = 426},
  [871] = {.lex_state = 427},
  [872] = {.lex_state = 426},
  [873] = {.lex_state = 426},
  [874] = {.lex_state = 426},
  [875] = {.lex_state = 426},
  [876] = {.lex_state = 426},
  [877] = {.lex_state = 426},
  [878] = {.lex_state = 426},
  [879] = {.lex_state = 426},
  [880] = {.lex_state = 434},
  [881] = {.lex_state = 434},
  [882] = {.lex_state = 426},
  [883] = {.lex_state = 426},
  [884] = {.lex_state = 426},
  [885] = {.lex_state = 427},
  [886] = {.lex_state = 431},
  [887] = {.lex_state = 426},
  [888] = {.lex_state = 426},
  [889] = {.lex_state = 426},
  [890] = {.lex_state = 426},
  [891] = {.lex_state = 44},
  [892] = {.lex_state = 426},
  [893] = {.lex_state = 426},
  [894] = {.lex_state = 426},
  [895] = {.lex_state = 426},
  [896] = {.lex_state = 426},
  [897] = {.lex_state = 426},
  [898] = {.lex_state = 426},
  [899] = {.lex_state = 426},
  [900] = {.lex_state = 2},
  [901] = {.lex_state = 1},
  [902] = {.lex_state = 39},
  [903] = {.lex_state = 426},
  [904] = {.lex_state = 426},
  [905] = {.lex_state = 426},
  [906] = {.lex_state = 43},
  [907] = {.lex_state = 431},
  [908] = {.lex_state = 426},
  [909] = {.lex_state = 426},
  [910] = {.lex_state = 426},
  [911] = {.lex_state = 434},
  [912] = {.lex_state = 426},
  [913] = {.lex_state = 426},
  [914] = {.lex_state = 434},
  [915] = {.lex_state = 426},
  [916] = {.lex_state = 426},
  [917] = {.lex_state = 426},
  [918] = {.lex_state = 426},
  [919] = {.lex_state = 426},
  [920] = {.lex_state = 37},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [aux_sym_diagram_sequence_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token1] = ACTIONS(1),
    [aux_sym__sequence_participant_type_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_actor_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_COLON_COLON_COLON] = ACTIONS(1),
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
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_RBRACK] = ACTIONS(1),
    [anon_sym_subgraph] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_diagram_er_token1] = ACTIONS(1),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(1),
    [aux_sym_mmap_class_token1] = ACTIONS(1),
    [aux_sym_mmap_icon_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym__md_start] = ACTIONS(1),
    [sym__md_end] = ACTIONS(1),
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
    [anon_sym_RBRACEo] = ACTIONS(1),
    [anon_sym_o_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_LBRACE] = ACTIONS(1),
    [sym_er_cardinarity_only_one] = ACTIONS(1),
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_pk_token1] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_fk_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(822),
    [sym_directive] = STATE(84),
    [sym_diagram_sequence] = STATE(823),
    [sym_diagram_class] = STATE(823),
    [sym_diagram_state] = STATE(823),
    [sym_diagram_gantt] = STATE(823),
    [sym_diagram_pie] = STATE(823),
    [sym_diagram_flow] = STATE(823),
    [sym_diagram_er] = STATE(823),
    [sym_diagram_mindmap] = STATE(823),
    [aux_sym_source_file_repeat1] = STATE(84),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(7),
    [aux_sym_diagram_sequence_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token1] = ACTIONS(11),
    [aux_sym_diagram_class_token2] = ACTIONS(13),
    [aux_sym_diagram_state_token1] = ACTIONS(15),
    [aux_sym_diagram_state_token2] = ACTIONS(17),
    [aux_sym_diagram_gantt_token1] = ACTIONS(19),
    [aux_sym_diagram_pie_token1] = ACTIONS(21),
    [aux_sym_diagram_flow_token1] = ACTIONS(23),
    [aux_sym_diagram_er_token1] = ACTIONS(25),
    [aux_sym_diagram_mindmap_token1] = ACTIONS(27),
    [sym__whitespace] = ACTIONS(5),
    [sym__newline] = ACTIONS(29),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(505), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [105] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(540), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [210] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(543), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [315] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(565), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [420] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(562), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [525] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(564), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [630] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(589), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [735] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(575), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [840] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(577), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [945] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(123), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(578), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [1050] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(125), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(588), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [1155] = 29,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(127), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(590), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [1260] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(135), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(138), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(141), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(144), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(147), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(150), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(153), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(156), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(159), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(162), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(167), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(170), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(173), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(176), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(179), 1,
      sym__newline,
    ACTIONS(182), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(129), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(165), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(143), 17,
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
  [1360] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(185), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(111), 17,
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
  [1460] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(187), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(143), 17,
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
  [1560] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(14), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    ACTIONS(189), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(143), 17,
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
  [1660] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__sequence_actor_word,
    ACTIONS(194), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(197), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(200), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(203), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(206), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(209), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(212), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(215), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(218), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(221), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(224), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(227), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(230), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(233), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(236), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(239), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(165), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(191), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [1760] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(526), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(27), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(195), 17,
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
  [1857] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [1956] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(24), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2055] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2154] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(26), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2253] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2352] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2451] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2550] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 1,
      sym__newline,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(526), 1,
      sym__sequence_participant_type,
    ACTIONS(244), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(35), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(195), 17,
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
  [2647] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(182), 1,
      sym__sequence_actor_word,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(339), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(345), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(351), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(357), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(363), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(366), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(369), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(372), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(378), 1,
      sym__newline,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(330), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2746] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(381), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2845] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(383), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [2944] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(385), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(34), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3043] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(387), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3142] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(389), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3241] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(391), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3340] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(401), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(404), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(410), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(413), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(416), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(419), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(422), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(425), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(428), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(431), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(434), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(437), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(440), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(443), 1,
      sym__newline,
    ACTIONS(446), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(306), 1,
      sym_sequence_actor,
    STATE(526), 1,
      sym__sequence_participant_type,
    ACTIONS(395), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(35), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat1,
    STATE(195), 17,
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
  [3437] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(449), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3536] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3635] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(453), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3734] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(455), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3833] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [3932] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(459), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [4031] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(461), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(45), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [4130] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(463), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(46), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [4229] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(20), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [4328] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(467), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [4427] = 27,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(312), 1,
      sym__newline,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(156), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(605), 1,
      sym__sequence_participant_type,
    ACTIONS(278), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(168), 17,
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
  [4526] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [4622] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [4718] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(16), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [4814] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [4910] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [5006] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [5102] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [5198] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [5294] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [5390] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [5486] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [5582] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [5678] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [5774] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
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
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(141), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(313), 1,
      sym_sequence_actor,
    STATE(594), 1,
      sym__sequence_participant_type,
    ACTIONS(31), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(143), 17,
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
  [5870] = 26,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(109), 1,
      sym__sequence_stmt,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(315), 1,
      sym_sequence_actor,
    STATE(613), 1,
      sym__sequence_participant_type,
    ACTIONS(71), 2,
      aux_sym__sequence_participant_type_token1,
      aux_sym__sequence_participant_type_token2,
    STATE(111), 17,
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
  [5966] = 18,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(481), 1,
      anon_sym_LPAREN_DASH,
    ACTIONS(483), 1,
      anon_sym_LPAREN_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(487), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(489), 1,
      anon_sym_LBRACK_LPAREN,
    ACTIONS(491), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(495), 1,
      anon_sym_LBRACK_SLASH,
    ACTIONS(497), 1,
      anon_sym_LBRACK_BSLASH,
    STATE(322), 1,
      sym__flow_vertex_kind,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(499), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(471), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    STATE(323), 15,
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
  [6044] = 18,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(507), 1,
      sym__newline,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(66), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6111] = 18,
    ACTIONS(525), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    ACTIONS(530), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(533), 1,
      sym__newline,
    ACTIONS(536), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(539), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(542), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(545), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(548), 1,
      anon_sym_DASH_DASH,
    ACTIONS(551), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(554), 1,
      aux_sym_state_name_token1,
    ACTIONS(557), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6178] = 18,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    ACTIONS(562), 1,
      sym__newline,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(67), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6245] = 18,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    ACTIONS(562), 1,
      sym__newline,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6312] = 18,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    ACTIONS(566), 1,
      sym__newline,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6379] = 17,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(568), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(570), 1,
      sym__newline,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(407), 1,
      sym_state_name,
    STATE(518), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6442] = 17,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(576), 1,
      sym__newline,
    STATE(63), 1,
      sym__state_stmt,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6505] = 17,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(286), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6568] = 17,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(568), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(407), 1,
      sym_state_name,
    STATE(740), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6631] = 17,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(286), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6694] = 17,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(592), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(594), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(598), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(600), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(602), 1,
      sym__newline,
    ACTIONS(604), 1,
      aux_sym_gantt_task_text_token1,
    STATE(554), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(818), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(78), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(289), 10,
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
  [6757] = 17,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(286), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6820] = 17,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(611), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(614), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(617), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(620), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(623), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(626), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(629), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(632), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(635), 1,
      sym__newline,
    ACTIONS(638), 1,
      aux_sym_gantt_task_text_token1,
    STATE(554), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(818), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(75), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(289), 10,
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
  [6883] = 17,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(568), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(407), 1,
      sym_state_name,
    STATE(740), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6946] = 17,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(568), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    ACTIONS(643), 1,
      ts_builtin_sym_end,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(407), 1,
      sym_state_name,
    STATE(740), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7009] = 17,
    ACTIONS(584), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(592), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(594), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(598), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(600), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(604), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    ACTIONS(647), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(818), 1,
      sym_gantt_task_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(75), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(289), 10,
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
  [7072] = 16,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(568), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(407), 1,
      sym_state_name,
    STATE(537), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7132] = 16,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(65), 1,
      sym__state_stmt,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7192] = 16,
    ACTIONS(501), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(519), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(521), 1,
      aux_sym_state_name_token1,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(220), 1,
      sym_state_name,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(286), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7252] = 16,
    ACTIONS(505), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(509), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(511), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(513), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(515), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH,
    ACTIONS(523), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(568), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(574), 1,
      aux_sym_state_name_token1,
    STATE(238), 1,
      sym_state_hide_empty_description,
    STATE(407), 1,
      sym_state_name,
    STATE(740), 1,
      sym__state_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(237), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(236), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [7312] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(651), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(649), 17,
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
  [7344] = 15,
    ACTIONS(7), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(9), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(11), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(13), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(15), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(17), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(19), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(21), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(23), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(25), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(27), 1,
      aux_sym_diagram_mindmap_token1,
    ACTIONS(653), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(225), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    STATE(768), 8,
      sym_diagram_sequence,
      sym_diagram_class,
      sym_diagram_state,
      sym_diagram_gantt,
      sym_diagram_pie,
      sym_diagram_flow,
      sym_diagram_er,
      sym_diagram_mindmap,
  [7399] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(655), 18,
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
  [7431] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 18,
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
  [7463] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 18,
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
  [7495] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(655), 18,
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
  [7527] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 18,
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
  [7559] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 18,
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
  [7591] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 18,
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
  [7623] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 18,
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
  [7655] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 18,
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
  [7687] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 18,
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
  [7719] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 18,
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
  [7751] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 18,
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
  [7783] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 18,
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
  [7815] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 18,
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
  [7847] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 18,
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
  [7879] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 18,
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
  [7911] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 18,
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
  [7943] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 18,
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
  [7975] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 18,
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
  [8007] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 18,
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
  [8039] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 18,
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
  [8071] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 18,
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
  [8103] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 18,
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
  [8135] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 18,
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
  [8167] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 18,
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
  [8199] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 18,
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
  [8231] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 18,
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
  [8263] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 18,
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
  [8295] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 18,
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
  [8327] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 18,
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
  [8359] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 18,
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
  [8391] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 18,
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
  [8423] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 18,
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
  [8455] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 18,
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
  [8487] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 18,
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
  [8519] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 18,
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
  [8551] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 18,
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
  [8583] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 18,
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
  [8615] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 18,
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
  [8647] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 18,
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
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 18,
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
  [8711] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 18,
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
  [8743] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 18,
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
  [8775] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 18,
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
  [8807] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 18,
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
  [8839] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 18,
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
  [8871] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 18,
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
  [8903] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 18,
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
  [8935] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 18,
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
  [8967] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 18,
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
  [8999] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 18,
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
  [9031] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 18,
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
  [9063] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 18,
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
  [9095] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 18,
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
  [9127] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 18,
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
  [9159] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 18,
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
  [9191] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 18,
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
  [9223] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 18,
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
  [9255] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 18,
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
  [9287] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 18,
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
  [9319] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 18,
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
  [9351] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 18,
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
  [9383] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 18,
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
  [9415] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 18,
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
  [9447] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 17,
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
  [9478] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 17,
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
  [9509] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 17,
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
  [9540] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 17,
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
  [9571] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 17,
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
  [9602] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 17,
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
  [9633] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 17,
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
  [9664] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(747), 17,
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
  [9695] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 17,
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
  [9726] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 17,
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
  [9757] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(733), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(731), 17,
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
  [9788] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(717), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(715), 17,
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
  [9819] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(737), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(735), 17,
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
  [9850] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(725), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(723), 17,
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
  [9881] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(727), 17,
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
  [9912] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(739), 17,
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
  [9943] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(745), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(743), 17,
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
  [9974] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(713), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(711), 17,
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
  [10005] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 17,
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
  [10036] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 17,
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
  [10067] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(721), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(719), 17,
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
  [10098] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 17,
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
  [10129] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 17,
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
  [10160] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 17,
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
  [10191] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 17,
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
  [10222] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 17,
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
  [10253] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 17,
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
  [10284] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 17,
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
  [10315] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 17,
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
  [10346] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(655), 17,
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
  [10377] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 17,
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
  [10408] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 17,
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
  [10439] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 17,
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
  [10470] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 17,
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
  [10501] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(777), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(775), 17,
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
  [10532] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(765), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(763), 17,
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
  [10563] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(661), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(659), 17,
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
  [10594] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(665), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(663), 17,
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
  [10625] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(657), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(655), 17,
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
  [10656] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(669), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(667), 17,
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
  [10687] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(769), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(767), 17,
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
  [10718] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(673), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(671), 17,
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
  [10749] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(761), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(759), 17,
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
  [10780] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(677), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(675), 17,
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
  [10811] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(753), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(751), 17,
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
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 17,
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
  [10873] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(757), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(755), 17,
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
  [10904] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 17,
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
  [10935] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 17,
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
  [10966] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 17,
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
  [10997] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(781), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(779), 17,
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
  [11028] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 17,
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
  [11059] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 17,
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
  [11090] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 17,
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
  [11121] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(685), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(683), 17,
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
  [11152] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(687), 17,
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
  [11183] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(693), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(691), 17,
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
  [11214] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(697), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(695), 17,
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
  [11245] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(701), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(699), 17,
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
  [11276] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(773), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(771), 17,
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
  [11307] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(705), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(703), 17,
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
  [11338] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(709), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(707), 17,
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
  [11369] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(681), 3,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(679), 17,
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
  [11400] = 15,
    ACTIONS(783), 1,
      anon_sym_COLON,
    ACTIONS(785), 1,
      anon_sym_STAR,
    ACTIONS(787), 1,
      anon_sym_GT,
    ACTIONS(789), 1,
      sym__dquote_string,
    ACTIONS(791), 1,
      sym_class_reltype_aggregation,
    ACTIONS(795), 1,
      anon_sym_LT,
    ACTIONS(797), 1,
      anon_sym_DASH_DASH,
    ACTIONS(799), 1,
      anon_sym_DOT_DOT,
    STATE(245), 1,
      sym__class_linetype,
    STATE(374), 1,
      sym_class_relation,
    STATE(430), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(349), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(426), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11451] = 15,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(801), 1,
      ts_builtin_sym_end,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      anon_sym_LBRACK,
    ACTIONS(809), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(811), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(813), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(815), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(817), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(819), 1,
      sym__newline,
    STATE(452), 1,
      sym_mmap_icon,
    STATE(741), 1,
      sym_mmap_class,
    STATE(378), 6,
      sym_mmap_node_square,
      sym_mmap_node_rounded,
      sym_mmap_node_circle,
      sym_mmap_node_cloud,
      sym_mmap_node_bang,
      sym_mmap_node_hexagon,
  [11502] = 9,
    STATE(216), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(440), 1,
      sym__flow_link,
    STATE(563), 1,
      sym_flow_link_arrow_start,
    STATE(686), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(821), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(823), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(825), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(793), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11539] = 8,
    ACTIONS(829), 1,
      sym__newline,
    STATE(301), 1,
      sym__flowchart_direction,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(831), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(835), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(827), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(833), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(369), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11574] = 9,
    STATE(217), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(440), 1,
      sym__flow_link,
    STATE(563), 1,
      sym_flow_link_arrow_start,
    STATE(686), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(823), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(825), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(837), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(793), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11611] = 9,
    STATE(217), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(440), 1,
      sym__flow_link,
    STATE(563), 1,
      sym_flow_link_arrow_start,
    STATE(686), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(839), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(841), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(844), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(793), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11648] = 6,
    ACTIONS(849), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    ACTIONS(853), 1,
      aux_sym_state_name_token1,
    STATE(248), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(847), 12,
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
  [11679] = 13,
    ACTIONS(785), 1,
      anon_sym_STAR,
    ACTIONS(787), 1,
      anon_sym_GT,
    ACTIONS(791), 1,
      sym_class_reltype_aggregation,
    ACTIONS(795), 1,
      anon_sym_LT,
    ACTIONS(797), 1,
      anon_sym_DASH_DASH,
    ACTIONS(799), 1,
      anon_sym_DOT_DOT,
    STATE(245), 1,
      sym__class_linetype,
    STATE(371), 1,
      sym_class_relation,
    STATE(430), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(349), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(426), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11724] = 6,
    ACTIONS(855), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      anon_sym_DASH_DASH_GT,
    STATE(516), 1,
      sym_state_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(861), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(857), 10,
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
  [11754] = 10,
    ACTIONS(865), 1,
      anon_sym_LBRACE,
    ACTIONS(873), 1,
      sym_er_cardinarity_only_one,
    STATE(354), 1,
      sym__er_cardinarity,
    STATE(710), 1,
      sym_er_relation,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(863), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(867), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(869), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(871), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(389), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [11792] = 7,
    STATE(550), 1,
      sym__flowchart_direction,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(831), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(835), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(827), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(833), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(369), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11824] = 3,
    ACTIONS(877), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(875), 14,
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
  [11848] = 4,
    ACTIONS(881), 1,
      anon_sym_COLON,
    ACTIONS(883), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(879), 12,
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
  [11873] = 6,
    ACTIONS(885), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(892), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(890), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(225), 2,
      sym_directive,
      aux_sym_source_file_repeat1,
    ACTIONS(888), 8,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
  [11902] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(895), 12,
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
  [11925] = 5,
    ACTIONS(901), 1,
      anon_sym_TILDE,
    ACTIONS(903), 1,
      anon_sym_LT,
    STATE(277), 1,
      sym_class_generics,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(899), 11,
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
  [11952] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(909), 1,
      aux_sym_class_label_token1,
    STATE(231), 1,
      sym_state_description,
    ACTIONS(907), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(905), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [11981] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym__sequence_actor_word,
    STATE(229), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(916), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(911), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12009] = 3,
    ACTIONS(920), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(918), 12,
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
  [12031] = 3,
    ACTIONS(924), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(922), 12,
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
  [12053] = 3,
    ACTIONS(928), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(926), 12,
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
  [12075] = 3,
    ACTIONS(932), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 12,
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
  [12097] = 3,
    ACTIONS(936), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(934), 12,
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
  [12119] = 3,
    ACTIONS(940), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(938), 12,
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
  [12141] = 3,
    ACTIONS(944), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(942), 12,
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
  [12163] = 3,
    ACTIONS(948), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(946), 12,
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
  [12185] = 3,
    ACTIONS(952), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(950), 12,
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
  [12207] = 3,
    ACTIONS(956), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(954), 12,
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
  [12229] = 3,
    ACTIONS(960), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(958), 12,
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
  [12251] = 11,
    ACTIONS(962), 1,
      ts_builtin_sym_end,
    ACTIONS(964), 1,
      anon_sym_class,
    ACTIONS(966), 1,
      anon_sym_LT_LT,
    ACTIONS(968), 1,
      sym__class_name,
    ACTIONS(970), 1,
      sym__bquote_string,
    STATE(212), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(532), 1,
      aux_sym_class_name_body_repeat1,
    STATE(682), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(732), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12289] = 12,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(976), 1,
      anon_sym_end,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(292), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(707), 1,
      sym__flow_stmt,
    STATE(758), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12329] = 3,
    ACTIONS(982), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(980), 12,
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
  [12351] = 3,
    ACTIONS(897), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(895), 12,
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
  [12373] = 10,
    ACTIONS(785), 1,
      anon_sym_STAR,
    ACTIONS(787), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym__class_name,
    ACTIONS(988), 1,
      sym_class_reltype_aggregation,
    STATE(517), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(986), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(426), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12409] = 5,
    ACTIONS(992), 1,
      sym__class_name,
    ACTIONS(994), 1,
      sym__bquote_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(996), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(990), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12435] = 3,
    ACTIONS(996), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(990), 12,
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
  [12457] = 3,
    ACTIONS(1000), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(998), 12,
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
  [12479] = 3,
    ACTIONS(1004), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1002), 12,
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
  [12501] = 3,
    ACTIONS(1008), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1006), 12,
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
  [12523] = 3,
    ACTIONS(1012), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1010), 12,
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
  [12545] = 3,
    ACTIONS(1016), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1014), 12,
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
  [12567] = 3,
    ACTIONS(1020), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1018), 12,
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
  [12589] = 3,
    ACTIONS(1024), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1022), 12,
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
  [12611] = 12,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1026), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(292), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(707), 1,
      sym__flow_stmt,
    STATE(784), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12651] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1030), 1,
      sym__sequence_actor_word,
    STATE(229), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1032), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1028), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12679] = 5,
    ACTIONS(992), 1,
      sym__class_name,
    ACTIONS(994), 1,
      sym__bquote_string,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1036), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1034), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12705] = 3,
    ACTIONS(1036), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1034), 12,
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
  [12727] = 9,
    ACTIONS(849), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    STATE(248), 1,
      sym_state_composite_body,
    STATE(251), 1,
      sym__state_annotation,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1038), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(1040), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(1042), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(252), 3,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [12761] = 11,
    ACTIONS(964), 1,
      anon_sym_class,
    ACTIONS(966), 1,
      anon_sym_LT_LT,
    ACTIONS(968), 1,
      sym__class_name,
    ACTIONS(970), 1,
      sym__bquote_string,
    ACTIONS(1044), 1,
      ts_builtin_sym_end,
    STATE(212), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(532), 1,
      aux_sym_class_name_body_repeat1,
    STATE(682), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(732), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12799] = 10,
    ACTIONS(785), 1,
      anon_sym_STAR,
    ACTIONS(787), 1,
      anon_sym_GT,
    ACTIONS(795), 1,
      anon_sym_LT,
    ACTIONS(988), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1046), 1,
      sym__class_name,
    STATE(552), 1,
      sym__class_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1048), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(426), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12835] = 3,
    ACTIONS(1052), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1050), 12,
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
  [12857] = 3,
    ACTIONS(1056), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1054), 12,
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
  [12879] = 12,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1058), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(292), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(707), 1,
      sym__flow_stmt,
    STATE(795), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12919] = 3,
    ACTIONS(1062), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1060), 12,
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
  [12941] = 3,
    ACTIONS(1066), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
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
  [12963] = 3,
    ACTIONS(1070), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1068), 12,
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
  [12985] = 3,
    ACTIONS(1074), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1072), 11,
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
  [13006] = 3,
    ACTIONS(1078), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1076), 11,
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
  [13027] = 3,
    ACTIONS(1082), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1080), 11,
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
  [13048] = 3,
    ACTIONS(1086), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1084), 11,
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
  [13069] = 3,
    ACTIONS(1090), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1088), 11,
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
  [13090] = 3,
    ACTIONS(1094), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1092), 11,
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
  [13111] = 3,
    ACTIONS(1098), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1096), 11,
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
  [13132] = 3,
    ACTIONS(1102), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1100), 11,
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
  [13153] = 3,
    ACTIONS(1106), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1104), 11,
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
  [13174] = 3,
    ACTIONS(1110), 1,
      anon_sym_LT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1108), 11,
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
  [13195] = 10,
    ACTIONS(964), 1,
      anon_sym_class,
    ACTIONS(966), 1,
      anon_sym_LT_LT,
    ACTIONS(968), 1,
      sym__class_name,
    ACTIONS(970), 1,
      sym__bquote_string,
    STATE(212), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(532), 1,
      aux_sym_class_name_body_repeat1,
    STATE(682), 1,
      sym__class_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(732), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13230] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1114), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(1112), 10,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      aux_sym_diagram_mindmap_token1,
      sym__newline,
  [13251] = 11,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(744), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13288] = 10,
    ACTIONS(964), 1,
      anon_sym_class,
    ACTIONS(966), 1,
      anon_sym_LT_LT,
    ACTIONS(968), 1,
      sym__class_name,
    ACTIONS(970), 1,
      sym__bquote_string,
    STATE(212), 1,
      sym_class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(531), 1,
      sym__class_stmt,
    STATE(532), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(732), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13323] = 11,
    ACTIONS(1132), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1135), 1,
      anon_sym_subgraph,
    ACTIONS(1138), 1,
      anon_sym_end,
    ACTIONS(1140), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(282), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(707), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13360] = 11,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    ACTIONS(1143), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(744), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13397] = 11,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(744), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13434] = 11,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    ACTIONS(1147), 1,
      sym__newline,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(546), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13471] = 3,
    ACTIONS(1149), 1,
      aux_sym_state_name_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(528), 11,
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
  [13492] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(895), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
  [13511] = 11,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    ACTIONS(1151), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(744), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13548] = 3,
    ACTIONS(1155), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1153), 11,
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
  [13569] = 11,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    ACTIONS(1157), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(744), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13606] = 3,
    ACTIONS(1161), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 11,
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
  [13627] = 11,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1163), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(282), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(707), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13664] = 11,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(744), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13701] = 11,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    ACTIONS(1167), 1,
      sym__newline,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(502), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13738] = 3,
    ACTIONS(1171), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1169), 11,
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
  [13759] = 3,
    ACTIONS(1175), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
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
  [13780] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(528), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13814] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1179), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(528), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13848] = 5,
    ACTIONS(1183), 1,
      anon_sym_RBRACK,
    ACTIONS(1185), 1,
      aux_sym_flow_text_literal_token1,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1181), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13872] = 10,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(744), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13906] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1188), 1,
      sym__newline,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(457), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13940] = 5,
    ACTIONS(1192), 1,
      anon_sym_AMP,
    STATE(309), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1194), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1190), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13964] = 7,
    ACTIONS(873), 1,
      sym_er_cardinarity_only_one,
    STATE(885), 1,
      sym__er_cardinarity,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(869), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(871), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(389), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [13992] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1196), 11,
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
  [14010] = 10,
    ACTIONS(1198), 1,
      ts_builtin_sym_end,
    ACTIONS(1200), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1202), 1,
      sym__newline,
    ACTIONS(1204), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1206), 1,
      aux_sym_pie_label_token1,
    STATE(339), 1,
      sym_pie_showdata,
    STATE(910), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(346), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(441), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14044] = 7,
    ACTIONS(1208), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1212), 1,
      sym_solid_open_arrow,
    ACTIONS(1214), 1,
      anon_sym_DASH_DASH_GT,
    STATE(353), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1210), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14072] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1216), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(528), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14106] = 5,
    ACTIONS(1220), 1,
      anon_sym_RBRACK,
    ACTIONS(1222), 1,
      aux_sym_flow_text_literal_token1,
    STATE(299), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1218), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [14130] = 5,
    ACTIONS(1226), 1,
      anon_sym_AMP,
    STATE(309), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1229), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1224), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14154] = 10,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(507), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14188] = 5,
    ACTIONS(1192), 1,
      anon_sym_AMP,
    STATE(302), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1233), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1231), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14212] = 10,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_LT_LT,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(481), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14246] = 7,
    ACTIONS(1208), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1212), 1,
      sym_solid_open_arrow,
    ACTIONS(1214), 1,
      anon_sym_DASH_DASH_GT,
    STATE(364), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1210), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14274] = 7,
    ACTIONS(1208), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1212), 1,
      sym_solid_open_arrow,
    ACTIONS(1214), 1,
      anon_sym_DASH_DASH_GT,
    STATE(365), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1210), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14302] = 7,
    ACTIONS(1208), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1212), 1,
      sym_solid_open_arrow,
    ACTIONS(1214), 1,
      anon_sym_DASH_DASH_GT,
    STATE(366), 1,
      sym_sequence_signal_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1210), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14330] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1237), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__newline,
    ACTIONS(1235), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
      anon_sym_LBRACE_LBRACE,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [14351] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1241), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1239), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14370] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1245), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1243), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14389] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1249), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1247), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14408] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1253), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1251), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14427] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1257), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1255), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14446] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1261), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1259), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14465] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1265), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1263), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14484] = 9,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(528), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14515] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1269), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1267), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14534] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1273), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1271), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14553] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1277), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1275), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14572] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1281), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1279), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14591] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1285), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1283), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14610] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1229), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1224), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14629] = 9,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(477), 1,
      sym__flow_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14660] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1289), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1287), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14679] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1293), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1291), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14698] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1297), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1295), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14717] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1301), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1299), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14736] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1305), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1303), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14755] = 6,
    ACTIONS(1311), 1,
      anon_sym_STAR,
    ACTIONS(1313), 1,
      anon_sym_DOLLAR,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1307), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [14779] = 8,
    ACTIONS(1200), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1206), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1315), 1,
      ts_builtin_sym_end,
    ACTIONS(1317), 1,
      sym__newline,
    STATE(910), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(342), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(441), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14807] = 8,
    ACTIONS(1200), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1206), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1319), 1,
      ts_builtin_sym_end,
    ACTIONS(1321), 1,
      sym__newline,
    STATE(910), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(338), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(441), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14835] = 6,
    ACTIONS(1325), 1,
      anon_sym_STAR,
    ACTIONS(1327), 1,
      anon_sym_DOLLAR,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1323), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14859] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1329), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(839), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14877] = 8,
    ACTIONS(1331), 1,
      ts_builtin_sym_end,
    ACTIONS(1333), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1336), 1,
      sym__newline,
    ACTIONS(1339), 1,
      aux_sym_pie_label_token1,
    STATE(910), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(342), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(441), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14905] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1344), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1342), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14923] = 9,
    ACTIONS(1116), 1,
      anon_sym_TILDE,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    ACTIONS(1124), 1,
      anon_sym_POUND,
    ACTIONS(1130), 1,
      sym__alpha_num_token,
    STATE(337), 1,
      aux_sym_class_method_line_repeat1,
    STATE(697), 1,
      sym_class_method_line,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1126), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [14953] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1346), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14971] = 8,
    ACTIONS(1200), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1206), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1317), 1,
      sym__newline,
    ACTIONS(1319), 1,
      ts_builtin_sym_end,
    STATE(910), 1,
      sym_pie_label,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(342), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(441), 2,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14999] = 6,
    ACTIONS(1352), 1,
      anon_sym_STAR,
    ACTIONS(1354), 1,
      anon_sym_DOLLAR,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1350), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15023] = 4,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1358), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1356), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [15043] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1363), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1361), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [15061] = 9,
    ACTIONS(1365), 1,
      sym__newline,
    ACTIONS(1367), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1369), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1371), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(442), 1,
      sym__er_attribute_key_type,
    STATE(749), 1,
      sym_er_attribute_comment,
    STATE(757), 1,
      sym__er_word,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(700), 2,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [15091] = 6,
    ACTIONS(1375), 1,
      anon_sym_STAR,
    ACTIONS(1377), 1,
      anon_sym_DOLLAR,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1373), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15115] = 6,
    ACTIONS(1381), 1,
      anon_sym_STAR,
    ACTIONS(1383), 1,
      anon_sym_DOLLAR,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1309), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1379), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15139] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1385), 1,
      anon_sym_PLUS,
    ACTIONS(1387), 1,
      anon_sym_DASH,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(870), 1,
      sym_sequence_actor,
    STATE(513), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15165] = 5,
    ACTIONS(1389), 1,
      anon_sym_DASH_DASH,
    STATE(303), 1,
      sym__er_reltype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(358), 2,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
    ACTIONS(1391), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15185] = 6,
    ACTIONS(1393), 1,
      ts_builtin_sym_end,
    ACTIONS(1395), 1,
      sym__er_alphanum,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(746), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15207] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1397), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15221] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1399), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15235] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1401), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15249] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(994), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1034), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15265] = 6,
    ACTIONS(1395), 1,
      sym__er_alphanum,
    ACTIONS(1403), 1,
      sym__newline,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(576), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15287] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(994), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(990), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15303] = 6,
    ACTIONS(1395), 1,
      sym__er_alphanum,
    ACTIONS(1405), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(746), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15325] = 6,
    ACTIONS(1395), 1,
      sym__er_alphanum,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(746), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15347] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1385), 1,
      anon_sym_PLUS,
    ACTIONS(1387), 1,
      anon_sym_DASH,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(861), 1,
      sym_sequence_actor,
    STATE(642), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15373] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1385), 1,
      anon_sym_PLUS,
    ACTIONS(1387), 1,
      anon_sym_DASH,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(877), 1,
      sym_sequence_actor,
    STATE(647), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15399] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1385), 1,
      anon_sym_PLUS,
    ACTIONS(1387), 1,
      anon_sym_DASH,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(893), 1,
      sym_sequence_actor,
    STATE(652), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15425] = 6,
    ACTIONS(1409), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1411), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1413), 1,
      aux_sym_note_placement_right_token1,
    STATE(496), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(808), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15446] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1417), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1415), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15461] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1421), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1419), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15476] = 6,
    ACTIONS(1411), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1413), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1423), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(651), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(808), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15497] = 7,
    ACTIONS(970), 1,
      sym__bquote_string,
    ACTIONS(1425), 1,
      sym__class_name,
    ACTIONS(1427), 1,
      sym__dquote_string,
    STATE(227), 1,
      sym_class_name_body,
    STATE(551), 1,
      sym_class_name,
    STATE(566), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15520] = 4,
    ACTIONS(1431), 1,
      sym__alpha_num_token,
    STATE(372), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1429), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [15537] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1436), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1434), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15552] = 7,
    ACTIONS(970), 1,
      sym__bquote_string,
    ACTIONS(1425), 1,
      sym__class_name,
    ACTIONS(1438), 1,
      sym__dquote_string,
    STATE(227), 1,
      sym_class_name_body,
    STATE(514), 1,
      sym_class_name,
    STATE(566), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15575] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1442), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1440), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15590] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1446), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1444), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15605] = 5,
    ACTIONS(1395), 1,
      sym__er_alphanum,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(746), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15624] = 8,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(817), 1,
      aux_sym_mmap_icon_token1,
    ACTIONS(1448), 1,
      ts_builtin_sym_end,
    ACTIONS(1450), 1,
      sym__newline,
    STATE(456), 1,
      sym_mmap_icon,
    STATE(745), 1,
      sym_mmap_class,
  [15649] = 6,
    ACTIONS(1454), 1,
      sym__alpha_num_token,
    STATE(409), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(677), 1,
      sym_flow_vertex_text,
    STATE(797), 1,
      sym_flow_vertex_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1452), 2,
      anon_sym_SEMI,
      sym__newline,
  [15670] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(994), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1034), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15685] = 5,
    ACTIONS(1395), 1,
      sym__er_alphanum,
    STATE(221), 1,
      sym_er_entity_name,
    STATE(585), 1,
      sym__er_stmt,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(702), 3,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15704] = 6,
    ACTIONS(1456), 1,
      anon_sym_RBRACE,
    ACTIONS(1458), 1,
      sym__er_alphanum,
    STATE(735), 1,
      sym_er_attribute_type,
    STATE(880), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(410), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15725] = 3,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(994), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(990), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15740] = 6,
    ACTIONS(1411), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1413), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1460), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(641), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(808), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15761] = 4,
    ACTIONS(1462), 1,
      anon_sym_TILDE,
    STATE(476), 1,
      sym_class_generics,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(899), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15778] = 6,
    ACTIONS(1411), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1413), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1464), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(646), 1,
      sym_sequence_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(808), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15799] = 5,
    ACTIONS(1466), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1468), 1,
      aux_sym_note_placement_right_token1,
    STATE(533), 1,
      sym_state_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(739), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15817] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1472), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(844), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15835] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1474), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15847] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1478), 1,
      sym_pie_title,
    ACTIONS(1480), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1476), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [15865] = 6,
    ACTIONS(1482), 1,
      sym__class_name,
    ACTIONS(1484), 1,
      sym__bquote_string,
    STATE(385), 1,
      sym_class_name_body,
    STATE(469), 1,
      sym_class_name,
    STATE(555), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15885] = 6,
    ACTIONS(970), 1,
      sym__bquote_string,
    ACTIONS(1425), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(491), 1,
      sym_class_name,
    STATE(566), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15905] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1486), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(845), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15923] = 5,
    ACTIONS(1488), 1,
      sym__dquote_string,
    STATE(218), 1,
      sym_state_alias,
    STATE(259), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15941] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1490), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(847), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15959] = 6,
    ACTIONS(970), 1,
      sym__bquote_string,
    ACTIONS(1482), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(579), 1,
      aux_sym_class_name_body_repeat1,
    STATE(667), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [15979] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1492), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15991] = 5,
    ACTIONS(1494), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1496), 1,
      sym_flow_text_quoted,
    STATE(402), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(849), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16009] = 6,
    ACTIONS(970), 1,
      sym__bquote_string,
    ACTIONS(1425), 1,
      sym__class_name,
    STATE(227), 1,
      sym_class_name_body,
    STATE(551), 1,
      sym_class_name,
    STATE(566), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16029] = 4,
    ACTIONS(1498), 1,
      sym__alpha_num_token,
    STATE(400), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1429), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16045] = 5,
    ACTIONS(1494), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1501), 1,
      sym_flow_text_quoted,
    STATE(402), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(850), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16063] = 4,
    ACTIONS(1503), 1,
      aux_sym_flow_text_literal_token1,
    STATE(423), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1218), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16079] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1505), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16091] = 4,
    ACTIONS(1507), 1,
      sym__alpha_num_token,
    STATE(400), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1509), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16107] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1511), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(852), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16125] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1513), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(729), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16143] = 5,
    ACTIONS(855), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      anon_sym_DASH_DASH_GT,
    STATE(541), 1,
      sym_state_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(857), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16161] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1515), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16173] = 4,
    ACTIONS(1519), 1,
      sym__alpha_num_token,
    STATE(372), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1517), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [16189] = 5,
    ACTIONS(1458), 1,
      sym__er_alphanum,
    ACTIONS(1521), 1,
      anon_sym_RBRACE,
    STATE(735), 1,
      sym_er_attribute_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(418), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16207] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1523), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1525), 1,
      sym__md_start,
    STATE(855), 1,
      sym_mmap_node_content,
    STATE(455), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16227] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1523), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1525), 1,
      sym__md_start,
    STATE(856), 1,
      sym_mmap_node_content,
    STATE(455), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16247] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1523), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1525), 1,
      sym__md_start,
    STATE(864), 1,
      sym_mmap_node_content,
    STATE(455), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16267] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1527), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1529), 1,
      sym__md_start,
    STATE(872), 1,
      sym_mmap_node_content,
    STATE(723), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16287] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1527), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1529), 1,
      sym__md_start,
    STATE(888), 1,
      sym_mmap_node_content,
    STATE(723), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16307] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1523), 1,
      aux_sym_mmap_text_token1,
    ACTIONS(1525), 1,
      sym__md_start,
    STATE(899), 1,
      sym_mmap_node_content,
    STATE(455), 2,
      sym_mmap_markdown,
      sym_mmap_text,
  [16327] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1531), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16339] = 5,
    ACTIONS(1533), 1,
      anon_sym_RBRACE,
    ACTIONS(1535), 1,
      sym__er_alphanum,
    STATE(735), 1,
      sym_er_attribute_type,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(418), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [16357] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(990), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16369] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1538), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16381] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1540), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [16393] = 5,
    ACTIONS(1466), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1468), 1,
      aux_sym_note_placement_right_token1,
    STATE(595), 1,
      sym_state_note_placement,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(739), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16411] = 4,
    ACTIONS(1542), 1,
      aux_sym_flow_text_literal_token1,
    STATE(423), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1181), 3,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RPAREN_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16427] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1545), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(825), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16445] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1547), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(827), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16463] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1549), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16475] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1551), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(828), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16493] = 5,
    ACTIONS(1494), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1553), 1,
      sym_flow_text_quoted,
    STATE(402), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(841), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16511] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1034), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16523] = 5,
    ACTIONS(797), 1,
      anon_sym_DASH_DASH,
    ACTIONS(799), 1,
      anon_sym_DOT_DOT,
    STATE(261), 1,
      sym__class_linetype,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(349), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [16541] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1555), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(843), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16559] = 5,
    ACTIONS(1470), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1557), 1,
      sym_flow_text_quoted,
    STATE(308), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    STATE(730), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16577] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1561), 1,
      sym__newline,
    ACTIONS(1559), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [16592] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1563), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16603] = 3,
    STATE(886), 1,
      sym_flow_link_arrow,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(823), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16616] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1565), 1,
      sym__sequence_actor_word,
    STATE(436), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(911), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [16633] = 4,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    STATE(453), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1568), 2,
      anon_sym_SEMI,
      sym__newline,
  [16648] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1570), 4,
      sym__newline,
      aux_sym_pie_label_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [16659] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1572), 1,
      sym__newline,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(769), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [16678] = 5,
    ACTIONS(1576), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(311), 1,
      sym_flow_vertex,
    STATE(341), 1,
      sym_flow_node,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16695] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1578), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16706] = 5,
    ACTIONS(1367), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1580), 1,
      sym__newline,
    STATE(757), 1,
      sym__er_word,
    STATE(853), 1,
      sym_er_attribute_comment,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [16723] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1584), 1,
      aux_sym_class_label_token1,
    STATE(747), 1,
      sym_class_label,
    ACTIONS(1582), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16740] = 4,
    STATE(720), 1,
      sym__er_word,
    STATE(721), 1,
      sym_er_role,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1586), 2,
      aux_sym_pie_label_token1,
      sym__er_alphanum,
  [16755] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1588), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16766] = 3,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1590), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16779] = 3,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1592), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16792] = 3,
    STATE(340), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1594), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16805] = 3,
    STATE(347), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1596), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16818] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1598), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16829] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1600), 1,
      sym__newline,
    STATE(771), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [16848] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1448), 1,
      ts_builtin_sym_end,
    ACTIONS(1450), 1,
      sym__newline,
    STATE(745), 1,
      sym_mmap_class,
  [16867] = 4,
    ACTIONS(1602), 1,
      ts_builtin_sym_end,
    STATE(453), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1604), 2,
      anon_sym_SEMI,
      sym__newline,
  [16882] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1584), 1,
      aux_sym_class_label_token1,
    STATE(715), 1,
      sym_class_label,
    ACTIONS(1607), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16899] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1609), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE_RBRACE,
  [16910] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(815), 1,
      aux_sym_mmap_class_token1,
    ACTIONS(1611), 1,
      ts_builtin_sym_end,
    ACTIONS(1613), 1,
      sym__newline,
    STATE(716), 1,
      sym_mmap_class,
  [16929] = 4,
    ACTIONS(1615), 1,
      ts_builtin_sym_end,
    STATE(437), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1617), 2,
      anon_sym_SEMI,
      sym__newline,
  [16944] = 3,
    ACTIONS(1619), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1138), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [16957] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1584), 1,
      aux_sym_class_label_token1,
    STATE(681), 1,
      sym_class_label,
    ACTIONS(1621), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16974] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1072), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16985] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(909), 1,
      aux_sym_class_label_token1,
    STATE(231), 1,
      sym_state_description,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17002] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1625), 1,
      sym__newline,
    ACTIONS(1623), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17017] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1627), 1,
      sym__newline,
    STATE(858), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [17036] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1631), 1,
      sym__newline,
    ACTIONS(1629), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17051] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1635), 1,
      sym__newline,
    ACTIONS(1633), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17066] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1637), 1,
      sym__newline,
    STATE(874), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [17085] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    ACTIONS(1639), 1,
      sym__newline,
    STATE(890), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [17104] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1641), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [17115] = 4,
    ACTIONS(1645), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1647), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1643), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17130] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1651), 1,
      sym__newline,
    ACTIONS(1649), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17145] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1655), 1,
      sym__newline,
    ACTIONS(1653), 3,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
      aux_sym_mmap_icon_token1,
  [17160] = 3,
    ACTIONS(649), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1657), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [17173] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1659), 1,
      sym__sequence_actor_word,
    STATE(436), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1028), 2,
      aux_sym_sequence_stmt_participant_token1,
      sym__newline,
  [17190] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1661), 4,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [17201] = 4,
    ACTIONS(1216), 1,
      ts_builtin_sym_end,
    STATE(453), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1663), 2,
      anon_sym_SEMI,
      sym__newline,
  [17216] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1108), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [17227] = 4,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    STATE(475), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1568), 2,
      anon_sym_SEMI,
      sym__newline,
  [17242] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(809), 1,
      sym_sequence_actor,
  [17258] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(705), 1,
      sym_sequence_actor,
  [17274] = 4,
    ACTIONS(1665), 1,
      ts_builtin_sym_end,
    ACTIONS(1667), 1,
      sym__newline,
    STATE(492), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17288] = 4,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    ACTIONS(1669), 1,
      sym__newline,
    STATE(503), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17302] = 4,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    ACTIONS(1669), 1,
      sym__newline,
    STATE(504), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17316] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1671), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17326] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1673), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17336] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1675), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17346] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1677), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17356] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1679), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17366] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1681), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17376] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1683), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17386] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1685), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17396] = 3,
    ACTIONS(1687), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1582), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17408] = 4,
    ACTIONS(1689), 1,
      ts_builtin_sym_end,
    ACTIONS(1691), 1,
      sym__newline,
    STATE(536), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17422] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(909), 1,
      sym__sequence_rest_text,
    STATE(912), 1,
      sym_sequence_text,
  [17438] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(913), 1,
      sym_sequence_actor,
  [17454] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1693), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17464] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(781), 1,
      sym_sequence_actor,
  [17480] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1695), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(165), 1,
      sym__sequence_rest_text,
    STATE(183), 1,
      sym_sequence_text,
  [17496] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1695), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(165), 1,
      sym__sequence_rest_text,
    STATE(184), 1,
      sym_sequence_text,
  [17512] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1695), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(165), 1,
      sym__sequence_rest_text,
    STATE(185), 1,
      sym_sequence_text,
  [17528] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1695), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(165), 1,
      sym__sequence_rest_text,
    STATE(186), 1,
      sym_sequence_text,
  [17544] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1699), 1,
      sym__newline,
    ACTIONS(1697), 2,
      ts_builtin_sym_end,
      aux_sym_mmap_class_token1,
  [17558] = 4,
    ACTIONS(1701), 1,
      anon_sym_RBRACE,
    ACTIONS(1703), 1,
      sym__newline,
    STATE(508), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17572] = 4,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    ACTIONS(1705), 1,
      sym__newline,
    STATE(504), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17586] = 4,
    ACTIONS(1707), 1,
      anon_sym_RBRACE,
    ACTIONS(1709), 1,
      sym__newline,
    STATE(504), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17600] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1712), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17614] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(776), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [17630] = 4,
    ACTIONS(1143), 1,
      anon_sym_RBRACE,
    ACTIONS(1714), 1,
      sym__newline,
    STATE(510), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17644] = 4,
    ACTIONS(1143), 1,
      anon_sym_RBRACE,
    ACTIONS(1714), 1,
      sym__newline,
    STATE(504), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17658] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1716), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17668] = 4,
    ACTIONS(1151), 1,
      anon_sym_RBRACE,
    ACTIONS(1718), 1,
      sym__newline,
    STATE(504), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17682] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1720), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17692] = 4,
    ACTIONS(1722), 1,
      ts_builtin_sym_end,
    ACTIONS(1724), 1,
      sym__newline,
    STATE(512), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17706] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(848), 1,
      sym_sequence_actor,
  [17722] = 3,
    ACTIONS(1729), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1727), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17734] = 4,
    ACTIONS(962), 1,
      ts_builtin_sym_end,
    ACTIONS(1731), 1,
      sym__newline,
    STATE(512), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17748] = 3,
    STATE(224), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1733), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17760] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1048), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [17770] = 4,
    ACTIONS(1735), 1,
      ts_builtin_sym_end,
    ACTIONS(1737), 1,
      sym__newline,
    STATE(539), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17784] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1741), 1,
      sym__sequence_actor_word,
    ACTIONS(1739), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17798] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1745), 1,
      sym__sequence_actor_word,
    ACTIONS(1743), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17812] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1747), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17822] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1751), 1,
      sym__sequence_actor_word,
    ACTIONS(1749), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17836] = 4,
    ACTIONS(1753), 1,
      sym__alpha_num_token,
    STATE(409), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(794), 1,
      sym_flow_vertex_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17850] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(761), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [17866] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(764), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [17882] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1755), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(704), 1,
      sym_sequence_actor,
  [17898] = 4,
    ACTIONS(1509), 1,
      anon_sym_PIPE,
    ACTIONS(1519), 1,
      sym__alpha_num_token,
    STATE(372), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17912] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1602), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17922] = 4,
    ACTIONS(1757), 1,
      sym__alpha_num_token,
    STATE(527), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(881), 1,
      sym_flow_arrow_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17936] = 4,
    ACTIONS(1759), 1,
      sym__class_name,
    ACTIONS(1762), 1,
      sym__bquote_string,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17950] = 4,
    ACTIONS(1764), 1,
      ts_builtin_sym_end,
    ACTIONS(1766), 1,
      sym__newline,
    STATE(515), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17964] = 4,
    ACTIONS(1768), 1,
      sym__class_name,
    ACTIONS(1770), 1,
      sym__bquote_string,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [17978] = 3,
    STATE(826), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17990] = 4,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(1772), 1,
      sym__newline,
    STATE(535), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18004] = 4,
    ACTIONS(1774), 1,
      ts_builtin_sym_end,
    ACTIONS(1776), 1,
      sym__newline,
    STATE(535), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18018] = 4,
    ACTIONS(1779), 1,
      ts_builtin_sym_end,
    ACTIONS(1781), 1,
      sym__newline,
    STATE(536), 1,
      aux_sym_diagram_mindmap_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18032] = 4,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(1784), 1,
      sym__newline,
    STATE(534), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18046] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1755), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(718), 1,
      sym_sequence_actor,
  [18062] = 4,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(1784), 1,
      sym__newline,
    STATE(535), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18076] = 4,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1786), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(574), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18090] = 3,
    STATE(224), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18102] = 4,
    ACTIONS(1788), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1790), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18116] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1793), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18130] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(782), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [18146] = 3,
    ACTIONS(1797), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1795), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18158] = 4,
    ACTIONS(1799), 1,
      anon_sym_RBRACE,
    ACTIONS(1801), 1,
      sym__newline,
    STATE(482), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18172] = 4,
    ACTIONS(1803), 1,
      anon_sym_COLON,
    ACTIONS(1805), 1,
      aux_sym_gantt_task_text_token1,
    STATE(547), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18186] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1808), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18196] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1350), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18206] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1810), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18216] = 3,
    ACTIONS(1812), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1607), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18228] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1814), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [18238] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(919), 1,
      sym_sequence_actor,
  [18254] = 4,
    ACTIONS(1816), 1,
      anon_sym_COLON,
    ACTIONS(1818), 1,
      aux_sym_gantt_task_text_token1,
    STATE(547), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18268] = 4,
    ACTIONS(1820), 1,
      sym__class_name,
    ACTIONS(1822), 1,
      sym__bquote_string,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18282] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1824), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(108), 1,
      sym__sequence_rest_text,
    STATE(120), 1,
      sym_sequence_text,
  [18298] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1824), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(108), 1,
      sym__sequence_rest_text,
    STATE(113), 1,
      sym_sequence_text,
  [18314] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1824), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(86), 1,
      sym_sequence_text,
    STATE(108), 1,
      sym__sequence_rest_text,
  [18330] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1824), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(87), 1,
      sym_sequence_text,
    STATE(108), 1,
      sym__sequence_rest_text,
  [18346] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(917), 1,
      sym_sequence_actor,
  [18362] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1826), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18372] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1828), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18386] = 4,
    ACTIONS(1830), 1,
      sym__alpha_num_token,
    STATE(404), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(435), 1,
      sym_flow_arrow_text,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18400] = 4,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1832), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(574), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18414] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1834), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18428] = 4,
    ACTIONS(1770), 1,
      sym__bquote_string,
    ACTIONS(1836), 1,
      sym__class_name,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18442] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym__sequence_rest_text,
    STATE(174), 1,
      sym_sequence_text,
  [18458] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym__sequence_rest_text,
    STATE(175), 1,
      sym_sequence_text,
  [18474] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym__sequence_rest_text,
    STATE(176), 1,
      sym_sequence_text,
  [18490] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1838), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(158), 1,
      sym__sequence_rest_text,
    STATE(177), 1,
      sym_sequence_text,
  [18506] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(824), 1,
      sym_sequence_actor,
  [18522] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(898), 1,
      sym_sequence_actor,
  [18538] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(918), 1,
      sym_sequence_actor,
  [18554] = 4,
    ACTIONS(1840), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1842), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(574), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18568] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1845), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18582] = 4,
    ACTIONS(1847), 1,
      ts_builtin_sym_end,
    ACTIONS(1849), 1,
      sym__newline,
    STATE(587), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18596] = 4,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1851), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(574), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18610] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1853), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18624] = 4,
    ACTIONS(1770), 1,
      sym__bquote_string,
    ACTIONS(1820), 1,
      sym__class_name,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18638] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1855), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(116), 1,
      sym_sequence_text,
    STATE(140), 1,
      sym__sequence_rest_text,
  [18654] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1855), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(117), 1,
      sym_sequence_text,
    STATE(140), 1,
      sym__sequence_rest_text,
  [18670] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1855), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(118), 1,
      sym_sequence_text,
    STATE(140), 1,
      sym__sequence_rest_text,
  [18686] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1855), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(119), 1,
      sym_sequence_text,
    STATE(140), 1,
      sym__sequence_rest_text,
  [18702] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1857), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18712] = 4,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    ACTIONS(1859), 1,
      sym__newline,
    STATE(614), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18726] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(777), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [18742] = 4,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    ACTIONS(1859), 1,
      sym__newline,
    STATE(654), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18756] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1861), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18770] = 4,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1863), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(574), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18784] = 4,
    ACTIONS(65), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1865), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18798] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1755), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(679), 1,
      sym_sequence_actor,
  [18814] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(854), 1,
      sym_sequence_actor,
  [18830] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(904), 1,
      sym_sequence_actor,
  [18846] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1755), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(680), 1,
      sym_sequence_actor,
  [18862] = 3,
    STATE(783), 1,
      sym_state_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18874] = 4,
    ACTIONS(1576), 1,
      sym__alpha_num_token,
    STATE(62), 1,
      sym_flow_vertex_id,
    STATE(330), 1,
      sym_flow_vertex,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [18888] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(840), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [18904] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(813), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [18920] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(819), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [18936] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(821), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [18952] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(834), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [18968] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1755), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(691), 1,
      sym_sequence_actor,
  [18984] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(842), 1,
      sym_sequence_actor,
  [19000] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(846), 1,
      sym_sequence_actor,
  [19016] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1755), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(692), 1,
      sym_sequence_actor,
  [19032] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(839), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19048] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(750), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19064] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(751), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19080] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(752), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19096] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1755), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(698), 1,
      sym_sequence_actor,
  [19112] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(754), 1,
      sym_sequence_actor,
  [19128] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(755), 1,
      sym_sequence_actor,
  [19144] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1755), 1,
      sym__sequence_actor_word,
    STATE(473), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(699), 1,
      sym_sequence_actor,
  [19160] = 4,
    ACTIONS(1393), 1,
      ts_builtin_sym_end,
    ACTIONS(1867), 1,
      sym__newline,
    STATE(654), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19174] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(775), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19190] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(778), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19206] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(779), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19222] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(780), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19238] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(785), 1,
      sym_sequence_actor,
  [19254] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(786), 1,
      sym_sequence_actor,
  [19270] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(787), 1,
      sym_sequence_actor,
  [19286] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(788), 1,
      sym_sequence_actor,
  [19302] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(790), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19318] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(791), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19334] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(792), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19350] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(810), 1,
      sym_sequence_actor,
  [19366] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(811), 1,
      sym_sequence_actor,
  [19382] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(812), 1,
      sym_sequence_actor,
  [19398] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(814), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19414] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(815), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19430] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(816), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19446] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(830), 1,
      sym_sequence_actor,
  [19462] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(831), 1,
      sym_sequence_actor,
  [19478] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(832), 1,
      sym_sequence_actor,
  [19494] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(833), 1,
      sym_sequence_actor,
  [19510] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(835), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19526] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(836), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19542] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(837), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19558] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(857), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19574] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(731), 1,
      sym_sequence_actor,
  [19590] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(860), 1,
      sym_sequence_actor,
  [19606] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(862), 1,
      sym_sequence_actor,
  [19622] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(863), 1,
      sym_sequence_actor,
  [19638] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(873), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19654] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(734), 1,
      sym_sequence_actor,
  [19670] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(876), 1,
      sym_sequence_actor,
  [19686] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(878), 1,
      sym_sequence_actor,
  [19702] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(879), 1,
      sym_sequence_actor,
  [19718] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(889), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19734] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(738), 1,
      sym_sequence_actor,
  [19750] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(892), 1,
      sym_sequence_actor,
  [19766] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(894), 1,
      sym_sequence_actor,
  [19782] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(895), 1,
      sym_sequence_actor,
  [19798] = 4,
    ACTIONS(1869), 1,
      ts_builtin_sym_end,
    ACTIONS(1871), 1,
      sym__newline,
    STATE(654), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [19812] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(804), 1,
      sym_sequence_text,
    STATE(909), 1,
      sym__sequence_rest_text,
  [19828] = 5,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(256), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(798), 1,
      sym_sequence_actor,
  [19844] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1874), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19853] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(909), 1,
      aux_sym_class_label_token1,
    STATE(254), 1,
      sym_state_description,
  [19866] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1876), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19875] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1878), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19884] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(296), 1,
      sym_gantt_meta_format,
  [19897] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(805), 1,
      sym__sequence_rest_text,
  [19910] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(269), 1,
      sym_gantt_meta_format,
  [19923] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(270), 1,
      sym_gantt_meta_format,
  [19936] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1882), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [19945] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(271), 1,
      sym_gantt_meta_format,
  [19958] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1884), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19967] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(272), 1,
      sym_gantt_meta_format,
  [19980] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(273), 1,
      sym_gantt_meta_format,
  [19993] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(274), 1,
      sym_gantt_meta_format,
  [20006] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1886), 2,
      anon_sym_SEMI,
      sym__newline,
  [20015] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1888), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20024] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(275), 1,
      sym_gantt_meta_format,
  [20037] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(903), 1,
      sym__sequence_rest_text,
  [20050] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1880), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(276), 1,
      sym_gantt_meta_format,
  [20063] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1890), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20072] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1892), 2,
      anon_sym_SEMI,
      sym__newline,
  [20081] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(908), 1,
      sym__sequence_rest_text,
  [20094] = 3,
    ACTIONS(1894), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1896), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20105] = 3,
    ACTIONS(1898), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1900), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20116] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1902), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20125] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1722), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20134] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1904), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20143] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1906), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [20152] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1908), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20161] = 3,
    ACTIONS(1910), 1,
      anon_sym_PIPE,
    ACTIONS(1912), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20172] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1914), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20181] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1916), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20190] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1918), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20199] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1920), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20208] = 3,
    ACTIONS(1922), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1924), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20219] = 3,
    ACTIONS(1926), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1928), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20230] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1930), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20239] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1932), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20248] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1934), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20257] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1936), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20266] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1938), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20275] = 3,
    ACTIONS(1940), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1942), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20286] = 3,
    ACTIONS(1944), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1946), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20297] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1948), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20306] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1950), 1,
      sym__mindmap_text,
    STATE(213), 1,
      sym_mmap_node_id,
  [20319] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1952), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20328] = 3,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_state_composite_body,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20339] = 3,
    ACTIONS(1954), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1956), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20350] = 3,
    ACTIONS(1958), 1,
      anon_sym_COLON,
    ACTIONS(1960), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20361] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(909), 1,
      aux_sym_class_label_token1,
    STATE(234), 1,
      sym_state_description,
  [20374] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1962), 2,
      anon_sym_SEMI,
      sym__newline,
  [20383] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(763), 1,
      sym__sequence_rest_text,
  [20396] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1964), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20405] = 3,
    ACTIONS(1395), 1,
      sym__er_alphanum,
    STATE(905), 1,
      sym_er_entity_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20416] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(789), 1,
      sym__sequence_rest_text,
  [20429] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1689), 1,
      ts_builtin_sym_end,
    ACTIONS(1966), 1,
      sym__whitespace,
    STATE(742), 1,
      sym_mmap_node,
  [20442] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1968), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20451] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(800), 1,
      sym__sequence_rest_text,
  [20464] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1582), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20473] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1970), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20482] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(875), 1,
      sym__sequence_rest_text,
  [20495] = 3,
    ACTIONS(1972), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(1974), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20506] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(896), 1,
      sym__sequence_rest_text,
  [20519] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1976), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20528] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1978), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20537] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(915), 1,
      sym__sequence_rest_text,
  [20550] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1609), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20559] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(762), 1,
      sym__sequence_rest_text,
  [20572] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(767), 1,
      sym__sequence_rest_text,
  [20585] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1574), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(774), 1,
      sym__sequence_rest_text,
  [20598] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1588), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20607] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1563), 2,
      anon_sym_LPAREN_LPAREN,
      anon_sym_RPAREN_RPAREN,
  [20616] = 3,
    ACTIONS(1980), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1982), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20627] = 3,
    ACTIONS(1984), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1986), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20638] = 3,
    ACTIONS(1988), 1,
      anon_sym_COLON,
    ACTIONS(1990), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20649] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1992), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20658] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1994), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20667] = 3,
    ACTIONS(1996), 1,
      anon_sym_COLON,
    ACTIONS(1998), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20678] = 3,
    ACTIONS(2000), 1,
      sym__er_alphanum,
    STATE(350), 1,
      sym_er_attribute_name,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20689] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2002), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20698] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2004), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20707] = 3,
    ACTIONS(2006), 1,
      anon_sym_COLON,
    ACTIONS(2008), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20718] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(2010), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20727] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1774), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20736] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1448), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20745] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1779), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20754] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1966), 1,
      sym__whitespace,
    ACTIONS(2012), 1,
      ts_builtin_sym_end,
    STATE(742), 1,
      sym_mmap_node,
  [20767] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1707), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20776] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1611), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20785] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1869), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20794] = 2,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1621), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20803] = 2,
    ACTIONS(739), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20811] = 2,
    ACTIONS(1580), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20819] = 2,
    ACTIONS(2014), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20827] = 2,
    ACTIONS(2016), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20835] = 2,
    ACTIONS(2018), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20843] = 2,
    ACTIONS(2020), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20851] = 2,
    ACTIONS(2022), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20859] = 2,
    ACTIONS(2024), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20867] = 2,
    ACTIONS(2026), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20875] = 2,
    ACTIONS(2028), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20883] = 2,
    ACTIONS(2030), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20891] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2032), 1,
      sym__sequence_actor_word,
  [20901] = 2,
    ACTIONS(2034), 1,
      anon_sym_TILDE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20909] = 2,
    ACTIONS(2036), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20917] = 2,
    ACTIONS(2038), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20925] = 2,
    ACTIONS(2040), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20933] = 2,
    ACTIONS(2042), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20941] = 2,
    ACTIONS(2044), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20949] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1966), 1,
      sym__whitespace,
    STATE(480), 1,
      sym_mmap_node,
  [20959] = 2,
    ACTIONS(2046), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20967] = 2,
    ACTIONS(2048), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20975] = 2,
    ACTIONS(2050), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20983] = 2,
    ACTIONS(2052), 1,
      sym__md_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20991] = 2,
    ACTIONS(2054), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [20999] = 2,
    ACTIONS(2056), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21007] = 2,
    ACTIONS(2058), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21015] = 2,
    ACTIONS(2060), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21023] = 2,
    ACTIONS(2062), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21031] = 2,
    ACTIONS(2064), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21039] = 2,
    ACTIONS(2066), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21047] = 2,
    ACTIONS(2068), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21055] = 2,
    ACTIONS(2070), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21063] = 2,
    ACTIONS(2072), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21071] = 2,
    ACTIONS(1958), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21079] = 2,
    ACTIONS(2074), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21087] = 2,
    ACTIONS(2076), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21095] = 2,
    ACTIONS(2078), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21103] = 2,
    ACTIONS(2080), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21111] = 2,
    ACTIONS(2082), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21119] = 2,
    ACTIONS(2084), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21127] = 2,
    ACTIONS(2086), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21135] = 2,
    ACTIONS(2088), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21143] = 2,
    ACTIONS(2090), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21151] = 2,
    ACTIONS(2092), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21159] = 2,
    ACTIONS(2094), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21167] = 2,
    ACTIONS(2096), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21175] = 2,
    ACTIONS(2098), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21183] = 2,
    ACTIONS(2100), 1,
      anon_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21191] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2102), 1,
      sym_gantt_task_data,
  [21201] = 2,
    ACTIONS(2104), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21209] = 2,
    ACTIONS(2106), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21217] = 2,
    ACTIONS(2108), 1,
      aux_sym_class_generics_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21225] = 2,
    ACTIONS(2110), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21233] = 2,
    ACTIONS(2112), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21241] = 2,
    ACTIONS(2114), 1,
      anon_sym_TILDE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21249] = 2,
    ACTIONS(2116), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21257] = 2,
    ACTIONS(2118), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21265] = 2,
    ACTIONS(2120), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21273] = 2,
    ACTIONS(2122), 1,
      aux_sym_class_generics_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21281] = 2,
    ACTIONS(2124), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21289] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2126), 1,
      sym__sequence_actor_word,
  [21299] = 2,
    ACTIONS(2128), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21307] = 2,
    ACTIONS(2130), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21315] = 2,
    ACTIONS(2132), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21323] = 2,
    ACTIONS(2134), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21331] = 2,
    ACTIONS(2136), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21339] = 2,
    ACTIONS(2138), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21347] = 2,
    ACTIONS(2140), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21355] = 2,
    ACTIONS(2142), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21363] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2144), 1,
      sym_type_directive,
  [21373] = 2,
    ACTIONS(2146), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21381] = 2,
    ACTIONS(2148), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21389] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2150), 1,
      sym__mindmap_text,
  [21399] = 2,
    ACTIONS(2152), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21407] = 2,
    ACTIONS(2154), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21415] = 2,
    ACTIONS(2156), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21423] = 2,
    ACTIONS(2158), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21431] = 2,
    ACTIONS(2160), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21439] = 2,
    ACTIONS(2162), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21447] = 2,
    ACTIONS(2164), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21455] = 2,
    ACTIONS(2166), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21463] = 2,
    ACTIONS(2168), 1,
      sym__md_end,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21471] = 2,
    ACTIONS(2170), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21479] = 2,
    ACTIONS(2172), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21487] = 2,
    ACTIONS(2174), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21495] = 2,
    ACTIONS(2176), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21503] = 2,
    ACTIONS(2178), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21511] = 2,
    ACTIONS(2180), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21519] = 2,
    ACTIONS(2182), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21527] = 2,
    ACTIONS(2184), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21535] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2186), 1,
      sym__mindmap_text,
  [21545] = 2,
    ACTIONS(2188), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21553] = 2,
    ACTIONS(2190), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21561] = 2,
    ACTIONS(2192), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21569] = 2,
    ACTIONS(2194), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21577] = 2,
    ACTIONS(2196), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21585] = 2,
    ACTIONS(2198), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21593] = 2,
    ACTIONS(2200), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21601] = 2,
    ACTIONS(2202), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21609] = 2,
    ACTIONS(2204), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21617] = 2,
    ACTIONS(2206), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21625] = 2,
    ACTIONS(2208), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21633] = 2,
    ACTIONS(2210), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21641] = 2,
    ACTIONS(2212), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21649] = 2,
    ACTIONS(2214), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21657] = 2,
    ACTIONS(2216), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21665] = 2,
    ACTIONS(2218), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21673] = 2,
    ACTIONS(2220), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21681] = 2,
    ACTIONS(2222), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21689] = 2,
    ACTIONS(2224), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21697] = 2,
    ACTIONS(2226), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21705] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2228), 1,
      sym__sequence_actor_word,
  [21715] = 2,
    ACTIONS(1988), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21723] = 2,
    ACTIONS(2230), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21731] = 2,
    ACTIONS(2232), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21739] = 2,
    ACTIONS(2234), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21747] = 2,
    ACTIONS(2236), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21755] = 2,
    ACTIONS(2238), 1,
      sym_state_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21763] = 2,
    ACTIONS(2240), 1,
      sym_state_id,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21771] = 2,
    ACTIONS(2242), 1,
      anon_sym_GT_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21779] = 2,
    ACTIONS(2244), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21787] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2246), 1,
      sym__sequence_actor_word,
  [21797] = 2,
    ACTIONS(2248), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21805] = 2,
    ACTIONS(2250), 1,
      sym__er_alphanum,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21813] = 2,
    ACTIONS(2252), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21821] = 2,
    ACTIONS(2254), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21829] = 2,
    ACTIONS(2256), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21837] = 2,
    ACTIONS(2258), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21845] = 2,
    ACTIONS(1996), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21853] = 2,
    ACTIONS(2260), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21861] = 2,
    ACTIONS(2262), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21869] = 2,
    ACTIONS(2264), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21877] = 2,
    ACTIONS(2266), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21885] = 2,
    ACTIONS(2268), 1,
      anon_sym_PIPE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21893] = 2,
    ACTIONS(2270), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21901] = 2,
    ACTIONS(2272), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21909] = 2,
    ACTIONS(2274), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21917] = 2,
    ACTIONS(2276), 1,
      sym__er_alphanum,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21925] = 2,
    ACTIONS(2278), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21933] = 2,
    ACTIONS(2280), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21941] = 2,
    ACTIONS(2282), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21949] = 2,
    ACTIONS(2284), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21957] = 2,
    ACTIONS(2286), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21965] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2288), 1,
      sym_pie_value,
  [21975] = 2,
    ACTIONS(2006), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21983] = 2,
    ACTIONS(2290), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21991] = 2,
    ACTIONS(2292), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [21999] = 2,
    ACTIONS(2294), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22007] = 2,
    ACTIONS(2296), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22015] = 2,
    ACTIONS(2298), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22023] = 2,
    ACTIONS(2300), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22031] = 2,
    ACTIONS(2302), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22039] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2304), 1,
      sym__sequence_actor_word,
  [22049] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2306), 1,
      aux_sym_mmap_class_token2,
  [22059] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2308), 1,
      aux_sym_mmap_icon_token2,
  [22069] = 2,
    ACTIONS(2310), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22077] = 2,
    ACTIONS(2312), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22085] = 2,
    ACTIONS(2314), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22093] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(2316), 1,
      aux_sym_directive_token1,
  [22103] = 2,
    ACTIONS(2318), 1,
      sym__alpha_num_token,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22111] = 2,
    ACTIONS(2320), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22119] = 2,
    ACTIONS(743), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22127] = 2,
    ACTIONS(2322), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22135] = 2,
    ACTIONS(2324), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22143] = 2,
    ACTIONS(2326), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22151] = 2,
    ACTIONS(2328), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22159] = 2,
    ACTIONS(2330), 1,
      anon_sym_GT_GT,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22167] = 2,
    ACTIONS(2332), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22175] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1966), 1,
      sym__whitespace,
    STATE(742), 1,
      sym_mmap_node,
  [22185] = 2,
    ACTIONS(2334), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22193] = 2,
    ACTIONS(2336), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22201] = 2,
    ACTIONS(2338), 1,
      sym__newline,
    ACTIONS(5), 2,
      sym__whitespace,
      sym_comment,
  [22209] = 2,
    ACTIONS(2340), 1,
      aux_sym_mmap_markdown_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 945,
  [SMALL_STATE(12)] = 1050,
  [SMALL_STATE(13)] = 1155,
  [SMALL_STATE(14)] = 1260,
  [SMALL_STATE(15)] = 1360,
  [SMALL_STATE(16)] = 1460,
  [SMALL_STATE(17)] = 1560,
  [SMALL_STATE(18)] = 1660,
  [SMALL_STATE(19)] = 1760,
  [SMALL_STATE(20)] = 1857,
  [SMALL_STATE(21)] = 1956,
  [SMALL_STATE(22)] = 2055,
  [SMALL_STATE(23)] = 2154,
  [SMALL_STATE(24)] = 2253,
  [SMALL_STATE(25)] = 2352,
  [SMALL_STATE(26)] = 2451,
  [SMALL_STATE(27)] = 2550,
  [SMALL_STATE(28)] = 2647,
  [SMALL_STATE(29)] = 2746,
  [SMALL_STATE(30)] = 2845,
  [SMALL_STATE(31)] = 2944,
  [SMALL_STATE(32)] = 3043,
  [SMALL_STATE(33)] = 3142,
  [SMALL_STATE(34)] = 3241,
  [SMALL_STATE(35)] = 3340,
  [SMALL_STATE(36)] = 3437,
  [SMALL_STATE(37)] = 3536,
  [SMALL_STATE(38)] = 3635,
  [SMALL_STATE(39)] = 3734,
  [SMALL_STATE(40)] = 3833,
  [SMALL_STATE(41)] = 3932,
  [SMALL_STATE(42)] = 4031,
  [SMALL_STATE(43)] = 4130,
  [SMALL_STATE(44)] = 4229,
  [SMALL_STATE(45)] = 4328,
  [SMALL_STATE(46)] = 4427,
  [SMALL_STATE(47)] = 4526,
  [SMALL_STATE(48)] = 4622,
  [SMALL_STATE(49)] = 4718,
  [SMALL_STATE(50)] = 4814,
  [SMALL_STATE(51)] = 4910,
  [SMALL_STATE(52)] = 5006,
  [SMALL_STATE(53)] = 5102,
  [SMALL_STATE(54)] = 5198,
  [SMALL_STATE(55)] = 5294,
  [SMALL_STATE(56)] = 5390,
  [SMALL_STATE(57)] = 5486,
  [SMALL_STATE(58)] = 5582,
  [SMALL_STATE(59)] = 5678,
  [SMALL_STATE(60)] = 5774,
  [SMALL_STATE(61)] = 5870,
  [SMALL_STATE(62)] = 5966,
  [SMALL_STATE(63)] = 6044,
  [SMALL_STATE(64)] = 6111,
  [SMALL_STATE(65)] = 6178,
  [SMALL_STATE(66)] = 6245,
  [SMALL_STATE(67)] = 6312,
  [SMALL_STATE(68)] = 6379,
  [SMALL_STATE(69)] = 6442,
  [SMALL_STATE(70)] = 6505,
  [SMALL_STATE(71)] = 6568,
  [SMALL_STATE(72)] = 6631,
  [SMALL_STATE(73)] = 6694,
  [SMALL_STATE(74)] = 6757,
  [SMALL_STATE(75)] = 6820,
  [SMALL_STATE(76)] = 6883,
  [SMALL_STATE(77)] = 6946,
  [SMALL_STATE(78)] = 7009,
  [SMALL_STATE(79)] = 7072,
  [SMALL_STATE(80)] = 7132,
  [SMALL_STATE(81)] = 7192,
  [SMALL_STATE(82)] = 7252,
  [SMALL_STATE(83)] = 7312,
  [SMALL_STATE(84)] = 7344,
  [SMALL_STATE(85)] = 7399,
  [SMALL_STATE(86)] = 7431,
  [SMALL_STATE(87)] = 7463,
  [SMALL_STATE(88)] = 7495,
  [SMALL_STATE(89)] = 7527,
  [SMALL_STATE(90)] = 7559,
  [SMALL_STATE(91)] = 7591,
  [SMALL_STATE(92)] = 7623,
  [SMALL_STATE(93)] = 7655,
  [SMALL_STATE(94)] = 7687,
  [SMALL_STATE(95)] = 7719,
  [SMALL_STATE(96)] = 7751,
  [SMALL_STATE(97)] = 7783,
  [SMALL_STATE(98)] = 7815,
  [SMALL_STATE(99)] = 7847,
  [SMALL_STATE(100)] = 7879,
  [SMALL_STATE(101)] = 7911,
  [SMALL_STATE(102)] = 7943,
  [SMALL_STATE(103)] = 7975,
  [SMALL_STATE(104)] = 8007,
  [SMALL_STATE(105)] = 8039,
  [SMALL_STATE(106)] = 8071,
  [SMALL_STATE(107)] = 8103,
  [SMALL_STATE(108)] = 8135,
  [SMALL_STATE(109)] = 8167,
  [SMALL_STATE(110)] = 8199,
  [SMALL_STATE(111)] = 8231,
  [SMALL_STATE(112)] = 8263,
  [SMALL_STATE(113)] = 8295,
  [SMALL_STATE(114)] = 8327,
  [SMALL_STATE(115)] = 8359,
  [SMALL_STATE(116)] = 8391,
  [SMALL_STATE(117)] = 8423,
  [SMALL_STATE(118)] = 8455,
  [SMALL_STATE(119)] = 8487,
  [SMALL_STATE(120)] = 8519,
  [SMALL_STATE(121)] = 8551,
  [SMALL_STATE(122)] = 8583,
  [SMALL_STATE(123)] = 8615,
  [SMALL_STATE(124)] = 8647,
  [SMALL_STATE(125)] = 8679,
  [SMALL_STATE(126)] = 8711,
  [SMALL_STATE(127)] = 8743,
  [SMALL_STATE(128)] = 8775,
  [SMALL_STATE(129)] = 8807,
  [SMALL_STATE(130)] = 8839,
  [SMALL_STATE(131)] = 8871,
  [SMALL_STATE(132)] = 8903,
  [SMALL_STATE(133)] = 8935,
  [SMALL_STATE(134)] = 8967,
  [SMALL_STATE(135)] = 8999,
  [SMALL_STATE(136)] = 9031,
  [SMALL_STATE(137)] = 9063,
  [SMALL_STATE(138)] = 9095,
  [SMALL_STATE(139)] = 9127,
  [SMALL_STATE(140)] = 9159,
  [SMALL_STATE(141)] = 9191,
  [SMALL_STATE(142)] = 9223,
  [SMALL_STATE(143)] = 9255,
  [SMALL_STATE(144)] = 9287,
  [SMALL_STATE(145)] = 9319,
  [SMALL_STATE(146)] = 9351,
  [SMALL_STATE(147)] = 9383,
  [SMALL_STATE(148)] = 9415,
  [SMALL_STATE(149)] = 9447,
  [SMALL_STATE(150)] = 9478,
  [SMALL_STATE(151)] = 9509,
  [SMALL_STATE(152)] = 9540,
  [SMALL_STATE(153)] = 9571,
  [SMALL_STATE(154)] = 9602,
  [SMALL_STATE(155)] = 9633,
  [SMALL_STATE(156)] = 9664,
  [SMALL_STATE(157)] = 9695,
  [SMALL_STATE(158)] = 9726,
  [SMALL_STATE(159)] = 9757,
  [SMALL_STATE(160)] = 9788,
  [SMALL_STATE(161)] = 9819,
  [SMALL_STATE(162)] = 9850,
  [SMALL_STATE(163)] = 9881,
  [SMALL_STATE(164)] = 9912,
  [SMALL_STATE(165)] = 9943,
  [SMALL_STATE(166)] = 9974,
  [SMALL_STATE(167)] = 10005,
  [SMALL_STATE(168)] = 10036,
  [SMALL_STATE(169)] = 10067,
  [SMALL_STATE(170)] = 10098,
  [SMALL_STATE(171)] = 10129,
  [SMALL_STATE(172)] = 10160,
  [SMALL_STATE(173)] = 10191,
  [SMALL_STATE(174)] = 10222,
  [SMALL_STATE(175)] = 10253,
  [SMALL_STATE(176)] = 10284,
  [SMALL_STATE(177)] = 10315,
  [SMALL_STATE(178)] = 10346,
  [SMALL_STATE(179)] = 10377,
  [SMALL_STATE(180)] = 10408,
  [SMALL_STATE(181)] = 10439,
  [SMALL_STATE(182)] = 10470,
  [SMALL_STATE(183)] = 10501,
  [SMALL_STATE(184)] = 10532,
  [SMALL_STATE(185)] = 10563,
  [SMALL_STATE(186)] = 10594,
  [SMALL_STATE(187)] = 10625,
  [SMALL_STATE(188)] = 10656,
  [SMALL_STATE(189)] = 10687,
  [SMALL_STATE(190)] = 10718,
  [SMALL_STATE(191)] = 10749,
  [SMALL_STATE(192)] = 10780,
  [SMALL_STATE(193)] = 10811,
  [SMALL_STATE(194)] = 10842,
  [SMALL_STATE(195)] = 10873,
  [SMALL_STATE(196)] = 10904,
  [SMALL_STATE(197)] = 10935,
  [SMALL_STATE(198)] = 10966,
  [SMALL_STATE(199)] = 10997,
  [SMALL_STATE(200)] = 11028,
  [SMALL_STATE(201)] = 11059,
  [SMALL_STATE(202)] = 11090,
  [SMALL_STATE(203)] = 11121,
  [SMALL_STATE(204)] = 11152,
  [SMALL_STATE(205)] = 11183,
  [SMALL_STATE(206)] = 11214,
  [SMALL_STATE(207)] = 11245,
  [SMALL_STATE(208)] = 11276,
  [SMALL_STATE(209)] = 11307,
  [SMALL_STATE(210)] = 11338,
  [SMALL_STATE(211)] = 11369,
  [SMALL_STATE(212)] = 11400,
  [SMALL_STATE(213)] = 11451,
  [SMALL_STATE(214)] = 11502,
  [SMALL_STATE(215)] = 11539,
  [SMALL_STATE(216)] = 11574,
  [SMALL_STATE(217)] = 11611,
  [SMALL_STATE(218)] = 11648,
  [SMALL_STATE(219)] = 11679,
  [SMALL_STATE(220)] = 11724,
  [SMALL_STATE(221)] = 11754,
  [SMALL_STATE(222)] = 11792,
  [SMALL_STATE(223)] = 11824,
  [SMALL_STATE(224)] = 11848,
  [SMALL_STATE(225)] = 11873,
  [SMALL_STATE(226)] = 11902,
  [SMALL_STATE(227)] = 11925,
  [SMALL_STATE(228)] = 11952,
  [SMALL_STATE(229)] = 11981,
  [SMALL_STATE(230)] = 12009,
  [SMALL_STATE(231)] = 12031,
  [SMALL_STATE(232)] = 12053,
  [SMALL_STATE(233)] = 12075,
  [SMALL_STATE(234)] = 12097,
  [SMALL_STATE(235)] = 12119,
  [SMALL_STATE(236)] = 12141,
  [SMALL_STATE(237)] = 12163,
  [SMALL_STATE(238)] = 12185,
  [SMALL_STATE(239)] = 12207,
  [SMALL_STATE(240)] = 12229,
  [SMALL_STATE(241)] = 12251,
  [SMALL_STATE(242)] = 12289,
  [SMALL_STATE(243)] = 12329,
  [SMALL_STATE(244)] = 12351,
  [SMALL_STATE(245)] = 12373,
  [SMALL_STATE(246)] = 12409,
  [SMALL_STATE(247)] = 12435,
  [SMALL_STATE(248)] = 12457,
  [SMALL_STATE(249)] = 12479,
  [SMALL_STATE(250)] = 12501,
  [SMALL_STATE(251)] = 12523,
  [SMALL_STATE(252)] = 12545,
  [SMALL_STATE(253)] = 12567,
  [SMALL_STATE(254)] = 12589,
  [SMALL_STATE(255)] = 12611,
  [SMALL_STATE(256)] = 12651,
  [SMALL_STATE(257)] = 12679,
  [SMALL_STATE(258)] = 12705,
  [SMALL_STATE(259)] = 12727,
  [SMALL_STATE(260)] = 12761,
  [SMALL_STATE(261)] = 12799,
  [SMALL_STATE(262)] = 12835,
  [SMALL_STATE(263)] = 12857,
  [SMALL_STATE(264)] = 12879,
  [SMALL_STATE(265)] = 12919,
  [SMALL_STATE(266)] = 12941,
  [SMALL_STATE(267)] = 12963,
  [SMALL_STATE(268)] = 12985,
  [SMALL_STATE(269)] = 13006,
  [SMALL_STATE(270)] = 13027,
  [SMALL_STATE(271)] = 13048,
  [SMALL_STATE(272)] = 13069,
  [SMALL_STATE(273)] = 13090,
  [SMALL_STATE(274)] = 13111,
  [SMALL_STATE(275)] = 13132,
  [SMALL_STATE(276)] = 13153,
  [SMALL_STATE(277)] = 13174,
  [SMALL_STATE(278)] = 13195,
  [SMALL_STATE(279)] = 13230,
  [SMALL_STATE(280)] = 13251,
  [SMALL_STATE(281)] = 13288,
  [SMALL_STATE(282)] = 13323,
  [SMALL_STATE(283)] = 13360,
  [SMALL_STATE(284)] = 13397,
  [SMALL_STATE(285)] = 13434,
  [SMALL_STATE(286)] = 13471,
  [SMALL_STATE(287)] = 13492,
  [SMALL_STATE(288)] = 13511,
  [SMALL_STATE(289)] = 13548,
  [SMALL_STATE(290)] = 13569,
  [SMALL_STATE(291)] = 13606,
  [SMALL_STATE(292)] = 13627,
  [SMALL_STATE(293)] = 13664,
  [SMALL_STATE(294)] = 13701,
  [SMALL_STATE(295)] = 13738,
  [SMALL_STATE(296)] = 13759,
  [SMALL_STATE(297)] = 13780,
  [SMALL_STATE(298)] = 13814,
  [SMALL_STATE(299)] = 13848,
  [SMALL_STATE(300)] = 13872,
  [SMALL_STATE(301)] = 13906,
  [SMALL_STATE(302)] = 13940,
  [SMALL_STATE(303)] = 13964,
  [SMALL_STATE(304)] = 13992,
  [SMALL_STATE(305)] = 14010,
  [SMALL_STATE(306)] = 14044,
  [SMALL_STATE(307)] = 14072,
  [SMALL_STATE(308)] = 14106,
  [SMALL_STATE(309)] = 14130,
  [SMALL_STATE(310)] = 14154,
  [SMALL_STATE(311)] = 14188,
  [SMALL_STATE(312)] = 14212,
  [SMALL_STATE(313)] = 14246,
  [SMALL_STATE(314)] = 14274,
  [SMALL_STATE(315)] = 14302,
  [SMALL_STATE(316)] = 14330,
  [SMALL_STATE(317)] = 14351,
  [SMALL_STATE(318)] = 14370,
  [SMALL_STATE(319)] = 14389,
  [SMALL_STATE(320)] = 14408,
  [SMALL_STATE(321)] = 14427,
  [SMALL_STATE(322)] = 14446,
  [SMALL_STATE(323)] = 14465,
  [SMALL_STATE(324)] = 14484,
  [SMALL_STATE(325)] = 14515,
  [SMALL_STATE(326)] = 14534,
  [SMALL_STATE(327)] = 14553,
  [SMALL_STATE(328)] = 14572,
  [SMALL_STATE(329)] = 14591,
  [SMALL_STATE(330)] = 14610,
  [SMALL_STATE(331)] = 14629,
  [SMALL_STATE(332)] = 14660,
  [SMALL_STATE(333)] = 14679,
  [SMALL_STATE(334)] = 14698,
  [SMALL_STATE(335)] = 14717,
  [SMALL_STATE(336)] = 14736,
  [SMALL_STATE(337)] = 14755,
  [SMALL_STATE(338)] = 14779,
  [SMALL_STATE(339)] = 14807,
  [SMALL_STATE(340)] = 14835,
  [SMALL_STATE(341)] = 14859,
  [SMALL_STATE(342)] = 14877,
  [SMALL_STATE(343)] = 14905,
  [SMALL_STATE(344)] = 14923,
  [SMALL_STATE(345)] = 14953,
  [SMALL_STATE(346)] = 14971,
  [SMALL_STATE(347)] = 14999,
  [SMALL_STATE(348)] = 15023,
  [SMALL_STATE(349)] = 15043,
  [SMALL_STATE(350)] = 15061,
  [SMALL_STATE(351)] = 15091,
  [SMALL_STATE(352)] = 15115,
  [SMALL_STATE(353)] = 15139,
  [SMALL_STATE(354)] = 15165,
  [SMALL_STATE(355)] = 15185,
  [SMALL_STATE(356)] = 15207,
  [SMALL_STATE(357)] = 15221,
  [SMALL_STATE(358)] = 15235,
  [SMALL_STATE(359)] = 15249,
  [SMALL_STATE(360)] = 15265,
  [SMALL_STATE(361)] = 15287,
  [SMALL_STATE(362)] = 15303,
  [SMALL_STATE(363)] = 15325,
  [SMALL_STATE(364)] = 15347,
  [SMALL_STATE(365)] = 15373,
  [SMALL_STATE(366)] = 15399,
  [SMALL_STATE(367)] = 15425,
  [SMALL_STATE(368)] = 15446,
  [SMALL_STATE(369)] = 15461,
  [SMALL_STATE(370)] = 15476,
  [SMALL_STATE(371)] = 15497,
  [SMALL_STATE(372)] = 15520,
  [SMALL_STATE(373)] = 15537,
  [SMALL_STATE(374)] = 15552,
  [SMALL_STATE(375)] = 15575,
  [SMALL_STATE(376)] = 15590,
  [SMALL_STATE(377)] = 15605,
  [SMALL_STATE(378)] = 15624,
  [SMALL_STATE(379)] = 15649,
  [SMALL_STATE(380)] = 15670,
  [SMALL_STATE(381)] = 15685,
  [SMALL_STATE(382)] = 15704,
  [SMALL_STATE(383)] = 15725,
  [SMALL_STATE(384)] = 15740,
  [SMALL_STATE(385)] = 15761,
  [SMALL_STATE(386)] = 15778,
  [SMALL_STATE(387)] = 15799,
  [SMALL_STATE(388)] = 15817,
  [SMALL_STATE(389)] = 15835,
  [SMALL_STATE(390)] = 15847,
  [SMALL_STATE(391)] = 15865,
  [SMALL_STATE(392)] = 15885,
  [SMALL_STATE(393)] = 15905,
  [SMALL_STATE(394)] = 15923,
  [SMALL_STATE(395)] = 15941,
  [SMALL_STATE(396)] = 15959,
  [SMALL_STATE(397)] = 15979,
  [SMALL_STATE(398)] = 15991,
  [SMALL_STATE(399)] = 16009,
  [SMALL_STATE(400)] = 16029,
  [SMALL_STATE(401)] = 16045,
  [SMALL_STATE(402)] = 16063,
  [SMALL_STATE(403)] = 16079,
  [SMALL_STATE(404)] = 16091,
  [SMALL_STATE(405)] = 16107,
  [SMALL_STATE(406)] = 16125,
  [SMALL_STATE(407)] = 16143,
  [SMALL_STATE(408)] = 16161,
  [SMALL_STATE(409)] = 16173,
  [SMALL_STATE(410)] = 16189,
  [SMALL_STATE(411)] = 16207,
  [SMALL_STATE(412)] = 16227,
  [SMALL_STATE(413)] = 16247,
  [SMALL_STATE(414)] = 16267,
  [SMALL_STATE(415)] = 16287,
  [SMALL_STATE(416)] = 16307,
  [SMALL_STATE(417)] = 16327,
  [SMALL_STATE(418)] = 16339,
  [SMALL_STATE(419)] = 16357,
  [SMALL_STATE(420)] = 16369,
  [SMALL_STATE(421)] = 16381,
  [SMALL_STATE(422)] = 16393,
  [SMALL_STATE(423)] = 16411,
  [SMALL_STATE(424)] = 16427,
  [SMALL_STATE(425)] = 16445,
  [SMALL_STATE(426)] = 16463,
  [SMALL_STATE(427)] = 16475,
  [SMALL_STATE(428)] = 16493,
  [SMALL_STATE(429)] = 16511,
  [SMALL_STATE(430)] = 16523,
  [SMALL_STATE(431)] = 16541,
  [SMALL_STATE(432)] = 16559,
  [SMALL_STATE(433)] = 16577,
  [SMALL_STATE(434)] = 16592,
  [SMALL_STATE(435)] = 16603,
  [SMALL_STATE(436)] = 16616,
  [SMALL_STATE(437)] = 16633,
  [SMALL_STATE(438)] = 16648,
  [SMALL_STATE(439)] = 16659,
  [SMALL_STATE(440)] = 16678,
  [SMALL_STATE(441)] = 16695,
  [SMALL_STATE(442)] = 16706,
  [SMALL_STATE(443)] = 16723,
  [SMALL_STATE(444)] = 16740,
  [SMALL_STATE(445)] = 16755,
  [SMALL_STATE(446)] = 16766,
  [SMALL_STATE(447)] = 16779,
  [SMALL_STATE(448)] = 16792,
  [SMALL_STATE(449)] = 16805,
  [SMALL_STATE(450)] = 16818,
  [SMALL_STATE(451)] = 16829,
  [SMALL_STATE(452)] = 16848,
  [SMALL_STATE(453)] = 16867,
  [SMALL_STATE(454)] = 16882,
  [SMALL_STATE(455)] = 16899,
  [SMALL_STATE(456)] = 16910,
  [SMALL_STATE(457)] = 16929,
  [SMALL_STATE(458)] = 16944,
  [SMALL_STATE(459)] = 16957,
  [SMALL_STATE(460)] = 16974,
  [SMALL_STATE(461)] = 16985,
  [SMALL_STATE(462)] = 17002,
  [SMALL_STATE(463)] = 17017,
  [SMALL_STATE(464)] = 17036,
  [SMALL_STATE(465)] = 17051,
  [SMALL_STATE(466)] = 17066,
  [SMALL_STATE(467)] = 17085,
  [SMALL_STATE(468)] = 17104,
  [SMALL_STATE(469)] = 17115,
  [SMALL_STATE(470)] = 17130,
  [SMALL_STATE(471)] = 17145,
  [SMALL_STATE(472)] = 17160,
  [SMALL_STATE(473)] = 17173,
  [SMALL_STATE(474)] = 17190,
  [SMALL_STATE(475)] = 17201,
  [SMALL_STATE(476)] = 17216,
  [SMALL_STATE(477)] = 17227,
  [SMALL_STATE(478)] = 17242,
  [SMALL_STATE(479)] = 17258,
  [SMALL_STATE(480)] = 17274,
  [SMALL_STATE(481)] = 17288,
  [SMALL_STATE(482)] = 17302,
  [SMALL_STATE(483)] = 17316,
  [SMALL_STATE(484)] = 17326,
  [SMALL_STATE(485)] = 17336,
  [SMALL_STATE(486)] = 17346,
  [SMALL_STATE(487)] = 17356,
  [SMALL_STATE(488)] = 17366,
  [SMALL_STATE(489)] = 17376,
  [SMALL_STATE(490)] = 17386,
  [SMALL_STATE(491)] = 17396,
  [SMALL_STATE(492)] = 17408,
  [SMALL_STATE(493)] = 17422,
  [SMALL_STATE(494)] = 17438,
  [SMALL_STATE(495)] = 17454,
  [SMALL_STATE(496)] = 17464,
  [SMALL_STATE(497)] = 17480,
  [SMALL_STATE(498)] = 17496,
  [SMALL_STATE(499)] = 17512,
  [SMALL_STATE(500)] = 17528,
  [SMALL_STATE(501)] = 17544,
  [SMALL_STATE(502)] = 17558,
  [SMALL_STATE(503)] = 17572,
  [SMALL_STATE(504)] = 17586,
  [SMALL_STATE(505)] = 17600,
  [SMALL_STATE(506)] = 17614,
  [SMALL_STATE(507)] = 17630,
  [SMALL_STATE(508)] = 17644,
  [SMALL_STATE(509)] = 17658,
  [SMALL_STATE(510)] = 17668,
  [SMALL_STATE(511)] = 17682,
  [SMALL_STATE(512)] = 17692,
  [SMALL_STATE(513)] = 17706,
  [SMALL_STATE(514)] = 17722,
  [SMALL_STATE(515)] = 17734,
  [SMALL_STATE(516)] = 17748,
  [SMALL_STATE(517)] = 17760,
  [SMALL_STATE(518)] = 17770,
  [SMALL_STATE(519)] = 17784,
  [SMALL_STATE(520)] = 17798,
  [SMALL_STATE(521)] = 17812,
  [SMALL_STATE(522)] = 17822,
  [SMALL_STATE(523)] = 17836,
  [SMALL_STATE(524)] = 17850,
  [SMALL_STATE(525)] = 17866,
  [SMALL_STATE(526)] = 17882,
  [SMALL_STATE(527)] = 17898,
  [SMALL_STATE(528)] = 17912,
  [SMALL_STATE(529)] = 17922,
  [SMALL_STATE(530)] = 17936,
  [SMALL_STATE(531)] = 17950,
  [SMALL_STATE(532)] = 17964,
  [SMALL_STATE(533)] = 17978,
  [SMALL_STATE(534)] = 17990,
  [SMALL_STATE(535)] = 18004,
  [SMALL_STATE(536)] = 18018,
  [SMALL_STATE(537)] = 18032,
  [SMALL_STATE(538)] = 18046,
  [SMALL_STATE(539)] = 18062,
  [SMALL_STATE(540)] = 18076,
  [SMALL_STATE(541)] = 18090,
  [SMALL_STATE(542)] = 18102,
  [SMALL_STATE(543)] = 18116,
  [SMALL_STATE(544)] = 18130,
  [SMALL_STATE(545)] = 18146,
  [SMALL_STATE(546)] = 18158,
  [SMALL_STATE(547)] = 18172,
  [SMALL_STATE(548)] = 18186,
  [SMALL_STATE(549)] = 18196,
  [SMALL_STATE(550)] = 18206,
  [SMALL_STATE(551)] = 18216,
  [SMALL_STATE(552)] = 18228,
  [SMALL_STATE(553)] = 18238,
  [SMALL_STATE(554)] = 18254,
  [SMALL_STATE(555)] = 18268,
  [SMALL_STATE(556)] = 18282,
  [SMALL_STATE(557)] = 18298,
  [SMALL_STATE(558)] = 18314,
  [SMALL_STATE(559)] = 18330,
  [SMALL_STATE(560)] = 18346,
  [SMALL_STATE(561)] = 18362,
  [SMALL_STATE(562)] = 18372,
  [SMALL_STATE(563)] = 18386,
  [SMALL_STATE(564)] = 18400,
  [SMALL_STATE(565)] = 18414,
  [SMALL_STATE(566)] = 18428,
  [SMALL_STATE(567)] = 18442,
  [SMALL_STATE(568)] = 18458,
  [SMALL_STATE(569)] = 18474,
  [SMALL_STATE(570)] = 18490,
  [SMALL_STATE(571)] = 18506,
  [SMALL_STATE(572)] = 18522,
  [SMALL_STATE(573)] = 18538,
  [SMALL_STATE(574)] = 18554,
  [SMALL_STATE(575)] = 18568,
  [SMALL_STATE(576)] = 18582,
  [SMALL_STATE(577)] = 18596,
  [SMALL_STATE(578)] = 18610,
  [SMALL_STATE(579)] = 18624,
  [SMALL_STATE(580)] = 18638,
  [SMALL_STATE(581)] = 18654,
  [SMALL_STATE(582)] = 18670,
  [SMALL_STATE(583)] = 18686,
  [SMALL_STATE(584)] = 18702,
  [SMALL_STATE(585)] = 18712,
  [SMALL_STATE(586)] = 18726,
  [SMALL_STATE(587)] = 18742,
  [SMALL_STATE(588)] = 18756,
  [SMALL_STATE(589)] = 18770,
  [SMALL_STATE(590)] = 18784,
  [SMALL_STATE(591)] = 18798,
  [SMALL_STATE(592)] = 18814,
  [SMALL_STATE(593)] = 18830,
  [SMALL_STATE(594)] = 18846,
  [SMALL_STATE(595)] = 18862,
  [SMALL_STATE(596)] = 18874,
  [SMALL_STATE(597)] = 18888,
  [SMALL_STATE(598)] = 18904,
  [SMALL_STATE(599)] = 18920,
  [SMALL_STATE(600)] = 18936,
  [SMALL_STATE(601)] = 18952,
  [SMALL_STATE(602)] = 18968,
  [SMALL_STATE(603)] = 18984,
  [SMALL_STATE(604)] = 19000,
  [SMALL_STATE(605)] = 19016,
  [SMALL_STATE(606)] = 19032,
  [SMALL_STATE(607)] = 19048,
  [SMALL_STATE(608)] = 19064,
  [SMALL_STATE(609)] = 19080,
  [SMALL_STATE(610)] = 19096,
  [SMALL_STATE(611)] = 19112,
  [SMALL_STATE(612)] = 19128,
  [SMALL_STATE(613)] = 19144,
  [SMALL_STATE(614)] = 19160,
  [SMALL_STATE(615)] = 19174,
  [SMALL_STATE(616)] = 19190,
  [SMALL_STATE(617)] = 19206,
  [SMALL_STATE(618)] = 19222,
  [SMALL_STATE(619)] = 19238,
  [SMALL_STATE(620)] = 19254,
  [SMALL_STATE(621)] = 19270,
  [SMALL_STATE(622)] = 19286,
  [SMALL_STATE(623)] = 19302,
  [SMALL_STATE(624)] = 19318,
  [SMALL_STATE(625)] = 19334,
  [SMALL_STATE(626)] = 19350,
  [SMALL_STATE(627)] = 19366,
  [SMALL_STATE(628)] = 19382,
  [SMALL_STATE(629)] = 19398,
  [SMALL_STATE(630)] = 19414,
  [SMALL_STATE(631)] = 19430,
  [SMALL_STATE(632)] = 19446,
  [SMALL_STATE(633)] = 19462,
  [SMALL_STATE(634)] = 19478,
  [SMALL_STATE(635)] = 19494,
  [SMALL_STATE(636)] = 19510,
  [SMALL_STATE(637)] = 19526,
  [SMALL_STATE(638)] = 19542,
  [SMALL_STATE(639)] = 19558,
  [SMALL_STATE(640)] = 19574,
  [SMALL_STATE(641)] = 19590,
  [SMALL_STATE(642)] = 19606,
  [SMALL_STATE(643)] = 19622,
  [SMALL_STATE(644)] = 19638,
  [SMALL_STATE(645)] = 19654,
  [SMALL_STATE(646)] = 19670,
  [SMALL_STATE(647)] = 19686,
  [SMALL_STATE(648)] = 19702,
  [SMALL_STATE(649)] = 19718,
  [SMALL_STATE(650)] = 19734,
  [SMALL_STATE(651)] = 19750,
  [SMALL_STATE(652)] = 19766,
  [SMALL_STATE(653)] = 19782,
  [SMALL_STATE(654)] = 19798,
  [SMALL_STATE(655)] = 19812,
  [SMALL_STATE(656)] = 19828,
  [SMALL_STATE(657)] = 19844,
  [SMALL_STATE(658)] = 19853,
  [SMALL_STATE(659)] = 19866,
  [SMALL_STATE(660)] = 19875,
  [SMALL_STATE(661)] = 19884,
  [SMALL_STATE(662)] = 19897,
  [SMALL_STATE(663)] = 19910,
  [SMALL_STATE(664)] = 19923,
  [SMALL_STATE(665)] = 19936,
  [SMALL_STATE(666)] = 19945,
  [SMALL_STATE(667)] = 19958,
  [SMALL_STATE(668)] = 19967,
  [SMALL_STATE(669)] = 19980,
  [SMALL_STATE(670)] = 19993,
  [SMALL_STATE(671)] = 20006,
  [SMALL_STATE(672)] = 20015,
  [SMALL_STATE(673)] = 20024,
  [SMALL_STATE(674)] = 20037,
  [SMALL_STATE(675)] = 20050,
  [SMALL_STATE(676)] = 20063,
  [SMALL_STATE(677)] = 20072,
  [SMALL_STATE(678)] = 20081,
  [SMALL_STATE(679)] = 20094,
  [SMALL_STATE(680)] = 20105,
  [SMALL_STATE(681)] = 20116,
  [SMALL_STATE(682)] = 20125,
  [SMALL_STATE(683)] = 20134,
  [SMALL_STATE(684)] = 20143,
  [SMALL_STATE(685)] = 20152,
  [SMALL_STATE(686)] = 20161,
  [SMALL_STATE(687)] = 20172,
  [SMALL_STATE(688)] = 20181,
  [SMALL_STATE(689)] = 20190,
  [SMALL_STATE(690)] = 20199,
  [SMALL_STATE(691)] = 20208,
  [SMALL_STATE(692)] = 20219,
  [SMALL_STATE(693)] = 20230,
  [SMALL_STATE(694)] = 20239,
  [SMALL_STATE(695)] = 20248,
  [SMALL_STATE(696)] = 20257,
  [SMALL_STATE(697)] = 20266,
  [SMALL_STATE(698)] = 20275,
  [SMALL_STATE(699)] = 20286,
  [SMALL_STATE(700)] = 20297,
  [SMALL_STATE(701)] = 20306,
  [SMALL_STATE(702)] = 20319,
  [SMALL_STATE(703)] = 20328,
  [SMALL_STATE(704)] = 20339,
  [SMALL_STATE(705)] = 20350,
  [SMALL_STATE(706)] = 20361,
  [SMALL_STATE(707)] = 20374,
  [SMALL_STATE(708)] = 20383,
  [SMALL_STATE(709)] = 20396,
  [SMALL_STATE(710)] = 20405,
  [SMALL_STATE(711)] = 20416,
  [SMALL_STATE(712)] = 20429,
  [SMALL_STATE(713)] = 20442,
  [SMALL_STATE(714)] = 20451,
  [SMALL_STATE(715)] = 20464,
  [SMALL_STATE(716)] = 20473,
  [SMALL_STATE(717)] = 20482,
  [SMALL_STATE(718)] = 20495,
  [SMALL_STATE(719)] = 20506,
  [SMALL_STATE(720)] = 20519,
  [SMALL_STATE(721)] = 20528,
  [SMALL_STATE(722)] = 20537,
  [SMALL_STATE(723)] = 20550,
  [SMALL_STATE(724)] = 20559,
  [SMALL_STATE(725)] = 20572,
  [SMALL_STATE(726)] = 20585,
  [SMALL_STATE(727)] = 20598,
  [SMALL_STATE(728)] = 20607,
  [SMALL_STATE(729)] = 20616,
  [SMALL_STATE(730)] = 20627,
  [SMALL_STATE(731)] = 20638,
  [SMALL_STATE(732)] = 20649,
  [SMALL_STATE(733)] = 20658,
  [SMALL_STATE(734)] = 20667,
  [SMALL_STATE(735)] = 20678,
  [SMALL_STATE(736)] = 20689,
  [SMALL_STATE(737)] = 20698,
  [SMALL_STATE(738)] = 20707,
  [SMALL_STATE(739)] = 20718,
  [SMALL_STATE(740)] = 20727,
  [SMALL_STATE(741)] = 20736,
  [SMALL_STATE(742)] = 20745,
  [SMALL_STATE(743)] = 20754,
  [SMALL_STATE(744)] = 20767,
  [SMALL_STATE(745)] = 20776,
  [SMALL_STATE(746)] = 20785,
  [SMALL_STATE(747)] = 20794,
  [SMALL_STATE(748)] = 20803,
  [SMALL_STATE(749)] = 20811,
  [SMALL_STATE(750)] = 20819,
  [SMALL_STATE(751)] = 20827,
  [SMALL_STATE(752)] = 20835,
  [SMALL_STATE(753)] = 20843,
  [SMALL_STATE(754)] = 20851,
  [SMALL_STATE(755)] = 20859,
  [SMALL_STATE(756)] = 20867,
  [SMALL_STATE(757)] = 20875,
  [SMALL_STATE(758)] = 20883,
  [SMALL_STATE(759)] = 20891,
  [SMALL_STATE(760)] = 20901,
  [SMALL_STATE(761)] = 20909,
  [SMALL_STATE(762)] = 20917,
  [SMALL_STATE(763)] = 20925,
  [SMALL_STATE(764)] = 20933,
  [SMALL_STATE(765)] = 20941,
  [SMALL_STATE(766)] = 20949,
  [SMALL_STATE(767)] = 20959,
  [SMALL_STATE(768)] = 20967,
  [SMALL_STATE(769)] = 20975,
  [SMALL_STATE(770)] = 20983,
  [SMALL_STATE(771)] = 20991,
  [SMALL_STATE(772)] = 20999,
  [SMALL_STATE(773)] = 21007,
  [SMALL_STATE(774)] = 21015,
  [SMALL_STATE(775)] = 21023,
  [SMALL_STATE(776)] = 21031,
  [SMALL_STATE(777)] = 21039,
  [SMALL_STATE(778)] = 21047,
  [SMALL_STATE(779)] = 21055,
  [SMALL_STATE(780)] = 21063,
  [SMALL_STATE(781)] = 21071,
  [SMALL_STATE(782)] = 21079,
  [SMALL_STATE(783)] = 21087,
  [SMALL_STATE(784)] = 21095,
  [SMALL_STATE(785)] = 21103,
  [SMALL_STATE(786)] = 21111,
  [SMALL_STATE(787)] = 21119,
  [SMALL_STATE(788)] = 21127,
  [SMALL_STATE(789)] = 21135,
  [SMALL_STATE(790)] = 21143,
  [SMALL_STATE(791)] = 21151,
  [SMALL_STATE(792)] = 21159,
  [SMALL_STATE(793)] = 21167,
  [SMALL_STATE(794)] = 21175,
  [SMALL_STATE(795)] = 21183,
  [SMALL_STATE(796)] = 21191,
  [SMALL_STATE(797)] = 21201,
  [SMALL_STATE(798)] = 21209,
  [SMALL_STATE(799)] = 21217,
  [SMALL_STATE(800)] = 21225,
  [SMALL_STATE(801)] = 21233,
  [SMALL_STATE(802)] = 21241,
  [SMALL_STATE(803)] = 21249,
  [SMALL_STATE(804)] = 21257,
  [SMALL_STATE(805)] = 21265,
  [SMALL_STATE(806)] = 21273,
  [SMALL_STATE(807)] = 21281,
  [SMALL_STATE(808)] = 21289,
  [SMALL_STATE(809)] = 21299,
  [SMALL_STATE(810)] = 21307,
  [SMALL_STATE(811)] = 21315,
  [SMALL_STATE(812)] = 21323,
  [SMALL_STATE(813)] = 21331,
  [SMALL_STATE(814)] = 21339,
  [SMALL_STATE(815)] = 21347,
  [SMALL_STATE(816)] = 21355,
  [SMALL_STATE(817)] = 21363,
  [SMALL_STATE(818)] = 21373,
  [SMALL_STATE(819)] = 21381,
  [SMALL_STATE(820)] = 21389,
  [SMALL_STATE(821)] = 21399,
  [SMALL_STATE(822)] = 21407,
  [SMALL_STATE(823)] = 21415,
  [SMALL_STATE(824)] = 21423,
  [SMALL_STATE(825)] = 21431,
  [SMALL_STATE(826)] = 21439,
  [SMALL_STATE(827)] = 21447,
  [SMALL_STATE(828)] = 21455,
  [SMALL_STATE(829)] = 21463,
  [SMALL_STATE(830)] = 21471,
  [SMALL_STATE(831)] = 21479,
  [SMALL_STATE(832)] = 21487,
  [SMALL_STATE(833)] = 21495,
  [SMALL_STATE(834)] = 21503,
  [SMALL_STATE(835)] = 21511,
  [SMALL_STATE(836)] = 21519,
  [SMALL_STATE(837)] = 21527,
  [SMALL_STATE(838)] = 21535,
  [SMALL_STATE(839)] = 21545,
  [SMALL_STATE(840)] = 21553,
  [SMALL_STATE(841)] = 21561,
  [SMALL_STATE(842)] = 21569,
  [SMALL_STATE(843)] = 21577,
  [SMALL_STATE(844)] = 21585,
  [SMALL_STATE(845)] = 21593,
  [SMALL_STATE(846)] = 21601,
  [SMALL_STATE(847)] = 21609,
  [SMALL_STATE(848)] = 21617,
  [SMALL_STATE(849)] = 21625,
  [SMALL_STATE(850)] = 21633,
  [SMALL_STATE(851)] = 21641,
  [SMALL_STATE(852)] = 21649,
  [SMALL_STATE(853)] = 21657,
  [SMALL_STATE(854)] = 21665,
  [SMALL_STATE(855)] = 21673,
  [SMALL_STATE(856)] = 21681,
  [SMALL_STATE(857)] = 21689,
  [SMALL_STATE(858)] = 21697,
  [SMALL_STATE(859)] = 21705,
  [SMALL_STATE(860)] = 21715,
  [SMALL_STATE(861)] = 21723,
  [SMALL_STATE(862)] = 21731,
  [SMALL_STATE(863)] = 21739,
  [SMALL_STATE(864)] = 21747,
  [SMALL_STATE(865)] = 21755,
  [SMALL_STATE(866)] = 21763,
  [SMALL_STATE(867)] = 21771,
  [SMALL_STATE(868)] = 21779,
  [SMALL_STATE(869)] = 21787,
  [SMALL_STATE(870)] = 21797,
  [SMALL_STATE(871)] = 21805,
  [SMALL_STATE(872)] = 21813,
  [SMALL_STATE(873)] = 21821,
  [SMALL_STATE(874)] = 21829,
  [SMALL_STATE(875)] = 21837,
  [SMALL_STATE(876)] = 21845,
  [SMALL_STATE(877)] = 21853,
  [SMALL_STATE(878)] = 21861,
  [SMALL_STATE(879)] = 21869,
  [SMALL_STATE(880)] = 21877,
  [SMALL_STATE(881)] = 21885,
  [SMALL_STATE(882)] = 21893,
  [SMALL_STATE(883)] = 21901,
  [SMALL_STATE(884)] = 21909,
  [SMALL_STATE(885)] = 21917,
  [SMALL_STATE(886)] = 21925,
  [SMALL_STATE(887)] = 21933,
  [SMALL_STATE(888)] = 21941,
  [SMALL_STATE(889)] = 21949,
  [SMALL_STATE(890)] = 21957,
  [SMALL_STATE(891)] = 21965,
  [SMALL_STATE(892)] = 21975,
  [SMALL_STATE(893)] = 21983,
  [SMALL_STATE(894)] = 21991,
  [SMALL_STATE(895)] = 21999,
  [SMALL_STATE(896)] = 22007,
  [SMALL_STATE(897)] = 22015,
  [SMALL_STATE(898)] = 22023,
  [SMALL_STATE(899)] = 22031,
  [SMALL_STATE(900)] = 22039,
  [SMALL_STATE(901)] = 22049,
  [SMALL_STATE(902)] = 22059,
  [SMALL_STATE(903)] = 22069,
  [SMALL_STATE(904)] = 22077,
  [SMALL_STATE(905)] = 22085,
  [SMALL_STATE(906)] = 22093,
  [SMALL_STATE(907)] = 22103,
  [SMALL_STATE(908)] = 22111,
  [SMALL_STATE(909)] = 22119,
  [SMALL_STATE(910)] = 22127,
  [SMALL_STATE(911)] = 22135,
  [SMALL_STATE(912)] = 22143,
  [SMALL_STATE(913)] = 22151,
  [SMALL_STATE(914)] = 22159,
  [SMALL_STATE(915)] = 22167,
  [SMALL_STATE(916)] = 22175,
  [SMALL_STATE(917)] = 22185,
  [SMALL_STATE(918)] = 22193,
  [SMALL_STATE(919)] = 22201,
  [SMALL_STATE(920)] = 22209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(594),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(591),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(142),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(592),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(593),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(384),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(619),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(620),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(621),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(622),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(851),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(623),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(624),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(625),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(639),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(463),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(141),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(256),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 24),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 3, 0, 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 4, 0, 16),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(613),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(610),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(110),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(611),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(612),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(370),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(632),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(633),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(634),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(635),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(884),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(636),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(637),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(638),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(649),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(467),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(109),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(605),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(602),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(167),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(603),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(604),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(386),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(478),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(626),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(627),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(628),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(868),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(629),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(630),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(631),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(644),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(466),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2, 0, 0), SHIFT_REPEAT(156),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(538),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(553),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(560),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(571),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(572),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(573),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(656),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(765),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(586),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(597),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(524),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(525),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(661),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(663),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(664),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(666),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(668),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(669),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(670),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(673),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(675),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2, 0, 0), SHIFT_REPEAT(554),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, 0, 9),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, 0, 9),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 4, 0, 10),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 4, 0, 10),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, 0, 12),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, 0, 12),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, 0, 13),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, 0, 13),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, 0, 14),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, 0, 14),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, 0, 15),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, 0, 15),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, 0, 16),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, 0, 16),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, 0, 10),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, 0, 10),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, 0, 16),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, 0, 16),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, 0, 12),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, 0, 12),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, 0, 16),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, 0, 16),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, 0, 16),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, 0, 16),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_rest_text, 1, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_rest_text, 1, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_text, 1, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_text, 1, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3, 0, 0),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0), SHIFT_REPEAT(684),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0), SHIFT_REPEAT(772),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, 0, 11),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, 0, 11),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3, 0, 0),
  [885] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(817),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, 0, 23),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, 0, 23),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1, 0, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__direction, 1, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__direction, 1, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1, 0, 0),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6, 0, 0),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1, 0, 0),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1, 0, 0),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1, 0, 0),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3, 0, 0),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3, 0, 0),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_annotation, 1, 0, 0),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_annotation, 1, 0, 0),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1, 0, 0),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1, 0, 0),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3, 0, 0),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3, 0, 0),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_actor, 1, 0, 0),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_actor, 1, 0, 0),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1, 0, 0),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1, 0, 0),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2, 0, 0),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2, 0, 0),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1, 0, 0),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1, 0, 0),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1, 0, 0),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1, 0, 0),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1, 0, 0),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1, 0, 0),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1, 0, 0),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3, 0, 0),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3, 0, 0),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2, 0, 0),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2, 0, 0),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, 0, 2),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, 0, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, 0, 3),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, 0, 3),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, 0, 4),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, 0, 4),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, 0, 5),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, 0, 5),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, 0, 6),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, 0, 6),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, 0, 7),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, 0, 7),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, 0, 8),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, 0, 8),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [1135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(379),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0),
  [1140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3, 0, 0),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1, 0, 0),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1, 0, 0),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1, 0, 0),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, 0, 1),
  [1175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, 0, 1),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6, 0, 0),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0),
  [1185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2, 0, 0),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2, 0, 0),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1, 0, 0),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1, 0, 0),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5, 0, 0),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1, 0, 0),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1, 0, 0),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0),
  [1226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0), SHIFT_REPEAT(596),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_id, 1, 0, 0),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_id, 1, 0, 0),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3, 0, 0),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3, 0, 0),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3, 0, 0),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3, 0, 0),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1, 0, 0),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3, 0, 0),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3, 0, 0),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3, 0, 0),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3, 0, 0),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3, 0, 0),
  [1289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3, 0, 0),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3, 0, 0),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3, 0, 0),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3, 0, 0),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3, 0, 0),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3, 0, 0),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2, 0, 0),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 21),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0),
  [1333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [1336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(342),
  [1339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2, 0, 0), SHIFT_REPEAT(882),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1, 0, 0),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1, 0, 0),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1, 0, 0),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 0),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2, 0, 0),
  [1358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2, 0, 0), SHIFT_REPEAT(348),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1, 0, 0),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 20),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 19),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_reltype, 1, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3, 0, 0),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1, 0, 0),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flowchart_direction, 1, 0, 0),
  [1421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flowchart_direction, 1, 0, 0),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0),
  [1431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0), SHIFT_REPEAT(372),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1, 0, 0),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1, 0, 0),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1, 0, 0),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1, 0, 0),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 3, 0, 0),
  [1450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 3, 0, 0),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(844),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_cardinarity, 1, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1, 0, 0),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1, 0, 0),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1, 0, 0),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [1498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [1501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [1503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1, 0, 0),
  [1507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1, 0, 0),
  [1511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [1513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1, 0, 0),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1, 0, 0),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1, 0, 0),
  [1523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1, 0, 0),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2, 0, 0),
  [1535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(871),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1, 0, 0),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1, 0, 0),
  [1542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1, 0, 0),
  [1551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_rounded, 3, 0, 0),
  [1561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_rounded, 3, 0, 0),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_markdown, 3, 0, 0),
  [1565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1, 0, 0),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1, 0, 0),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5, 0, 0),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_text, 2, 0, 0),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3, 0, 0),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2, 0, 0),
  [1604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4, 0, 0),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_content, 1, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 4, 0, 0),
  [1613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node, 4, 0, 0),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3, 0, 0),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2, 0, 0),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6, 0, 0),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_cloud, 3, 0, 0),
  [1625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_cloud, 3, 0, 0),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_square, 3, 0, 0),
  [1631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_square, 3, 0, 0),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_circle, 3, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_circle, 3, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_bang, 3, 0, 0),
  [1651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_bang, 3, 0, 0),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node_hexagon, 3, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_node_hexagon, 3, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 3, 0, 0),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 25),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 19),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 26),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 20),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 27),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 21),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 28),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, 0, 0),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 4, 0, 0),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5, 0, 0),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_icon, 3, 0, 0),
  [1699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mmap_icon, 3, 0, 0),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2, 0, 0),
  [1709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7, 0, 0),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8, 0, 0),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2, 0, 0),
  [1724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3, 0, 0),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2, 0, 0),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_signal_type, 1, 0, 0),
  [1745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_type, 1, 0, 0),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3, 0, 0),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1, 0, 0),
  [1751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1, 0, 0),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2, 0, 0),
  [1764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3, 0, 0),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2, 0, 0),
  [1776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2, 0, 0),
  [1781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_mindmap_repeat1, 2, 0, 0), SHIFT_REPEAT(916),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, 0, 0),
  [1790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, 0, 17),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2, 0, 0),
  [1805] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, 0, 22),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2, 0, 0),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3, 0, 0),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1, 0, 0),
  [1818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4, 0, 0),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 0),
  [1842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2, 0, 0),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1, 0, 0),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2, 0, 0),
  [1871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [1874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_class, 2, 0, 0),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1, 0, 0),
  [1878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5, 0, 0),
  [1880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4, 0, 0),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, 0, 18),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, 0, 17),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, 0, 0),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7, 0, 0),
  [1904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5, 0, 0),
  [1906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1, 0, 0),
  [1908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, 0, 17),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1, 0, 0),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3, 0, 0),
  [1916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, 0, 0),
  [1918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1, 0, 0),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, 0, 17),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1, 0, 0),
  [1932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, 0, 17),
  [1934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1, 0, 0),
  [1936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1, 0, 0),
  [1938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3, 0, 0),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_attribute_key_type, 1, 0, 0),
  [1950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_stmt, 1, 0, 0),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5, 0, 0),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1, 0, 0),
  [1970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmap_node, 5, 0, 0),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1, 0, 0),
  [1978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5, 0, 0),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1, 0, 0),
  [1994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4, 0, 0),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [2002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, 0, 18),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6, 0, 0),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note_placement, 1, 0, 0),
  [2012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_mindmap, 5, 0, 0),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4, 0, 0),
  [2028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1, 0, 0),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [2032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1, 0, 0),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [2048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1, 0, 0),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1, 0, 0),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [2102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [2108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_note_placement, 1, 0, 0),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [2154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_plus_sign, 1, 0, 0),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [2240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [2246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_minus_sign, 1, 0, 0),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1, 0, 0),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1, 0, 0),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3, 0, 0),
  [2278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3, 0, 0),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [2296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [2300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1, 0, 0),
  [2306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [2308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [2310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [2326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [2332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [2334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
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

TS_PUBLIC const TSLanguage *tree_sitter_mermaid(void) {
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
