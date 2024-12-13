; NOTE: these don't work well with Allman style

; Incomplete

[
  (block)
  (enum_declaration "{")
  (struct_declaration "{")
  (struct_literal "{")
  (anonymous_struct_type "{")
  (asm_statement "{")
  (array_literal "[")
  (literal)

] @indent.begin

((if_statement)
  .
  (ERROR
    "else" @indent.begin))

(if_statement
  condition: (_) @indent.begin)

(if_statement
  consequence: (_
    ";" @indent.end) @_consequence
  (#not-match? @_consequence "{")) @indent.begin

(else_clause
  (_
    .
    "{" @indent.branch @indent.dedent))

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

