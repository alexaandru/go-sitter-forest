; Identifier
(identifier) @variable

; Keywords
[
  "if"
  "else"
  "for"
  "in"
] @keyword

; Operators
[
  "=>"
  "=="
  "!="
  "<"
  ">"
  "<="
  ">="
  "=~"
  "!~"
] @operator

; Punctuation
[
  "%{"
  "}"
  "["
  "]"
] @punctuation.bracket

; Strings
(string) @string

; Comments
(comment) @comment

; Functions
(function
  name: (identifier) @function)

; Properties
(property
  name: (identifier) @property)

; Blocks
(block
  name: (identifier) @namespace)

; Parameters
(parameter
  name: (identifier) @parameter)

; Interpolation
(interpolation) @embedded

; Escaped characters
(escaped_char) @string.escape

; Arrays
(array) @constant

; Key-value pairs
(key_value_pair
  key: (string) @property)
