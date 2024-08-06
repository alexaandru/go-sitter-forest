//go:build !plugin

package git_rebase_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/git_rebase"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
pick deadbeef pick first commit
p deadbeef
drop deadbeef
pick deadbeef
fixup deadbeef fix commit for squashing
f deadbeef
`
	expected = "(source (operation (command) (label) (message)) (operation (command) (label)) (operation (command) (label)) (operation (command) (label)) (operation (command) (label) (message)) (operation (command) (label)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), git_rebase.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
