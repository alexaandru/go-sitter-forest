package robot_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/robot"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = ""
	expected = "IMPLEMENT ME"
)

func TestGrammar(t *testing.T) {
	t.Skip("TODO")
	n, err := sitter.ParseCtx(context.Background(), []byte(code), robot.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
