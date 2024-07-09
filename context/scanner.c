#include "parser.h"
#include <string.h>
#include <wctype.h>
#include <stdio.h>

#define UNUSED_VAR(x) (void)(x)

// #define DEBUG

enum TokenType
{
  COMMAND_STOP,
  SCOPES_STOP,
  PARAGRAPH_MARK,
  TEXT,
  CODE_MPINCLUSIONS_BODY,
  CODE_USEMPGRAPHIC_BODY,
  CODE_REUSABLEMPGRAPHIC_BODY,
  CODE_MPCODE_BODY,
  CODE_MPPAGE_BODY,
  CODE_STATICMPFIGURE_BODY,
  CODE_TIKZ_BODY,
  CODE_LUA_BODY,
  TYPING_HTML_BODY,
  TYPING_CSS_BODY,
  TYPING_MP_BODY,
  TYPING_LUA_BODY,
  TYPING_XML_BODY,
  TYPING_PARSEDXML_BODY,
  TYPING_TEX_BODY,
  TYPING_UNNAMED_BODY,
};

void *tree_sitter_context_external_scanner_create() { return NULL; }
void tree_sitter_context_external_scanner_destroy(void *p) { UNUSED_VAR(p); }
void tree_sitter_jcontext_external_scanner_reset(void *p) { UNUSED_VAR(p); }
unsigned tree_sitter_context_external_scanner_serialize(void *p, char *buffer)
{
  UNUSED_VAR(p);
  UNUSED_VAR(buffer);
  return 0;
}
void tree_sitter_context_external_scanner_deserialize(void *p, const char *b, unsigned n)
{
  UNUSED_VAR(p);
  UNUSED_VAR(b);
  UNUSED_VAR(n);
}

static bool is_special_char(char c);
static void debug_lookahead(char c, char *msg);
static bool char_ends_command(char c);
static bool char_ends_scope(char c);

static void advance_context(TSLexer *lexer)
{
  lexer->advance_context(lexer, false);
  if (lexer->lookahead == '\r') {
    lexer->advance_context(lexer, false);
  }
  
}

static void skip_context(TSLexer *lexer) 
{ 
  lexer->advance_context(lexer, true); 
  if (lexer->lookahead == '\r') {
    lexer->advance_context(lexer, true);
  }
}

// # UTILITY FUNCTIONS

// Check for a ConTeXt special character
static bool is_special_char(char c)
{
  switch (c)
  {
  case '^':
    return true;
  case '#':
    return true;
  case '$':
    return true;
  case '%':
    return true;
  case '&':
    return true;
  case '_':
    return true;
  case '{':
    return true;
  case '}':
    return true;
  case '|':
    return true;
  case '~':
    return true;
  case '\\':
    return true;
  }
  return false;
}

static bool char_ends_command(char c)
{
  // Chars that do not end a command:
  //
  // '%':  // We have a comment; this is not necessarily a stop
  // '[':  // We have the start of an option block; still in command
  // '\n': Special case we need to handle to look for EOLEOL
  // '\r': Special case we need to handle to look for EOLEOL

  switch (c)
  {
  case '%':
    return false;
  case '[':
    return false;
  case '\n':
    return false;
  case '\r':
    return false;
  }

  return true;
}

static bool char_ends_scope(char c)
{
  // Chars that do not end scope:
  //
  // '%':  A command doesn't necessarily stop the scope
  // '{':  Entering a new scope; the set is not complete
  // '\n': Special case we need to handle to look for EOLEOL
  // '\r': Special case we need to handle to look for EOLEOL

  switch (c)
  {
  case '%':
    return false;
  case '{':
    return false;
  case '\n':
    return false;
  case '\r':
    return false;
  }

  return true;
}

// Helpful for tracking state
static void debug_lookahead(char c, char *msg)
{
#ifdef DEBUG
  printf("#### %s\n", msg);
  printf("#### [Character under test: \'%c\' ]\n", c);
  fflush(stdout);
#else
  UNUSED_VAR(c);
  UNUSED_VAR(msg);
#endif
}

// TOKEN FUNCTIONS

//
static bool scan_command_stop(TSLexer *lexer)
{
  // Determine if a command has ended in the source file.
  //
  // ConTeXt commands have a name, then zero or more square bracket blocks with
  // options or settings.
  lexer->result_symbol = COMMAND_STOP;
  lexer->mark_end(lexer);

  while (lexer->lookahead != 0)
  {

    // skip whitespace, but not EOLs
    if (lexer->lookahead == ' ' || lexer->lookahead == '\t')
    {
      skip_context(lexer);
      continue;
    }

    if (char_ends_command(lexer->lookahead))
    {
      lexer->mark_end(lexer);
      return true;
    }

    switch (lexer->lookahead)
    {
    case '%':
      return false; // We have a comment; this is not necessarily a stop
    case '[':
      return false; // We enter a block; the command is not complete
    }

    if (lexer->lookahead == '\n')
    {
      skip_context(lexer);
      if (lexer->lookahead == 0)
        return true;

      if (lexer->lookahead == ' ' || lexer->lookahead == '\t')
      {
        skip_context(lexer);
        continue;
      }

      if (char_ends_command(lexer->lookahead))
      {
        lexer->mark_end(lexer);
        return true;
      }

      switch (lexer->lookahead)
      {
      case '%':
        return false; // We have a comment; this is not necessarily a stop
      case '[':
        return false; // We enter a block; the command is not complete
      }

      // a sequence of EOL EOL ends the command
      if (lexer->lookahead == '\n')
      {
        lexer->mark_end(lexer);
        return true;
      }
      advance_context(lexer);
      continue;
    }
    advance_context(lexer);
  }
  // If we find the end of the file, the command is stopped
  return true;
}

