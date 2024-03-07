package luadoc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/luadoc"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
@class Transport @parent class
@public field name string
@param type number @parameter type
@return Car|Ship @may return Car or Ship
`
	expected = "(documentation (class_annotation (identifier) (ERROR (identifier) (comment) (identifier) (comment) (identifier) (comment)) (class_at_comment (identifier) (comment))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), luadoc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
