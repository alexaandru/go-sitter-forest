package chatito_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/chatito"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
%[greet]('training': '2')
    ~[hi] @[name?] ~[whatsUp?]

~[hi]
    hi
    hey

@[name]
    Janis
    Bob

~[whatsUp]
    whats up
    how is it going`
	expected = "(source (intent_def (intent) (arguments (argument key: (string) (eq) value: (string))) (intent_body (alias_ref (alias)) (slot_ref (slot)) (alias_ref (alias)))) (alias_def (alias) (alias_body (word) (word))) (slot_def (slot) (slot_body (word) (word))) (alias_def (alias) (alias_body (word) (word) (word) (word) (word) (word) (MISSING _eol))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), chatito.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
