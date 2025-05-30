;; ---------------------------------------------------------------------------
;; Modules and Imports
;; ---------------------------------------------------------------------------

(module
 name: (identifier) @name) @definition.module

(module_import name: (identifier) @name) @reference.module
(module_import rename: (identifier) @name) @reference.module

(member_import
 name: (qualified_identifier
        module: (identifier) @name)) @reference.module

(module_path_absolute
 segment: (identifier) @name) @reference.module

(module_path_relative
 segment: (identifier) @name) @reference.module

(member_import
 name: (qualified_identifier
        member: (identifier) @name)) @reference.type
(member_import rename: (identifier) @name) @reference.type

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(data_type_def name: (identifier) @name) @definition.datatype
(data_type_def base: (_) @name) @reference.datatype
(data_type_def base: (_) @name) @reference.datatype
(length_restriction_facet
 ["length" "maxLength" "minLength"] @name) @reference.facet
(digit_restriction_facet
 ["fractionDigits" "totalDigits"] @name) @reference.facet
(value_restriction_facet
 ["maxExclusive" "maxInclusive" "minExclusive" "minInclusive"] @name)
 @reference.facet
(tz_restriction_facet
 ["explicitTimezone"  ] @name) @reference.facet
(pattern_restriction_facet
 ["pattern"] @name) @reference.facet

(dimension_def name: (identifier) @name) @definition.dimension

(entity_def name: (identifier) @name) @definition.entity

(enum_def name: (identifier) @name) @definition.enum

(event_def name: (identifier) @name) @definition.event

(rdf_def name: (identifier) @name) @definition.rdf

(structure_def name: (identifier) @name) @definition.structure

(type_class_def name: (identifier) @name) @definition.class
(type_parameter name: (identifier) @name) @definition.class
(type_parameter_restriction class: (identifier_reference) @name) @reference.class

(type_restriction_argument (identifier) @name) @definition.class

(union_def name: (identifier) @name) @definition.union

(from_definition_clause from: (identifier_reference) @name) @reference.type
(from_definition_with member: (identifier)  @name) @reference.field
(from_definition_without member: (identifier)  @name) @reference.field

;; common to dimension and event
(source_entity entity: (identifier_reference) @name) @reference.entity
(source_entity member: (identifier) @name) @reference.field

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(dimension_parent name: (identifier) @name)  @definition.field
(dimension_parent parent: (identifier_reference) @name)  @reference.dimension

(member_def name: (identifier) @name) @definition.field

(type_reference (identifier_reference) @name) @reference.type
(type_reference (builtin_simple_type) @name) @reference.type

(property_ref property: (identifier_reference) @name) @reference.field

(type_variant (identifier_reference) @name) @reference.type
(type_variant rename: (identifier) @name) @definition.type

(value_variant name: (identifier) @name) @definition.constant

;; ---------------------------------------------------------------------------
;; Annotations, Constraints, and Values
;; ---------------------------------------------------------------------------

(annotation_property
 name: (identifier_reference) @name) @reference.type

(value (identifier_reference) @name) @reference.type

(value_constructor
 name: (identifier_reference) @name) @reference.type

(constraint name: (identifier) @name) @definition.constraint

(term (identifier_reference) @name) @reference.variable

(term (reserved_self) @name) @reference.variable

(functional_term function: (term (identifier_reference) @name)) @reference.call

(function_composition
 subject: (reserved_self) @name) @reference.variable
(function_composition
 subject: (identifier) @name) @reference.call
(function_composition
 name: (identifier) @name) @reference.call

(variable (identifier) @name) @definition.variable

(value (identifier_reference) @name) @reference.type

;; ---------------------------------------------------------------------------
;;Methods/Functions
;; ---------------------------------------------------------------------------

(function_def
 (function_signature name: (identifier) @name) @definition.function)

(function_signature (function_type_reference) @name) @reference.type

(method_def
 (function_signature name: (identifier) @name) @definition.method)

(function_parameter name: (identifier) @name) @definition.variable


