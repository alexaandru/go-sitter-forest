package jsdoc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/jsdoc"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `/*
Solves equations of the form a * x = b
@example
// returns 2
globalNS.method1(5, 10);
@example
// returns 3
globalNS.method(5, 15);
@returns {Number} Returns the value of x for the equation.
*/
`
	expected = "(document (ERROR (description) (tag (tag_name)) (identifier) (description) (tag (tag_name)) (identifier)) (description) (tag (tag_name) (type) (description)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), jsdoc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
