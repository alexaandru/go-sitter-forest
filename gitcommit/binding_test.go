package gitcommit_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/gitcommit"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
fix: prevent racing of requests

Introduce a request id and a reference to latest request. Dismiss
incoming responses other than from latest request.

Remove timeouts which were used to mitigate the racing issue but are
obsolete now.

Reviewed-by: Z
Refs: #123
`
	expected = "(source (message (trailer (token) (value)) (trailer (token) (value)) (trailer (token) (value))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gitcommit.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
