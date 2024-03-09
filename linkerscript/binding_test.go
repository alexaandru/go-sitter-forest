//go:build !plugin

package linkerscript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/linkerscript"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
SECTIONS
{
. = 0x10000;
.text : { *(.text) }
. = 0x8000000;
.data : { *(.data) }
.bss : { *(.bss) }
}
`
	expected = "(linkerscript (sections_command (assignment (number)) (output_section name: (symbol) (input_section (wildcard_pattern) section: (symbol))) (assignment (number)) (output_section name: (symbol) (input_section (wildcard_pattern) section: (symbol))) (output_section name: (symbol) (input_section (wildcard_pattern) section: (symbol)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), linkerscript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
