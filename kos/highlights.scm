(comment) @comment
(number) @number
(identifier) @variable
(property_identifier) @property
(string_literal) @string
(string_literal_begin) @string
(string_literal_continuation) @string
(string_literal_end) @string

[
    "_"
    (line)
    "assert"
    ;"async"
    (break_statement)
    "case"
    "catch"
    "class"
    "const"
    "constructor"
    (continue_statement)
    "default"
    "defer"
    "do"
    "else"
    "extends"
    (fallthrough_statement)
    "for"
    "fun"
    ;"get"
    "if"
    "import"
    "loop"
    ;"match"
    "public"
    "repeat"
    "return"
    ;"set"
    ;"static"
    "switch"
    "throw"
    "try"
    "var"
    "while"
    "with"
    "yield"
    "=>"
] @keyword

[
    (this)
    (super)
] @variable.builtin

[
    (false)
    (true)
    (void)
] @constant.builtin

[
    "("
    ")"
    "["
    "]"
    "{"
    "}"
] @punctuation.bracket

[
    ";"
    ":"
    "."
    ","
] @punctuation.delimiter

[
    (arithmetic_assignment_operator)
    (comparison_operator)
    (bitwise_shift_operator)
    (additive_operator)
    (multiplicative_operator)
    (bitwise_and_operator)
    (bitwise_or_operator)
    (bitwise_xor_operator)
    (logical_and_operator)
    (logical_or_operator)
    (unary_operator)
    "->"
    "..."
    "="
    "?"
] @operator
