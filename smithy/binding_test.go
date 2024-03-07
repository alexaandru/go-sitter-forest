package smithy_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/smithy"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
$version: "2"
namespace example.weather

/// Provides weather forecasts.
/// Triple slash comments attach documentation to shapes.
service Weather {
    version: "2006-03-01"
}
`
	expected = "(source_file (control_section (control_statement (control_var_name (control_key)) (node_value (literal (string (string_fragment)))))) (shape_section (namespace_statement (namespace)) (comment) (comment) (shape_statement (shape_body (service_statement (identifier) (node_object (node_object_kvp (node_object_key (key_identifier)) (node_value (literal (string (string_fragment)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), smithy.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
