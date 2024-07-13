; Brackets and operators
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  "+"
  "-"
  "/"
  "*"
  "**"
  "%"
  "<"
  ">"
  "<="
  ">="
  "<<"
  ">>"
  ">>>"
  "&"
  "|"
  "^"
  "=="
  "!="
] @operator

; Keywords
[
  "and"
  "as"
  "case"
  "class"
  "enum"
  "extern"
  "fn"
  "for"
  "if"
  "impl"
  "import"
  "let"
  "mut"
  "ref"
  "trait"
  "uni"
  "loop"
  "match"
  "else"
  "move"
  "or"
  "recover"
  "return"
  "throw"
  "try"
  "while"
  (modifier)
  (visibility)
] @keyword

; Comments
(line_comment) @comment

; Literals
[
  (nil)
  (self)
  (break)
  (next)
] @keyword

[
  (true)
  (false)
] @boolean

(integer) @number
(float) @number
(string) @string
(escape_sequence) @escape
(interpolation
  "${" @punctuation.special
  "}" @punctuation.special) @embedded

(constant) @constant

; Patterns
(integer_pattern) @number
(string_pattern) @string
(constant_pattern) @constant

; Types
(generic_type name: _ @type)
(type) @type

; Imports
(extern_import path: _ @string)

; Classes
(class name: _ @type)
(define_field name: _ @property)

; Traits
(trait name: _ @type)

; Implementations
(implement_trait class: _ @type)
(reopen_class name: _ @type)
(bound name: _ @type)

; Methods
(method name: _ @function)
(external_function name: _ @function)
(argument name: _ @variable)
(named_argument name: _ @variable)

(call name: _ @function)
(field) @property
(identifier) @variable
((identifier) @function
 (#is-not? local))
