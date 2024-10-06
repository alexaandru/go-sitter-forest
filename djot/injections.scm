(code_block
  (language) @injection.language
  (code) @injection.content)

(raw_block
  (raw_block_info
    (language) @injection.language)
  (content) @injection.content)

(frontmatter
  (language) @injection.language
  (frontmatter_content) @injection.content)

((table_cell) @injection.content (#set! injection.language "djot_inline"))
((link_label) @injection.content (#set! injection.language "djot_inline"))
((paragraph) @injection.content (#set! injection.language "djot_inline"))
((table_caption (content) @injection.content (#set! injection.language "djot_inline")))
((heading (content) @injection.content (#set! injection.language "djot_inline")))
