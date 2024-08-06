//go:build !plugin

package robots_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/robots"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# comment

User-agent: *
Disallow:
`
	expected = "(source_file (comment) (rule (directive (userAgent)) (value)) (rule (directive (disallow))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), robots.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
