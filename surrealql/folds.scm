; Folding queries for refactored SurrealQL grammar

; Fold entire multi-line statements
(select_statement) @fold
(create_statement) @fold
(update_statement) @fold
(delete_statement) @fold
(insert_statement) @fold
(upsert_statement) @fold
(relate_statement) @fold

; Foldable code blocks (content inside braces)
(block) @fold

; Fold multi-line DEFINE statements (schema definitions, etc.)
(define_table_statement) @fold
(define_field_statement) @fold
(define_index_statement) @fold
(define_access_statement) @fold
(define_function_statement) @fold
(define_event_statement) @fold
(define_database_statement) @fold
(define_namespace_statement) @fold
(define_param_statement) @fold
(define_scope_statement) @fold
(define_token_statement) @fold
(define_user_statement) @fold
(define_analyzer_statement) @fold

; Fold control statements and expressions
(if_statement) @fold
(for_statement) @fold
(let_statement) @fold

; Fold complex expressions
(subquery_statement) @fold

; Fold collections
(array) @fold
(object) @fold

; Fold permission clauses (often multi-line)
(permissions_basic_clause) @fold
(permissions_for_clause) @fold

; Fold complex FROM clauses with multiple conditions
(from_clause) @fold

; Fold table view definitions (AS SELECT ...)
(table_view_clause) @fold

