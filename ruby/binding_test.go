package ruby_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ruby"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "puts 1"
	expected = "(program (call method: (identifier) arguments: (argument_list (integer))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ruby.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
