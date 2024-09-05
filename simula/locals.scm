(block) @local.scope

(variable_declaration
  name: (identifier) @local.definition
)
(array_declaration
  name: (identifier) @local.definition
)
(switch_declaration
  name: (identifier) @local.definition
)
(procedure_declaration
  name: (identifier) @local.definition
)
(class_declaration
  name: (identifier) @local.definition
)

(identifier) @local.reference
