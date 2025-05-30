((comment)* @doc
 .
 (function_definition
  (function_identifier) @name
  [
   (external_source)
   (block_expression)
  ]
 ) @definition.function
 (#strip! @doc "^//[/]?\\s*")
 (#set-adjacent! @doc @definition.function))


((comment)* @doc
 .
 [
   (type_definition
    (identifier) @name) @definition.class
   (struct_definition
    (identifier) @name) @definition.class
   (enum_definition
    (identifier) @name) @definition.class
   (error_type_definition
    (identifier) @name) @definition.class
 ]
 (#strip! @doc "^//[/]?\\s*")
 (#set-adjacent! @doc @definition.class))

((comment)* @doc
 .
 (trait_definition
  (identifier) @name) @definition.interface
 (#strip! @doc "^//[/]?\\s*")
 (#set-adjacent! @doc @definition.interface))

(impl_definition (type_name) @name) @reference.implementation

(impl_definition (type) @name) @reference.class

(apply_expression (lowercase_identifier) @name) @reference.call
(apply_expression (qualified_identifier) @name) @reference.call
(method_expression (lowercase_identifier) @name) @reference.call

((dot_apply_expression (dot_identifier) @name) @reference.call
 (#strip! @name "^\\."))

(qualified_type_identifier) @name @reference.class
