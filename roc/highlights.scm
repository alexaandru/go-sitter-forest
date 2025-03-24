;; Highlight names (like `@comment.block.documentation`) are arbitrary.
;; However, some text editors encourage a standard set in their themes.
;; For consistency and quality, these queries assign the highlight names that Helix uses:
;; see https://docs.helix-editor.com/themes.html#scopes



;;
;; Higher-priorty queries
;;



(ability_chain "&" @operator.roc-special.in-typedef)



(parenthesized_type ["(" ")"] @punctuation.bracket.roc-special.in-typedef)
(record_type        ["{" "}"] @punctuation.bracket.roc-special.in-typedef)
(tags_type          ["[" "]"] @punctuation.bracket.roc-special.in-typedef)
(tuple_type         ["(" ")"] @punctuation.bracket.roc-special.in-typedef)

(function_type "," @punctuation.delimiter.roc-special.in-typedef)
(record_type   "," @punctuation.delimiter.roc-special.in-typedef)
(tuple_type    "," @punctuation.delimiter.roc-special.in-typedef)


(record_field_type (field_name) @variable.other.member.roc-special.in-typedef)



;;
;; Normal-priorty queries
;;



; N/A
; @attribute



; N/A
; @comment

; N/A
; @comment.block

(doc_comment) @comment.block.documentation

(line_comment) @comment.line



; N/A
; @constant

; N/A
; @constant.builtin

(variable_expr (module) @ignoreme.module (identifier) @constant.builtin.boolean
  (#eq? @constant.builtin.boolean "false") (#eq? @ignoreme.module "Bool"))
(variable_expr (module) @ignoreme.module (identifier) @constant.builtin.boolean
  (#eq? @constant.builtin.boolean "true") (#eq? @ignoreme.module "Bool"))

(char) @constant.character

(escape_char) @constant.character.escape

; N/A
; @constant.numeric

[
  (iint)
  (int)
  (natural)
  (uint)
  (xint)
] @constant.numeric.integer

[
  (decimal)
  (float)
] @constant.numeric.float



[
  (opaque_tag)
  (tag)
] @constructor



(annotation_type_def (annotation_pre_colon         (identifier) @function)
  (function_type))
(bin_op_expr (operator "|>") (variable_expr        (identifier) @function))
(function_call_pnc_expr caller: (field_access_expr (identifier) @function .))
(function_call_pnc_expr caller: (variable_expr     (identifier) @function))
(value_declaration (decl_left (identifier_pattern  (identifier) @function))
  (expr_body (anon_fun_expr)))

[
  "dbg"
] @function.builtin

; N/A
; @function.macro

; N/A
; @function.method

; N/A
; @function.method.private

; N/A
; @function.special



; N/A
; @keyword

[
  "app"
  (as)
  "as"
  "expect"
  "exposing"
  (implements)
  "module"
  "package"
  "platform"
  (to)
] @keyword.control

[
  "else"
  "if"
  (is)
  "then"
  (when)
] @keyword.control.conditional

; N/A
; @keyword.control.exception

[
  "import"
] @keyword.control.import

; TODO: Implement this for `for` and `while`.
; @keyword.control.repeat

; TODO: Also implement this for `return`.
(suffix_operator "?" @keyword.control.return)

; N/A
; @keyword.directive

; N/A
; @keyword.function

; TODO: Implement this for `and`, `or`, and any others.
; @keyword.operator

; N/A
; @keyword.storage.modifier

; TODO: Implement this for `var`.
; @keyword.storage.type



; N/A
; @label



; Note: See the lower-priority queries below for a `@namespace` query.

((module) @namespace.roc-special.builtin
  (#match? @namespace.roc-special.builtin "^(Bool|Box|Decode|Dict|Encode|Hash|Inspect|List|Num|Result|Set|Str)"))

; TODO(bugfix): `Set` yields an ERROR in `expect Set.from_list(paths_as_str) == Set.from_list(["nested-dir/a", "nested-dir/child"])`



[
  "="
  "."
  "&"
  ; "|" ; TODO: This conflicts with the `"|" @punctuation.bracket` query, so improve both.
  "<-"
  ".."
  (wildcard_pattern) 
  (operator)
] @operator



; N/A
; @punctuation

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
  "|" ; TODO: This conflicts with the `"|" @operator` query, so improve both.
] @punctuation.bracket

[
  ","
  ":"
  (arrow)
  (fat_arrow)
] @punctuation.delimiter

[
  (interpolation_char)
] @punctuation.special



; N/A
; @special

; TODO: Differentiate between values, functions, and types.
(app_header (provides_list ((identifier) @special.roc-special.provided)))

(app_header (packages_list ((platform_ref) @special.roc-special.package)))

; TODO: Differentiate between values, functions, and types.
(import_expr (exposing ((ident) @special.roc-special.exposed)))



(multiline_string) @string
(string) @string

; N/A
; @string.regexp

; N/A
; @string.special

; N/A
; @string.special.path

; N/A
; @string.special.symbol

(app_header (packages_list (platform_ref ((package_uri) @string.special.url))))




; N/A (We use `@constructor` and `@type.enum.variant` for "tags".)
; @tag

; N/A
; @tag.builtin



; Note: See the lower-priority queries below for a `@type` query.

((concrete_type) @type.builtin
  (#match? @type.builtin "^(Bool|Box|Dec|Decode|Dict|Encode|Hash|Inspect|Int|List|Num|Result|Set|Str)"))
((concrete_type) @type.builtin
  (#match? @type.builtin "^[IU](8|16|32|64|128)"))
((concrete_type) @type.builtin
  (#match? @type.builtin "^(Dec|F(32|64))"))

; Opinion: Type defs cross into documentation
;          and should be highlighted differently from normal code.
(opaque_type_def (_ (concrete_type) @type.definition))

; N/A
; @type.enum

(tag_type) @type.enum.variant

(bound_variable)                                        @type.parameter
(where_implements _ (where)                (identifier) @type.parameter
  (implements) (ability_chain)                          @type.parameter)

(inferred) @type.roc-special.inferred



; Note: See the lower-priority queries below for a `@variable` query.
(record_field_pattern (_ (identifier) @variable))

; N/A
; @variable.builtin

; N/A
; @variable.other

(field_name)                         @variable.other.member
; Note: This query matches the second identifier and all subsequent ones.
(field_access_expr      (identifier) @variable.other.member)
; Note: This query highlights module members as records instead of free variables,
;       which avoids highlighting them as out-of-scope vars.
(variable_expr (module) (identifier) @variable.other.member)

; N/A
; @variable.other.member.private

(argument_patterns                (identifier_pattern (identifier) @variable.parameter))
(argument_patterns (_             (identifier_pattern (identifier) @variable.parameter)))
(argument_patterns (_ (_          (identifier_pattern (identifier) @variable.parameter))))
(argument_patterns (_ (_ (_       (identifier_pattern (identifier) @variable.parameter)))))
(argument_patterns (_ (_ (_ (_    (identifier_pattern (identifier) @variable.parameter))))))
(argument_patterns (_ (_ (_ (_ (_ (identifier_pattern (identifier) @variable.parameter)))))))
(spread_pattern                                       (identifier) @variable.parameter)
(when_is_branch pattern: (_       (identifier_pattern (identifier) @variable.parameter)))



;;
;; Lower-priorty queries
;;



(module) @namespace



(concrete_type) @type



(identifier) @variable
