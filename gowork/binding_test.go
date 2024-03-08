package gowork_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gowork"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
go 1.22

use (
       ./path-to-upstream-mod-dir
       ./path-to-your-module
)
`
	expected = "(source_file (go_directive (go_version)) (use_directive (use_spec (file_path)) (use_spec (file_path))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gowork.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
