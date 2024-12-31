// #define DEBUG
//------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
//------------------------------------------------------------------------------

#include "parser.h"
#include "debug_macros.h"
//------------------------------------------------------------------------------

#include "TokenType.h"
#include "TokenTree.h"
//------------------------------------------------------------------------------

// These headers contain the "register_*" functions
#include "core.h"
//------------------------------------------------------------------------------

typedef struct ScannerTag{
    int temp;
} Scanner;
//------------------------------------------------------------------------------

#include "TokenType.inc"
#include "TokenTree.inc"
//------------------------------------------------------------------------------

static TokenTree* token_tree     = 0;
static int        instance_count = 0;
//------------------------------------------------------------------------------

void* tree_sitter_alcha_external_scanner_create()
{
    if(!token_tree){
        token_tree = token_tree_alcha_new();
        if(!token_tree){
            error("Cannot allocate memory for the token tree");
            return 0;
        }

        debug("Building the token tree...");

        register_alcha_core(token_tree);

        debug("Balancing the token tree");
        token_tree_alcha_balance(token_tree);
    }
    instance_count++;

    Scanner* scanner = ts_calloc(1, sizeof(Scanner));

    return scanner;
}
//------------------------------------------------------------------------------

void tree_sitter_alcha_external_scanner_destroy(Scanner* scanner)
{
    ts_free(scanner);

    instance_count--;
    if(!instance_count){
        if(token_tree) token_tree_alcha_free(token_tree);
        token_tree = 0;
    }
}
//------------------------------------------------------------------------------

unsigned tree_sitter_alcha_external_scanner_serialize(Scanner* scanner, char* buffer)
{
    memcpy(buffer, scanner, sizeof(Scanner));
    return sizeof(Scanner);
}
//------------------------------------------------------------------------------

void tree_sitter_alcha_external_scanner_deserialize(Scanner* scanner, const char* buffer, unsigned length)
{
    memcpy(scanner, buffer, length);
}
//------------------------------------------------------------------------------

static bool whitespace(int32_t character)
{
    switch(character){
        // Space
        case 0x0020: case 0x0009: case 0x00A0: case 0x1680: case 0x2000:
        case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005:
        case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A:
        case 0x202F: case 0x200B: case 0x205F: case 0x3000: case 0xFEFF:
            return true;

        // Newline
        case 0x0A: case 0x0D: case 0x0B: case 0x0C: case 0x85:
        case 0x2028: case 0x2029:
            return true;

        default:
            return false;
    }
}
//------------------------------------------------------------------------------

static void skip_whitespace(TSLexer* lexer)
{
    while(whitespace(lexer->lookahead)){
        lexer->advance_alcha(lexer, true);
    }
}
//------------------------------------------------------------------------------

static void line_comment(TSLexer* lexer)
{
    while(!lexer->eof(lexer)){
        if(lexer->lookahead == '\r') return;
        if(lexer->lookahead == '\n') return;
        lexer->advance_alcha(lexer, false);
    }
}
//------------------------------------------------------------------------------

static void block_comment(TSLexer* lexer)
{
    lexer->advance_alcha(lexer, false);

    while(!lexer->eof(lexer)){
        if(lexer->lookahead == '*'){
            lexer->advance_alcha(lexer, false);
            if(lexer->lookahead == '/'){
                lexer->advance_alcha(lexer, false);
                return;
            }
        }else{
            lexer->advance_alcha(lexer, false);
        }
    }
}
//------------------------------------------------------------------------------

static void nested_comment(TSLexer* lexer)
{
    lexer->advance_alcha(lexer, false);

    while(!lexer->eof(lexer)){
        if(lexer->lookahead == '+'){
            lexer->advance_alcha(lexer, false);
            if(lexer->lookahead == '/'){
                lexer->advance_alcha(lexer, false);
                return;
            }
        }else if(lexer->lookahead == '/'){
            lexer->advance_alcha(lexer, false);
            if(lexer->lookahead == '+') nested_comment(lexer);
        }else{
            lexer->advance_alcha(lexer, false);
        }
    }
}
//------------------------------------------------------------------------------

static bool bin_digit(int32_t character)
{
    return (character >= '0' && character <= '1');
}
//------------------------------------------------------------------------------

