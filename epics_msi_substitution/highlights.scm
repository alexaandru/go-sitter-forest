(source_file) @local.scope

(identifier) @identifier

(string) @string
(escape_sequence) @string.special
(macro_expansion) @string.special

(comment) @comment

[ "${" "{" "}" "$(" ")" ] @punctuation.bracket
"," @punctuation.delimiter
"=" @punctuation.special

[
 "pattern"
 "file"
] @keyword
