package d_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/d"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
void main()
{
    import std.stdio : writefln;
    import std.algorithm.sorting : sort;
    import std.range : chain;
}`
	expected = "(source_file (function_declaration (type (void)) (identifier) (parameters) (function_body (block_statement (import_declaration (import) (imported (module_fqn (identifier) (identifier))) (import_bind (identifier))) (import_declaration (import) (imported (module_fqn (identifier) (identifier) (identifier))) (import_bind (identifier))) (import_declaration (import) (imported (module_fqn (identifier) (identifier))) (import_bind (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), d.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
