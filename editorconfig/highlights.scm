(comment) @comment

(character) @constant

(section_name
  (character) @type)

(expansion_string
  (character) @type)

[
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

[
  (path_separator)
  ","
] @punctuation.delimiter

[
  "-"
  ".."
  "="
  (negation)
  (wildcard_characters)
  (wildcard_any_characters)
  (wildcard_single_character)
] @operator

(escaped_character) @string.special

(pair
  key: (identifier) @property
  value: (_)? @string)

(boolean) @boolean
(integer) @number

[
  (unset)
  (spelling_language)
  (indent_style)
  (end_of_line)
  (charset)
] @constant.builtin
