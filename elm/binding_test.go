package elm_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/elm"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "import Html exposing (text)"
	expected = "(file (import_clause (import) moduleName: (upper_case_qid (upper_case_identifier)) exposing: (exposing_list (exposing) (exposed_value (lower_case_identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), elm.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
