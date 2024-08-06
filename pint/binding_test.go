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
	expected = "(source_file (decl (decl_storage (storage_var (ident) (type (ty_custom (path (ident))))))) (decl (decl_pred (ident) (pred_body (decl_state (ident) (type (ty_custom (path (ident)))) (state_init (storage_access (path (ident)))))) (pred_body (decl_constraint (expr (expr_additive (expr (expr_cmp (expr (expr_logical_or (expr (term (expr (expr_cmp (expr (expr_logical_and (expr (expr_cmp (expr (term (ident))) (expr (term (ident))))) (expr (term (ident_post_state))))) (expr (term (lit (number)))))))) (expr (term (ident_post_state))))) (expr (term (ident))))) (expr (term (lit (number)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), pint.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
