; highlights.scm

(comment) @comment
(type) @type
(unqualified_type) @type
(attribute) @attribute
(method_declaration (symbol (symbol) @type (identifier) @function.method))
(method_declaration (symbol (identifier) @function.method))
(local_function_declaration (identifier) @function)
(destructor_declaration (identifier) @function)
(creation_method_declaration (symbol (symbol) @type (identifier) @constructor))
(creation_method_declaration (symbol (identifier) @constructor))
(enum_declaration (symbol) @type)
(enum_value (identifier) @constant)
(errordomain_declaration (symbol) @type)
(errorcode (identifier) @constant)
(constant_declaration (identifier) @constant)
(method_call_expression (member_access_expression (identifier) @function))
(lambda_expression (identifier) @variable.parameter)
(parameter (identifier) @variable.parameter)
(property_declaration (symbol (identifier) @property))
[
 (this_access)
 (base_access)
 (value_access)
] @variable.builtin
(boolean) @constant.builtin
(character) @constant
(integer) @number
(null) @constant.builtin
(real) @number
(regex) @constant
(string) @string
[
 (escape_sequence)
 (string_formatter)
] @string.special
(template_string) @string
(template_string_expression) @string.special
(verbatim_string) @string
[
 "var"
 "void"
] @type.builtin

[
 "abstract"
 "and"
 "as"
 "async"
 "break"
 "case"
 "catch"
 "class"
 "const"
 "construct"
 "continue"
 "default"
 "delegate"
 "delete"
 "do"
 "dynamic"
 "else"
 "enum"
 "errordomain"
 "extern"
 "finally"
 "for"
 "foreach"
 "get"
 "if"
 "in"
 "inline"
 "interface"
 "internal"
 "is"
 "lock"
 "namespace"
 "new"
 "not"
 "or"
 "out"
 "override"
 "owned"
 "partial"
 "private"
 "protected"
 "public"
 "ref"
 "return"
 "set"
 "signal"
 "sizeof"
 "static"
 "struct"
 "switch"
 "throw"
 "throws"
 "try"
 "typeof"
 "unowned"
 "using"
 "virtual"
 "weak"
 "while"
 "with"
 "yield"
] @keyword

[
 "="
 "=="
 "+"
 "+="
 "-"
 "-="
 "|"
 "|="
 "&"
 "&="
 "^"
 "^="
 "/"
 "/="
 "*"
 "*="
 "%"
 "%="
 "<<"
 "<<="
 ">>"
 ">>="
 "."
 "?."
 "->"
 "!"
 "~"
 "??"
 "?"
 ":"
 "<"
 "<="
 ">"
 ">="
 "||"
 "&&"
 "=>"
] @operator

[
 ","
 ";"
] @punctuation.delimiter

[
 "("
 ")"
 "{"
 "}"
 "["
 "]"
] @punctuation.bracket
