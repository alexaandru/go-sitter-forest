(family_name
  (name) @class.declaration.family_name
)

(family_name
  (name_aliases
    (name) @class.declaration.family_name.alias
  )
)

(name_ref
  (surname) @class.family_name.ref
)

(name_ref
  (name) @property.static.name.ref
)

(name_def 
  (name) @property.declaration.static.name.def
)

(name_def 
  (name_aliases (name) @property.declaration.static.name.def.alias)
)

(sources
  (name) @property.static.name.ref
)

(targets
  (name_def
    .
    (name) @property.static.name.ref
    .
  )
)

(relation
  arrow: "="
  (targets
    (name_def
      .
      (name) @property.declaration.static.name.def
      .
    )
  )
)

(new_surname
  (name) @class.family_name.ref
)

(unknown) @string.unknown

(comment) @comment

(num) @number.targets

(sources delimiter: _ @punctuation.delimiter.sources)
(targets delimiter: _ @punctuation.delimiter.targets)

"+" @operator.sources.join

(relation arrow: _ @operator.arrow)

(relation label: _ @string.label)
