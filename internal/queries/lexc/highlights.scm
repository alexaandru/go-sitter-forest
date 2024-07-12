[
 (lexicon_start)
 (multichar_symbols_header)
] @keyword.control

(lexicon (lexicon_name) @keyword.control
         (#eq? @keyword.control "Root"))
(lexicon (lexicon_name) @entity.name.function)

(lexicon_line continuation: (lexicon_name) @keyword.control
              (#match? @keyword.control "#"))
(lexicon_line continuation: (lexicon_name) @entity.name.function)

[
 (comment)
 (end_comment)
] @comment

[
 (semicolon)
 (colon)
] @punctuation.delimiter

((gloss) @number
 (#match? @number "\"weight: *-?[0-9]+(\.[0-9]+)?\""))
(gloss) @string.quoted

(regex "<" @punctuation.bracket)
(regex ">" @punctuation.bracket)