static bool scan_scopes_stop(TSLexer *lexer)
{
  // Determine if a scope set has ended in the source file.
  //
  // ConTeXt commands can be followed by zero or more scopes.
  lexer->result_symbol = SCOPES_STOP;
  lexer->mark_end(lexer);

  while (lexer->lookahead != 0)
  {

    // skip whitespace, but not EOLs
    if (lexer->lookahead == ' ' || lexer->lookahead == '\t')
    {
      skip_context(lexer);
      continue;
    }

    if (char_ends_scope(lexer->lookahead))
    {
      lexer->mark_end(lexer);
      return true;
    }

    switch (lexer->lookahead)
    {
    case '%':
      return false; // We have a comment; this is not necessarily a stop
    case '{':
      return false; // We enter a scope; the scope set is not complete
    }

    if (lexer->lookahead == '\n')
    {
      skip_context(lexer);
      if (lexer->lookahead == 0)
        return true;

      if (lexer->lookahead == ' ' || lexer->lookahead == '\t')
      {
        skip_context(lexer);
        continue;
      }

      if (char_ends_scope(lexer->lookahead))
      {
        lexer->mark_end(lexer);
        return true;
      }

      switch (lexer->lookahead)
      {
      case '%':
        return false; // We have a comment; this is not necessarily a stop
      case '{':
        return false; // We enter a scope; the scope set is not complete
      }

      // a sequence of EOL EOL ends the scope set
      if (lexer->lookahead == '\n')
      {
        lexer->mark_end(lexer);
        return true;
      }
    }
    else
    {
      // Single newlines are okay in scope groups.
      return false;
    }

    advance_context(lexer);
  }

  // If we fall of the end of the file, the scope if complete.
  return true;
}

static bool scan_paragraph_mark(TSLexer *lexer)
{
  // Scan for two or more consecutive EOLs, and form a token to indicate a paragraph break.
  // FIXME the EOLs should be system agnostic.
  lexer->result_symbol = PARAGRAPH_MARK;
  lexer->mark_end(lexer);

  debug_lookahead(lexer->lookahead, "Scanning for PARAGRAPH_MARK");

  if (lexer->lookahead == '\n')
  {
    debug_lookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOL");
    advance_context(lexer);
    if (lexer->lookahead == '0')
    {
      debug_lookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOF");
      return false;
    }
    if (lexer->lookahead == '\n')
    {
      debug_lookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOL, EOL");
      advance_context(lexer);
      lexer->mark_end(lexer);
      return true;
    }
  }
  return false;
}

static bool scan_text(TSLexer *lexer)
{
  // Scan forward to form a text token, stopping before consuming:
  // - a special character
  // - EOF
  // - a sequence of two EOLs
  // FIXME the EOLs should be system agnostic.
  // FIXME we also need to stop a text block upon finding a starttext or startcomponent?

  lexer->result_symbol = TEXT;
  lexer->mark_end(lexer);

  debug_lookahead(lexer->lookahead, "Scanning for TEXT");

  int step = 0;

  while (lexer->lookahead != 0)
  {

    debug_lookahead(lexer->lookahead, "TEXT - In scan loop");

    if (is_special_char(lexer->lookahead))
    {
      debug_lookahead(lexer->lookahead, "TEXT - Found Special");
      if (step > 0)
      {
        return true;
      }
      else
      {
        return false;
      }
    }

    if (lexer->lookahead == '\n')
    {
      // ???: will setting this to skip break the token?
      debug_lookahead(lexer->lookahead, "TEXT - Found EOL");
      advance_context(lexer);

      if (lexer->lookahead == 0)
      {
        debug_lookahead(lexer->lookahead, "TEXT - Found EOF");
        lexer->mark_end(lexer);
        return true;
      }

      if (lexer->lookahead == '\n')
      {
        debug_lookahead(lexer->lookahead, "TEXT - Found EOL,EOL");
        if (step > 0)
        {
          return true;
        }
        else
        {
          return false;
        }
      }

      if (is_special_char(lexer->lookahead))
      {
        debug_lookahead(lexer->lookahead, "TEXT - Found Special");
        lexer->mark_end(lexer);
        return true;
      }
    }
    step = step + 1;
    advance_context(lexer);
    lexer->mark_end(lexer);
  }
  lexer->mark_end(lexer);
  return true;
}

