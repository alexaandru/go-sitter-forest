; inherits: html

((escaped_echo_statement
   (raw_text) @injection.content
   (#set! injection.language "php_only")
   (#set! injection.include-children)))

((unescaped_echo_statement
   (raw_text) @injection.content
   (#set! injection.language "php_only")
   (#set! injection.include-children)))

((directive
   (directive_argument
     (raw_text) @injection.content
     (#set! injection.language "php_only")
     (#set! injection.include-children))))

((alpine_attribute
   (attribute_name)
   (quoted_attribute_value
     (attribute_value) @injection.content
     (#set! injection.language "javascript")
     (#set! injection.include-children))))

((expression_attribute
   (attribute_name)
   (quoted_attribute_value
     (attribute_value) @injection.content
     (#set! injection.language "php_only")
     (#set! injection.include-children))))

(php_directive
  (raw_text) @injection.content
  (#set! injection.language "php_only")
  (#set! injection.include-children))
