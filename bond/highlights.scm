[
 "struct"
 "enum"
 "using"
 "view_of"
] @keyword

[ "namespace" ] @keyword.namespace

[ "import" ] @keyword.import

[
  (struct . (identifier))
  (generic_type)
  (user_defined_type)
] @type

[
  (primitive_type)
  (container_type)
] @type.builtin

[ (nothing) ] @constant.builtin

[ (default_value) ] @constant

[ (attribute) ] @attribute

[ (struct_field_required_variant) ] @keyword

[
 (builtin_type)
 (primitive_type)
] @type.builtin

[
  (block_begin)
  (block_end)
] @punctuation.bracket

[
  "<"
  ">"
] @punctuation.bracket

[
  ","
  ";"
  "."
] @punctuation.delimiter

(integer) @number
[(string)] @string

[(namespace . (full_ident))] @module
[(import . (string))] @string.special.path
[(struct . (identifier))] @type.definition
[(using . (user_defined_type))] @type.definition
[(struct_view . (identifier))] @type.definition
[(enum . (identifier))] @type.definition

[(struct_field . (field_name)) ] @variable.member
[(enum_field . (identifier)) ] @variable.member
[(struct_view_body . (identifier)) ] @variable.member

[(comment)] @comment
[(comment)] @spell
