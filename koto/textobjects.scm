(comment) @comment.inside

(comment)+ @comment.around

(function
  body: (_) @function.inside) @function.around

(args
  ((arg) @parameter.inside . ","? @parameter.around) @parameter.around)

(map
  ((entry_inline) @entry.inside) @entry.around)

(map_block
  ((entry_block) @entry.inside) @entry.around)
