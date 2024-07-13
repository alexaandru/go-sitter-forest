[
 	"pub"
	"grammar"
	"match"
	"extern"
	"type"
	"enum"
] @keyword

[
 	"+"
	"*"
	"?"
] @operator

(grammar_type_params
	"<" @punctuation.bracket
	">" @punctuation.bracket)

(symbol
	"<" @punctuation.bracket
	">" @punctuation.bracket)

(binding_symbol
	"<" @punctuation.bracket
	">" @punctuation.bracket)

(binding_symbol
	name: (identifier) @variable.parameter)

(bare_symbol
  (macro 
    ((macro_id) @function.macro)))

(bare_symbol
  (identifier) @constant)

(nonterminal_name
  (macro_id) @function.macro)

(nonterminal_name
  (identifier) @constant)

(nonterminal
  (type_ref) @type)

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket

";" @punctuation.delimiter

(lifetime (identifier) @label)

(string_literal) @string
(regex_literal) @string

(comment) @comment @spell

(annotation
  (id) @function.macro)

