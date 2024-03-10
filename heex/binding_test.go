//go:build !plugin

package heex_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/heex"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
<!DOCTYPE html>
<%# ^ constant %>
<html>
<%# <- punctuation.bracket %>
<%#  ^ punctuation.bracket %>
</html>
`
	expected = "(fragment (doctype) (comment) (tag (start_tag (tag_name)) (comment) (comment) (end_tag (tag_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), heex.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
