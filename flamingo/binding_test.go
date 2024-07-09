//go:build !plugin

package flamingo_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/flamingo"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `install: map<str, str>

fn run(args: vec<str>) -> int;

## C compiler class.
extern class CC {
	extern fn add_opt(self, option: str) -> void;
	extern fn compile(self, src_path: str) -> str;
}
`
	expected = "(source_file (statement (var_declaration (identifier) (type (type (type_name (identifier (primitive_type)))) (type (type_name (identifier (primitive_type))))))) (statement (function_declaration name: (identifier) params: (param_list (param (identifier) (type (type (type_name (identifier (primitive_type))))))) (ERROR) body: (statement (expression (identifier (primitive_type)))))) (ERROR (UNEXPECTED ';')) (doc_comment (doc_comment_content)) (statement (class_declaration qualifiers: (qualifier_list (qualifier)) name: (identifier) body: (statement (function_declaration qualifiers: (qualifier_list (qualifier)) name: (identifier) params: (param_list (param (identifier)) (param_list (param (identifier) (type (type_name (identifier (primitive_type))))))) (ERROR) body: (statement (expression (identifier (primitive_type)))))) (ERROR (UNEXPECTED ';')) body: (statement (function_declaration qualifiers: (qualifier_list (qualifier)) name: (identifier) params: (param_list (param (identifier)) (param_list (param (identifier) (type (type_name (identifier (primitive_type))))))) (ERROR) body: (statement (expression (identifier (primitive_type)))))) (ERROR (UNEXPECTED ';')))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), flamingo.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
