(s_expression
  head: (s_expression_head) @name
  (#any-of? @name
    "enforce" "enforce-guard" "enforce-keyset" "enforce-one" "enforce-pact-version" "try"
  )
  tail: (string) @run
  (#set! tag pact-repl)
) @pact-repl
