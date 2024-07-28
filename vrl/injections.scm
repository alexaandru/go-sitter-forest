;; vim:ft=query

((regex) @injection.content
         (#offset! @injection.content 0 2 0 -1)
         (#set! injection.language "regex"))
