#ifdef DEBUG
    const char* token_type_to_string(TokenType type)
    {
        switch(type){
            case LINE_COMMENT:      return "LINE_COMMENT";
            case BLOCK_COMMENT:     return "BLOCK_COMMENT";
            case NESTED_COMMENT:    return "NESTED_COMMENT";
            case TODO_COMMENT:      return "TODO_COMMENT";

            case IDENTIFIER:        return "IDENTIFIER";
            case BUILTIN_CONST:     return "BUILTIN_CONST";
            case BUILTIN_FUNC:      return "BUILTIN_FUNC";

            case STRING_BYTE:       return "STRING_BYTE";
            case INTERPOLATED_BYTE: return "INTERPOLATED_BYTE";
            case ESCAPE_SEQUENCE:   return "ESCAPE_SEQUENCE";

            case BIN_PREFIX:        return "BIN_PREFIX";
            case BIN_LITERAL:       return "BIN_LITERAL";

            case OCT_PREFIX:        return "OCT_PREFIX";
            case OCT_LITERAL:       return "OCT_LITERAL";

            case DEC_LITERAL:       return "DEC_LITERAL";

            case HEX_PREFIX:        return "HEX_PREFIX";
            case HEX_LITERAL:       return "HEX_LITERAL";

            case EXPONENT:          return "EXPONENT";
            case IMAG_SUFFIX:       return "IMAG_SUFFIX";

            case ERROR_SENTINEL:    return "ERROR_SENTINEL";

            case KEYWORD:           return "KEYWORD";

            default:                return "Unknown type";
        }
    }
#else
    #define token_type_to_string(...) "DEBUG not defined for TokenType.h"
#endif
//------------------------------------------------------------------------------

