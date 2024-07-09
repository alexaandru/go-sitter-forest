//go:build !plugin

package familymarkup_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/familymarkup"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `Family

Name + ? = word
(Surname) Name (Alias)
# some (random) - ? = text
(Surname) Name
* other крилик # asd / asd
?
// test
// two
`
	expected = "(root (family (family_name (name)) (relations (relation (sources (name_ref (name)) (unknown)) label: (words) (targets (name_def (new_surname (name)) (name) (name_aliases (name))) (comment) (name_def (new_surname (name)) (name)) (comment) (unknown) (comment) (comment))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), familymarkup.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
