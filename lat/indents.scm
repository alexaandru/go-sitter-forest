[
  (cases)
  (clauses)
  (function_body)
  (interpolation)
  (list)
  (map)
  (namespace)
] @indent.begin


[
  "ic"
  ")"
  "]"
  "}"
] @indent.branch @indent.end

(cases "}" @indent.branch @indent.end)
(clauses "]" @indent.branch @indent.end)
(function_body "}" @indent.branch @indent.end)
(interpolation "ic" @indent.branch @indent.end)
(list "]" @indent.branch @indent.end)
(map "}" @indent.branch @indent.end)
(namespace "}" @indent.branch @indent.end)

[
  (comment)
  (doc)
  (s)
  (ERROR)
] @indent.auto
