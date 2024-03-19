//go:build !plugin

package unison_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/unison"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
square : Nat -> Nat
square x =
  use Nat *
  x * x
`
	expected = "(unison (term_declaration (type_signature term_name: (wordy_id) (type_signature_colon) (term_type (wordy_id) (arrow_symbol) (wordy_id))) (term_definition name: (wordy_id) param: (wordy_id) (kw_equals) (use_clause (use) (namespace) (operator)) (function_application function_name: (wordy_id) (operator) (wordy_id)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), unison.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
