(function_definition
  name: (identifier) @name) @definition.function

(function_declaration
 name: (identifier) @name) @definition.function

(variable_definition
 name: (identifier) @name) @definition.variable

(field_definition
 name: (identifier) @name) @definition.variable

(enum_definition
 name: (identifier) @name) @definition.type

(funcall_expression
 function: (identifier) @name) @reference.call

(funcall_expression
 function: (field_expression field: (identifier) @name)) @reference.call

(assignment_expression
 target: (identifier) @name) @reference.variable

(field_expression
 field: (identifier) @name) @reference.variable

(unary_expression
 target: (identifier) @name) @reference.variable

(update_expression
 target: (identifier) @name) @reference.variable

(binary_expression
 left: (identifier) @name) @reference.variable

(binary_expression
 right: (identifier) @name) @reference.variable
