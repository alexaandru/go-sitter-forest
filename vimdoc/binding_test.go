package vimdoc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/vimdoc"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
===========================================================================
FUNCTIONS                                              *myplugin-functions*

myplugin#MyFunction({required}, [optional])         *myplugin#MyFunction()*
  This is my function. It does different things to the {required} argument,
  depending upon the [optional] argument.
`
	expected = "(help_file (block (line (h1 (word) (tag text: (word))))) (block (line (word) (word) (argument text: (word)) (word) (word) (word) (tag text: (word))) (line (word) (word) (word) (word) (word) (word) (word) (word) (word) (word) (argument text: (word)) (word) (word)) (line (word) (word) (word) (word) (word) (word)) (MISSING \"<\")))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), vimdoc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
