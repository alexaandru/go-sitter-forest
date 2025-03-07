; Variables

(identifier) @variable
(member key: (identifier) @variable.member)

; Parameters

(parameters (identifier) @variable.parameter)

; Types

(type (member key: (identifier) @type))
(type (identifier) @type)
(type_right (member key: (identifier) @type))
(type_right (identifier) @type)

; Function and Method calls

(call (identifier) @function.call)
(call (member key: (identifier) @function.method.call))

(call (special_identifier) @function.builtin.call)

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
] @keyword.type

"const" @keyword.modifier

"as" @keyword.operator

[
 "asm"
 (break)
 (continue)
 "defer"
] @keyword

[
 "@foreign"
] @attribute

; Operators

[
  "&"
  "~"
  "+"
  "-"
  "/"
  "*"
  "%"
  "<<"
  ">>"
  "&"
  "^"
  "|"
  "<"
  ">"
  "<="
  ">="
  "=="
  "!="
  "+="
  "-="
  "*="
  "/="
  "%="
  "<<="
  ">>="
  "&="
  "^="
  "|="
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
