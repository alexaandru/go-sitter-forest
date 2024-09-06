; for tree-sitter

(
  (text_block . (raw_text) @injection.content)
  (#set! injection.language "markdown")
)

(text_block
  (language) @injection.language
  (raw_text) @injection.content
)

(
  (line_comment) @injection.content
  (#set! @injection.language "comment")
)
(
  (block_comment) @injection.content
  (#set! @injection.language "comment")
)

;; -------------------------------------
;; overwrite for nvim-treesitter
; use markdown as default
(text_block . (raw_text) @markdown)

; add alias for markdown
(text_block
  (language) @_language
  (raw_text) @markdown
  (#eq? @_language "md")
)

; add alias for javascript
(text_block
  (language) @_language
  (raw_text) @javascript
  (#eq? @_language "js")
)

(text_block
  (language) @language
  (raw_text) @content
)

(line_comment) @comment
(block_comment) @comment

