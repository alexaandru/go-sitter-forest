(comment) @comment

(integer_literal) @constant
(bool_literal) @constant.builtin
(string_literal) @string

(declaration name: (identifier) @function
             type: (type_function))
(declaration name: (identifier) @function
             type: (type_pointer (type_function)))

;; Highlight the type of a declaration if it's an identifier.
(declaration type: (identifier) @type)

[
  ;; Header
  "import" "module"

  ;; Control Flow
  "if" "else" "while" ;; "cfor"

  ;; Function attributes
  ;; "discardable"

  ;; Unary Operators
  "not"

  ;; Binary Operators
  "and" "or"

  ;; Types
  "enum" "struct" "sum" "union"

  ;; Storage specifiers
  "export" "external"

  "return"
] @keyword

[
  ;; Builtins
  "bool"
  "byte"
  "int" "uint"
  "void"

  ;; C FFI
  "cshort" "cushort"
  "cint" "cuint"
  "clong" "culong"
  "clonglong" "culonglong"
  "csize" "cusize"

  (type_array)
  (type_pointer)
  (type_reference)
] @type

[
 "@" "!" ;; "~"
 "+" "-" "*" "/" "&" "|" "^" "=" "!=" "<" "<=" ">" ">="
 "::" ":" ":="
 "++" "--"
] @operator

[
  "(" ")"
  "{" "}"
  ;; "[" "]"
] @punctuation.bracket

