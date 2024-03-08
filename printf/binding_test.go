package printf_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/printf"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `"Some different radices: %d %x %o %#x %#o \n"`
	expected = "(format_string (format (type)) (format (type)) (format (type)) (format (flags) (type)) (format (flags) (type)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), printf.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
