(comment) @comment

(function_decl (ident) @function)
(hook_decl (ident) @function)
(function_arg (ident) @variable.parameter)
(type_decl (params (ident) @variable.parameter))

(field_decl (ident) @property)
(bitfield_field (ident) @property)

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

(attribute_name) @tag
(typename (ident) @type)
(parameterized_type ([
 "iterator"
 "map"
 "optional"
 "result"
 "set"
 "tuple"
 "vector"
 "view"
]) @type)

(binary_op . (_) . _ @keyword.operator . (_) .)

(unary_op . _ @keyword.operator)

(integer) @constant.numeric
(real) @constant.numeric
(regexp) @string.regexp
(port) @constant.other
(char) @constant.character
(error_literal "error" @constant.language)
(null) @constant.language
(boolean) @constant.language

(self_id) @variable.language
(string) @string.quoted

(inout) @keyword.other
(is_skip) @keyword.other
(break) @keyword.control
(continue) @keyword.control
(stop) @keyword.control
(visibility) @storage.modifier
[
 "local"
 "global"
 "const"
 "var"
 "type"
 "in"
 "on"
 "cast"
 "new"
] @keyword.other

[
 "module"
 "struct"
 "unit"
 "function"
] @storage.type

[
 "if"
 "else"
 "switch"
 "while"
 "return"
 "throw"
 "for"
] @keyword.control
