

(source_file) @local.scope

(fn_statement) @local.scope
(fn_statement name: (identifier) @local.definition.function)

(let_statement name: (identifier) @local.definition.function)

(binary_expression left:(identifier)  @local.definition)

(identifier) @local.reference

(if_statement) @local.scope
(while_statement) @local.scope

(fn_statement
	param: (identifier) @local.definition.parameter)
