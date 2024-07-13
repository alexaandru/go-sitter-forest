[
  (function_definition)
  (statement_block)
  (if_statement)
  (while_statement)
  (for_statement)
  (foreach_statement)
  (catch_clause)
] @local.scope

(init_declarator
  name: (identifier) @local.definition)

(array_declarator
  name: (identifier) @local.definition)

(function_definition
  name: (identifier) @local.definition)

(parameter
  name: (identifier) @local.definition)

(tuple_capture
  (identifier) @local.definition)

(catch_clause
  parameter: (identifier) @local.definition)

(assignment_expression
  left: (identifier) @local.definition)

(call_expression
  function: (identifier) @local.reference)

(identifier) @local.reference
