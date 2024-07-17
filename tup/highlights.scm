[
 (foreach)
 (ifeq)
 (ifneq)
 (ifdef)
 (ifndef)
 "else"
 (endif)
 "include"
 (include_rules)
 "preload"
 "run"
 "preload"
 "export"
 "import"
 "error"
] @keyword


(string) @string
(error (string) @emphasis.strong)
(variable_statement (identifier (reference)) (operators) (string) @filename)
(text) @string.special
(flag) @tag
[
 (percent_flag)
 (array_percent_flag)
] @tag
(tup_identifier) @variable.builtin
(normal) @variable
(reference) @variable.special
(config_var) @variable
(operators) @operator
(arrow) @operator
[
 "$("
 "@("
 "&("
 "("
 ")"
 "|"
 "<"
 ">"
 "{"
 "}"
] @punctuation.bracket

(comment) @comment
(filename) @string.special
(group) @group
(bin) @bin

