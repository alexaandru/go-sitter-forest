; Universal Rules
;; Unknown name, assume variable
(selector_expr (selector (identifier_expr entity: (identifier) @variable (#is-not? local))))
;; Unknown type
(name_type_expr qualifier: (selector identifier: (identifier_expr (identifier) @type (#is-not? local))))

; Patterns
;; binding patterns
(binding_pattern pattern: (identifier) @variable)
(tuple_pattern "(" @punctuation.bracket.tuple ",")
(tuple_pattern "," ")" @punctuation.bracket.tuple)
(tuple_pattern_element ":" @operator.assignment)
(tuple_pattern_element label: (identifier) @variable pattern: (identifier))
(tuple_pattern_element pattern: (identifier) @variable !label)

; Import
"import" @keyword.directive
(import_decl (identifier) @namespace)

; Namespace
"namespace" @keyword
(namespace_head name: (identifier) @namespace)

; Function Decl
"fun"  @keyword
;; Function names
(function_memberwise_init) @constructor
(function_name (identifier) @function)
(function_decl head: (function_head (function_name (identifier) @function.abstract)) !body)
(function_name "init" @constructor)
(function_name (identifier) @constructor.destructor (#eq? @constructor.destructor "deinit"))
(deinit_decl "deinit" @constructor.destructor)
;; Parameters
(parameter_decl label: (identifier) @label)
(parameter_decl label: (identifier) @variable.parameter !name)
(parameter_decl name:  (identifier) @variable.parameter)
(parameter_decl "=" @operator.assignment)
(parameter_passing_convention) @keyword.storage.modifier
;; Typealiases
(type_aliases_clause_item lhs: (identifier) @type)
(type_aliases_clause_item "=" @operator.assignment)
;; Body
(method_introducer) @keyword.storage.modifier

; Struct Decl
"type" @keyword
(product_type_head name: (identifier) @type)
(product_type_decl (binding_decl pattern: (binding_pattern pattern: (identifier) @property)))

; Trait Decl
"trait" @keyword
(trait_head name: (identifier) @type.abstract)
(associated_type_decl name: (identifier) @type.abstract)
(associated_type_decl "=" @operator.assignment)

; Conformance
"conformance" @keyword

; Extension Decl
"extension" @keyword

; Associated Type
(associated_type_decl name: (identifier) @type.abstract)

; Subscript
"subscript" @keyword
(subscript_head name: (identifier) @function.method)
(subscript_impl (subscript_introducer) @keyword.storage.modifier)

; Property
"property" @keyword
(property_head name: (identifier) @property)

; Type Alias
"typealias" @keyword
(type_alias_head name: (identifier) @type)
(type_alias_decl "=" @operator.assignment)

; Generics
;; Decls
(generic_type_parameter "@type" @attribute.annotation)
(generic_type_parameter name: (identifier) @type.parameter)
(generic_type_parameter "variadic" @attribute.variadic)
(generic_value_parameter "@value" @attribute.annotation)
(generic_value_parameter name: (identifier) @variable.parameter)
;; Uses
(static_argument ["@type" "@value"] @attribute)

; Statements
;; Discard
(discard_stmt "=" @operator.assignment)
;; Loops
["do" "while" "for"] @keyword.control.repeat
(for_stmt "in" @keyword.control.repeat)
;; Jumps
"return"   @keyword.control.return
"yield"    @keyword.control.repeat
"break"    @keyword.control
"continue" @keyword.control
;; Conditional
"if"    @keyword.conditional
"else"  @keyword.conditional
"match" @keyword.conditional
;; Binding
(binding_decl pattern: (binding_pattern introducer: (binding_introducer) @keyword.storage.modifier))
(binding_introducer) @keyword.storage.modifier.mut (#eq? @keyword.storage.modifier.mut "var")
(binding_introducer) @keyword.storage.modifier.ref (#eq? @keyword.storage.modifier.ref "inout")
(binding_decl "=" @operator.assignment)

; Expr
;; Operators
(infix_operator) @operator.infix
(prefix_operator) @operator.prefix
(postfix_operator) @operator.postfix
(type_casting_expr operator: (_) @keyword)
;; Inout
(inout_expr "&" @keyword.storage)
;; Compound Expr
(value_member_expr selector: (selector identifier: (identifier_expr (identifier) @property)))
(value_index_expr index: (value_member_index) @property)
;;; Function / Method calls
(function_call_expr head: (selector_expr (selector identifier: (identifier_expr (identifier) @function))))
(function_call_expr head: (_ (selector identifier: (identifier_expr (identifier) @function.method)) .))
(call_argument label: (identifier) @label)
(call_argument ":" @operator.assignment)
(subscript_call_expr head: (selector_expr (selector identifier: (identifier_expr (identifier) @function))))
(subscript_call_expr head: (_ (selector identifier: (identifier_expr (identifier) @function.method)) .))
(subscript_call_expr "[" @punctuation.bracket.subscript)
(subscript_call_expr "]" @punctuation.bracket.subscript)
;; Primary Expr
(implicit_member_ref "." @punctuation.special)
;; Tuples
(tuple_expr "(" @punctuation.bracket.tuple ",")
(tuple_expr "," ")" @punctuation.bracket.tuple)
(tuple_expr_element label: (identifier) @label)
(tuple_expr_element ":" @operator.assignment)
;; Compound Literals
(buffer_literal "[" @punctuation.bracket "]" @punctuation.bracket)
(map_literal "[" @punctuation.bracket ":" @punctuation.delimiter "]" @punctuation.bracket)
(map_component ":" @operator.assignment)
;; Literals
(selector_expr (selector (identifier_expr (identifier) @variable.builtin (#eq? @variable.builtin "self"))))
(selector_expr (selector (identifier_expr (identifier) @variable.builtin (#eq? @variable.builtin "yielded"))))
(integer_literal) @number
(floating_point_literal) @number
(boolean_literal) @constant.builtin.boolean
(unicode_scalar_literal) @constant.character
(simple_string)     @string
(multiline_string)  @string
;; Special Entities
(function_entity_identifier name: (identifier) @function)
(function_entity_identifier label: (identifier) @label)
(function_entity_identifier ":" @operator.assignment)

; Types
;; Arrays
(array_type_expr "[" @punctuation.bracket "]" @punctuation.bracket)
;; Floats
(existential_type_expr "any" @keyword.operator)
"some" @keyword.operator
;;; Type paths
(name_type_expr selector: (selector identifier: (identifier_expr (identifier) @type)))
;; Conformance Lenses
(conformance_lens_type_expr trait: (identifier) @type.trait)
;; Tuple Types
(tuple_type_expr "{" @punctuation.bracket)
(tuple_type_expr "}" @punctuation.bracket)
(tuple_type_element label: (identifier) @label)
(tuple_type_element ":" @operator.assignment)
;; Builtin Types
(name_type_expr qualifier: (selector identifier: (identifier_expr (identifier) @namespace.builtin (#eq? @namespace.builtin "Builtin"))))
(name_type_expr qualifier: (selector identifier: (identifier_expr (identifier) @type.builtin (#eq? @type.builtin "Self"))))
(name_type_expr qualifier: (selector identifier: (identifier_expr (identifier) @type.builtin (#any-of? @type.builtin "Void" "String" "Float32" "Float64" "Bool" "Any" "Never" "Union"))))
(name_type_expr qualifier: (selector identifier: (identifier_expr (identifier) @type.builtin (#any-of? @type.builtin "Int" "Int8" "Int16" "Int32" "Int64"))))

; Operator Decls
"operator" @keyword
(operator_notation) @attribute.operator
(operator) @operator
(precedence_group)? @attribute.operator.precedence

;; Where Clauses
"where" @keyword
(value_constraint_expr "@value" @attribute.annotation)
(equality_constraint "==" @operator.infix)
(trait_composition "&"* @operator.infix)
(trait_composition (name_type_expr (selector identifier: (identifier_expr (identifier) @type.trait)) .))

; Modifier
(access_modifier) @attribute.access
(receiver_modifier) @keyword.storage.modifier
(receiver_effect) @keyword.storage.modifier
(static_modifier) @attribute.static
(decl_attr (attribute_name) @attribute)

; Misc
(single_line_comment) @comment.line
((single_line_comment) @comment.documentation (#match? @comment.documentation "^///(\\s*$|\\s+.*)"))
(block_comment)       @comment.block
(pragma_expr)         @keyword.directive

