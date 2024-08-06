(statement
  (identifier) @keyword (#match? @keyword "^(Def)$")
  .
  (identifier) @function
  .
  (block) @function.inner) @function.outer

[
  (line_comment)
  (multiline_comment)
] @comment.inner

(line_comment)+ @comment.outer

(multiline_comment) @comment.outer

(block (statement)+ @block.inner) @entry.outer

(number) @number.inner

(statement) @statement.outer

(statement
  (identifier) @keyword (#any-of? @keyword "Let" "Set")
  .
  (identifier) @assignment.lhs
  .
  (_)+ @assignment.rhs @assignment.inner) @assignment.outer
