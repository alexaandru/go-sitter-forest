;; ---------------------------------------------------------------------------
;; Comments
;; ---------------------------------------------------------------------------

(line_comment) @comment

;; ---------------------------------------------------------------------------
;; Reserved Keywords
;; ---------------------------------------------------------------------------

[
 "module"
 "import"
 "assert"
 "class"
 "datatype"
 "entity"
 "enum"
 "event"
 "property"
 "rdf"
 "structure"
 "union"
 "is"
 "of"
 "end"
 ] @keyword

;; ---------------------------------------------------------------------------
;; Operators
;; ---------------------------------------------------------------------------

[
 "="
 ":="
 "≔"
 "¬"
 "∧"
 "∨"
 "⊻"
 "==>"
 "⇒"
 "<==>"
 "⇔"
 "∀"
 "∃"
 "∈"
 "->"
 "→"
 "<-"
 "←"
 ".."
 ] @operator

;; ---------------------------------------------------------------------------
;; Module & Imports
;; ---------------------------------------------------------------------------

(module name: (identifier) @module.definition)
(module "version" @keyword)

(import_statement [ "[" "]" ] @punctuation.bracket)

(member_import name: (qualified_identifier) @type)

(module_import name: (identifier) @module)

;; ---------------------------------------------------------------------------
;; Annotations and Constraints
;; ---------------------------------------------------------------------------

(annotation_property
 "@" @property
 name: (identifier_reference) @property)

(annotation_property value: (value (identifier_reference) @type))

(constraint name: (identifier) @property)

(informal_constraint (quoted_string) @embedded)
(informal_constraint language: (controlled_language_tag) @property)

(constraint_environment (constraint_environment_end) @keyword)

(environment_def "def" @keyword)
(environment_def (identifier) @function.definition . (function_def))
(environment_def (identifier) @constant . (constant_def))

(function_signature target: (_) @type)
(function_signature [ "(" ")" ] @punctuation.bracket)

(function_parameter name: (identifier) @variable.parameter)
(function_parameter target: (_) @type)

(optional) @operator

(function_cardinality_expression (sequence_ordering) @keyword)
(function_cardinality_expression (sequence_uniqueness) @keyword)
(function_cardinality_expression [ "{" "}" ] @punctuation.bracket)

(function_composition subject: (reserved_self) @variable.builtin)
(function_composition name: (identifier) @function.call)
(function_composition "." @punctuation.delimiter)

(constraint_sentence [ "(" ")" ] @punctuation.bracket)

(atomic_sentence
 predicate: (term (identifier_reference) @function.call))

(actual_arguments [ "(" ")" ] @punctuation.bracket)
(actual_arguments
 argument: (term (identifier_reference (identifier) @variable)))

(term (reserved_self) @variable.builtin)

((equation lhs: (term (identifier_reference) @variable)) (#is-not? local))

((equation rhs: (term (identifier_reference) @variable)) (#is-not? local))

(quantified_sentence "," @punctuation.separator)

(quantified_variable source: (reserved_self) @variable.builtin)
(quantified_variable name: (identifier) @variable.parameter)
(quantified_variable "in" @keyword)

(functional_term
 function: (term (identifier_reference) @function.call))

(sequence_builder [ "{" "}" ] @punctuation.bracket
                  "|" @punctuation.separator)

(named_variable_set (identifier) @variable)

(mapping_variable
 domain: (identifier) @variable range: (identifier) @variable)

(sequence_builder_body [ "(" ")" ] @punctuation.bracket)

(sequence_of_predicate_values (identifier_reference) @type)
(sequence_of_predicate_values [ "[" "]" ] @punctuation.bracket)

(negation "not" @keyword)
(conjunction "and" @keyword)
(disjunction "or" @keyword)
(exclusive_disjunction "xor" @keyword)
(implication "implies" @keyword)
(biconditional "iff" @keyword)

(universal "forall" @keyword)
(existential "exists" @keyword)

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

[
 (builtin_simple_type)
 (unknown_type)
 ] @type.builtin

(data_type_def name: (identifier) @type.definition)
(data_type_def base: (identifier_reference) @type)
(data_type_def opaque: (opaque) @keyword)

(entity_def name: (identifier) @type.definition)

(enum_def name: (identifier) @type.definition)

(event_def "source" @keyword)
(event_def
 name: (identifier) @type.definition
 source: (identifier_reference) @type)

(structure_def name: (identifier) @type.definition)

(union_def name: (identifier) @type.definition)

;; ---------------------------------------------------------------------------
;; RDF Definitions
;; ---------------------------------------------------------------------------

(rdf_def name: (identifier) @type.definition)
(rdf_types "type" @keyword type: (identifier_reference) @type)
(rdf_types [ "[" "]" ] @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Type Classes
;; ---------------------------------------------------------------------------

(type_class_def name: (identifier) @type.definition)
(type_class_def [ "(" ")" ] @punctuation.bracket)

(type_variable name: (identifier) @type)
(type_variable "+" @operator)

(type_class_reference name: (identifier_reference) @type)

(type_class_arguments [ "(" ")" ] @punctuation.bracket)

(method_def "def" @keyword)
(method_def name: (identifier) @method.definition)

(wildcard) @type.builtin

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(entity_identity "identity" @keyword)

(member_def name: (identifier) @variable.field)
(member_def target: (type_reference) @type)

(property_ref
 "ref" @keyword
 property: (identifier_reference) @variable.field)

(value_variant name: (identifier) @constant)

(type_variant (identifier_reference) @type)
(type_variant rename: (identifier) @type)
(type_variant "as" @keyword)

(cardinality_expression (sequence_ordering) @keyword)
(cardinality_expression (sequence_uniqueness) @keyword)
(cardinality_expression [ "{" "}" ] @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Values
;; ---------------------------------------------------------------------------

(string (quoted_string) @string)
(string language: (language_tag) @property)

(iri) @string.special

(binary) @string.special

[
 (decimal)
 (double)
 (integer)
 (unsigned)
 ] @number

(boolean) @boolean

(value_constructor name: (identifier_reference) @function.call)
(value_constructor [ "(" ")" ] @punctuation.bracket)

(value (identifier_reference) @type)

(sequence_of_values (identifier_reference) @type)
(sequence_of_values  [ "[" "]" ] @punctuation.bracket)

;; ---------------------------------------------------------------------------
;; Errors
;; ---------------------------------------------------------------------------

;; Highlight errors in red. This is not very useful in practice, as text will
;; be highlighted as user types, and the error could be elsewhere in the code.

(
 (ERROR) @error
 (#set! "priority" 110)
)
