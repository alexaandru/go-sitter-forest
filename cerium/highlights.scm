
; Variables

(identifier) @variable
(member key: (identifier) @variable.member)

(module_specifier (identifier) @module)

; Parameters

(parameters (identifier) @variable.parameter)

; Types

(type (identifier) @type)
(type (struct_type (struct_type_fields (identifier) @variable.member)))
(type_alias (identifier) @type.definition)

; Function and Method calls

(function (identifier) @function)
(extern_function (identifier) @function)

(call (identifier) @function.call)
(call (member key: (identifier) @function.method.call))

; Literals

(int) @number
(float) @number.float

(string) @string
(character) @character

; Comments

(comment) @comment

; Keywords

"fn" @keyword.function

"return" @keyword.return

"while" @keyword.repeat

[
 "if"
 "else"
 "switch"
] @keyword.conditional

[
 "struct"
 "enum"
 "type"
] @keyword.type

[
 "module"
 "import"
] @keyword.import

[
 "extern"
 "export"
 "const"
 "var"
] @keyword.modifier

"as" @keyword.operator

[
 "asm"
 (break)
 (continue)
] @keyword

; Operators

[
  "&"
  "~"
  "+"
  "-"
  "/"
  "*"
  "%"
  "<"
  ">"
  "=="
  "="
] @operator


; Punctuation

[
  "."
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
