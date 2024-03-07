package sxhkdrc_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/sxhkdrc"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
# terminal emulator
super + Return
	urxvt

# program launcher
super + @space
	dmenu_run

# make sxhkd reload its configuration files:
super + Escape
	pkill -USR1 -x sxhkd
`
	expected = "(source_file (comment) (binding (hotkey (modifier) (operator) (keysym)) (command)) (comment) (binding (hotkey (modifier) (operator) (attribute) (keysym)) (command)) (comment) (binding (hotkey (modifier) (operator) (keysym)) (command)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), sxhkdrc.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
