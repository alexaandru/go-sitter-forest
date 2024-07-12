;injection from function calls
(function_call_expr
  (variable_expr (identifier) @injection.language)
  (const [(multiline_string)(string)] @injection.content)
)
;injection from piping function calls
(bin_op_expr                                                                                      
part: (const                                                                                  
    [(multiline_string)(string)] @injection.content)
part: (operator)                                                                                
part: (variable_expr                                                                            
  (identifier)@injection.language))   

([
  (line_comment)
  (doc_comment)
] @injection.content
  (#set! injection.language "comment"))
