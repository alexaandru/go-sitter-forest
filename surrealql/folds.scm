; Fold entire multi-line SELECT statements
(select_statement) @fold

; Foldable code blocks (content inside braces)
(block) @fold

; Fold multi-line DEFINE statements (schema definitions, etc.)
(define_table_statement) @fold
(define_field_statement) @fold
(define_index_statement) @fold

;TODO: Add folding blocks for if-statements
