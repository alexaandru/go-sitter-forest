//go:build !plugin

package bp_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bp"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `gzip_srcs = ["src/test/minigzip.c"],
cc_binary {
    name: "gzip",
    srcs: gzip_srcs,
    shared_libs: ["libz"],
    stl: "none",
}
`
	expected = "(source_file (assignment left: (identifier) operator: (operator) right: (list_expression element: (interpreted_string_literal))) (ERROR) (module type: (identifier) property: (property field: (identifier) value: (interpreted_string_literal)) property: (property field: (identifier) value: (identifier)) property: (property field: (identifier) value: (list_expression element: (interpreted_string_literal))) property: (property field: (identifier) value: (interpreted_string_literal))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), bp.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
