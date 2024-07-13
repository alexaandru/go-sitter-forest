[
  (pattern_start)
  (named_pattern_start)
  (lexicon_start)
  (alias)
] @keyword.control

[
  (left_sieve)
  (right_sieve)
  (pattern_or)
  (colon)
  (pattern_operator)
  "("
  ")"
  "["
  "]"
  "-"
  ","
  (tag_distribution_operator)
] @keyword.operator

(tag) @entity.name.function

(lexicon_block (identifier) @entity.name.function)
(pattern_block (identifier) @entity.name.function)

(lexicon_string) @string.quoted
(escaped_char) @constant.character.escape
(tag_symbol) @constant
(archiphoneme_symbol) @variable
(morpheme_boundary) @variable

(comment) @comment

(number) @constant.number
