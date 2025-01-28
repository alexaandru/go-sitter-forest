; Some documentation I found in a random github issue
;   @indent.begin       ; indent children when matching this node
;   @indent.end         ; marks the end of indented block
;   @indent.align       ; behaves like python aligned/hanging indent
;   @indent.dedent      ; dedent children when matching this node
;   @indent.branch      ; dedent itself when matching this node
;   @indent.ignore      ; do not indent in this node
;   @indent.auto        ; behaves like 'autoindent' buffer option
;   @indent.zero        ; sets this node at position 0 (no indent)

; NOTE: these don't work well with Allman style.
; Also; I am really bad at this. There is almost no documentation available and I don't speak lisp or whichever of it's flavors this is.

; Incomplete

[
  (block)
  (enum_declaration "{")
  (struct_or_union_block "{")
  (struct_literal "{")
  (anonymous_struct_type "{")
  (anonymous_enum_type "{")
  (asm_statement "{")
  (array_literal "[")
  (index_expression "[")
  (literal)
  (assignment_parameters "(")
] @indent.begin

((modify_block) @indent.end)
((place_directive) @indent.branch)

; only indent the first statement after an if
(if_statement_condition_and_consequence
  consequence: (_
    ";" @indent.end) @_consequence
  (#not-match? @_consequence "{")
) @indent.begin

(else_clause) @indent.branch

; This is a workaround. I can't get 'else if' indentation to work properly.
(else_clause
  consequence: (_) @_consequence
  (#match? @_consequence "if")
) @indent.auto

(if_case_statement) @indent.begin
(switch_case ";") @indent.branch

((identifier) . (ERROR "(" @indent.begin))

(block
  "}" @indent.end)

[
  ")"
  "]"
  "}"
] @indent.branch @indent.end

[
  (comment)
  (block_comment)
  (string)
  (ERROR)
] @indent.auto

