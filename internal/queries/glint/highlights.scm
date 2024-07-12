(number_literal) @constant
(string) @string
(bool_value) @constant.builtin

(declaration name: (identifier) @function
             type: (type_function))
(declaration name: (identifier) @function
             type: (type_pointer (type_function)))

[
  ;; Function attributes
  "discardable"
  ;; Storage specifiers
  "external" "export"

  "module"
  "return"
] @keyword

[
  ;; Builtins
  "bool" "boolean" "Bool" "Boolean"
  "Byte"
  "int" "uint"
  "void"

  ;; C FFI
  "cshort" "cushort"
  "cint" "cuint"
  "clong" "culong"
  "clonglong" "culonglong"
  "csize" "cusize"

  (type_pointer)
  (type_reference)
  (type_dynamic_array)
  (type_fixed_array)
] @type

[
  "(" ")"
  "{" "}"
] @punctuation.bracket
