;;; SPDX-FileCopyrightText: 2022 Christoph Sax <c_sax@mailbox.org>
;;;
;;; SPDX-License-Identifier: MIT

(block) @local.scope

; Parameter definitions
(parameter_declaration
  command: (identifier)
  macro: (macro) @local.definition)

; Variable definitions
(macro_definition
  command: (identifier)
  macro: (macro) @local.definition)

(command_expression
  command: (identifier)
  arguments: (argument_list
    declarator: (trace32_hll_variable) @local.definition))

; Function definitions
(subroutine_block
  command: (identifier)
  subroutine: (identifier) @local.definition)

(labeled_expression
  label: (identifier) @local.definition
  (block))

; References
(subroutine_call_expression
  command: (identifier)
  subroutine: (identifier) @local.reference)

[
  (macro)
  (trace32_hll_variable)
] @local.reference
