;; Follows these highlight groups: https://docs.helix-editor.com/themes.html

[
  "func"
  "overload"
  "test"
  "assert"
  "record"
  "resource"
  "enum"
  "variant"
  "constructor"
] @keyword

[
 "let"
 "var"
] @keyword.storage

[
  "break"
  "continue"
] @keyword.control

[
  "return"
] @keyword.control.return

[
  "throw"
] @keyword.control.exception

[
  "if"
  "else"
] @keyword.control.conditional

[
  "while"
  "for"
] @keyword.control.repeat

[
  ; "import"
  "export"
  "use"
  "package"
] @keyword.import

[
  "{"
  "}"
  "["
  "]"
  "("
  ")"
] @punctuation.bracket

[
  ":"
;  "::"
  ";"
  ","
  "@"
  "->"
;  "=>"
  "."
  "?."
  ; in optional and result types
  "?"
  "!"
  "/"
] @punctuation.delimiter

(func (ident) @function)
(overload (ident) @function)
(call (ident) @function.call)
(member_call (member_operator) (call (ident) @method.call))

((ident) @variable.builtin (#match? @variable.builtin "self"))
(resource (ident) @type ("{") )
(record (ident) @type ("{"))
(type (ident)) @type
(type (ident) @type.builtin (#match? @type.builtin "^(s8|s16|s32|s64|u8|u16|u32|u64|f32|f64|bool|char|string)$"))
(enum (ident) @type.enum ("{"))
(enum case: (ident) @type.enum.variant)
(variant (ident) @type.enum ("{"))
(variant case: (ident) @type.enum.variant)

(record ("{") (field (ident) @variable.other.member))
(variant (field ((ident) @variable.other.member)))
(member_call (member_operator) (ident) @variable.other.member)
(resource ("{") (field (ident) @variable.other.member))

(use item: (ident) @type)

; TODO: Also highlight variables via scoping later (can tree sitter do this?)
(func (field (ident) @variable.parameter ":"))
(constructor (field (ident) @variable.parameter ":"))

(assignment_operator) @operator
(binary_operator) @operator
[
  "="
] @operator
(yeet ("!" @operator))

[
  "in"
] @keyword.operator

(statement (_ (ident)) @variable) 
(string) @string
(char) @constant.character
(number) @constant.numeric
(bool) @constant.builtin.boolean
[
  "none"
] @constant.builtin.null

(comment) @comment.line

(path (ident) @namespace)
(version) @constant.numeric.version
