package hjson_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/hjson"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
{
  JSON: "a string"

  Hjson: a string

  # notice, no escape necessary:
  RegEx: \s+
}
`
	expected = "(document (object (ERROR (UNEXPECTED 'J') (string (quoted_string)) (ERROR (UNEXPECTED 'H') (UNEXPECTED 'a') (comment) (UNEXPECTED 'R')) (UNEXPECTED '\\'))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hjson.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
