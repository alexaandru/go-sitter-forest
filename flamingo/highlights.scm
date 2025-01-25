; This Source Form is subject to the terms of the AQUA Software License,
; v. 1.0. Copyright (c) 2024 Aymeric Wibo

; The order of these captures is important; the last match is the one that is used.
; So start off with all the matches on primitive constructs, and then do the more complex stuff after.

; Comments.

(comment) @comment
(doc_comment) @comment.documentation

; Identifiers.

(identifier) @variable

; Literals.

(string) @string
(number) @number
(bool) @constant.builtin
(none) @constant.builtin

; Operators.

(overloadable_operator) @operator

[
	(unary_operator)
	(power_operator)
	(multiplicative_operator)
	(additive_operator)
	(comparative_operator)
	(and_operator)
	(or_operator)
] @operator

; Keywords.

[
	"static"
	"pure"
	"fn"
	"proto"
	"class"
	"import"
	"return"
	"let"
	"if"
	"elif"
	"else"
] @keyword

; Builtins.

[
	"print"
	"assert"
] @function.builtin

; Types.

(type_name) @type
[
	(primitive_type)
	"vec"
	"map"
] @type.builtin

; Function calls.

(call
	callable: (expression (identifier) @function.method)
)

(call
	callable: (expression (access accessor: (identifier) @function.method))
)

; Declarations.

(var_decl name: (identifier) type: (type) @variable)
(function_declaration name:
	[
		(identifier)
		(overloadable_operator)
	] @function
)
(proto name:
	[
		(identifier)
		(overloadable_operator)
	] @function
)
(class_declaration name: (identifier) @function)
