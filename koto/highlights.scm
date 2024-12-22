[
  "="
  "+"
  "-"
  "*"
  "/"
  "%"
  "+="
  "-="
  "*="
  "/="
  "%="
  "=="
  "!="
  "<"
  ">"
  "<="
  ">="
  ".."
  "..="
  "->"
] @operator

[
  "let"
] @keyword

[
  "and"
  "not"
  "or"
] @keyword.operator

[
  "return"
  "yield"
] @keyword.return

[
  "if"
  "then"
  "else"
  "else if"
  "match"
  "switch"
] @keyword.conditional

[
  (break)
  (continue)
  "for"
  "in"
  "loop"
  "until"
  "while"
] @keyword.repeat

[
  "throw"
  "try"
  "catch"
  "finally"
] @keyword.exception

[
  "export"
  "from"
  "import"
  "as"
] @keyword.import

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "|"
] @punctuation.bracket

[
  ";"
  ":"
] @punctuation.delimiter

(identifier) @variable

(import_module
  (identifier) @module)

(import_item
  (identifier) @module)

(export
  (identifier) @module)

(chain
  lookup: (identifier) @variable.member)

(chain
  start: (identifier) @function.call)

[
  (true)
  (false)
] @boolean

(comment) @comment @spell

(debug) @keyword.debug

(string) @string

(fill_char) @punctuation.delimiter

(alignment) @operator

(escape) @string.escape

(null) @constant.builtin

(number) @number

(meta) @keyword.directive

(meta
  name: (identifier) @variable.member)

(entry_inline
  key: (identifier) @variable.member)

(entry_block
  key: (identifier) @variable.member)

(self) @variable.builtin

(arg
  (_ (identifier) @variable.parameter))

(ellipsis) @variable.parameter

(variable
  type: (identifier) @type)

(function
  output_type: (identifier) @type)
