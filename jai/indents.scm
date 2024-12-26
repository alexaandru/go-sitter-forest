; Documentation, kinda
;   @indent.begin       ; indent children when matching this node
;   @indent.end         ; marks the end of indented block
;   @indent.align       ; behaves like python aligned/hanging indent
;   @indent.dedent      ; dedent children when matching this node
;   @indent.branch      ; dedent itself when matching this node
;   @indent.ignore      ; do not indent in this node
;   @indent.auto        ; behaves like 'autoindent' buffer option
;   @indent.zero        ; sets this node at position 0 (no indent)

; NOTE: these don't work well with Allman style

; Incomplete

[
  (block)
  (enum_declaration "{")
  (struct_declaration "{")
  (struct_literal "{")
  (anonymous_struct_type "{")
  (anonymous_enum_type "{")
  (asm_statement "{")
  (array_literal "[")
  (literal)
  (assignment_parameters "(")
] @indent.begin

(if_statement
  condition: (_) @indent.begin)

(if_statement
  consequence: (_
    ";" @indent.end) @_consequence
  (#not-match? @_consequence "{")) @indent.begin

(else_clause) @indent.branch
((else_clause) @_elif
  (#match? @_elif "if")) @indent.auto

((if_case_statement) @indent.auto)
((switch_case ";") @indent.begin)

((identifier) . (ERROR "(" @indent.begin))

(block
  "}" @indent.end)

[
  ")"
  "]"
  "}"
] @indent.branch @indent.end

[
  (literal "]")
] @indent.branch @indent.end

[
  (comment)
  (block_comment)
  (string)
  (ERROR)
] @indent.auto

