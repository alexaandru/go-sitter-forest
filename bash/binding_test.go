//go:build !plugin

package bash_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bash"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = "echo 1"
	expected = "(program (command name: (command_name (word)) argument: (number)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), bash.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