static void bin_literal(TSLexer* lexer)
{
    if(!bin_digit(lexer->lookahead) && lexer->lookahead != '_') return;
    lexer->advance_alcha(lexer, false);
    while(!lexer->eof(lexer)){
        if(!bin_digit(lexer->lookahead) && lexer->lookahead != '_') break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);

    if(lexer->lookahead != '.' ) return;
    lexer->advance_alcha(lexer, false);
    if(!bin_digit(lexer->lookahead) && lexer->lookahead != '_') return;
    lexer->advance_alcha(lexer, false);
    while(!lexer->eof(lexer)){
        if(!bin_digit(lexer->lookahead) && lexer->lookahead != '_') break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);
}
//------------------------------------------------------------------------------

static bool oct_digit(int32_t character)
{
    return (character >= '0' && character <= '7');
}
//------------------------------------------------------------------------------

static void oct_literal(TSLexer* lexer)
{
    if(!oct_digit(lexer->lookahead) && lexer->lookahead != '_') return;
    lexer->advance_alcha(lexer, false);
    while(!lexer->eof(lexer)){
        if(!oct_digit(lexer->lookahead) && lexer->lookahead != '_') break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);

    if(lexer->lookahead != '.' ) return;
    lexer->advance_alcha(lexer, false);
    if(!oct_digit(lexer->lookahead) && lexer->lookahead != '_') return;
    lexer->advance_alcha(lexer, false);
    while(!lexer->eof(lexer)){
        if(!oct_digit(lexer->lookahead) && lexer->lookahead != '_') break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);
}
//------------------------------------------------------------------------------

static void oct_chars(TSLexer* lexer)
{
    while(!lexer->eof(lexer)){
        if(!oct_digit(lexer->lookahead)) return;
        lexer->advance_alcha(lexer, false);
    }
}
//------------------------------------------------------------------------------

static bool dec_digit(int32_t character)
{
    return (character >= '0' && character <= '9');
}
//------------------------------------------------------------------------------

static void dec_literal(TSLexer* lexer)
{
    if(!dec_digit(lexer->lookahead)) return;
    lexer->advance_alcha(lexer, false);
    while(!lexer->eof(lexer)){
        if(!dec_digit(lexer->lookahead) && lexer->lookahead != '_') break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);

    if(lexer->lookahead != '.' ) return;
    lexer->advance_alcha(lexer, false);
    if(!dec_digit(lexer->lookahead) && lexer->lookahead != '_') return;
    lexer->advance_alcha(lexer, false);
    while(!lexer->eof(lexer)){
        if(!dec_digit(lexer->lookahead) && lexer->lookahead != '_') break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);
}
//------------------------------------------------------------------------------

static bool hex_digit(int32_t character)
{
    return (character >= '0' && character <= '9') ||
           (character >= 'a' && character <= 'f') ||
           (character >= 'A' && character <= 'F');
}
//------------------------------------------------------------------------------

static void hex_literal(TSLexer* lexer)
{
    if(!hex_digit(lexer->lookahead) && lexer->lookahead != '_') return;
    lexer->advance_alcha(lexer, false);
    while(!lexer->eof(lexer)){
        if(!hex_digit(lexer->lookahead) && lexer->lookahead != '_') break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);

    if(lexer->lookahead != '.' ) return;
    lexer->advance_alcha(lexer, false);
    if(!hex_digit(lexer->lookahead) && lexer->lookahead != '_') return;
    lexer->advance_alcha(lexer, false);
    while(!lexer->eof(lexer)){
        if(!hex_digit(lexer->lookahead) && lexer->lookahead != '_') break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);
}
//------------------------------------------------------------------------------

static void hex_chars(TSLexer* lexer, int length)
{
    lexer->advance_alcha(lexer, false);

    while(!lexer->eof(lexer)){
        if(!hex_digit(lexer->lookahead)) return;
        lexer->advance_alcha(lexer, false);
        length--;
        if(length == 0) return;
    }
}
//------------------------------------------------------------------------------

static bool non_digit(int32_t character)
{
    return (character >= 'a' && character <= 'z') ||
           (character >= 'A' && character <= 'Z') ||
           (character == '_'                    ) ||
           (character >= 0x80 && !whitespace(character));
}
//------------------------------------------------------------------------------

static void html_name(TSLexer* lexer)
{
    lexer->advance_alcha(lexer, false);

    while(!lexer->eof(lexer)){
        if((lexer->lookahead < 'a' || lexer->lookahead > 'z') &&
           (lexer->lookahead < 'A' || lexer->lookahead > 'Z')) break;
        lexer->advance_alcha(lexer, false);
    }
    if(lexer->lookahead == ';') lexer->advance_alcha(lexer, false);
}
//------------------------------------------------------------------------------

