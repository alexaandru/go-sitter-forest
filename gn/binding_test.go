package gn_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/gn"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
    group("a") {
      metadata = {
        doom_melon = [ "enable" ]
        my_files = [ "foo.cpp" ]
        my_extra_files = [ "bar.cpp" ]
      }

      deps = [ ":b" ]
    }
`
	expected = "(source_file (primary_expression (call_expression function: (identifier) (primary_expression (string (string_content))))) (primary_expression (block (assignment_statement (identifier) (primary_expression (block (assignment_statement (identifier) (primary_expression (list (primary_expression (string (string_content)))))) (assignment_statement (identifier) (primary_expression (list (primary_expression (string (string_content)))))) (assignment_statement (identifier) (primary_expression (list (primary_expression (string (string_content))))))))) (assignment_statement (identifier) (primary_expression (list (primary_expression (string (string_content)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gn.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
