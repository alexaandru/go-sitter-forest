;; Language features
;; -----------------

(event (id) @function)
(hook (id) @function)
(func (id) @function)
(type) @type
(attr) @attribute

;; Literals
;; --------

(minor_comment) @comment
(zeekygen_head_comment) @property
(zeekygen_prev_comment) @property
(zeekygen_next_comment) @property
(string) @string
(constant) @constant

;; Tokens
;; ------
[
 ":"
 ";"
 "$"
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

[
 "|"
 "++"
 "--"
 "!"
 "~"
 "-"
 "+"
 "as"
 "is"
 "*"
 "/"
 "%"
 "+"
 "-"
 "<"
 "<="
 ">"
 ">="
 "=="
 "!="
 "&"
 "^"
 "|"
 "&&"
 "||"
 "?"
 "in"
 "="
 "-="
 "+="
] @operator

[
 "add"
 "assert"
 "break"
 "case"
 "const"
 "copy"
 "default"
 "delete"
 "enum"
 "event"
 "export"
 "fallthrough"
 "for"
 "function"
 "global"
 "hook"
 "if"
 "local"
 "module"
 "next"
 "print"
 "record"
 "redef"
 "return"
 "schedule"
 "switch"
 "timeout"
 "type"
 "when"
 "while"
 ] @keyword
