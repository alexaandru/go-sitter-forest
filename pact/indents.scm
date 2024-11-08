
(_ "[" "]" @indent.start) @indent.end
(_ "{" "}" @indent.start) @indent.end
(_ "(" ")" @indent.start) @indent.end


(string) @indent.ignore
(doc_string) @indent.ignore

[
  (comment)
  (ERROR)
] @indent.auto

