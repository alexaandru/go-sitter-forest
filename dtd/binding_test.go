//go:build !plugin

package dtd_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dtd"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
<!ELEMENT library (book+)>
<!ELEMENT book (title, author, year)>
`
	expected = "(document (elementdecl (Name) (contentspec (children (Name)))) (elementdecl (Name) (contentspec (children (Name) (Name) (Name)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), dtd.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
