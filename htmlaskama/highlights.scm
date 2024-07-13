(tag_name) @tag
(attribute_name) @attribute
(quoted_attribute_value) @string
(attribute_value) @string
(extends_statement(path) @string)
(include_statement(path) @string)
(import_statement(path) @string)
(comment) @comment
(keyword) @keyword

[
  "<"
  ">"
  "</"
  "/>"
  "{{"
  "}}"
  "{%"
  "%}"
] @punctuation.bracket
