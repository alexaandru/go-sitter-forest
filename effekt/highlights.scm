[
  "def"
  "record"
  "type"
  "interface"
  "effect"
  "match"
  "case"
  "do"
  "while"
  "if"
  "else"
  "val"
  "var"
  "try"
  "with"
  "resume"
] @keyword

"def" @keyword.function

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
]  @punctuation.bracket

[
 "."
 ","
] @punctuation.delimiter

[
    "+"
    "-"
    "/"
    "%"
    "*"
    "++"
] @operator

"import" @include

(comment) @comment


; literals
[
(integer_literal)
(float_literal)
] @number
(string_literal) @string
(boolean_literal) @boolean

(hole) @hole

; functions
(call_expression function: (identifier) @function.name)
(field_declaration (field_identifier) @property)

(function_item  name: (identifier) @function.name)

(function_item (identifier) @constructor
  (#match? @constructor "[A-Z][A-Z_a-z0-9]+"))


((call_expression (identifier) @type.constructor)
    (#match? @constructor "[A-Z][A-Z_a-z0-9]+"))


; types
(type_identifier) @type.name
(primitive_type) @type.buildin
(generic_type (type_arguments (type_identifier) @type.generic))


; effects
(effect_item name: (type_identifier) @type.effect)
(effect_alias [
    (primitive_type)
    (type_identifier)
    ] @type.effect)

(interface_item
    body: (declaration_list
        (function_item
            name: (identifier) @effect)))
