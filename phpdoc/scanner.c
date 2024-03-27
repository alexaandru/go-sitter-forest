#include "parser.h"

#define TSDEBUG 0

#if TSDEBUG
#include <stdio.h>
#define LOG(...)  fprintf(stderr, __VA_ARGS__)
#else
#define LOG(...)
#endif

enum TokenType {
  TEXT,
  TEXT_AFTER_TYPE,
  TEXT_IN_INLINE_TAG,
  TEXT_NOT_VERSION,
};

// Used as version string for some PEAR packages
static const char* const package_version = "@package_version@";

void *tree_sitter_phpdoc_external_scanner_create() { return NULL; }
void tree_sitter_phpdoc_external_scanner_destroy(void *p) {}
void tree_sitter_phpdoc_external_scanner_reset(void *p) {}
unsigned tree_sitter_phpdoc_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_phpdoc_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance_phpdoc(TSLexer *lexer) { lexer->advance_phpdoc(lexer, false); }
static void skip_phpdoc(TSLexer *lexer) { lexer->advance_phpdoc(lexer, true); }

// Skip line prefix:
//
// /**\n  <-- lookahead points here
//   *\n  <-- or here ...
//   * bla
//    ^ ... and will skip to here
//
// False is returned if other chars than [\n *] appear before '* '.
static bool skip_to_text_start(TSLexer *lexer) {
  bool asterisk_found = false;
  while (true) {
    switch (lexer->lookahead) {
      case '\r':
      case '\n':
        skip_phpdoc(lexer);
        asterisk_found = false;
        break;
      case ' ':
        if (asterisk_found) {
          // '* ' found: potential start of next content
          return true;
        }
        skip_phpdoc(lexer);
        break;
      case '*':
        skip_phpdoc(lexer);
        asterisk_found = true;
        break;
      default:
        return false;
    }
  }
}

static bool skip_whitespace(TSLexer *lexer) {
  bool skipped = false;
  while (
      lexer->lookahead == ' ' ||
      lexer->lookahead == '\t' ||
      lexer->lookahead == '\n' ||
      lexer->lookahead == '\r'
  ) {
    skip_phpdoc(lexer);
    skipped = true;
  }
  return skipped;
}

