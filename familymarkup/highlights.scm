(family_name
  (name) @class.declaration.family_name

  (name_aliases
    (name) @class.declaration.family_name.alias
  )?
)

(name_ref
  (name) @property.static.name.ref
  (surname) @class.family_name.ref
)

(name_def
  (name) @property.static.name.ref
  (surname)? @class.family_name.ref
)

(sources
  (name) @property.static.name.ref
)

(relation
  (sources)
  (eq)
  (targets
    (name_def
      (name) @property.declaration.static.name.def
      (name_aliases
        (name) @property.declaration.static.name.def.alias
      )?
      (surname)? @class.family_name.ref
    )
  )
)

(unknown) @string.unknown

(comment) @comment

(num) @number.targets

(sources delimiter: _ @punctuation.delimiter.sources)
(targets delimiter: _ @punctuation.delimiter.targets)

"+" @operator.sources.join

(relation arrow: _ @operator.arrow)

(relation label: _ @string.label)
