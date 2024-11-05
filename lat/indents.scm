[
  (clauses)
  (interpolation)
  (list)
  
  (cases)
  (dictionary)
  (function_body)
  (namespace)
] @indent.begin

[
	"clauses_end"
	"interpolation_end"
	"list_end"

  "cases_end"
	"dictionary_end"
	"function_body_end"
	"namespace_end"
] @indent.branch @indent.end


(clauses "clauses_end" @indent.branch @indent.end)
(interpolation "interpolation_end" @indent.branch @indent.end)
(list "list_end" @indent.branch @indent.end)

(cases "cases_end" @indent.branch @indent.end)
(dictionary "dictionary_end" @indent.branch @indent.end)
(function_body "function_body_end" @indent.branch @indent.end)
(namespace "namespace_end" @indent.branch @indent.end)

[
  (multiple_line_doc) (single_line_doc) (multiple_line_comment) (single_line_comment)
  (text)
  (ERROR)
] @indent.auto
