#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 1
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym__multi_newline = 1,
  sym__nl = 2,
  anon_sym_PLUS = 3,
  anon_sym_COMMA = 4,
  sym_num = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_POUND = 10,
  aux_sym_comment_token1 = 11,
  sym_name = 12,
  anon_sym_QMARK = 13,
  aux_sym_unknown_token1 = 14,
  sym_words = 15,
  anon_sym_EQ = 16,
  anon_sym_LT_DASH_GT = 17,
  anon_sym_DASH_GT = 18,
  anon_sym_LT_DASH = 19,
  anon_sym_DASH = 20,
  sym_root = 21,
  sym_family = 22,
  sym_relations = 23,
  sym_relation = 24,
  sym_sources = 25,
  sym_targets = 26,
  sym_name_ref = 27,
  sym_family_name = 28,
  sym_name_def = 29,
  sym_new_surname = 30,
  sym_name_aliases = 31,
  sym_comment = 32,
  sym_unknown = 33,
  sym_num_unknown = 34,
  sym__words = 35,
  sym__arrows = 36,
  aux_sym_root_repeat1 = 37,
  aux_sym_family_repeat1 = 38,
  aux_sym_relations_repeat1 = 39,
  aux_sym_sources_repeat1 = 40,
  aux_sym_targets_repeat1 = 41,
  aux_sym_name_aliases_repeat1 = 42,
  anon_alias_sym__words = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__multi_newline] = "_multi_newline",
  [sym__nl] = "_nl",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [sym_num] = "num",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_name] = "name",
  [anon_sym_QMARK] = "\?",
  [aux_sym_unknown_token1] = "unknown_token1",
  [sym_words] = "words",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_DASH] = "-",
  [sym_root] = "root",
  [sym_family] = "family",
  [sym_relations] = "relations",
  [sym_relation] = "relation",
  [sym_sources] = "sources",
  [sym_targets] = "targets",
  [sym_name_ref] = "name_ref",
  [sym_family_name] = "family_name",
  [sym_name_def] = "name_def",
  [sym_new_surname] = "new_surname",
  [sym_name_aliases] = "name_aliases",
  [sym_comment] = "comment",
  [sym_unknown] = "unknown",
  [sym_num_unknown] = "num_unknown",
  [sym__words] = "_words",
  [sym__arrows] = "_arrows",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_family_repeat1] = "family_repeat1",
  [aux_sym_relations_repeat1] = "relations_repeat1",
  [aux_sym_sources_repeat1] = "sources_repeat1",
  [aux_sym_targets_repeat1] = "targets_repeat1",
  [aux_sym_name_aliases_repeat1] = "name_aliases_repeat1",
  [anon_alias_sym__words] = "_words",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__multi_newline] = sym__multi_newline,
  [sym__nl] = sym__nl,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_num] = sym_num,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_name] = sym_name,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_unknown_token1] = aux_sym_unknown_token1,
  [sym_words] = sym_words,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_DASH_GT] = anon_sym_LT_DASH_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_root] = sym_root,
  [sym_family] = sym_family,
  [sym_relations] = sym_relations,
  [sym_relation] = sym_relation,
  [sym_sources] = sym_sources,
  [sym_targets] = sym_targets,
  [sym_name_ref] = sym_name_ref,
  [sym_family_name] = sym_family_name,
  [sym_name_def] = sym_name_def,
  [sym_new_surname] = sym_new_surname,
  [sym_name_aliases] = sym_name_aliases,
  [sym_comment] = sym_comment,
  [sym_unknown] = sym_unknown,
  [sym_num_unknown] = sym_num_unknown,
  [sym__words] = sym__words,
  [sym__arrows] = sym__arrows,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_family_repeat1] = aux_sym_family_repeat1,
  [aux_sym_relations_repeat1] = aux_sym_relations_repeat1,
  [aux_sym_sources_repeat1] = aux_sym_sources_repeat1,
  [aux_sym_targets_repeat1] = aux_sym_targets_repeat1,
  [aux_sym_name_aliases_repeat1] = aux_sym_name_aliases_repeat1,
  [anon_alias_sym__words] = anon_alias_sym__words,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_newline] = {
    .visible = false,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_num] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unknown_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_words] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_family] = {
    .visible = true,
    .named = true,
  },
  [sym_relations] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_sources] = {
    .visible = true,
    .named = true,
  },
  [sym_targets] = {
    .visible = true,
    .named = true,
  },
  [sym_name_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_family_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name_def] = {
    .visible = true,
    .named = true,
  },
  [sym_new_surname] = {
    .visible = true,
    .named = true,
  },
  [sym_name_aliases] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown] = {
    .visible = true,
    .named = true,
  },
  [sym_num_unknown] = {
    .visible = true,
    .named = true,
  },
  [sym__words] = {
    .visible = false,
    .named = true,
  },
  [sym__arrows] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_family_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sources_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_targets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_aliases_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym__words] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arrow = 1,
  field_delimiter = 2,
  field_label = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arrow] = "arrow",
  [field_delimiter] = "delimiter",
  [field_label] = "label",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arrow, 1},
  [1] =
    {field_delimiter, 1, .inherited = true},
  [2] =
    {field_arrow, 1},
    {field_label, 2},
  [4] =
    {field_delimiter, 0},
  [5] =
    {field_delimiter, 0, .inherited = true},
    {field_delimiter, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_alias_sym__words,
  },
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
  [55] = 25,
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
};

