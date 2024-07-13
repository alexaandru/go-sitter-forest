;; ---------------------------------------------------------------------------
;; Modules and Imports
;; ---------------------------------------------------------------------------

(module
 name: (identifier) @name) @definition.module

(module_import
 name: (identifier) @name) @reference.module

(member_import
 name: (qualified_identifier
        module: (identifier) @name)) @reference.module

(member_import
 name: (qualified_identifier
        member: (identifier) @name)) @reference.type

;; ---------------------------------------------------------------------------
;; Types
;; ---------------------------------------------------------------------------

(data_type_def
 name: (identifier) @name) @definition.datatype
(data_type_def
 base: (_) @name) @reference.datatype

(entity_def
 name: (identifier) @name) @definition.entity

(enum_def
 name: (identifier) @name) @definition.enum

(event_def
 name: (identifier) @name) @definition.event
(event_def
 source: (identifier_reference) @name) @reference.entity

(rdf_def
 name: (identifier) @name) @definition.rdf

(structure_def
 name: (identifier) @name) @definition.structure

(type_class_def
 name: (identifier) @name) @definition.class

(union_def
 name: (identifier) @name) @definition.union

;; ---------------------------------------------------------------------------
;; Members
;; ---------------------------------------------------------------------------

(member_def
 name: (identifier) @name) @definition.field

(type_reference (identifier_reference) @name) @reference.type
(type_reference (builtin_simple_type) @name) @reference.type

(property_ref
 property: (identifier_reference) @name) @definition.field

(type_variant (identifier_reference) @name) @reference.type
(type_variant rename: (identifier) @name) @definition.type

(value_variant
 name: (identifier) @name) @definition.constant

(method_def name: (identifier) @name) @definition.method

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

(environment_def name: (identifier) @name) @definition.function

(quantified_variable
 source: (reserved_self) @name) @definition.variable
(quantified_variable
 name: (identifier) @name) @definition.variable

(named_variable_set (identifier) @name) @definition.variable

(mapping_variable domain: (identifier) @name) @definition.variable
(mapping_variable range: (identifier) @name) @definition.variable

(value (identifier_reference) @name) @reference.type
