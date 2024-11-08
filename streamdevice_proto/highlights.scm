(comment) @comment

(variable_name) @constant
(ascii_name) @constant.builtin
"=" @operator

[ (function_name) (command_name) (handler_name) ] @function
[ "{" "}" "[" "]" "(" ")" "<" ">" "/" "#/" ] @punctuation.bracket
[ "|" ";" "," ] @punctuation.delimiter
[ "$" "\\$" "@" ] @operator

(quoted_literal) @string
(escape_sequence) @constant.builtin

(format_converter) @function.builtin
(checksum_flag) @operator
(checksum) @function

(time_conversion_spec) @constant.builtin

(keyword) @keyword

(record_name) @type
(field_name) @constant

(number) @number
