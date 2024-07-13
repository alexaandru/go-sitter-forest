; Based on the Go tree-sitter repo:
; https://github.com/tree-sitter/tree-sitter-go/blob/v0.20.0/queries/highlights.scm

; Identifiers

(identifier) @variable
(field_identifier) @property

; Function call

(call_expression
  function: (identifier) @function.builtin
  (.match? @function.builtin "^(all|any|assert|bool|buffer|byte_slice|byte|call|cat|cd|chr|cp|decode|delete|encode|error|float_slice|float|getattr|getenv|hash|int|iter|keys|len|list|ls|map|ord|print|printf|reversed|set|setenv|sorted|sprintf|string|try|type|unsetenv)$"))

(call_expression
  function: (identifier) @function.call)

(call_expression
  function: (selector_expression
    field: (field_identifier) @function.method.call))

; Function declaration

(function_declaration
  name: (identifier) @function)

(parameter_list
  (parameter_declaration
   name: (identifier) @variable.parameter))

(parameter_list
  (parameter_declaration_default
   name: (identifier) @variable.parameter))

; Operators

[
  "--"
  "-"
  "-="
  ":="
  "!"
  "!="
  "**"
  "*"
  "*="
  "/"
  "/="
  "&"
  "&&"
  "%"
  "^"
  "+"
  "++"
  "+="
  "<"
  "<<"
  "<="
  "="
  "=="
  ">"
  ">="
  ">>"
  "|"
  "||"
  "?"
] @operator

[
  ";"
  "."
  ","
  ":"
] @punctuation.delimiter

(conditional_expression
  [":"] @operator)

[
  "["
  "]"
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

; Keywords

[
  "break"
  "const"
  "continue"
  "default"
  "defer"
  "range"
  "var"
] @keyword

"func" @keyword.function

"return" @keyword.return

"go" @keyword.coroutine

"for" @keyword.repeat

[
  "import"
  "from"
  "as"
] @keyword.import

[
  "case"
  "else"
  "if"
  "switch"
] @keyword.conditional

; Literals

[
  (string)
  (string_template_char)
  "'"
  (string_backtick)
] @string

(escape_sequence) @string.escape
(escape_sequence_invalid) @error
(format_sequence) @string.special
(string_template_argument) @punctuation.special

(int_literal) @number
(float_literal) @number.float

[
  (true)
  (false)
] @boolean

(nil) @constant.builtin

(comment) @comment @spell

((source_file . (comment) @preproc)
 (#lua-match? @preproc "^#!/"))
