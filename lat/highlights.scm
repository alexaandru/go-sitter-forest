
[ "(" ")"
	"interpolation_start"
	"interpolation_end"
  "namespace_start"
	"namespace_end"
	"list_start"
	"list_end"
	"dictionary_start"
	"dictionary_end"
	"clauses_start"
	"clauses_end"
	"call_start"
	"call_end"
	"function_body_start"
	"function_body_end"
	"cases_start"
	"cases_end"
]  @punctuation.bracket
[ (multiple_line_doc) (single_line_doc) (multiple_line_comment) (single_line_comment) ] @comment
[ (false)  (true)
"@root"
"@global"
"@html"
(number_constant)
] @constant.builtin
(text_escape) @string.escape
[
    "@" "@end"
    "@fallback"
    "@label" "@break" "@continue"
    "@reduce" "@each"
        "@from"
            "@to" "@until"
            "@by"
    "@if" "@then" "@else"
    "@let" "@as" (drop)
    "@match" "@with"
    "@in_keyword"
    "base_bin"
    "base_oct"
    "base_hex"
    "base_character"
] @keyword
[ (nan)
  (bin_value) (oct_value) (hex_value)
  (decimal)
  (character_value)
  (character_escape_value)
  (infinity)
] @number
[
  "…" "..."
  "@not"
  "^"
  "*" "×" "/" "÷" "@modulo" "@remainder" "%"
  "+" "-"
  "<" "≤" "<=" ">=" "≥" ">" "@in_operator" "@out" "@is" "@is_not" "@matches" "@does_not_match"
  "=" "==" "===" "≠" "<>" "!=" "!=="
  "@and"
  "@or"
] @operator
[ "->" "→" "." "," ";" ] @punctuation
(string) @string
[ "@null" "@logical" "@number" "@text" "@list" "@dictionary" "@function" "@unknown" ] @type

[ (definition_key) (dictionary_key) (id) ] @constant

[
	(logical_method) (number_method) (text_method) (list_method) (dictionary_method)
	(html_tag) (html_deprecated_tag) (html_experimental_tag) (html_custom)
] @function.method

(ERROR) @error