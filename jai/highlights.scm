; Includes

[
  "#import"
  "#load"
] @include

; Keywords
[
  "struct"
  "enum"
  "enum_flags"
  "if"
  "ifx"
  "else"
  "case"
  "for"
  "while"
  "break"
  "continue"
  "defer"
  "cast"
  "xx"
] @keyword

[
  "return"
] @keyword.return

[
  "if"
  "else"
  "case"
  "break"
] @conditional

((if_expression
  [
    "then"
    "ifx"
    "else"
  ] @conditional.ternary)
  (#set! "priority" 105))

; Repeats

[
  "for"
  "while"
  "continue"
] @repeat

; Variables

; (identifier) @variable
name: (identifier) @variable
argument: (identifier) @variable
named_argument: (identifier) @variable
(member_expression (identifier) @parameter)

((identifier) @variable.builtin
  (#any-of? @variable.builtin "context"))

; Namespaces

(import (identifier) @namespace)

; Parameters

(parameter (identifier) @parameter ":" "="? (identifier)? @constant)

; (call_expression argument: (identifier) @parameter "=")

; Functions

(procedure_declaration (identifier) @function (block))

(call_expression function: (identifier) @function.call)

; Types

type: (types) @type
type: (identifier) @type
((types) @type)

modifier: (identifier) @keyword
keyword: (identifier) @keyword

((types (identifier) @type.builtin)
  (#any-of? @type.builtin
    "bool" "int" "string"
    "s8" "s16" "s32" "s64"
    "u8" "u16" "u32" "u64"
    "Type" "Any"))

(struct_declaration (identifier) @type ":" ":")

(enum_declaration (identifier) @type ":" ":")

(const_declaration (identifier) @type ":" ":" [(array_type) (pointer_type)])

(struct_literal . (identifier) @type)
(array_literal . (identifier) @type)

; ; I don't like this
; ((identifier) @type
;   (#lua-match? @type "^[A-Z][a-zA-Z0-9]*$")
;   (#not-has-parent? @type parameter procedure_declaration call_expression))

; Fields

(member_expression "." (identifier) @field)

; (anonymous_struct_type "{" (identifier) @field)

(assignment_statement (identifier) @field "="?)
(update_statement (identifier) @field)

; Constants

((identifier) @constant
  (#lua-match? @constant "^_*[A-Z][A-Z0-9_]*$")
  (#not-has-parent? @constant type parameter))

(member_expression . "." (identifier) @constant)

(enum_declaration "{" (identifier) @constant)

; Literals

(integer) @number
(float) @number

(string) @string

;(character) @character

(string (escape_sequence) @string.escape)

(boolean) @boolean

[
  (uninitialized)
  (null)
] @constant.builtin

; Operators

[
  ":"
  "="
  "+"
  "-"
  "*"
  "/"
  "%"
  ">"
  ">="
  "<"
  "<="
  "=="
  "!="
  "|"
  "~"
  "&"
  "&~"
  "<<"
  ">>"
  "<<<"
  ">>>"
  "||"
  "&&"
  "!"
  ".."
  "+="
  "-="
  "*="
  "/="
  "%="
  "&="
  "|="
  "^="
  "<<="
  ">>="
  "<<<="
  ">>>="
  "||="
  "&&="
] @operator

; Punctuation

[ "{" "}" ] @punctuation.bracket

[ "(" ")" ] @punctuation.bracket

[ "[" "]" ] @punctuation.bracket

[
  "->"
  "."
  ","
  ":"
  ";"
] @punctuation.delimiter

; Comments

[
  (block_comment)
  (comment)
] @comment @spell

; Errors

(ERROR) @error

(block_comment) @comment
