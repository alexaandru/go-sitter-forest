package tlaplus_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/tlaplus"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
EXTENDS A, B, C
LOCAL INSTANCE D WITH X ← Y
CONSTANTS Foo, Const(_, _), □ _, _ ≺ _, _ ^*
VARIABLES bar, baz

const_ref ≜ Foo
const_op_ref ≜ Const(1, 2)

n ≜ -10 \* this is a single-line comment
s ≜ "Hello world!\nHere \"is a quote\""
p ≜ Nat
(* this (* is *) block comment *)
postfix ≜ var'
tuple ≜ (⟨1, 2, 3⟩)
action ≜ ⟨TRUE⟩_⟨bar, baz⟩
sq_action ≜ [TRUE]_⟨bar, baz⟩
jlist ≜
  ∧ 1
  ∧ ∨ 2
    ∨ 3 ∧ 4
    ∨ 5
  ∧ 6
`
	expected = "(source_file (extends (identifier_ref) (identifier_ref) (identifier_ref)) (local_definition (instance (identifier_ref) (substitution (identifier_ref) (gets) (identifier_ref)))) (constant_declaration (identifier) (operator_declaration name: (identifier) (placeholder) (placeholder)) (operator_declaration name: (prefix_op_symbol (always)) (placeholder)) (operator_declaration (placeholder) name: (infix_op_symbol (prec)) (placeholder)) (operator_declaration (placeholder) name: (postfix_op_symbol (asterisk)))) (variable_declaration (identifier) (identifier)) (operator_definition name: (identifier) (def_eq) definition: (identifier_ref)) (operator_definition name: (identifier) (def_eq) definition: (bound_op name: (identifier_ref) (nat_number) (nat_number))) (operator_definition name: (identifier) (def_eq) definition: (bound_prefix_op symbol: (negative) rhs: (nat_number))) (comment) (operator_definition name: (identifier) (def_eq) definition: (string (escape_char) (escape_char) (escape_char))) (operator_definition name: (identifier) (def_eq) definition: (nat_number_set)) (block_comment (block_comment_text (block_comment (block_comment_text)))) (operator_definition name: (identifier) (def_eq) definition: (bound_postfix_op lhs: (identifier_ref) symbol: (prime))) (operator_definition name: (identifier) (def_eq) definition: (parentheses (tuple_literal (langle_bracket) (nat_number) (nat_number) (nat_number) (rangle_bracket)))) (operator_definition name: (identifier) (def_eq) definition: (step_expr_no_stutter (langle_bracket) (boolean) (rangle_bracket_sub) (tuple_literal (langle_bracket) (identifier_ref) (identifier_ref) (rangle_bracket)))) (operator_definition name: (identifier) (def_eq) definition: (step_expr_or_stutter (boolean) (tuple_literal (langle_bracket) (identifier_ref) (identifier_ref) (rangle_bracket)))) (operator_definition name: (identifier) (def_eq) definition: (conj_list (conj_item (bullet_conj) (nat_number)) (conj_item (bullet_conj) (disj_list (disj_item (bullet_disj) (nat_number)) (disj_item (bullet_disj) (bound_infix_op lhs: (nat_number) symbol: (land) rhs: (nat_number))) (disj_item (bullet_disj) (nat_number)))) (conj_item (bullet_conj) (nat_number)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), tlaplus.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
