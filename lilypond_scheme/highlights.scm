[
  (scheme_comment)
] @comment

(
  (scheme_symbol) @operator
  (#match? @operator "^([*+/=<>-]|[<>]=)$")
)

(
  (scheme_string
    "\"" @string.delimiter.left
    [
      (scheme_string_fragment)?
      (scheme_escape_sequence)? @string.escape
    ]
    "\"" @string.delimiter.right
  )
) @string

(scheme_keyword
  "#:" @punctuation
  (scheme_keyword_name) @identifier
)

(scheme_boolean) @value.boolean

(scheme_number) @value.number

(scheme_character) @value.entity

(scheme_quote . "'" @operator)
(scheme_quasiquote . "`" @operator)
(scheme_unquote . "," @operator)
(scheme_unquote_splicing . ",@" @operator)

[
  "(" ")"
  "#{" "#}"
] @punctuation.bracket
