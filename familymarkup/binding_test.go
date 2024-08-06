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
	expected = "(root (family name: (family_name name: (name)) (relations (relation sources: (sources (name) (unknown)) label: (words) targets: (targets (name_def surname: (new_surname (name)) name: (name) aliases: (name_aliases (name))) (comment) (name_def surname: (new_surname (name)) name: (name)) (comment) (unknown) (comment) (comment))))))"
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
