; Identifiers

(type_identifier) @type
(field_identifier) @property
(identifier) @variable

; Function calls

(call_expression
  function: (identifier) @function)

(call_expression
  function: (identifier) @function.builtin
  (#match? @function.builtin "^(append|cap|close|complex|copy|delete|imag|len|make|new|panic|print|println|real|recover|acc|old)$"))

(call_expression
  function: (selector_expression
    field: (field_identifier) @function.method))

; Function definitions

(function_declaration
  name: (identifier) @function)

(method_declaration
  name: (field_identifier) @function.method)


(fpredicate_decl
  name: (identifier) @function)


; Operators

[
  "--"
  "-"
  "-="
  ":="
  "!"
  "!="
  "..."
  "*"
  "*"
  "*="
  "/"
  "/="
  "&"
  "&&"
  "&="
  "%"
  "%="
  "^"
  "^="
  "+"
  "++"
  "+="
  "<-"
  "<"
  "<<"
  "<<="
  "<="
  "="
  "=="
  ">"
  ">="
  ">>"
  ">>="
  "|"
  "|="
  "||"
  "~"
  "--*"
  "==>"
  "==="
  "#"
  "union"
  "setminus"
] @operator

; Keywords

[
  "break"
  "case"
  "chan"
  "const"
  "continue"
  "default"
  "defer"
  "else"
  "fallthrough"
  "for"
  "func"
  "go"
  "goto"
  "if"
  "import"
  "interface"
  "map"
  "package"
  "range"
  "return"
  "select"
  "struct"
  "switch"
  "type"
  "var"
  "ensures"
  "requires"
  "preserves"
  "invariant"
  "decreases"
  "subset"
  "in"
  "assume"
  "assert"
  "inhale"
  "exhale"
  "fold"
  "unfold"
  "unfolding"
  "forall"
  "exists"
  "pred"
  "implements"
  "pure"
  "opaque"
  "trusted"
  "ghost"
  "apply"
  "with"
  "match"
  "outline"
  "reveal"
] @keyword

; Literals

(binary_expression "in" @operator)

[
  (interpreted_string_literal)
  (raw_string_literal)
  (rune_literal)
] @string

(escape_sequence) @escape

[
  (int_literal)
  (float_literal)
  (imaginary_literal)
] @number

[
  (true)
  (false)
  (nil)
  (iota)
] @constant.builtin

(comment) @comment
