; Supported homomorphism highlighting:

; LaTeX
(homomorphism
  name: (hom_name) @_hom_name (#match? @_hom_name "^tex(-preamble)?$")
  ; TODO: in helix, `tex` must be replaced with `latex`. Any way to automate this?
  body: (hom_body) @injection.content (#set! injection.language "tex") )
