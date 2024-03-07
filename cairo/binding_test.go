package cairo_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/cairo"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
%{
    print('hi %{ foobar %}'"%}"'''%}'''"""%}""")
    print(bye)
%}`
	expected = "(program (cairo_0_file (hint (python_code (code_line) (code_line)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), cairo.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
