//go:build !plugin

package xcompose_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/xcompose"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
include "%L"

<Multi_key> <g> <a> : "α"
<Multi_key> <g> <b> : "β"
<Multi_key> <g> <g> : "γ"
`
	expected = "(compose (include) (sequence (event (keysym)) (event (keysym)) (event (keysym)) (result (string (text)))) (sequence (event (keysym)) (event (keysym)) (event (keysym)) (result (string (text)))) (sequence (event (keysym)) (event (keysym)) (event (keysym)) (result (string (text)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), xcompose.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