static void escape_sequence(TSLexer* lexer)
{
    lexer->advance_alcha(lexer, false);

    switch(lexer->lookahead){
        case 'x':
            hex_chars(lexer, 2);
            break;
        case 'u':
            hex_chars(lexer, 4);
            break;
        case 'U':
            hex_chars(lexer, 8);
            break;
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7':
            oct_chars(lexer);
            break;
        case '&':
            html_name(lexer);
            break;
        default:
            lexer->advance_alcha(lexer, false);
            break;
    }
}
//------------------------------------------------------------------------------

static void exponent(TSLexer* lexer)
{
    lexer->advance_alcha(lexer, false);

    if(lexer->lookahead == '-' || lexer->lookahead == '+')
        lexer->advance_alcha(lexer, false);

    while(!lexer->eof(lexer)){
        if(!dec_digit(lexer->lookahead)) return;
        lexer->advance_alcha(lexer, false);
    }
}
//------------------------------------------------------------------------------

static void identifier(TSLexer* lexer)
{
    while(!lexer->eof(lexer)){
        if(!dec_digit(lexer->lookahead) && !non_digit(lexer->lookahead)) break;
        lexer->advance_alcha(lexer, false);
    }
    lexer->mark_end(lexer);
}
//------------------------------------------------------------------------------

#define RETURN(type) do{                                                               \
    lexer->result_symbol = type;                                                       \
    debug("Returning %s", valid_symbols[type] ? token_type_to_string(type) : "false"); \
    return valid_symbols[type];                                                        \
}while(0);

#define RETURN_FALSE do{         \
    debug("Returning false..."); \
    return false;                \
}while(0);
//------------------------------------------------------------------------------

