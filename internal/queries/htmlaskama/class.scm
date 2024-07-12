; inherits: html

; https://github.com/luckasRanarison/tailwind-tools.nvim/?tab=readme-ov-file#extension
(attribute
  (attribute_name) @_attribute_name
  (#eq? @_attribute_name "class")
  (quoted_attribute_value
    (attribute_value) @tailwind))
