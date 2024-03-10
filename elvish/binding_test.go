//go:build !plugin

package elvish_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/elvish"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
var hosts = [[&name=a &cmd='apt update']
             [&name=b &cmd='pacman -Syu']]
# peach = "parallel each"
peach {|h| ssh root@$h[name] $h[cmd] } $hosts
`
	expected = "(source_file (variable_declaration (lhs (identifier)) (rhs (list (map (pair key: (identifier) value: (bareword)) (pair key: (identifier) value: (string))) (map (pair key: (identifier) value: (bareword)) (pair key: (identifier) value: (string)))))) (comment) (command head: (identifier) argument: (lambda (parameter_list parameter: (identifier)) (chunk (command head: (identifier) argument: (bareword) argument: (indexing (variable (identifier)) (indices (bareword))) argument: (indexing (variable (identifier)) (indices (bareword)))))) argument: (variable (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), elvish.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
