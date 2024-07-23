"component"    @keyword
"synchronized" @keyword
"signal"       @keyword
"end"          @keyword

"cat" @operator
"^"   @operator
"and" @operator
"&"   @operator
"or"  @operator
"|"   @operator
"not" @operator
"!"   @operator
"=>"  @operator
"<="  @operator

"("  @punctuation.bracket
")"  @punctuation.bracket
","  @punctuation.delimiter
"."  @punctuation.delimiter
":"  @punctuation.delimiter
"::" @punctuation.delimiter

(number)     @number
(identifier) @variable

(constant             value: (number) @constant)

(expression_component name: (identifier) @type)
(expression_component name: (component_reference (identifier) @type))
(expression_component inputs: (expression_component_input_list (identifier) @variable))

(component         (identifier) @type.definition)
(component_inputs  (identifier) @variable.parameter)
(component_inputs  (signal_definition (identifier) @variable.parameter))
(component_outputs (identifier) @variable.parameter)
(component_outputs (signal_definition (identifier) @variable.parameter))

(comment) @comment
