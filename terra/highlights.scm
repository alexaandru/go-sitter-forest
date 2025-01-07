; inherits lua

(quote_expression
[
  "quote"
  "in"
  "end"
] @keyword)

(terra_function_declaration
[
  "terra"
  "end"
] @keyword.function)

(terra_function_definition
[
  "terra"
  "end"
] @keyword.function)

(terra_function_implementation
[
  "terra"
  "end"
] @keyword.function)

(escape_statement
[
  "escape"
  "end"
] @keyword)

"defer" @keyword
"emit" @keyword
"var" @keyword
"union" @keyword
"struct" @keyword

(primitive_type) @type

"@" @operator
