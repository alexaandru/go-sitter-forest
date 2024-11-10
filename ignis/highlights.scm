(comment) @comment
(doc_comment) @comment.documentation

[
  (string_literal)
  (char_literal)
] @string

[
  (integer_literal)
  (float_literal)
] @number

(boolean_literal) @boolean

["(" ")" "{" "}" "[" "]"] @punctuation.bracket

[":" "." "," ";" ] @punctuation.delimiter

[
  "-" "=" "<" "<=" ">" ">=" "!" "++" "--" "||" "&&" "/" "*" "+" "%" "&" "|" "==" "?" "@" "->" "#" ":"
] @operator

[
  "if" "else" "let" "return" "function" "import" "from" "for" "enum" "export"
  "while" "of" "interface" "extends" "public" "private" "new" "class"
  "implements" "super" "static" "final" "readonly" "in" "const" "as" "break"
  "void" "extern" "continue" "unknown" "type" "record" "decorator" (this_expression)
  "match" "when" "abstract" "mut" "namespace" "declare" "meta" (primitive_keyword)
] @keyword

(type_identifier) @type
(type_identifier (identifier) @type)

(variable_declaration (identifier) @variable)
(parameter_declaration (identifier) @parameter)

(enum_declaration (identifier) @type.enum)
(class_declaration (identifier) @type.class)
(interface_declaration (identifier) @type.interface)
(record_declaration (type_expression (type_identifier (identifier) @type.record)))

(object_literal (identifier) @variable.builtin)

(function_declaration (identifier) @function)

(constructor_declaration (identifier) @function)
(method_declaration name: (identifier) @function)

(primary_expression (identifier) @function)
(property_access name: (identifier) @property)

(property_declaration (identifier) @variable)
(property_access name: (identifier) @variable)
(record_property_declaration name: (identifier) @property)
(record_method_declaration name: (identifier) @method)

(decorator_use (identifier) @decorator)
(decorator_declaration (identifier) @decorator)
