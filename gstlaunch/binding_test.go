//go:build !plugin

package gstlaunch_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gstlaunch"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
gst-launch-1.0 osssrc ! audioconvert ! vorbisenc ! oggmux !
filesink location=input.ogg
`
	expected = "(pipeline (fragment (element (reference element: (identifier) (ERROR (UNEXPECTED '0')) pad: (identifier))) (element (simple_element type: (identifier))) (element (simple_element type: (identifier))) (element (simple_element type: (identifier))) (element (simple_element type: (identifier) (property key: (identifier) value: (value))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gstlaunch.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
