(comment) @comment

(command_name) @keyword

(subcommand_keyword) @variable.builtin

[
  (integer)
  (float)
  (nbt_byte)
  (nbt_float)
  (nbt_double)
  (nbt_long)
  (nbt_short)
] @number

(boolean) @boolean

(string) @string

(escape_sequence) @string.escape

(identifier) @variable.parameter

((identifier) @function
  (#match? @function "^@"))

((identifier) @type
  (#match? @type "^#"))

(identifier
  namespace: (identifier) @module) @property

(identifier
  (escape_sequence)+ @string.escape) @string

(nbt_path
  (identifier) @variable.parameter
  (identifier_composite
    (identifier) @variable.parameter))

key: (identifier) @property

(operator) @operator

[
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

[
  ","
  ":"
  "="
  "=!"
  ".."
  "~"
  "^"
  ; "."
] @punctuation.delimiter
