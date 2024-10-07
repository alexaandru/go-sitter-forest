[
  (autolink)
  (inline_link_destination)
  (math)
  (raw_inline)
  (verbatim)
  (reference_label)
  (class)
  (identifier)
  (key_value)
] @nospell

(full_reference_link
  (link_label) @nospell)

(full_reference_image
  (link_label) @nospell)

(inline_attribute
  _ @conceal
  (#set! conceal ""))

[
  (ellipsis)
  (en_dash)
  (em_dash)
] @string.special

(quotation_marks) @string.special

((quotation_marks) @string.special
  (#eq? @string.special "{\"")
  (#set! conceal "“"))

((quotation_marks) @string.special
  (#eq? @string.special "\"}")
  (#set! conceal "”"))

((quotation_marks) @string.special
  (#eq? @string.special "{'")
  (#set! conceal "‘"))

((quotation_marks) @string.special
  (#eq? @string.special "'}")
  (#set! conceal "’"))

((quotation_marks) @string.special
  (#any-of? @string.special "\\\"" "\\'")
  (#offset! @string.special 0 0 0 -1)
  (#set! conceal ""))

((hard_line_break) @string.escape
  (#set! conceal "↵"))

(backslash_escape) @string.escape

; Only conceal \ but leave escaped character.
((backslash_escape) @string.escape
  (#offset! @string.escape 0 0 0 -1)
  (#set! conceal ""))

(emphasis) @markup.italic

(strong) @markup.strong

(symbol) @string.special.symbol

(insert) @markup.underline

(delete) @markup.strikethrough

; Note that these aren't standard in nvim-treesitter,
; but I didn't find any that fit well.
(highlighted) @markup.highlighted

(superscript) @markup.superscript

(subscript) @markup.subscript

([
  (emphasis_begin)
  (emphasis_end)
  (strong_begin)
  (strong_end)
  (superscript_begin)
  (superscript_end)
  (subscript_begin)
  (subscript_end)
  (highlighted_begin)
  (highlighted_end)
  (insert_begin)
  (insert_end)
  (delete_begin)
  (delete_end)
  (verbatim_marker_begin)
  (verbatim_marker_end)
  (math_marker)
  (math_marker_begin)
  (math_marker_end)
  (raw_inline_attribute)
  (raw_inline_marker_begin)
  (raw_inline_marker_end)
] @punctuation.delimiter
  (#set! conceal ""))

((math) @markup.math
  (#set! "priority" 90))

(verbatim) @markup.raw

((raw_inline) @markup.raw
  (#set! "priority" 90))

(comment) @comment

; Don't conceal standalone comments themselves, only delimiters.
(comment
  [
    "{"
    "}"
    "%"
  ] @comment
  (#set! conceal ""))

(span
  [
    "["
    "]"
  ] @punctuation.bracket)

(inline_attribute
  [
    "{"
    "}"
  ] @punctuation.bracket)

(class) @type

(identifier) @tag

(key_value
  "=" @operator)

(key_value
  (key) @property)

(key_value
  (value) @string)

(link_text
  [
    "["
    "]"
  ] @punctuation.bracket
  (#set! conceal ""))

(autolink
  [
    "<"
    ">"
  ] @punctuation.bracket
  (#set! conceal ""))

(inline_link
  (inline_link_destination) @markup.link.url
  (#set! conceal ""))

(full_reference_link
  (link_text) @markup.link)

(full_reference_link
  (link_label) @markup.link.label
  (#set! conceal ""))

(collapsed_reference_link
  "[]" @punctuation.bracket
  (#set! conceal ""))

(full_reference_link
  [
    "["
    "]"
  ] @punctuation.bracket
  (#set! conceal ""))

(collapsed_reference_link
  (link_text) @markup.link)

(collapsed_reference_link
  (link_text) @markup.link.label)

(inline_link
  (link_text) @markup.link)

(full_reference_image
  (link_label) @markup.link.label)

(full_reference_image
  [
    "!["
    "["
    "]"
  ] @punctuation.bracket)

(collapsed_reference_image
  [
    "!["
    "]"
  ] @punctuation.bracket)

(inline_image
  [
    "!["
    "]"
  ] @punctuation.bracket)

(image_description) @markup.italic

(image_description
  [
    "["
    "]"
  ] @punctuation.bracket)

(inline_link_destination
  [
    "("
    ")"
  ] @punctuation.bracket)

[
  (autolink)
  (inline_link_destination)
] @markup.link.url

(footnote_reference
  (reference_label) @markup.link.label)

[
  (footnote_marker_begin)
  (footnote_marker_end)
] @punctuation.bracket


(todo) @comment.todo

(note) @comment.note

(fixme) @comment.error
