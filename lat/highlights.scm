[ (comment) (doc) ] @comment
[ (null) (false) (true) (global) (root) ] @constant.builtin
(text_esc) @string.escape
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
    "@in_kw"
    "base"
] @keyword
[ (nan)
  (bin) (oct) (hex)
  (dec)
  (uni) (number_esc)
  (infinity)
] @number
[
  "…" "..."
  "@not"
	"^"
  "*" "×" "/" "÷" "@mod" "@modulo" "@remainder"
  "+" "-"
  "<" "≤" "<=" ">=" "≥" ">" "@in_op" "@out" "@is"
  "=" "==" "===" "@matches" "≠" "<>" "!=" "!=="
  "@and"
  "@or"
] @operator
[ "(" ")"
  "[" "]"
  "{" "}"
  "io" "ic"
]  @punctuation.bracket
[ "->" "→" "." "," ";" ] @punctuation
(s) @string
[ (Logical) (Number) (Text) (List) (Map) (Function) (Time) (Re) (Unknown) ] @type
[ (key) (id) ] @variable


(ERROR) @error