// Returns whether a valid variable name like $ab_cde was detected.
// Preceding whitespace will be skipped.
static bool scan_variable_name(TSLexer *lexer, bool *has_content) {
  if (skip_whitespace(lexer)) {
    *has_content = true;
  }
  if (lexer->lookahead != '$') {
    return false;
  }
  advance_phpdoc(lexer);

  // From PHP parser:
  //  name: /[_a-zA-Z\u00A1-\u00ff][_a-zA-Z\u00A1-\u00ff\d]*/,
  while (true) {
    if (
        lexer->lookahead == '_' ||
        (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') ||
        (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') ||
        (lexer->lookahead >= 0x00A1 && lexer->lookahead <= 0x00FF) ||
        (*has_content && lexer->lookahead >= '0' && lexer->lookahead <= '9')
       ) {
      *has_content = true;
      advance_phpdoc(lexer);
    } else {
      return *has_content;
    }
  }
}

// Returns whether a valid version string was detected:
//   1.2.3
//   1.blabla-x
//   vcs: $some_vector$
//   $some_vector$
//   @package_version@
// Preceding whitespace will be skipped.
static bool scan_version(TSLexer *lexer, bool *has_content) {
  skip_whitespace(lexer);
  const char* pkg = package_version;
  bool numeric_started = false;
  bool vcs_started = false;
  bool vcs_complete = false;
  bool vector_started = false;
  while (true) {
    switch (lexer->lookahead) {
      case '\r':
      case '\n':
      case '\0':
        return false;

      case '.':
        if (numeric_started) {
          return true;
        }
        break;

      case ' ':
        if (!vcs_complete) {
          return false;
        }
        break;

      case ':':
        if (vcs_started) {
          vcs_complete = true;
        }
        break;

      case '@':
        while (*pkg != '\0') {
          if (*(pkg++) != lexer->lookahead) {
            return false;
          }
          advance_phpdoc(lexer);
        }
        return true;
        break;

      case '$':
        if (vector_started) {
          return true;
        }
        if (!*has_content || vcs_complete) {
          vector_started = true;
        }

      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        if (!*has_content) {
          numeric_started = true;
        }
        break;

      default:
        if (!*has_content) {
          vcs_started = true;
        }
    }
    advance_phpdoc(lexer);
    *has_content = true;
  }
}

static bool scan_text(TSLexer *lexer, bool is_inline, bool has_content) {
  while (true) {
    lexer->mark_end(lexer);

    switch (lexer->lookahead) {
      case '\0':
        return false;

      case '\r':
      case '\n':
        return has_content;

      case '@':
      case '\\':
        // don't allow @ or \\ at text start to not mess with tags and namespaces
        if (!has_content) {
          return false;
        }
        break;

      case '{':
        advance_phpdoc(lexer);
        if (lexer->lookahead == '@') {
          // new inline tag starts, so text node is complete
          return has_content;
        }
        break;

      case '}':
        if (is_inline) {
          // inline tag ends, so text node is complete
          return has_content;
        }
        break;

      case ' ':
        advance_phpdoc(lexer);
        switch (lexer->lookahead) {
          // check for end of comment: ' */', ' **/', ...
          case '*':
            while (lexer->lookahead == '*') {
              advance_phpdoc(lexer);
            }
            if (lexer->lookahead == '/') {
              return has_content;
            }
            break;
          // check for start of inline tag
          case '{':
            advance_phpdoc(lexer);
            if (lexer->lookahead == '@') {
              // new inline tag starts, so text node is complete
              return has_content;
            }
            break;
        }
        break;
    }
    has_content = true;
    advance_phpdoc(lexer);
  }
}

bool tree_sitter_phpdoc_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  LOG("scanner called text:%d text_after_type:%d text_in_inline_tag:%d text_not_version:%d\n",
      valid_symbols[TEXT],
      valid_symbols[TEXT_AFTER_TYPE],
      valid_symbols[TEXT_IN_INLINE_TAG],
      valid_symbols[TEXT_NOT_VERSION]);

  bool skipped_nl = false;
  bool has_content = false;
  if (
      valid_symbols[TEXT] ||
      valid_symbols[TEXT_AFTER_TYPE] ||
      valid_symbols[TEXT_IN_INLINE_TAG] ||
      valid_symbols[TEXT_NOT_VERSION]
  ) {

    if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
      if (!skip_to_text_start(lexer)) {
        return false;
      }
      skipped_nl = true;
    }

    // node start must always have a preceding space
    if (lexer->lookahead != ' ') {
      return false;
    }
    skip_phpdoc(lexer);

    if (valid_symbols[TEXT] && scan_text(lexer, false, has_content)) {
      lexer->result_symbol = TEXT;
      LOG("  scanner detected:text return:1\n");
      return true;
    }

    if (valid_symbols[TEXT_AFTER_TYPE]) {
      lexer->result_symbol = TEXT_AFTER_TYPE;
      // Ensure that we have '/** int description' and not '/** int $var description'
      if (scan_variable_name(lexer, &has_content)) {
        LOG("  scanner detected:variable_name return:0\n");
        return false;
      }
      skip_whitespace(lexer);
      if (scan_text(lexer, false, has_content)) {
        LOG("  scanner detected:text_after_type return:1\n");
        return true;
      }
    }

    if (valid_symbols[TEXT_IN_INLINE_TAG] && scan_text(lexer, true, has_content)) {
      lexer->result_symbol = TEXT_IN_INLINE_TAG;
      LOG("  scanner detected:text_in_inline_tag return:1\n");
      return true;
    }

    if (valid_symbols[TEXT_NOT_VERSION]) {
      lexer->result_symbol = TEXT_NOT_VERSION;
      // Ensure that node doesn't start with anything that looks like a version
      // - but only if we didn't skip a linebreak. Otherwhise the lexer might
      // advance over a new tag like '\n * @pa...' to check for
      // '@package_version@'. This would result in the tag being parsed as
      // valid description.
      if (!skipped_nl && scan_version(lexer, &has_content)) {
        LOG("  scanner detected:version return:0\n");
        return false;
      }
      if (scan_text(lexer, false, has_content)) {
        LOG("  scanner detected:text_not_version return:1\n");
        return true;
      }
    }
  }
  LOG("scanner detected:nothing return:0\n");
  return false;
}