static inline bool aux_sym_comment_token1_character_set_1(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 287
            ? (c < 267
              ? (c < 257
                ? (c < 223
                  ? (c < 181
                    ? (c >= 'a' && c <= 'z')
                    : c <= 181)
                  : (c <= 246 || (c >= 248 && c <= 255)))
                : (c <= 257 || (c < 263
                  ? (c < 261
                    ? c == 259
                    : c <= 261)
                  : (c <= 263 || c == 265))))
              : (c <= 267 || (c < 277
                ? (c < 273
                  ? (c < 271
                    ? c == 269
                    : c <= 271)
                  : (c <= 273 || c == 275))
                : (c <= 277 || (c < 283
                  ? (c < 281
                    ? c == 279
                    : c <= 281)
                  : (c <= 283 || c == 285))))))
            : (c <= 287 || (c < 307
              ? (c < 297
                ? (c < 293
                  ? (c < 291
                    ? c == 289
                    : c <= 291)
                  : (c <= 293 || c == 295))
                : (c <= 297 || (c < 303
                  ? (c < 301
                    ? c == 299
                    : c <= 301)
                  : (c <= 303 || c == 305))))
              : (c <= 307 || (c < 318
                ? (c < 314
                  ? (c < 311
                    ? c == 309
                    : c <= 312)
                  : (c <= 314 || c == 316))
                : (c <= 318 || (c < 322
                  ? c == 320
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool aux_sym_comment_token1_character_set_2(int32_t c) {
  return (c < 7745
    ? (c < 976
      ? (c < 417
        ? (c < 320
          ? (c < 279
            ? (c < 259
              ? (c < 'a'
                ? (c < '"'
                  ? (c < ' '
                    ? (c >= '\t' && c <= '\r')
                    : c <= ' ')
                  : (c <= '"' || c == '\''))
                : (c <= 'z' || (c < 248
                  ? (c < 223
                    ? c == 181
                    : c <= 246)
                  : (c <= 255 || c == 257))))
              : (c <= 259 || (c < 269
                ? (c < 265
                  ? (c < 263
                    ? c == 261
                    : c <= 263)
                  : (c <= 265 || c == 267))
                : (c <= 269 || (c < 275
                  ? (c < 273
                    ? c == 271
                    : c <= 273)
                  : (c <= 275 || c == 277))))))
            : (c <= 279 || (c < 299
              ? (c < 289
                ? (c < 285
                  ? (c < 283
                    ? c == 281
                    : c <= 283)
                  : (c <= 285 || c == 287))
                : (c <= 289 || (c < 295
                  ? (c < 293
                    ? c == 291
                    : c <= 293)
                  : (c <= 295 || c == 297))))
              : (c <= 299 || (c < 309
                ? (c < 305
                  ? (c < 303
                    ? c == 301
                    : c <= 303)
                  : (c <= 305 || c == 307))
                : (c <= 309 || (c < 316
                  ? (c < 314
                    ? (c >= 311 && c <= 312)
                    : c <= 314)
                  : (c <= 316 || c == 318))))))))
          : (c <= 320 || (c < 361
            ? (c < 341
              ? (c < 331
                ? (c < 326
                  ? (c < 324
                    ? c == 322
                    : c <= 324)
                  : (c <= 326 || (c >= 328 && c <= 329)))
                : (c <= 331 || (c < 337
                  ? (c < 335
                    ? c == 333
                    : c <= 335)
                  : (c <= 337 || c == 339))))
              : (c <= 341 || (c < 351
                ? (c < 347
                  ? (c < 345
                    ? c == 343
                    : c <= 345)
                  : (c <= 347 || c == 349))
                : (c <= 351 || (c < 357
                  ? (c < 355
                    ? c == 353
                    : c <= 355)
                  : (c <= 357 || c == 359))))))
            : (c <= 361 || (c < 382
              ? (c < 371
                ? (c < 367
                  ? (c < 365
                    ? c == 363
                    : c <= 365)
                  : (c <= 367 || c == 369))
                : (c <= 371 || (c < 378
                  ? (c < 375
                    ? c == 373
                    : c <= 375)
                  : (c <= 378 || c == 380))))
              : (c <= 384 || (c < 402
                ? (c < 392
                  ? (c < 389
                    ? c == 387
                    : c <= 389)
                  : (c <= 392 || (c >= 396 && c <= 397)))
                : (c <= 402 || (c < 409
                  ? c == 405
                  : (c <= 411 || c == 414))))))))))
        : (c <= 417 || (c < 517
          ? (c < 474
            ? (c < 445
              ? (c < 429
                ? (c < 424
                  ? (c < 421
                    ? c == 419
                    : c <= 421)
                  : (c <= 424 || (c >= 426 && c <= 427)))
                : (c <= 429 || (c < 438
                  ? (c < 436
                    ? c == 432
                    : c <= 436)
                  : (c <= 438 || (c >= 441 && c <= 442)))))
              : (c <= 447 || (c < 464
                ? (c < 460
                  ? (c < 457
                    ? c == 454
                    : c <= 457)
                  : (c <= 460 || c == 462))
                : (c <= 464 || (c < 470
                  ? (c < 468
                    ? c == 466
                    : c <= 468)
                  : (c <= 470 || c == 472))))))
            : (c <= 474 || (c < 495
              ? (c < 485
                ? (c < 481
                  ? (c < 479
                    ? (c >= 476 && c <= 477)
                    : c <= 479)
                  : (c <= 481 || c == 483))
                : (c <= 485 || (c < 491
                  ? (c < 489
                    ? c == 487
                    : c <= 489)
                  : (c <= 491 || c == 493))))
              : (c <= 496 || (c < 509
                ? (c < 505
                  ? (c < 501
                    ? c == 499
                    : c <= 501)
                  : (c <= 505 || c == 507))
                : (c <= 509 || (c < 513
                  ? c == 511
                  : (c <= 513 || c == 515))))))))
          : (c <= 517 || (c < 557
            ? (c < 537
              ? (c < 527
                ? (c < 523
                  ? (c < 521
                    ? c == 519
                    : c <= 521)
                  : (c <= 523 || c == 525))
                : (c <= 527 || (c < 533
                  ? (c < 531
                    ? c == 529
                    : c <= 531)
                  : (c <= 533 || c == 535))))
              : (c <= 537 || (c < 547
                ? (c < 543
                  ? (c < 541
                    ? c == 539
                    : c <= 541)
                  : (c <= 543 || c == 545))
                : (c <= 547 || (c < 553
                  ? (c < 551
                    ? c == 549
                    : c <= 551)
                  : (c <= 553 || c == 555))))))
            : (c <= 557 || (c < 589
              ? (c < 575
                ? (c < 563
                  ? (c < 561
                    ? c == 559
                    : c <= 561)
                  : (c <= 569 || c == 572))
                : (c <= 576 || (c < 585
                  ? (c < 583
                    ? c == 578
                    : c <= 583)
                  : (c <= 585 || c == 587))))
              : (c <= 589 || (c < 887
                ? (c < 881
                  ? (c < 661
                    ? (c >= 591 && c <= 659)
                    : c <= 687)
                  : (c <= 881 || c == 883))
                : (c <= 887 || (c < 912
                  ? (c >= 891 && c <= 893)
                  : (c <= 912 || (c >= 940 && c <= 974)))))))))))))
      : (c <= 977 || (c < 1253
        ? (c < 1173
          ? (c < 1125
            ? (c < 1001
              ? (c < 991
                ? (c < 987
                  ? (c < 985
                    ? (c >= 981 && c <= 983)
                    : c <= 985)
                  : (c <= 987 || c == 989))
                : (c <= 991 || (c < 997
                  ? (c < 995
                    ? c == 993
                    : c <= 995)
                  : (c <= 997 || c == 999))))
              : (c <= 1001 || (c < 1016
                ? (c < 1007
                  ? (c < 1005
                    ? c == 1003
                    : c <= 1005)
                  : (c <= 1011 || c == 1013))
                : (c <= 1016 || (c < 1121
                  ? (c < 1072
                    ? (c >= 1019 && c <= 1020)
                    : c <= 1119)
                  : (c <= 1121 || c == 1123))))))
            : (c <= 1125 || (c < 1145
              ? (c < 1135
                ? (c < 1131
                  ? (c < 1129
                    ? c == 1127
                    : c <= 1129)
                  : (c <= 1131 || c == 1133))
                : (c <= 1135 || (c < 1141
                  ? (c < 1139
                    ? c == 1137
                    : c <= 1139)
                  : (c <= 1141 || c == 1143))))
              : (c <= 1145 || (c < 1163
                ? (c < 1151
                  ? (c < 1149
                    ? c == 1147
                    : c <= 1149)
                  : (c <= 1151 || c == 1153))
                : (c <= 1163 || (c < 1169
                  ? (c < 1167
                    ? c == 1165
                    : c <= 1167)
                  : (c <= 1169 || c == 1171))))))))
          : (c <= 1173 || (c < 1213
            ? (c < 1193
              ? (c < 1183
                ? (c < 1179
                  ? (c < 1177
                    ? c == 1175
                    : c <= 1177)
                  : (c <= 1179 || c == 1181))
                : (c <= 1183 || (c < 1189
                  ? (c < 1187
                    ? c == 1185
                    : c <= 1187)
                  : (c <= 1189 || c == 1191))))
              : (c <= 1193 || (c < 1203
                ? (c < 1199
                  ? (c < 1197
                    ? c == 1195
                    : c <= 1197)
                  : (c <= 1199 || c == 1201))
                : (c <= 1203 || (c < 1209
                  ? (c < 1207
                    ? c == 1205
                    : c <= 1207)
                  : (c <= 1209 || c == 1211))))))
            : (c <= 1213 || (c < 1235
              ? (c < 1224
                ? (c < 1220
                  ? (c < 1218
                    ? c == 1215
                    : c <= 1218)
                  : (c <= 1220 || c == 1222))
                : (c <= 1224 || (c < 1230
                  ? (c < 1228
                    ? c == 1226
                    : c <= 1228)
                  : (c <= 1231 || c == 1233))))
              : (c <= 1235 || (c < 1245
                ? (c < 1241
                  ? (c < 1239
                    ? c == 1237
                    : c <= 1239)
                  : (c <= 1241 || c == 1243))
                : (c <= 1245 || (c < 1249
                  ? c == 1247
                  : (c <= 1249 || c == 1251))))))))))
        : (c <= 1253 || (c < 4304
          ? (c < 1293
            ? (c < 1273
              ? (c < 1263
                ? (c < 1259
                  ? (c < 1257
                    ? c == 1255
                    : c <= 1257)
                  : (c <= 1259 || c == 1261))
                : (c <= 1263 || (c < 1269
                  ? (c < 1267
                    ? c == 1265
                    : c <= 1267)
                  : (c <= 1269 || c == 1271))))
              : (c <= 1273 || (c < 1283
                ? (c < 1279
                  ? (c < 1277
                    ? c == 1275
                    : c <= 1277)
                  : (c <= 1279 || c == 1281))
                : (c <= 1283 || (c < 1289
                  ? (c < 1287
                    ? c == 1285
                    : c <= 1287)
                  : (c <= 1289 || c == 1291))))))
            : (c <= 1293 || (c < 1313
              ? (c < 1303
                ? (c < 1299
                  ? (c < 1297
                    ? c == 1295
                    : c <= 1297)
                  : (c <= 1299 || c == 1301))
                : (c <= 1303 || (c < 1309
                  ? (c < 1307
                    ? c == 1305
                    : c <= 1307)
                  : (c <= 1309 || c == 1311))))
              : (c <= 1313 || (c < 1323
                ? (c < 1319
                  ? (c < 1317
                    ? c == 1315
                    : c <= 1317)
                  : (c <= 1319 || c == 1321))
                : (c <= 1323 || (c < 1327
                  ? c == 1325
                  : (c <= 1327 || (c >= 1376 && c <= 1416)))))))))
          : (c <= 4346 || (c < 7707
            ? (c < 7687
              ? (c < 7531
                ? (c < 7296
                  ? (c < 5112
                    ? (c >= 4349 && c <= 4351)
                    : c <= 5117)
                  : (c <= 7304 || (c >= 7424 && c <= 7467)))
                : (c <= 7543 || (c < 7683
                  ? (c < 7681
                    ? (c >= 7545 && c <= 7578)
                    : c <= 7681)
                  : (c <= 7683 || c == 7685))))
              : (c <= 7687 || (c < 7697
                ? (c < 7693
                  ? (c < 7691
                    ? c == 7689
                    : c <= 7691)
                  : (c <= 7693 || c == 7695))
                : (c <= 7697 || (c < 7703
                  ? (c < 7701
                    ? c == 7699
                    : c <= 7701)
                  : (c <= 7703 || c == 7705))))))
            : (c <= 7707 || (c < 7727
              ? (c < 7717
                ? (c < 7713
                  ? (c < 7711
                    ? c == 7709
                    : c <= 7711)
                  : (c <= 7713 || c == 7715))
                : (c <= 7717 || (c < 7723
                  ? (c < 7721
                    ? c == 7719
                    : c <= 7721)
                  : (c <= 7723 || c == 7725))))
              : (c <= 7727 || (c < 7737
                ? (c < 7733
                  ? (c < 7731
                    ? c == 7729
                    : c <= 7731)
                  : (c <= 7733 || c == 7735))
                : (c <= 7737 || (c < 7741
                  ? c == 7739
                  : (c <= 7741 || c == 7743))))))))))))))
    : (c <= 7745 || (c < 11445
      ? (c < 7911
        ? (c < 7825
          ? (c < 7785
            ? (c < 7765
              ? (c < 7755
                ? (c < 7751
                  ? (c < 7749
                    ? c == 7747
                    : c <= 7749)
                  : (c <= 7751 || c == 7753))
                : (c <= 7755 || (c < 7761
                  ? (c < 7759
                    ? c == 7757
                    : c <= 7759)
                  : (c <= 7761 || c == 7763))))
              : (c <= 7765 || (c < 7775
                ? (c < 7771
                  ? (c < 7769
                    ? c == 7767
                    : c <= 7769)
                  : (c <= 7771 || c == 7773))
                : (c <= 7775 || (c < 7781
                  ? (c < 7779
                    ? c == 7777
                    : c <= 7779)
                  : (c <= 7781 || c == 7783))))))
            : (c <= 7785 || (c < 7805
              ? (c < 7795
                ? (c < 7791
                  ? (c < 7789
                    ? c == 7787
                    : c <= 7789)
                  : (c <= 7791 || c == 7793))
                : (c <= 7795 || (c < 7801
                  ? (c < 7799
                    ? c == 7797
                    : c <= 7799)
                  : (c <= 7801 || c == 7803))))
              : (c <= 7805 || (c < 7815
                ? (c < 7811
                  ? (c < 7809
                    ? c == 7807
                    : c <= 7809)
                  : (c <= 7811 || c == 7813))
                : (c <= 7815 || (c < 7821
                  ? (c < 7819
                    ? c == 7817
                    : c <= 7819)
                  : (c <= 7821 || c == 7823))))))))
          : (c <= 7825 || (c < 7873
            ? (c < 7853
              ? (c < 7843
                ? (c < 7839
                  ? (c < 7829
                    ? c == 7827
                    : c <= 7837)
                  : (c <= 7839 || c == 7841))
                : (c <= 7843 || (c < 7849
                  ? (c < 7847
                    ? c == 7845
                    : c <= 7847)
                  : (c <= 7849 || c == 7851))))
              : (c <= 7853 || (c < 7863
                ? (c < 7859
                  ? (c < 7857
                    ? c == 7855
                    : c <= 7857)
                  : (c <= 7859 || c == 7861))
                : (c <= 7863 || (c < 7869
                  ? (c < 7867
                    ? c == 7865
                    : c <= 7867)
                  : (c <= 7869 || c == 7871))))))
            : (c <= 7873 || (c < 7893
              ? (c < 7883
                ? (c < 7879
                  ? (c < 7877
                    ? c == 7875
                    : c <= 7877)
                  : (c <= 7879 || c == 7881))
                : (c <= 7883 || (c < 7889
                  ? (c < 7887
                    ? c == 7885
                    : c <= 7887)
                  : (c <= 7889 || c == 7891))))
              : (c <= 7893 || (c < 7903
                ? (c < 7899
                  ? (c < 7897
                    ? c == 7895
                    : c <= 7897)
                  : (c <= 7899 || c == 7901))
                : (c <= 7903 || (c < 7907
                  ? c == 7905
                  : (c <= 7907 || c == 7909))))))))))
        : (c <= 7911 || (c < 8508
          ? (c < 8064
            ? (c < 7931
              ? (c < 7921
                ? (c < 7917
                  ? (c < 7915
                    ? c == 7913
                    : c <= 7915)
                  : (c <= 7917 || c == 7919))
                : (c <= 7921 || (c < 7927
                  ? (c < 7925
                    ? c == 7923
                    : c <= 7925)
                  : (c <= 7927 || c == 7929))))
              : (c <= 7931 || (c < 7984
                ? (c < 7952
                  ? (c < 7935
                    ? c == 7933
                    : c <= 7943)
                  : (c <= 7957 || (c >= 7968 && c <= 7975)))
                : (c <= 7991 || (c < 8032
                  ? (c < 8016
                    ? (c >= 8000 && c <= 8005)
                    : c <= 8023)
                  : (c <= 8039 || (c >= 8048 && c <= 8061)))))))
            : (c <= 8071 || (c < 8160
              ? (c < 8126
                ? (c < 8112
                  ? (c < 8096
                    ? (c >= 8080 && c <= 8087)
                    : c <= 8103)
                  : (c <= 8116 || (c >= 8118 && c <= 8119)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8135)
                  : (c <= 8147 || (c >= 8150 && c <= 8151)))))
              : (c <= 8167 || (c < 8467
                ? (c < 8458
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8183)
                  : (c <= 8458 || (c >= 8462 && c <= 8463)))
                : (c <= 8467 || (c < 8500
                  ? c == 8495
                  : (c <= 8500 || c == 8505))))))))
          : (c <= 8509 || (c < 11407
            ? (c < 11377
              ? (c < 11361
                ? (c < 8580
                  ? (c < 8526
                    ? (c >= 8518 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8580 || (c >= 11312 && c <= 11359)))
                : (c <= 11361 || (c < 11370
                  ? (c < 11368
                    ? (c >= 11365 && c <= 11366)
                    : c <= 11368)
                  : (c <= 11370 || c == 11372))))
              : (c <= 11377 || (c < 11397
                ? (c < 11393
                  ? (c < 11382
                    ? (c >= 11379 && c <= 11380)
                    : c <= 11387)
                  : (c <= 11393 || c == 11395))
                : (c <= 11397 || (c < 11403
                  ? (c < 11401
                    ? c == 11399
                    : c <= 11401)
                  : (c <= 11403 || c == 11405))))))
            : (c <= 11407 || (c < 11427
              ? (c < 11417
                ? (c < 11413
                  ? (c < 11411
                    ? c == 11409
                    : c <= 11411)
                  : (c <= 11413 || c == 11415))
                : (c <= 11417 || (c < 11423
                  ? (c < 11421
                    ? c == 11419
                    : c <= 11421)
                  : (c <= 11423 || c == 11425))))
              : (c <= 11427 || (c < 11437
                ? (c < 11433
                  ? (c < 11431
                    ? c == 11429
                    : c <= 11431)
                  : (c <= 11433 || c == 11435))
                : (c <= 11437 || (c < 11441
                  ? c == 11439
                  : (c <= 11441 || c == 11443))))))))))))
      : (c <= 11445 || (c < 42813
        ? (c < 42581
          ? (c < 11485
            ? (c < 11465
              ? (c < 11455
                ? (c < 11451
                  ? (c < 11449
                    ? c == 11447
                    : c <= 11449)
                  : (c <= 11451 || c == 11453))
                : (c <= 11455 || (c < 11461
                  ? (c < 11459
                    ? c == 11457
                    : c <= 11459)
                  : (c <= 11461 || c == 11463))))
              : (c <= 11465 || (c < 11475
                ? (c < 11471
                  ? (c < 11469
                    ? c == 11467
                    : c <= 11469)
                  : (c <= 11471 || c == 11473))
                : (c <= 11475 || (c < 11481
                  ? (c < 11479
                    ? c == 11477
                    : c <= 11479)
                  : (c <= 11481 || c == 11483))))))
            : (c <= 11485 || (c < 42561
              ? (c < 11502
                ? (c < 11491
                  ? (c < 11489
                    ? c == 11487
                    : c <= 11489)
                  : (c <= 11492 || c == 11500))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? c == 11507
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 42561 || (c < 42571
                ? (c < 42567
                  ? (c < 42565
                    ? c == 42563
                    : c <= 42565)
                  : (c <= 42567 || c == 42569))
                : (c <= 42571 || (c < 42577
                  ? (c < 42575
                    ? c == 42573
                    : c <= 42575)
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 520
          ? (c < 478
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 452 || c == 455))))
              : (c <= 458 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 473
                  ? c == 471
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym_name_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < '0'
                ? (c < '\''
                  ? c == '"'
                  : (c <= '\'' || c == '-'))
                : (c <= '9' || (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_unknown_token1_character_set_1(int32_t c) {
  return (c < 5984
    ? (c < 2972
      ? (c < 2474
        ? (c < 1869
          ? (c < 1519
            ? (c < 748
              ? (c < 443
                ? (c < 186
                  ? c == 170
                  : c <= 186)
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))
              : (c <= 748 || (c < 890
                ? (c < 884
                  ? c == 750
                  : c <= 884)
                : (c <= 890 || (c < 1488
                  ? c == 1369
                  : c <= 1514)))))
            : (c <= 1522 || (c < 1774
              ? (c < 1649
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1808
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : c <= 1791)
                : (c <= 1808 || (c >= 1810 && c <= 1839)))))))
          : (c <= 1957 || (c < 2160
            ? (c < 2074
              ? (c < 2036
                ? (c < 1994
                  ? c == 1969
                  : c <= 2026)
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c >= 2144 && c <= 2154)))))
            : (c <= 2183 || (c < 2392
              ? (c < 2308
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))
              : (c <= 2401 || (c < 2447
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)
                : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))
        : (c <= 2480 || (c < 2730
          ? (c < 2579
            ? (c < 2527
              ? (c < 2493
                ? (c < 2486
                  ? c == 2482
                  : c <= 2489)
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))
              : (c <= 2529 || (c < 2565
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)
                : (c <= 2570 || (c >= 2575 && c <= 2576)))))
            : (c <= 2600 || (c < 2654
              ? (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))
              : (c <= 2654 || (c < 2703
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)
                : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
          : (c <= 2736 || (c < 2866
            ? (c < 2809
              ? (c < 2749
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2835
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)
                : (c <= 2856 || (c >= 2858 && c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2908
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c >= 2969 && c <= 2970)))))))))))
      : (c <= 2972 || (c < 3751
        ? (c < 3313
          ? (c < 3165
            ? (c < 3077
              ? (c < 2984
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))
              : (c <= 3084 || (c < 3114
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))))
            : (c <= 3165 || (c < 3242
              ? (c < 3205
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))
              : (c <= 3251 || (c < 3293
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)
                : (c <= 3294 || (c >= 3296 && c <= 3297)))))))
          : (c <= 3314 || (c < 3507
            ? (c < 3412
              ? (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))
              : (c <= 3414 || (c < 3461
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)
                : (c <= 3478 || (c >= 3482 && c <= 3505)))))
            : (c <= 3515 || (c < 3713
              ? (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : c <= 3526)
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))
              : (c <= 3714 || (c < 3724
                ? (c < 3718
                  ? c == 3716
                  : c <= 3722)
                : (c <= 3747 || c == 3749))))))))
        : (c <= 3760 || (c < 4696
          ? (c < 4159
            ? (c < 3840
              ? (c < 3776
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c >= 4096 && c <= 4138)))))
            : (c <= 4159 || (c < 4213
              ? (c < 4193
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4682
                ? (c < 4348
                  ? c == 4238
                  : c <= 4680)
                : (c <= 4685 || (c >= 4688 && c <= 4694)))))))
          : (c <= 4696 || (c < 4882
            ? (c < 4792
              ? (c < 4746
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c >= 4824 && c <= 4880)))))
            : (c <= 4885 || (c < 5792
              ? (c < 5121
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5919
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)
                : (c <= 5937 || (c >= 5952 && c <= 5969)))))))))))))
    : (c <= 5996 || (c < 43396
      ? (c < 11696
        ? (c < 7168
          ? (c < 6512
            ? (c < 6272
              ? (c < 6103
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6276 || (c < 6320
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))
            : (c <= 6516 || (c < 6917
              ? (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6963 || (c < 7086
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)
                : (c <= 7087 || (c >= 7098 && c <= 7141)))))))
          : (c <= 7203 || (c < 8188
            ? (c < 7418
              ? (c < 7401
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : c <= 7293)
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))
              : (c <= 7418 || (c < 8124
                ? (c < 8072
                  ? (c >= 7468 && c <= 7615)
                  : c <= 8111)
                : (c <= 8124 || c == 8140))))
            : (c <= 8188 || (c < 11568
              ? (c < 8336
                ? (c < 8319
                  ? c == 8305
                  : c <= 8319)
                : (c <= 8348 || (c < 11388
                  ? (c >= 8501 && c <= 8504)
                  : c <= 11389)))
              : (c <= 11623 || (c < 11680
                ? (c < 11648
                  ? c == 11631
                  : c <= 11670)
                : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
        : (c <= 11702 || (c < 42192
          ? (c < 12445
            ? (c < 11823
              ? (c < 11720
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12347
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)
                : (c <= 12348 || (c >= 12353 && c <= 12438)))))
            : (c <= 12447 || (c < 12784
              ? (c < 12549
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)))
              : (c <= 12799 || (c < 19968
                ? (c < 19903
                  ? c == 13312
                  : c <= 19903)
                : (c <= 19968 || (c >= 40959 && c <= 42124)))))))
          : (c <= 42237 || (c < 43011
            ? (c < 42656
              ? (c < 42538
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42527)
                : (c <= 42539 || (c < 42623
                  ? c == 42606
                  : c <= 42653)))
              : (c <= 42725 || (c < 42895
                ? (c < 42864
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)
                : (c <= 42895 || (c >= 42994 && c <= 43009)))))
            : (c <= 43013 || (c < 43259
              ? (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))
              : (c <= 43259 || (c < 43312
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : c <= 43301)
                : (c <= 43334 || (c >= 43360 && c <= 43388)))))))))))
      : (c <= 43442 || (c < 65136
        ? (c < 43808
          ? (c < 43697
            ? (c < 43584
              ? (c < 43494
                ? (c < 43488
                  ? c == 43471
                  : c <= 43492)
                : (c <= 43503 || (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : c <= 43560)))
              : (c <= 43586 || (c < 43642
                ? (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)
                : (c <= 43642 || (c >= 43646 && c <= 43695)))))
            : (c <= 43697 || (c < 43744
              ? (c < 43712
                ? (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43968
                ? (c < 43868
                  ? (c >= 43816 && c <= 43822)
                  : c <= 43881)
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64112
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : c <= 64109)
                : (c <= 64217 || c == 64285))))
            : (c <= 64296 || (c < 64326
              ? (c < 64318
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : c <= 64316)
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c >= 65008 && c <= 65019)))))))))
        : (c <= 65140 || (c < 66504
          ? (c < 65599
            ? (c < 65498
              ? (c < 65474
                ? (c < 65382
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65470)
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65576
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : c <= 65574)
                : (c <= 65594 || (c >= 65596 && c <= 65597)))))
            : (c <= 65613 || (c < 66349
              ? (c < 66176
                ? (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)
                : (c <= 66204 || (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66335)))
              : (c <= 66368 || (c < 66432
                ? (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)
                : (c <= 66461 || (c >= 66464 && c <= 66499)))))))
          : (c <= 66511 || (c < 67592
            ? (c < 67424
              ? (c < 66864
                ? (c < 66816
                  ? (c >= 66640 && c <= 66717)
                  : c <= 66855)
                : (c <= 66915 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)))
              : (c <= 67431 || (c < 67506
                ? (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)
                : (c <= 67514 || (c >= 67584 && c <= 67589)))))
            : (c <= 67592 || (c < 67712
              ? (c < 67644
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : c <= 67640)
                : (c <= 67644 || (c < 67680
                  ? (c >= 67647 && c <= 67669)
                  : c <= 67702)))
              : (c <= 67742 || (c < 67840
                ? (c < 67828
                  ? (c >= 67808 && c <= 67826)
                  : c <= 67829)
                : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))));
}

