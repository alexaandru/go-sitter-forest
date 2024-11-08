(comment) @comment

(string) @string
(escape_sequence) @string.special
(macro_expansion) @string.special

(command_name (word) @function)
(argument (word) @variable.parameter)
(path (word) @variable.parameter)

[ "(" ")" ] @punctuation.bracket
[ "," ] @punctuation.delimiter
[ "<" ">" ">>" (file_descriptor) ] @operator
