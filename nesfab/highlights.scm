(type) @type
(identifier) @identifier

(function_definition
    (identifier) @function
)
(call
    (identifier) @function
)
(asm_op_code) @function
(file_expression
    "file" @function.special
)
(macro_expression
    "macro" @function.special
)
(mapfab_expression
    "mapfab" @function.special
)
(audio_expression
    "audio" @function.special
)

[
    (boolean_literal)
    (system_literal)
    (ppu_literal)
    (file_target)
    (audio_target)
    (mapfab_target)
] @constant

[
    "("
    ")"
    "{"
    "}"
    "["
    "]"
] @punctuation.bracket

[
    ","
    ";"
] @punctuation.delimiter

[
    "abs"
    "break"
    "case"
    "charmap"
    "chrrom"
    "continue"
    "ct"
    "data"
    "default"
    "do"
    "else"
    "fence"
    "fn"
    "for"
    "goto"
    "if"
    "irq"
    "label"
    "len"
    "min"
    "max"
    "mode"
    "nmi"
    "nmi_counter"
    "omni"
    "read"
    "ready"
    "return"
    "sizeof"
    "struct"
    "swap"
    "switch"
    "vars"
    "while"
    "write"
    (modifier)
] @keyword

[
    (string_literal)
    (character_literal)
] @string

(numeric_literal) @number

(comment) @comment

[
   "."
    "="
    "<=<"
    ">=>"
    "*="
    "+="
    "-="
    "<<="
    ">>="
    "&="
    "^="
    "|="
    "@"
    "&"
    "+"
    "-"
    "~"
    "!"
    "*"
    "+"
    "-"
    "<-<"
    ">->"
    "<<"
    ">>"
    "&"
    "^"
    "|"
    "<"
    "<="
    ">"
    ">="
    "=="
    "!="
    "&&"
    "||"
] @operator