bool tree_sitter_alcha_external_scanner_scan(Scanner* scanner, TSLexer* lexer, const bool* valid_symbols)
{
    if(lexer->eof(lexer)) RETURN_FALSE;

    #ifdef DEBUG
        if(valid_symbols[ERROR_SENTINEL]){
            debug("Error correction mode");
        }else{
            debug("Looking for:");
            for(int n = 0; n < ERROR_SENTINEL; n++){
                if(valid_symbols[n]) printf("    %s\n", token_type_to_string(n));
            }
            printf("\n");
        }
    #endif

    if(valid_symbols[STRING_BYTE] && valid_symbols[ESCAPE_SEQUENCE] && !valid_symbols[ERROR_SENTINEL]){
        switch(lexer->lookahead){
            case '"':
                RETURN_FALSE;
            case '\\':
                escape_sequence(lexer);
                RETURN(ESCAPE_SEQUENCE);
            default:
                lexer->advance_alcha(lexer, false);
                RETURN(STRING_BYTE);
        }
    }

    if(valid_symbols[INTERPOLATED_BYTE] && valid_symbols[ESCAPE_SEQUENCE] && !valid_symbols[ERROR_SENTINEL]){
        switch(lexer->lookahead){
            case '"':
            case '{':
                RETURN_FALSE;
            case '\\':
                escape_sequence(lexer);
                RETURN(ESCAPE_SEQUENCE);
            default:
                lexer->advance_alcha(lexer, false);
                RETURN(INTERPOLATED_BYTE);
        }
    }

    if(valid_symbols[EXPONENT] && !valid_symbols[ERROR_SENTINEL]){
        switch(lexer->lookahead){
            case 'e': case 'p':
            case 'E': case 'P':
                exponent(lexer);
                RETURN(EXPONENT);
            default:
                break;
        }
    }

    if(valid_symbols[IMAG_SUFFIX] && !valid_symbols[ERROR_SENTINEL]){
        switch(lexer->lookahead){
            case 'i': case 'j':
                lexer->advance_alcha(lexer, false);
                RETURN(IMAG_SUFFIX);
            default:
                break;
        }
    }

    if(!valid_symbols[BIN_LITERAL] &&
       !valid_symbols[OCT_LITERAL] &&
       !valid_symbols[HEX_LITERAL]) skip_whitespace(lexer);

    if(lexer->eof(lexer)) RETURN_FALSE;

    if(lexer->lookahead >= 0x80) debug("Character = 0x%u", lexer->lookahead);

    switch(lexer->lookahead){
        case '/':
            lexer->advance_alcha(lexer, false);
            switch(lexer->lookahead){
                case '/':
                    line_comment(lexer);
                    RETURN(LINE_COMMENT);
                case '*':
                    block_comment(lexer);
                    RETURN(BLOCK_COMMENT);
                case '+':
                    nested_comment(lexer);
                    RETURN(NESTED_COMMENT);
                default:
                    RETURN_FALSE;
            }

        case '!':
            lexer->advance_alcha(lexer, false);
            if(lexer->lookahead == '!'){
                if(valid_symbols[TODO_COMMENT]){
                    line_comment(lexer);
                    RETURN(TODO_COMMENT);
                }else{
                    RETURN_FALSE;
                }
            }else{
                RETURN_FALSE;
            }

        case '0':
            lexer->advance_alcha(lexer, false);
            switch(lexer->lookahead){
                case 'b':
                    lexer->advance_alcha(lexer, false);
                    RETURN(BIN_PREFIX);
                case 'o':
                    lexer->advance_alcha(lexer, false);
                    RETURN(OCT_PREFIX);
                case 'x':
                    lexer->advance_alcha(lexer, false);
                    RETURN(HEX_PREFIX);
                default:
                    if(!valid_symbols[ERROR_SENTINEL]){
                        if(valid_symbols[BIN_LITERAL]){
                            bin_literal(lexer);
                            RETURN(BIN_LITERAL);
                        }else if(valid_symbols[OCT_LITERAL]){
                            oct_literal(lexer);
                            RETURN(OCT_LITERAL);
                        }else if(valid_symbols[DEC_LITERAL]){
                            dec_literal(lexer);
                            RETURN(DEC_LITERAL);
                        }else if(valid_symbols[HEX_LITERAL]){
                            hex_literal(lexer);
                            RETURN(HEX_LITERAL);
                        }
                    }else{
                        if(valid_symbols[DEC_LITERAL]){
                            dec_literal(lexer);
                            RETURN(DEC_LITERAL);
                        }
                    }
                    RETURN_FALSE;
            }

        case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            if(!valid_symbols[ERROR_SENTINEL]){
                if(valid_symbols[BIN_LITERAL]){
                    bin_literal(lexer);
                    RETURN(BIN_LITERAL);
                }else if(valid_symbols[OCT_LITERAL]){
                    oct_literal(lexer);
                    RETURN(OCT_LITERAL);
                }else if(valid_symbols[DEC_LITERAL]){
                    dec_literal(lexer);
                    RETURN(DEC_LITERAL);
                }else if(valid_symbols[HEX_LITERAL]){
                    hex_literal(lexer);
                    RETURN(HEX_LITERAL);
                }
            }else{
                if(valid_symbols[DEC_LITERAL]){
                    dec_literal(lexer);
                    RETURN(DEC_LITERAL);
                }
            }
            RETURN_FALSE;

        default:
            if(!valid_symbols[ERROR_SENTINEL] && (hex_digit(lexer->lookahead) || lexer->lookahead == '_')){
                if(valid_symbols[BIN_LITERAL]){
                    bin_literal(lexer);
                    RETURN(BIN_LITERAL);
                }else if(valid_symbols[OCT_LITERAL]){
                    oct_literal(lexer);
                    RETURN(OCT_LITERAL);
                }else if(valid_symbols[HEX_LITERAL]){
                    hex_literal(lexer);
                    RETURN(HEX_LITERAL);
                }
            }

            if((valid_symbols[IDENTIFIER]    ||
                valid_symbols[BUILTIN_CONST] ||
                valid_symbols[BUILTIN_FUNC]  ||
                valid_symbols[BUILTIN_VARIABLE]) && non_digit(lexer->lookahead)){
                if(lexer->lookahead == 0x03C0){ // pi
                    lexer->advance_alcha(lexer, false);
                    if(!dec_digit(lexer->lookahead) && !non_digit(lexer->lookahead)){
                        RETURN(BUILTIN_CONST);
                    }
                }
                TokenType type = token_tree_alcha_match(token_tree, lexer);
                if(!dec_digit(lexer->lookahead) && !non_digit(lexer->lookahead)){
                    switch(type){
                        case KEYWORD:          RETURN_FALSE;
                        case BUILTIN_CONST:    RETURN(BUILTIN_CONST);
                        case BUILTIN_FUNC:     RETURN(BUILTIN_FUNC);
                        case BUILTIN_VARIABLE: RETURN(BUILTIN_VARIABLE);
                        default: break;
                    }
                }
                identifier(lexer);
                RETURN(IDENTIFIER);
            }
            RETURN_FALSE;
    }

    RETURN_FALSE;
}
//------------------------------------------------------------------------------

