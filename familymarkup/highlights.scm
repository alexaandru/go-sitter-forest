(family_name
  (name) @constant.family_name
)

(family_name
  (name_aliases
    (name) @constant.family_name.alias
  )
)

(name_ref
  (surname) @constant.family_name.ref
)

(name_ref
  (name) @constant.name.ref
)

(name_def 
  (name) @constant.name.def
)

(name_def 
  (name_aliases (name) @constant.name.def.alias)
)

(sources
  (name) @constant.name.ref
)

(targets
  (name_def
    .
    (name) @constant.name.ref
    .
  )
)

(relation
  arrow: "="
  (targets
    (name_def
      .
      (name) @constant.name.def
      .
    )
  )
)

(new_surname
  (name) @constant.family_name.ref
)

(unknown) @string.unknown

(comment) @comment

(num) @number.targets

(sources delimiter: _ @punctuation.delimiter.sources)
(targets delimiter: _ @punctuation.delimiter.targets)

"+" @operator.sources.join

(relation arrow: _ @operator.arrow)

(relation label: _ @string.label)