static bool find_verbatim(TSLexer *lexer, const char *keyword)
{
  bool has_marked = false;
  while (true)
  {
    if (lexer->eof(lexer))
    {
      break;
    }

    bool advanced = false;
    bool failed = false;
    for (size_t i = 0; keyword[i]; i++)
    {
      if (lexer->eof(lexer))
      {
        return has_marked;
      }

      if (lexer->lookahead != keyword[i])
      {
        failed = true;
        break;
      }

      advance_context(lexer);
      advanced = true;
    }

    if (failed && !advanced)
    {
      advance_context(lexer);
      lexer->mark_end(lexer);
      has_marked = true;
      continue;
    }

    if (!failed)
    {

      if (lexer->eof(lexer))
      {
        return has_marked;
      }

      char c = lexer->lookahead;

      failed = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');

      if (failed)
      {
        lexer->mark_end(lexer);
        has_marked = true;
        continue;
      }

      return has_marked;
    }
  }

  return has_marked;
}

bool tree_sitter_context_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols)
{

  UNUSED_VAR(payload);

  if (valid_symbols[COMMAND_STOP])
  {
    return scan_command_stop(lexer);
  }

  if (valid_symbols[SCOPES_STOP])
  {
    return scan_scopes_stop(lexer);
  }

  if (valid_symbols[PARAGRAPH_MARK])
  {
    return scan_paragraph_mark(lexer);
  }

  if (valid_symbols[TEXT])
  {
    return scan_text(lexer);
  }

  if (valid_symbols[CODE_TIKZ_BODY])
  {
    lexer->result_symbol = CODE_TIKZ_BODY;
    return find_verbatim(lexer, "\\stoptikzpicture");
  }

  if (valid_symbols[CODE_LUA_BODY])
  {
    lexer->result_symbol = CODE_LUA_BODY;
    return find_verbatim(lexer, "\\stopluacode");
  }

  if (valid_symbols[TYPING_HTML_BODY])
  {
    lexer->result_symbol = TYPING_HTML_BODY;
    return find_verbatim(lexer, "\\stopHTML");
  }

  if (valid_symbols[TYPING_CSS_BODY])
  {
    lexer->result_symbol = TYPING_CSS_BODY;
    return find_verbatim(lexer, "\\stopCSS");
  }

  if (valid_symbols[TYPING_MP_BODY])
  {
    lexer->result_symbol = TYPING_MP_BODY;
    return find_verbatim(lexer, "\\stopMP");
  }

  if (valid_symbols[TYPING_LUA_BODY])
  {
    lexer->result_symbol = TYPING_LUA_BODY;
    return find_verbatim(lexer, "\\stopLUA");
  }

  if (valid_symbols[TYPING_XML_BODY])
  {
    lexer->result_symbol = TYPING_XML_BODY;
    return find_verbatim(lexer, "\\stopXML");
  }

  if (valid_symbols[TYPING_PARSEDXML_BODY])
  {
    lexer->result_symbol = TYPING_PARSEDXML_BODY;
    return find_verbatim(lexer, "\\stopPARSEDXML");
  }

  if (valid_symbols[TYPING_TEX_BODY])
  {
    lexer->result_symbol = TYPING_TEX_BODY;
    return find_verbatim(lexer, "\\stopTEX");
  }

  if (valid_symbols[TYPING_UNNAMED_BODY])
  {
    lexer->result_symbol = TYPING_UNNAMED_BODY;
    return find_verbatim(lexer, "\\stoptyping");
  }

  if (valid_symbols[CODE_MPINCLUSIONS_BODY])
  {
    lexer->result_symbol = CODE_MPINCLUSIONS_BODY;
    return find_verbatim(lexer, "\\stopMPinclusions");
  }

  if (valid_symbols[CODE_USEMPGRAPHIC_BODY])
  {
    lexer->result_symbol = CODE_USEMPGRAPHIC_BODY;
    return find_verbatim(lexer, "\\stopuseMPgraphic");
  }

  if (valid_symbols[CODE_REUSABLEMPGRAPHIC_BODY])
  {
    lexer->result_symbol = CODE_REUSABLEMPGRAPHIC_BODY;
    return find_verbatim(lexer, "\\stopreusableMPgraphic");
  }

  if (valid_symbols[CODE_MPCODE_BODY])
  {
    lexer->result_symbol = CODE_MPCODE_BODY;
    return find_verbatim(lexer, "\\stopMPcode");
  }

  if (valid_symbols[CODE_MPPAGE_BODY])
  {
    lexer->result_symbol = CODE_MPPAGE_BODY;
    return find_verbatim(lexer, "\\stopMPpage");
  }

  if (valid_symbols[CODE_STATICMPFIGURE_BODY])
  {
    lexer->result_symbol = CODE_STATICMPFIGURE_BODY;
    return find_verbatim(lexer, "\\stopstaticMPfigure");
  }

  return false;
}
