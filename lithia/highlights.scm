; Keywords

[
    "func"
    "let"
    "enum"
    "data"
    "module"
    "import"
    "extern"
    "type"
] @keyword

[
    "=>"
] @operator

[
    ","
    "."
] @punctuation

[
    "{"
    "}"
    "("
    ")"
    "["
    "]"
] @punctuation.bracket

(binary_expression operator: (["*" "/" "+" "-" "==" "!=" ">=" ">" "<" "<=" "&&" "||"]) @operator) ; extract
(unary_expression operator: (["!"]) @operator)

(parameter_list (identifier) @variable.parameter)
(int_literal) @constant.numeric
(float_literal) @constant.numeric
(comment) @comment
(function_declaration name: (identifier) @function)
(let_declaration name: (identifier) @variable)
(enum_declaration name: (identifier) @type.enum)
(enum_case_reference) @type
(data_declaration name: (identifier) @type.struct)
(data_property_function name: (identifier) @function)
(data_property_value name: (identifier) @property)
(extern_declaration
    name: (identifier) @variable.builtin
    !properties
    !parameters)
(extern_declaration
    name: (identifier) @function.builtin
    !properties)
(extern_declaration
    name: (identifier) @type.builtin
    !parameters)
(import_declaration name: (import_module) @variable.import)
(import_members (identifier) @variable.import)
(module_declaration name: (identifier) @variable.import)
(complex_invocation_expression function: (identifier) @function)
(simple_invocation_expression function: (identifier) @function)
(string_literal) @string
(escape_sequence) @string.special
(type_expression type: (identifier) @type)
(type_case label: (identifier) @type)
(simple_invocation_expression function: (member_access (member_identifier) @function @method))
(complex_invocation_expression function: (member_access (member_identifier) @function @method))
(member_identifier) @property

(ERROR) @error
(identifier) @variable
