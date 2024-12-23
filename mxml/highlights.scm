(tag_name) @tag.name
(erroneous_end_tag_name) @tag.name.error
(prolog) @processing.doctype
(doctype) @processing.doctype

; Attribute names and values
((attribute
    (attribute_name) @tag.attribute.name
    ["="]? @tag.attribute.operator
    (quoted_attribute_value
      ["\"" "'"] @tag.attribute.value.delimiter.left
      (_)? @tag.attribute.value
      ["\"" "'"] @tag.attribute.value.delimiter.right
    )?
  )
)

(start_tag ["<" ">"] @tag.bracket)
(end_tag ["</" ">"] @tag.bracket)
(self_closing_tag ["<" "/>"] @tag.bracket)

(cdata_start) @cdata
(cdata_end) @cdata

(entity) @value.entity

(comment) @comment
