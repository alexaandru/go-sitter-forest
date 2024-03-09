//go:build !plugin

package pymanifest_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pymanifest"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
# include patterns
# <- comment

include pat1 pat2

recursive-include dir-pattern pat1 pat2

global-include pat1 pat2

graft dir-pattern

prune **/__pycache__

global-exclude [._]sw[a-p]

include \
  \ #   ^ escape
  tests/[!._]*
`
	expected = "(manifest (comment) (comment) (command (keyword) (pattern) (pattern)) (command (keyword) dir_pattern: (pattern) (pattern) (pattern)) (command (keyword) (pattern) (pattern)) (command (keyword) dir_pattern: (pattern)) (command (keyword) dir_pattern: (pattern (glob) (dir_sep))) (command (keyword) (pattern (char_sequence) (char_sequence (char_range)))) (command (keyword) (linebreak) (linebreak (comment)) (pattern (dir_sep) (char_sequence) (glob))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), pymanifest.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
