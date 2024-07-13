; Regular expressions
;--------------------

(regexp_name) @variable

[(any) (eof)] @constant

[(string) (character)] @string

(escape_sequence) @escape

(character_set "^" @punctuation.special)

(character_range "-" @punctuation.delimiter)

(regexp_difference "#" @operator)

(regexp_repetition ["*" "+" "?"] @operator)

(regexp_alternative "|" @operator)

; Rules
;------

(lexer_entry_name) @function

(lexer_argument) @variable.parameter

(lexer_entry ["=" "|"] @punctuation.delimiter)


; Keywords
;---------

["and" "as" "parse" "refill" "rule" "shortest"] @keyword

; Punctuation
;------------

["[" "]" "(" ")" "{" "}"] @punctuation.bracket

; Comments
;---------

(comment) @comment
