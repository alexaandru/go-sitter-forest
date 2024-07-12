; locals.scm

[
 (method_declaration)
 (local_function_declaration)
 (signal_declaration)
 (block)
] @local.scope

(parameter (identifier) @local.definition)
(local_declaration (assignment (identifier) @local.definition))
(local_function_declaration (identifier) @local.definition)

(member_access_expression . (identifier) @local.reference)
