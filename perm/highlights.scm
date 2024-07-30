[
  "entity"
  "relation"
  "action"
  "permission"
  "attribute"
  "rule"
]@keyword

[
  (and_statement)
  (or_statement)
  (not_statement)
  (in_statement)
  (gt)
  (gte)
  (ne)
  (lt)
  (lte)
]@keyword.conditional

(comment) @comment

; relation definitions
(relation_association) @type
(relation_member) @type
(relation_member
    hash: "#" @punctuation.special
    member: (identifier) @type.builtin)

; rule definitions
(rule_definition
    name: (identifier) @function)

; rule calls
(call_expression
    function: (identifier) @function)

(selector_expression
    field: (field_identifier) @function.method)

[
  "boolean"
  "string"
  "integer"
  "double"
] @type
