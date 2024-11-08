((foreach_statement) @start
    (closing_statement) @end.after
    (#set! role block))

((for_statement) @start
    (closing_statement) @end.after
    (#set! role block))

((if_statement) @start
    (closing_statement) @end.after
    (#set! role block))

((block_statement) @start
    (closing_statement) @end.after
    (#set! role block))
