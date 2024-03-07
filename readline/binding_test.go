package readline_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/readline"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
set editing-mode vi

"\C-u": universal-argument
"\C-x\C-r": re-read-init-file
"\e[11~": "Function Key 1"
`
	expected = "(source (variable_setting (edit_mode_variable) (edit_mode_value)) (key_binding (keyseq (escape_sequence)) (function_name)) (key_binding (keyseq (escape_sequence) (escape_sequence)) (function_name)) (key_binding (keyseq (escape_sequence)) (macro)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), readline.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
