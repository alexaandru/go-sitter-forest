;;; SPDX-FileCopyrightText: 2022 Christoph Sax <c_sax@mailbox.org>
;;;
;;; SPDX-License-Identifier: MIT

; Subroutine definitions
(subroutine_block
  command: (identifier)
  subroutine: (identifier) @name) @definition.function

(labeled_expression
  label: (identifier) @name
  (block)) @definition.function

; Subroutine calls
(subroutine_call_expression
  command: (identifier)
  subroutine: (identifier) @name) @reference.call
