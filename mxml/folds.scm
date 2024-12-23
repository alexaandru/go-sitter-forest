((element
  (start_tag) @start
  (end_tag) @end)
 (#set! role tag)
)

; Allows folding on CDATA
((element
  (cdata
   (cdata_start) @start
   (cdata_end) @end)
  (#set! role tag)
 )
)
