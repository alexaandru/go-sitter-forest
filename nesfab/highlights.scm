(type) @type
(identifier) @identifier

[
    (boolean_literal)
    (system_literal)
    (ppu_literal)
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
   "continue"
   "ct"
   "default"
   "do"
   "else"
   ; "fence"
   "fn"
   "for"
   "goto"
   "if"
   "irq"
   "mode"
   "nmi"
   "omni"
   "read"
   "return"
   "struct"
   "swap"
   "switch"
   "vars"
   "while"
   "write"
] @keyword
(modifier) @keyword

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
