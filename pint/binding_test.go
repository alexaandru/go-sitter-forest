//go:build !plugin

package pint_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pint"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `storage {
    counter: int,
}

predicate Increment {
    state counter: int = storage::counter;

    constraint (counter == nil && counter' == 1) || counter' == counter + 1;
}
`
	expected = "(source_file (decl (storage_decl (storage_var (ident) (type (custom_type (path (ident))))))) (decl (predicate_decl (ident) (predicate_body (state_decl (ident) (type (custom_type (path (ident)))) (state_init (storage_access (ident))))) (predicate_body (constraint_decl (expr (additive_expr (expr (comparison_expr (expr (postfix_expr (expr (logical_or_expr (expr (term (expr (comparison_expr (expr (postfix_expr (expr (logical_and_expr (expr (comparison_expr (expr (term (ident))) (expr (term (ident))))) (expr (term (ident))))))) (expr (term (number))))))) (expr (term (ident))))))) (expr (term (ident))))) (expr (term (number))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), pint.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
