((comment) @injection.content
  (#set! injection.language "comment"))

(regex
  (literal_content) @injection.content
  (#set! injection.language "regex"))

(heredoc_body
  (heredoc_content) @injection.content
  (heredoc_end) @injection.language
  (#downcase! @injection.language))

(macro_def
  body: (expressions) @injection.content
  (#set! injection.language "crystal")
  (#set! injection.include-children))

(macro_begin
  body: (expressions) @injection.content
  (#set! injection.language "crystal")
  (#set! injection.include-children))

(macro_if
  then: (expressions) @injection.content
  (#set! injection.language "crystal")
  (#set! injection.include-children))

(macro_elsif
  then: (expressions) @injection.content
  (#set! injection.language "crystal")
  (#set! injection.include-children))

(macro_else
  body: (expressions) @injection.content
  (#set! injection.language "crystal")
  (#set! injection.include-children))

(macro_unless
  then: (expressions) @injection.content
  (#set! injection.language "crystal")
  (#set! injection.include-children))

(macro_for
  body: (expressions) @injection.content
  (#set! injection.language "crystal")
  (#set! injection.include-children))

(macro_verbatim
  body: (expressions) @injection.content
  (#set! injection.language "crystal")
  (#set! injection.include-children))
