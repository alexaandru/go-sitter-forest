//go:build !plugin

package ini_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ini"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
; last modified 1 April 2001 by John Doe
[owner]
name = John Doe
organization = Acme Widgets Inc.
`
	expected = "(document (comment (text)) (section (section_name (text)) (setting (setting_name) (setting_value)) (setting (setting_name) (setting_value))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ini.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
