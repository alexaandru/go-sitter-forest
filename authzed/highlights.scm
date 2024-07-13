((identifier) @function)

(block
  (relation
    (relation_literal) @function
     (identifier) @property))

(block
  (permission
    (permission_literal) @variable.builtin
     (identifier) @property))

(permission (identifier) @type)
(relation (identifier) @constant)
(perm_expression (identifier) @property)



[
  (plus_literal)
  (minus_literal)
  (amp_literal)
] @punctuation

((hash_literal) @comment)

; relations
(rel_expression (identifier) @property)


((pipe_literal) @punctuation)

(relation
  (rel_expression
    (
  (hash_literal)
  .
  (identifier) @constant
  ) @comment))

(call_expression
  (selector_expression
    (identifier) @constant))

(call_expression
  function: (selector_expression
    field: (field_identifier) @function.method))


(permission
 (perm_expression
   (
    (stabby)
    .
    (identifier)
    @function) @punctuation))


[
  (true)
  (false)
  (nil)
] @constant.builtin

[
 (caveat_literal)
 (definition_literal)
] @keyword


((comment) @comment)
