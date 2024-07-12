; inherits: html

(escaped_echo_statement) @punctuation.special

(unescaped_echo_statement) @punctuation.special

(directive) @keyword.directive

(alpine_attribute
   (attribute_name) @attribute
   (quoted_attribute_value)) @string

(expression_attribute
  (attribute_name) @attribute
  (quoted_attribute_value)) @string

(blade_comment) @comment
