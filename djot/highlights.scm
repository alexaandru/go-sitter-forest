; ; Please note that each editor handles highlighting differently.
; ; This file is made with Neovim in mind and will not
; ; work correctly in other editors, but can serve as a starting point.
[
  (paragraph)
  (comment)
  (table_cell)
] @spell

[
  (link_destination)
  (code_block)
  (raw_block)
  (reference_label)
  (class)
  (class_name)
  (identifier)
  (key_value)
  (frontmatter)
] @nospell

(heading) @markup.heading

((heading) @markup.heading.1 (#match? @markup.heading.1 "^# "))
((heading) @markup.heading.2 (#match? @markup.heading.2 "^## "))
((heading) @markup.heading.3 (#match? @markup.heading.3 "^### "))
((heading) @markup.heading.4 (#match? @markup.heading.4 "^#### "))
((heading) @markup.heading.5 (#match? @markup.heading.5 "^##### "))
((heading) @markup.heading.6 (#match? @markup.heading.6 "^###### "))

(thematic_break) @string.special

[
  (div_marker_begin)
  (div_marker_end)
] @punctuation.delimiter

([
  (code_block)
  (raw_block)
  (frontmatter)
] @markup.raw.block
  (#set! "priority" 90))

; Remove @markup.raw for code with a language spec
(code_block
  .
  (code_block_marker_begin)
  (language)
  (code) @none
  (#set! "priority" 90))

[
  (code_block_marker_begin)
  (code_block_marker_end)
  (raw_block_marker_begin)
  (raw_block_marker_end)
] @punctuation.delimiter

(language) @attribute

((language_marker) @punctuation.delimiter
  (#set! conceal ""))

[
  (block_quote)
  (block_quote_marker)
] @markup.quote

(table_header) @markup.heading

(table_header
  "|" @punctuation.special)

(table_row
  "|" @punctuation.special)

(table_separator) @punctuation.special

(table_caption
  (marker) @punctuation.special)

(table_caption) @markup.italic

[
  (list_marker_dash)
  (list_marker_plus)
  (list_marker_star)
  (list_marker_definition)
  (list_marker_decimal_period)
  (list_marker_decimal_paren)
  (list_marker_decimal_parens)
  (list_marker_lower_alpha_period)
  (list_marker_lower_alpha_paren)
  (list_marker_lower_alpha_parens)
  (list_marker_upper_alpha_period)
  (list_marker_upper_alpha_paren)
  (list_marker_upper_alpha_parens)
  (list_marker_lower_roman_period)
  (list_marker_lower_roman_paren)
  (list_marker_lower_roman_parens)
  (list_marker_upper_roman_period)
  (list_marker_upper_roman_paren)
  (list_marker_upper_roman_parens)
] @markup.list

(list_marker_task
  (unchecked)) @markup.list.unchecked

(list_marker_task
  (checked)) @markup.list.checked

((checked) @constant.builtin
  (#offset! @constant.builtin 0 1 0 -1)
  (#set! conceal "✓"))

(list_item
  (term) @type.definition)

(frontmatter_marker) @punctuation.delimiter

(comment) @comment

(block_attribute
  [
    "{"
    "}"
  ] @punctuation.bracket)

[
  (class)
  (class_name)
] @type

(identifier) @tag

(key_value
  "=" @operator)

(key_value
  (key) @property)

(key_value
  (value) @string)

(link_reference_definition
  ":" @punctuation.special)

(link_reference_definition
  [
    "["
    "]"
  ] @punctuation.bracket)

(link_reference_definition
  (link_label) @markup.link.label)

[
  (link_reference_definition)
] @markup.link.url


(footnote
  (reference_label) @markup.link.label)

[
  (footnote_marker_begin)
  (footnote_marker_end)
] @punctuation.bracket

