(defcap
  name: (def_identifier) @name) @definition.function

(defun
  name: (def_identifier) @name) @definition.function

(defpact
  name: (def_identifier) @name) @definition.function

(defconst
  name: (def_identifier) @name) @definition.function

(module
  name: (module_identifier) @name) @definition.module

(interface
  name: (def_identifier) @name) @definition.interface

(defschema
  name: (def_identifier) @name) @definition.interface

(type_annotation
  (type_identifier) @name) @reference.type

(reference (atom) @name (_)) @reference.class
