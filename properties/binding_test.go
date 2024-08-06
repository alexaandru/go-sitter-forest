//go:build !plugin

package properties_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/properties"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
callable.url=https://${remote.host}/
# <- @property

application.host=${HOST:${remote.host}}

my.indexed.collection[0]=dog

my.secret=${aes-gcm-nopadding::DJNrZ6LfpupFv6QbXyXhvzD8eVDnDa_kTliQBpuzTobDZxlg}
`
	expected = "(file (property (key) (value (substitution (key)))) (comment) (property (key) (value (substitution (key) default: (substitution (key))))) (property (key (index)) (value)) (property (key) (value (substitution (key) (secret)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), properties.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
