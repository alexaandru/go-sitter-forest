(type) @type
(identifier) @identifier

(function_definition
    function_name: (identifier) @function
)
(call
    function_name: (identifier) @function
)
(goto_mode_statement
    function_name: (identifier) @function
)
(file_expression
    function_name: (identifier) @function.special
)
(macro_expression
    function_name: (identifier) @function.special
)
(mapfab_expression
    function_name: (identifier) @function.special
)
(audio_expression
    function_name: (identifier) @function.special
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
   "break"
   "case"
   "charmap"
   "chrrom"
   "continue"
   "ct"
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
   "mode"
   "nmi"
   "nmi_counter"
   "omni"
   "read"
   "ready"
   "return"
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
