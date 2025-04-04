
(line_comment) @comment
(block_comment) @comment

(bool_lit) @boolean
(int_lit) @number
(dec_lit) @number
(char_lit) @character
(str_lit) @string

(upper_ident) @type
(lower_ident) @variable

(call_oper func_ident: (lower_ident) @function)
(func_decl func_ident: (lower_ident) @function)

[
"null"
"uninit"
] @constant

[
"="
"+"
"-"
"*"
"/"
"%"
"!"
"&"
"^"
"<"
"<="
"=="
">="
">"
"!="
".."
"::"
] @operator

[
"."
":"
","
";"
] @punctuation.delimiter

[
"("
")"
"["
"]"
"{"
"}"
] @punctuation.bracket

[
"let"
"def"
"struct"
"union"
"as"
"or"
"and"
"if"
"else"
"switch"
"case"
"default"
"for"
"in"
"continue"
"break"
"yield"
"return"
"view"
"len"
"own"
"init"
"deinit"
"static"
"constant"
] @keyword

