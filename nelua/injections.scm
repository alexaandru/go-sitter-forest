((preproc_statement_content) @injection.content
 (#set! injection.language "lua")
 (#set! injection.combined))

((preproc_expression_content) @injection.content
 (#set! injection.language "lua"))

((comment_body) @injection.content
 (#set! injection.language "comment"))

