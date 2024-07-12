[
  ;(import_declaration)
  (const_declaration)
  (var_declaration)
  (list_literal)
  (map_or_set_literal)
  (switch_case)
  (default_case)
  (block)
  (call_expression)
  (parameter_list)
] @indent.begin

[
  "}"
] @indent.branch

[
 "}"
 ")"
] @indent.end

(parameter_list ")" @indent.branch)

(comment) @indent.ignore
