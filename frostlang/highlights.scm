; Keywords
(return_statement) @keyword
(for_statement) @keyword
(while_statement) @keyword
(if_statement) @keyword
(continue_statement) @keyword
(break_statement) @keyword

; Types
(primitive_type) @type
(custom_type) @type

; Functions
(function_definition (identifier) @function)
(function_call (identifier) @function.call)

; Variables
(variable_definition (identifier) @variable)
(variable_assignment (identifier) @variable)

; Literals
(number) @number
(string) @string

; Structs and Fields
(struct_definition) @structure
(field_definition (identifier) @property)
(field_assignment (identifier) @property)

; Comments
(line_comment) @comment
(block_comment) @comment

; Binary and Unary Operators
(binary_expression) @operator
(pre_unary_expression) @operator
(post_unary_expression) @operator
