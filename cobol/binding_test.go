//go:build !plugin

package cobol_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cobol"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `       identification division.
       program-id. a.
       environment division.
       input-output section.
       FILE-CONTROL.
       select f assign PRINTER.
`
	expected = "(start (program_definition (identification_division (program_name)) (environment_division (input_output_section (select_statement file_name: (WORD) (assign_clause to: (PRINTER)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), cobol.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
