(comment) @comment

[
 (arrow) (regex_arrow)
 (eq)
 (prefix_op) (suffix_op)
 (ignore_op) (bool_op) (replace_op) (compose_op)
] @operator

[
 (word_boundary)
 (any)
] @constant.builtin
((symbol) @constant.builtin
 (#match? @constant.builtin "0"))

[
 (colon)
 (semicolon)
] @punctuation.delimiter

[
 (lpar) (rpar)
 (loptional) (roptional)
] @punctuation.bracket

(regex_target "<[" @punctuation.bracket)
(regex_target "]>" @punctuation.bracket)

[
 (alphabet_header) (diacritics_header) (rule_variables_header)
 (sets_header) (definitions_header) (rules_header)
] @keyword

(rule target: (symbol) @variable.parameter)
(rule target: (symbol_pair) @variable.parameter)
(locus) @variable.parameter

(rule_name) @string.quoted

[
 (except)
 (variable_keyword)
 (where)
 (in_keyword)
] @keyword

(variables name: (symbol) @variable.parameter)

(definition name: (symbol) @function)
(set name: (symbol) @function)
