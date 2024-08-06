//go:build !plugin

package gomod_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gomod"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
module sample

go 1.22
`
	expected = "(source_file (module_directive (module_path)) (go_directive (go_version)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), gomod.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
