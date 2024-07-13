[
 (c_do)
 (c_plot)
 (c_splot)
 (c_while)
 ] @local.scope

(for_block
  start: (var_def
           var: (identifier) @local.definition))
(for_block
  start: (identifier) @local.reference)

(identifier) @local.reference