static inline bool aux_sym_unknown_token1_character_set_2(int32_t c) {
  return (c < 6528
    ? (c < 2969
      ? (c < 2144
        ? (c < 1015
          ? (c < 248
            ? (c < 'A'
              ? (c < '\''
                ? (c < ' '
                  ? (c >= '\t' && c <= '\r')
                  : (c <= ' ' || c == '"'))
                : (c <= '\'' || (c < '0'
                  ? c == '-'
                  : c <= '9')))
              : (c <= 'Z' || (c < 186
                ? (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))))
            : (c <= 705 || (c < 890
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1791
            ? (c < 1568
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))
              : (c <= 1610 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : c <= 1788)))))
            : (c <= 1791 || (c < 2042
              ? (c < 1969
                ? (c < 1810
                  ? c == 1808
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))
                : (c <= 1969 || (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)))
              : (c <= 2042 || (c < 2084
                ? (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))))))))
        : (c <= 2154 || (c < 2649
          ? (c < 2486
            ? (c < 2392
              ? (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))
              : (c <= 2401 || (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))))
            : (c <= 2489 || (c < 2565
              ? (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)))
              : (c <= 2570 || (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))))))
          : (c <= 2652 || (c < 2831
            ? (c < 2738
              ? (c < 2703
                ? (c < 2674
                  ? c == 2654
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))
              : (c <= 2739 || (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2821
                  ? c == 2809
                  : c <= 2828)))))
            : (c <= 2832 || (c < 2911
              ? (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))
              : (c <= 2913 || (c < 2949
                ? (c < 2947
                  ? c == 2929
                  : c <= 2947)
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))))))))))
      : (c <= 2970 || (c < 3976
        ? (c < 3389
          ? (c < 3168
            ? (c < 3077
              ? (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))
              : (c <= 3084 || (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)))))
            : (c <= 3169 || (c < 3261
              ? (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))
              : (c <= 3261 || (c < 3332
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))))))
          : (c <= 3389 || (c < 3716
            ? (c < 3507
              ? (c < 3450
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3634
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3804
                  ? c == 3782
                  : c <= 3807)
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4348
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4295
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4752
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)))
              : (c <= 4784 || (c < 4800
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5905 || (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)))))
            : (c <= 5996 || (c < 6279
              ? (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6276)))
              : (c <= 6312 || (c < 6400
                ? (c < 6320
                  ? c == 6314
                  : c <= 6389)
                : (c <= 6430 || (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43250
      ? (c < 8526
        ? (c < 8029
          ? (c < 7312
            ? (c < 7043
              ? (c < 6823
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : c <= 6988)))
              : (c <= 7072 || (c < 7245
                ? (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7680
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : c <= 7615)))
              : (c <= 7957 || (c < 8016
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8027
                  ? c == 8025
                  : c <= 8027)))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8144
              ? (c < 8126
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : c <= 8140)))
              : (c <= 8147 || (c < 8182
                ? (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8319
                  ? c == 8305
                  : c <= 8319)))))
            : (c <= 8348 || (c < 8486
              ? (c < 8469
                ? (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : c <= 8484)))
              : (c <= 8486 || (c < 8495
                ? (c < 8490
                  ? c == 8488
                  : c <= 8493)
                : (c <= 8505 || (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)))))))))
        : (c <= 8526 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_unknown_token1_character_set_3(int32_t c) {
  return (c < 6279
    ? (c < 2962
      ? (c < 2208
        ? (c < 1488
          ? (c < 880
            ? (c < 216
              ? (c < 170
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 170 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 222 || (c < 736
                ? (c < 710
                  ? (c >= 256 && c <= 705)
                  : c <= 721)
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? c == 886
                  : (c <= 890 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1012)
                  : c <= 1152)
                : (c <= 1326 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1514 || (c < 1969
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1808
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : c <= 1791)
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2084
              ? (c < 2042
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2654
          ? (c < 2510
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2482
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2831
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2784
                ? (c < 2768
                  ? c == 2749
                  : c <= 2768)
                : (c <= 2785 || (c < 2821
                  ? c == 2809
                  : c <= 2828)))))
            : (c <= 2832 || (c < 2908
              ? (c < 2866
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))
              : (c <= 2909 || (c < 2947
                ? (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3782
        ? (c < 3332
          ? (c < 3160
            ? (c < 3024
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))
              : (c <= 3024 || (c < 3090
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))))
            : (c <= 3162 || (c < 3242
              ? (c < 3205
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))
              : (c <= 3251 || (c < 3293
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3585
            ? (c < 3450
              ? (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))
              : (c <= 3455 || (c < 3507
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))))
            : (c <= 3632 || (c < 3724
              ? (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))
              : (c <= 3747 || (c < 3762
                ? (c < 3751
                  ? c == 3749
                  : c <= 3760)
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))))))))
        : (c <= 3782 || (c < 4786
          ? (c < 4213
            ? (c < 4159
              ? (c < 3913
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))
              : (c <= 4159 || (c < 4193
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))))
            : (c <= 4225 || (c < 4688
              ? (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))
              : (c <= 4694 || (c < 4704
                ? (c < 4698
                  ? c == 4696
                  : c <= 4701)
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))))))
          : (c <= 4789 || (c < 5792
            ? (c < 4888
              ? (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))
              : (c <= 4954 || (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))))
            : (c <= 5866 || (c < 5998
              ? (c < 5919
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))
              : (c <= 6000 || (c < 6108
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)
                : (c <= 6108 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6276)))))))))))))
    : (c <= 6312 || (c < 43072
      ? (c < 8490
        ? (c < 7680
          ? (c < 7043
            ? (c < 6576
              ? (c < 6480
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))
              : (c <= 6601 || (c < 6823
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : c <= 6988)))))
            : (c <= 7072 || (c < 7357
              ? (c < 7245
                ? (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7312
                  ? (c >= 7258 && c <= 7293)
                  : c <= 7354)))
              : (c <= 7359 || (c < 7413
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : c <= 7411)
                : (c <= 7414 || (c < 7468
                  ? c == 7418
                  : c <= 7615)))))))
          : (c <= 7951 || (c < 8184
            ? (c < 8031
              ? (c < 8025
                ? (c < 7976
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 7999 || (c >= 8008 && c <= 8013)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))
              : (c <= 8047 || (c < 8136
                ? (c < 8120
                  ? (c >= 8072 && c <= 8111)
                  : c <= 8124)
                : (c <= 8140 || (c < 8168
                  ? (c >= 8152 && c <= 8155)
                  : c <= 8172)))))
            : (c <= 8188 || (c < 8459
              ? (c < 8336
                ? (c < 8319
                  ? c == 8305
                  : c <= 8319)
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))
              : (c <= 8466 || (c < 8484
                ? (c < 8473
                  ? c == 8469
                  : c <= 8477)
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12540
          ? (c < 11696
            ? (c < 11506
              ? (c < 8579
                ? (c < 8510
                  ? (c >= 8496 && c <= 8504)
                  : (c <= 8511 || c == 8517))
                : (c <= 8579 || (c < 11499
                  ? (c >= 11264 && c <= 11490)
                  : c <= 11501)))
              : (c <= 11506 || (c < 11648
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : c <= 11631)
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42960
              ? (c < 42775
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : c <= 42953)))
              : (c <= 42960 || (c < 43011
                ? (c < 42994
                  ? (c >= 42966 && c <= 42968)
                  : c <= 43009)
                : (c <= 43013 || (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)))))))))))
      : (c <= 43123 || (c < 65008
        ? (c < 43762
          ? (c < 43520
            ? (c < 43360
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : c <= 43334)))
              : (c <= 43388 || (c < 43488
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)
                : (c <= 43492 || (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : c <= 43518)))))
            : (c <= 43560 || (c < 43701
              ? (c < 43642
                ? (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : (c <= 43595 || (c >= 43616 && c <= 43638)))
                : (c <= 43642 || (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : c <= 43697)))
              : (c <= 43702 || (c < 43714
                ? (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)
                : (c <= 43714 || (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)))))))
          : (c <= 43764 || (c < 64112
            ? (c < 43968
              ? (c < 43808
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c >= 43816 && c <= 43822)
                  : c <= 43881)))
              : (c <= 44002 || (c < 55216
                ? (c < 55203
                  ? c == 44032
                  : c <= 55203)
                : (c <= 55238 || (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : c <= 64109)))))
            : (c <= 64217 || (c < 64320
              ? (c < 64298
                ? (c < 64287
                  ? c == 64285
                  : c <= 64296)
                : (c <= 64310 || (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : c <= 64318)))
              : (c <= 64321 || (c < 64467
                ? (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)
                : (c <= 64829 || (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)))))))))
        : (c <= 65019 || (c < 66736
          ? (c < 65599
            ? (c < 65490
              ? (c < 65382
                ? (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : (c <= 65276 || (c >= 65313 && c <= 65338)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))
              : (c <= 65495 || (c < 65549
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)
                : (c <= 65574 || (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : c <= 65597)))))
            : (c <= 65613 || (c < 66370
              ? (c < 66208
                ? (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : c <= 66368)))
              : (c <= 66377 || (c < 66464
                ? (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)
                : (c <= 66499 || (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)))))))
          : (c <= 66771 || (c < 67584
            ? (c < 67072
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : c <= 66965)))
              : (c <= 67382 || (c < 67456
                ? (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : c <= 67431)
                : (c <= 67461 || (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : c <= 67514)))))
            : (c <= 67589 || (c < 67680
              ? (c < 67639
                ? (c < 67594
                  ? c == 67592
                  : c <= 67637)
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_words_character_set_1(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'a' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 460
            ? (c < 457
              ? c == 454
              : c <= 457)
            : (c <= 496 || (c >= 499 && c <= 659)))))
        : (c <= 687 || (c < 940
          ? (c < 891
            ? (c < 887
              ? (c >= 881 && c <= 883)
              : c <= 887)
            : (c <= 893 || c == 912))
          : (c <= 1013 || (c < 1376
            ? (c < 1163
              ? (c >= 1016 && c <= 1153)
              : c <= 1327)
            : (c <= 1416 || (c >= 4304 && c <= 4346)))))))
      : (c <= 4351 || (c < 8064
        ? (c < 7545
          ? (c < 7424
            ? (c < 7296
              ? (c >= 5112 && c <= 5117)
              : c <= 7304)
            : (c <= 7467 || (c >= 7531 && c <= 7543)))
          : (c <= 7578 || (c < 8016
            ? (c < 7968
              ? (c >= 7681 && c <= 7957)
              : c <= 8005)
            : (c <= 8023 || (c >= 8032 && c <= 8061)))))
        : (c <= 8071 || (c < 8126
          ? (c < 8112
            ? (c < 8096
              ? (c >= 8080 && c <= 8087)
              : c <= 8103)
            : (c <= 8116 || (c >= 8118 && c <= 8119)))
          : (c <= 8126 || (c < 8144
            ? (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42865
      ? (c < 11312
        ? (c < 8505
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8505 || (c < 8526
            ? (c < 8518
              ? (c >= 8508 && c <= 8509)
              : c <= 8521)
            : (c <= 8526 || c == 8580))))
        : (c <= 11387 || (c < 11559
          ? (c < 11507
            ? (c < 11500
              ? (c >= 11393 && c <= 11492)
              : c <= 11502)
            : (c <= 11507 || (c >= 11520 && c <= 11557)))
          : (c <= 11559 || (c < 42625
            ? (c < 42561
              ? c == 11565
              : c <= 42605)
            : (c <= 42651 || (c >= 42787 && c <= 42863)))))))
      : (c <= 42887 || (c < 43888
        ? (c < 42965
          ? (c < 42961
            ? (c < 42897
              ? (c >= 42892 && c <= 42894)
              : c <= 42954)
            : (c <= 42961 || c == 42963))
          : (c <= 42969 || (c < 43824
            ? (c < 43002
              ? c == 42998
              : c <= 43002)
            : (c <= 43866 || (c >= 43872 && c <= 43880)))))
        : (c <= 43967 || (c < 66776
          ? (c < 65345
            ? (c < 64275
              ? (c >= 64256 && c <= 64262)
              : c <= 64279)
            : (c <= 65370 || (c >= 66600 && c <= 66639)))
          : (c <= 66811 || (c < 66995
            ? (c < 66979
              ? (c >= 66967 && c <= 66977)
              : c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '?') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (sym_name_character_set_1(lookahead)) ADVANCE(26);
      if (sym_words_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym_unknown_token1_character_set_1(lookahead)) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '?') ADVANCE(29);
      if (aux_sym_unknown_token1_character_set_2(lookahead)) ADVANCE(4);
      END_STATE();
    case 5:
      if (eof) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(32);
      if (sym_name_character_set_1(lookahead)) ADVANCE(27);
      if (sym_words_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == ',') ADVANCE(13);
      if (aux_sym_comment_token1_character_set_1(lookahead)) ADVANCE(22);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__multi_newline);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_num);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (aux_sym_comment_token1_character_set_2(lookahead)) ADVANCE(22);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead == ',') ADVANCE(13);
      if (aux_sym_comment_token1_character_set_1(lookahead)) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '?') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (sym_name_character_set_2(lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_unknown_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_words);
      if (lookahead == '?') ADVANCE(29);
      if (aux_sym_comment_token1_character_set_2(lookahead)) ADVANCE(30);
      if (aux_sym_unknown_token1_character_set_3(lookahead)) ADVANCE(4);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_words);
      if (aux_sym_comment_token1_character_set_2(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__multi_newline] = ACTIONS(1),
    [sym__nl] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_unknown_token1] = ACTIONS(1),
    [sym_words] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(84),
    [sym_family] = STATE(41),
    [sym_family_name] = STATE(65),
    [sym__multi_newline] = ACTIONS(3),
    [sym__nl] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      sym__nl,
    ACTIONS(14), 1,
      sym_num,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_name,
    ACTIONS(24), 1,
      sym_words,
    STATE(71), 1,
      sym_targets,
    STATE(83), 1,
      sym_new_surname,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    ACTIONS(18), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
    STATE(19), 4,
      sym_name_def,
      sym_comment,
      sym_unknown,
      sym_num_unknown,
  [41] = 10,
    ACTIONS(14), 1,
      sym_num,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_name,
    ACTIONS(28), 1,
      sym__nl,
    STATE(66), 1,
      sym_targets,
    STATE(83), 1,
      sym_new_surname,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
    ACTIONS(18), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
    STATE(19), 4,
      sym_name_def,
      sym_comment,
      sym_unknown,
      sym_num_unknown,
  [79] = 10,
    ACTIONS(14), 1,
      sym_num,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_name,
    ACTIONS(32), 1,
      sym__nl,
    STATE(72), 1,
      sym_targets,
    STATE(83), 1,
      sym_new_surname,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
    ACTIONS(18), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
    STATE(19), 4,
      sym_name_def,
      sym_comment,
      sym_unknown,
      sym_num_unknown,
  [117] = 10,
    ACTIONS(14), 1,
      sym_num,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_name,
    ACTIONS(37), 1,
      sym__nl,
    STATE(67), 1,
      sym_targets,
    STATE(83), 1,
      sym_new_surname,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
    ACTIONS(18), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
    STATE(19), 4,
      sym_name_def,
      sym_comment,
      sym_unknown,
      sym_num_unknown,
  [155] = 7,
    ACTIONS(14), 1,
      sym_num,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_name,
    STATE(83), 1,
      sym_new_surname,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    ACTIONS(18), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
    STATE(33), 4,
      sym_name_def,
      sym_comment,
      sym_unknown,
      sym_num_unknown,
  [183] = 2,
    ACTIONS(41), 3,
      sym__nl,
      anon_sym_LT_DASH,
      anon_sym_DASH,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym_words,
      anon_sym_EQ,
      anon_sym_LT_DASH_GT,
      anon_sym_DASH_GT,
  [199] = 6,
    ACTIONS(45), 1,
      sym_words,
    STATE(10), 1,
      aux_sym_sources_repeat1,
    STATE(36), 1,
      sym__words,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_COMMA,
    ACTIONS(49), 2,
      anon_sym_LT_DASH,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_EQ,
      anon_sym_LT_DASH_GT,
      anon_sym_DASH_GT,
  [222] = 6,
    ACTIONS(45), 1,
      sym_words,
    STATE(8), 1,
      aux_sym_sources_repeat1,
    STATE(36), 1,
      sym__words,
    ACTIONS(43), 2,
      anon_sym_PLUS,
      anon_sym_COMMA,
    ACTIONS(53), 2,
      anon_sym_LT_DASH,
      anon_sym_DASH,
    ACTIONS(51), 3,
      anon_sym_EQ,
      anon_sym_LT_DASH_GT,
      anon_sym_DASH_GT,
  [245] = 6,
    ACTIONS(58), 1,
      sym_words,
    STATE(10), 1,
      aux_sym_sources_repeat1,
    STATE(36), 1,
      sym__words,
    ACTIONS(55), 2,
      anon_sym_PLUS,
      anon_sym_COMMA,
    ACTIONS(63), 2,
      anon_sym_LT_DASH,
      anon_sym_DASH,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_LT_DASH_GT,
      anon_sym_DASH_GT,
  [268] = 3,
    ACTIONS(67), 1,
      sym_name,
    ACTIONS(69), 2,
      anon_sym_LT_DASH,
      anon_sym_DASH,
    ACTIONS(65), 6,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym_words,
      anon_sym_EQ,
      anon_sym_LT_DASH_GT,
      anon_sym_DASH_GT,
  [284] = 2,
    ACTIONS(73), 2,
      anon_sym_LT_DASH,
      anon_sym_DASH,
    ACTIONS(71), 6,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym_words,
      anon_sym_EQ,
      anon_sym_LT_DASH_GT,
      anon_sym_DASH_GT,
  [297] = 2,
    ACTIONS(77), 2,
      anon_sym_LT_DASH,
      anon_sym_DASH,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_COMMA,
      sym_words,
      anon_sym_EQ,
      anon_sym_LT_DASH_GT,
      anon_sym_DASH_GT,
  [310] = 2,
    ACTIONS(81), 1,
      sym_name,
    ACTIONS(79), 7,
      sym_num,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
  [323] = 6,
    ACTIONS(83), 1,
      sym_name,
    STATE(26), 1,
      sym_sources,
    STATE(40), 1,
      sym_relation,
    STATE(56), 1,
      sym_relations,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    STATE(9), 2,
      sym_name_ref,
      sym_unknown,
  [344] = 6,
    ACTIONS(83), 1,
      sym_name,
    STATE(26), 1,
      sym_sources,
    STATE(40), 1,
      sym_relation,
    STATE(58), 1,
      sym_relations,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    STATE(9), 2,
      sym_name_ref,
      sym_unknown,
  [365] = 6,
    ACTIONS(83), 1,
      sym_name,
    STATE(26), 1,
      sym_sources,
    STATE(40), 1,
      sym_relation,
    STATE(70), 1,
      sym_relations,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    STATE(9), 2,
      sym_name_ref,
      sym_unknown,
  [386] = 6,
    ACTIONS(45), 1,
      sym_words,
    ACTIONS(87), 1,
      sym__nl,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym__words,
    STATE(23), 1,
      aux_sym_targets_repeat1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [406] = 6,
    ACTIONS(45), 1,
      sym_words,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      sym__nl,
    STATE(6), 1,
      sym__words,
    STATE(18), 1,
      aux_sym_targets_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [426] = 4,
    ACTIONS(99), 1,
      sym__nl,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_name_aliases,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [442] = 4,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym__nl,
    STATE(30), 1,
      sym_name_aliases,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [458] = 4,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym__nl,
    STATE(37), 1,
      sym_name_aliases,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [474] = 6,
    ACTIONS(113), 1,
      sym__nl,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      sym_words,
    STATE(6), 1,
      sym__words,
    STATE(23), 1,
      aux_sym_targets_repeat1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [494] = 5,
    ACTIONS(83), 1,
      sym_name,
    STATE(26), 1,
      sym_sources,
    STATE(69), 1,
      sym_relation,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    STATE(9), 2,
      sym_name_ref,
      sym_unknown,
  [512] = 3,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
    ACTIONS(124), 4,
      sym__multi_newline,
      sym__nl,
      anon_sym_COMMA,
      sym_words,
  [525] = 3,
    STATE(2), 1,
      sym__arrows,
    ACTIONS(130), 2,
      anon_sym_LT_DASH,
      anon_sym_DASH,
    ACTIONS(128), 3,
      anon_sym_EQ,
      anon_sym_LT_DASH_GT,
      anon_sym_DASH_GT,
  [538] = 5,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_name,
    STATE(29), 1,
      sym_unknown,
    STATE(78), 1,
      sym_new_surname,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
  [555] = 2,
    ACTIONS(136), 1,
      sym__nl,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [565] = 2,
    ACTIONS(140), 1,
      sym__nl,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [575] = 2,
    ACTIONS(99), 1,
      sym__nl,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [585] = 2,
    ACTIONS(109), 1,
      sym__nl,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [595] = 2,
    ACTIONS(144), 1,
      sym__nl,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [605] = 2,
    ACTIONS(148), 1,
      sym__nl,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [615] = 2,
    ACTIONS(152), 1,
      sym__nl,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [625] = 2,
    ACTIONS(156), 1,
      sym__nl,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [635] = 3,
    ACTIONS(83), 1,
      sym_name,
    ACTIONS(22), 2,
      anon_sym_QMARK,
      aux_sym_unknown_token1,
    STATE(12), 2,
      sym_name_ref,
      sym_unknown,
  [647] = 2,
    ACTIONS(160), 1,
      sym__nl,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      sym__multi_newline,
      anon_sym_COMMA,
      sym_words,
  [657] = 4,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym__nl,
    STATE(68), 1,
      sym_name_aliases,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [671] = 4,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      sym__multi_newline,
    ACTIONS(171), 1,
      sym__nl,
    STATE(39), 1,
      aux_sym_root_repeat1,
  [684] = 4,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__multi_newline,
    ACTIONS(178), 1,
      sym__nl,
    STATE(42), 1,
      aux_sym_relations_repeat1,
  [697] = 4,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      sym__multi_newline,
    ACTIONS(184), 1,
      sym__nl,
    STATE(47), 1,
      aux_sym_root_repeat1,
  [710] = 4,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      sym__multi_newline,
    ACTIONS(191), 1,
      sym__nl,
    STATE(51), 1,
      aux_sym_relations_repeat1,
  [723] = 4,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym__multi_newline,
    ACTIONS(197), 1,
      sym__nl,
    STATE(54), 1,
      aux_sym_root_repeat1,
  [736] = 4,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_family,
    STATE(65), 1,
      sym_family_name,
  [749] = 2,
    STATE(63), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
  [758] = 4,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      sym__multi_newline,
    ACTIONS(206), 1,
      sym__nl,
    STATE(50), 1,
      aux_sym_family_repeat1,
  [771] = 4,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym__multi_newline,
    ACTIONS(197), 1,
      sym__nl,
    STATE(39), 1,
      aux_sym_root_repeat1,
  [784] = 2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
  [793] = 4,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_family,
    STATE(65), 1,
      sym_family_name,
  [806] = 3,
    ACTIONS(213), 1,
      sym__nl,
    STATE(50), 1,
      aux_sym_family_repeat1,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [817] = 4,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      sym__multi_newline,
    ACTIONS(221), 1,
      sym__nl,
    STATE(51), 1,
      aux_sym_relations_repeat1,
  [830] = 4,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_family,
    STATE(65), 1,
      sym_family_name,
  [843] = 4,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 1,
      sym__multi_newline,
    ACTIONS(230), 1,
      sym__nl,
    STATE(46), 1,
      aux_sym_family_repeat1,
  [856] = 4,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      sym__multi_newline,
    ACTIONS(235), 1,
      sym__nl,
    STATE(39), 1,
      aux_sym_root_repeat1,
  [869] = 3,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
    ACTIONS(124), 2,
      sym__multi_newline,
      sym__nl,
  [880] = 2,
    ACTIONS(239), 1,
      sym__nl,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [888] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_name_aliases_repeat1,
  [898] = 2,
    ACTIONS(246), 1,
      sym__nl,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [906] = 3,
    ACTIONS(7), 1,
      sym_name,
    STATE(43), 1,
      sym_family,
    STATE(65), 1,
      sym_family_name,
  [916] = 2,
    ACTIONS(171), 1,
      sym__nl,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [924] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_name_aliases_repeat1,
  [934] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_name_aliases_repeat1,
  [944] = 2,
    ACTIONS(254), 1,
      sym__nl,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [952] = 3,
    ACTIONS(7), 1,
      sym_name,
    STATE(60), 1,
      sym_family,
    STATE(65), 1,
      sym_family_name,
  [962] = 3,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      sym__multi_newline,
    ACTIONS(261), 1,
      sym__nl,
  [972] = 2,
    ACTIONS(266), 1,
      sym__nl,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [980] = 2,
    ACTIONS(270), 1,
      sym__nl,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [988] = 2,
    ACTIONS(274), 1,
      sym__nl,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [996] = 2,
    ACTIONS(221), 1,
      sym__nl,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [1004] = 2,
    ACTIONS(278), 1,
      sym__nl,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [1012] = 2,
    ACTIONS(28), 1,
      sym__nl,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [1020] = 2,
    ACTIONS(37), 1,
      sym__nl,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym__multi_newline,
  [1028] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1033] = 2,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      sym_name,
  [1040] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1044] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [1048] = 1,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
  [1052] = 1,
    ACTIONS(286), 1,
      sym_name,
  [1056] = 1,
    ACTIONS(288), 1,
      sym_name,
  [1060] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [1064] = 1,
    ACTIONS(290), 1,
      sym_name,
  [1068] = 1,
    ACTIONS(292), 1,
      sym_name,
  [1072] = 1,
    ACTIONS(294), 1,
      sym_name,
  [1076] = 1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 183,
  [SMALL_STATE(8)] = 199,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 284,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 406,
  [SMALL_STATE(20)] = 426,
  [SMALL_STATE(21)] = 442,
  [SMALL_STATE(22)] = 458,
  [SMALL_STATE(23)] = 474,
  [SMALL_STATE(24)] = 494,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 525,
  [SMALL_STATE(27)] = 538,
  [SMALL_STATE(28)] = 555,
  [SMALL_STATE(29)] = 565,
  [SMALL_STATE(30)] = 575,
  [SMALL_STATE(31)] = 585,
  [SMALL_STATE(32)] = 595,
  [SMALL_STATE(33)] = 605,
  [SMALL_STATE(34)] = 615,
  [SMALL_STATE(35)] = 625,
  [SMALL_STATE(36)] = 635,
  [SMALL_STATE(37)] = 647,
  [SMALL_STATE(38)] = 657,
  [SMALL_STATE(39)] = 671,
  [SMALL_STATE(40)] = 684,
  [SMALL_STATE(41)] = 697,
  [SMALL_STATE(42)] = 710,
  [SMALL_STATE(43)] = 723,
  [SMALL_STATE(44)] = 736,
  [SMALL_STATE(45)] = 749,
  [SMALL_STATE(46)] = 758,
  [SMALL_STATE(47)] = 771,
  [SMALL_STATE(48)] = 784,
  [SMALL_STATE(49)] = 793,
  [SMALL_STATE(50)] = 806,
  [SMALL_STATE(51)] = 817,
  [SMALL_STATE(52)] = 830,
  [SMALL_STATE(53)] = 843,
  [SMALL_STATE(54)] = 856,
  [SMALL_STATE(55)] = 869,
  [SMALL_STATE(56)] = 880,
  [SMALL_STATE(57)] = 888,
  [SMALL_STATE(58)] = 898,
  [SMALL_STATE(59)] = 906,
  [SMALL_STATE(60)] = 916,
  [SMALL_STATE(61)] = 924,
  [SMALL_STATE(62)] = 934,
  [SMALL_STATE(63)] = 944,
  [SMALL_STATE(64)] = 952,
  [SMALL_STATE(65)] = 962,
  [SMALL_STATE(66)] = 972,
  [SMALL_STATE(67)] = 980,
  [SMALL_STATE(68)] = 988,
  [SMALL_STATE(69)] = 996,
  [SMALL_STATE(70)] = 1004,
  [SMALL_STATE(71)] = 1012,
  [SMALL_STATE(72)] = 1020,
  [SMALL_STATE(73)] = 1028,
  [SMALL_STATE(74)] = 1033,
  [SMALL_STATE(75)] = 1040,
  [SMALL_STATE(76)] = 1044,
  [SMALL_STATE(77)] = 1048,
  [SMALL_STATE(78)] = 1052,
  [SMALL_STATE(79)] = 1056,
  [SMALL_STATE(80)] = 1060,
  [SMALL_STATE(81)] = 1064,
  [SMALL_STATE(82)] = 1068,
  [SMALL_STATE(83)] = 1072,
  [SMALL_STATE(84)] = 1076,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 2, .production_id = 1),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_relation, 2, .production_id = 1), SHIFT(3),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 3, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 3, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 3, .production_id = 4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_relation, 3, .production_id = 4), SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 4, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sources, 2, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sources, 2, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sources, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sources, 1),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sources_repeat1, 2, .production_id = 6), SHIFT_REPEAT(36),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sources_repeat1, 2, .production_id = 6), SHIFT_REPEAT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sources_repeat1, 2, .production_id = 6),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sources_repeat1, 2, .production_id = 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_ref, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_ref, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sources_repeat1, 2, .production_id = 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sources_repeat1, 2, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_ref, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_ref, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__words, 1, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__words, 1, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 2, .production_id = 3),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_targets, 2, .production_id = 3), SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_targets, 1),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_targets, 1), SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_def, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_def, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_def, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_def, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_def, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_def, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2, .production_id = 6),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, .production_id = 6), SHIFT_REPEAT(6),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2, .production_id = 6), SHIFT_REPEAT(6),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2, .production_id = 6), SHIFT_REPEAT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_aliases, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_aliases, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_unknown, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num_unknown, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_aliases, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_aliases, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_targets_repeat1, 2, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_targets_repeat1, 2, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_aliases, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_aliases, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_def, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_def, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_family_name, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_family_name, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(64),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_root_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relations, 1),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_relations, 1), SHIFT(24),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relations, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relations, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_relations, 2), SHIFT(24),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relations, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_family, 4),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_family, 4), SHIFT(17),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_family, 4), SHIFT(45),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_family_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_family_repeat1, 2), SHIFT_REPEAT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relations_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relations_repeat1, 2), SHIFT_REPEAT(24),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relations_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_family, 3),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_family, 3), SHIFT(15),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_family, 3), SHIFT(45),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_family, 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_family, 5),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_aliases_repeat1, 2), SHIFT_REPEAT(81),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_aliases_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_family, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_family_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_family, 1),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_family, 1), SHIFT(16),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_family, 1), SHIFT(48),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 4, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 5, .production_id = 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 5, .production_id = 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_family_name, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_family_name, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_family, 6),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_family, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_surname, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_familymarkup() {
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
