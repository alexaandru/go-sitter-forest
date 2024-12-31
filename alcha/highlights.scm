;-------------------------------------------------------------------------------
;
; Maintainer: jpt13653903
; Capture Reference: https://neovim.io/doc/user/treesitter.html#treesitter-highlight-groups
;-------------------------------------------------------------------------------
;
(line_comment)   @spell @comment
(block_comment)  @spell @comment
(nested_comment) @spell @comment
(todo_comment)   @spell @comment.todo

(string) @spell @string
(string
  (escape_sequence) @nospell @string.escape)

[
  (bin_prefix)
  (oct_prefix)
  (hex_prefix)
] @type.builtin

[
  (bin_literal)
  (oct_literal)
  (dec_literal)
  (hex_literal)
] @number

(exponent) @property

(imag_suffix) @attribute.builtin

(filename) @string.special.path
(filename
  (escape_sequence) @string.escape)

(identifier) @variable
(builtin_const) @constant.builtin
(builtin_func) @function.builtin

(builtin_variable) @variable.builtin

[
  "true"
  "false"
] @boolean

[
  "rtl"
  "fsm"
  "hdl"
  "operator"
] @keyword

[
  "wait"
] @keyword.coroutine

[
  "func"
] @keyword.function

[
  "posedge"
  "negedge"
] @keyword.operator

[
  "import"
  "as"
] @keyword.import

[
  "class"
  "enum"
  "struct"
  "group"
] @keyword.type

[
  "void"
  "auto"
  "pin"
  "net"
  "byte"
  "char"
  "num"
] @type.buildin

[
  "input"
  "output"
  "public"
  "private"
  "protected"
  "inline"
] @keyword.modifier

[
  "for"
  "while"
  "loop"
] @keyword.repeat

[
  "in"
] @keyword.operator

[
  "return"
  "break"
  "continue"
  "goto"
] @keyword.return

[
  "stimulus"
  "emulate"
  "assert"
] @keyword.debug

[
  "if"
  "else"
  "switch"
  "case"
  "default"
] @keyword.conditional

[
  "alias"
] @keyword.directive.define

[
  "++"
  "--"
  ".."
  ":"
  "&"
  "~&"
  "|"
  "~|"
  "^"
  "~^"
  "~"
  "!"
  "`"
  "+"
  "-"
  "*"
  "/"
  "%"
  "**"
  "<<"
  ">>"
  "<"
  ">"
  "<="
  ">="
  "=="
  "!="
  "?"
  "?:"
  "?."
  "="
  ":="
  "~="
  "+="
  "-="
  "*="
  "/="
  "%="
  "^="
  "&="
  "|="
  "**="
  "<<="
  ">>="
  "@"
  "#"
  "##"
  "[*"
  "[->"
  "[="
  "|->"
  "|=>"
  "||"
  "&&"
  "&&&"
] @operator

(ternary
  "?" @keyword.conditional.ternary
  ":" @keyword.conditional.ternary)
(ternary
  "?:" @keyword.conditional.ternary)

[
  "."
  "'"
  ".{"
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

(vector_concat
  ":(" @operator
  ")"  @operator)

(array_concat
  ":[" @operator
  "]"  @operator)

(repetition
  [ "[*" "[->" "[=" ] @operator
  "]"  @operator)

(wait
  .
  "@(" @operator
  ")" @operator
  .)

[
  "$"
] @string

(stringification
  .
  "$(" @string
  ")" @string
  .)

(string
  "{" @nospell @punctuation.special
  (_)* @nospell
  "}" @nospell @punctuation.special)
(filename
  "{" @punctuation.special
  "}" @punctuation.special)

(attribute_list
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

(attribute_assignment
  .
  (identifier) @attribute)

(member_reference
  (_)
  (identifier) @variable.member)

(type_identifier
  (identifier)* @module
  (identifier) @type .)
(definition
  (type_identifier
    (identifier)* @module
    (identifier) @constructor .)
  (parameter_list))
(class_definition
  name: (identifier) @type.definition)
(struct_definition
  name: (identifier) @type.definition)
(enum_definition
  name: (identifier) @type.definition)
(group_definition
  name: (identifier) @type.definition)

(function_call
  (identifier) @function.call)
(function_def
  name: (identifier) @function)
(parameter_def
  parameter: (_) @variable.parameter)

(attribute_reference
  (_)*
  (identifier) @attribute .)

(import
  (identifier) @module)

(label
  (identifier) @label)
(goto
  (identifier) @label)

