(output_rule pos: (ident) @name) @definition.output
(attr_rule name: (ident) @name) @definition.category
(reduce_rule_group (ident) @name) @definition.reduction

(
 (set_var name: (ident) @name) @reference.category
 (#not-eq? @name "SIDE_SOURCES")
)

(
 (clip attr: (ident) @name) @reference.category
 (#not-match? @name "^(lem(h|q|case)?|tags|pos_tag|whole|chname|(ch)?content)$")
)
