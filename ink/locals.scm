(knot_block) @local.scope
(stitch_block) @local.scope

(param (identifier) @local.definition)
(param (divert (identifier) @local.definition))
(temp_def name: (identifier) @local.definition)

(identifier) @local.reference
(divert (identifier) @local.reference)
