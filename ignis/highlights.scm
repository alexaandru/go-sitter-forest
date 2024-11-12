;; Comments
(comment) @comment
(doc_comment) @comment.documentation

;; Lietrals
(string_literal) @string
(char_literal) @string.char
(integer_literal) @number
(float_literal) @float
(boolean_literal) @boolean
(null_literal) @constant

;; Symbols
["(" ")" "{" "}" "[" "]"] @punctuation.bracket
[":" "." "," ";" ] @punctuation.delimiter
["+" "-" "*" "/" "%" "&" "|" "^" "<<" ">>" "<" ">" "<=" ">=" "==" "!=" "!" "..." ".." "::" "=" "+=" "-=" "*=" "/=" "%=" "&=" "|=" "^=" "<<=" ">>="] @operator

;; keyword
[
  "if" "else" "let" "return" "function" "import" "from" "for" "enum" "export"
  "while" "of" "interface" "extends" "public" "private" "new" "class"
  "implements" "static" "final" "const" "as" "void" "extern" "unknown" "type" "record"
  "decorator" (this_expression) "match" "when" "abstract" "mut" "namespace" "meta"
] @keyword

(identifier) @variable

(primitive_keyword) @keyword

;; Types
(type_identifier) @type
(primitive_keyword) @type.builtin

;; Funciones
(function_declaration
  name: (identifier) @function)
(method_declaration
  name: (identifier) @function.method)
(constructor_declaration
   (identifier) @function.special)

;; Variables
(variable_declaration
  name: (identifier) @variable)
(parameter_declaration
  name: (identifier) @variable.parameter)

;; Propiedades
(property_declaration
  (identifier) @property)
(property_access
  name: (identifier) @property)

(primary_expression
  (identifier) @variable)

;; Decorators
(decorator_use
  (identifier) @annotation)
(decorator_declaration
  (identifier) @annotation)

;; Namespaces
(namespace_declaration
  (identifier) @namespace)

(class_declaration (identifier) @class)
(enum_declaration name: (identifier) @enum)
(type_definition (identifier) @type)

(vector_access_expression (identifier) @variable)
