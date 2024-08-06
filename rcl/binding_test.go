//go:build !plugin

package rcl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rcl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `{
  // A silly snippet to show some
  // features in a limited space.
  let data: List[String] = import "data.rcl";
  assert
    data.contains("Assertions"),
    "Assertions are supported";
  let f = () => ["List", "Dict", "Set"];
  features = [
    for d in data: d,
    for collection in f():
    f"{collection} comprehensions",
  ],
  export-to = "json, yaml, toml, ...",
}
`
	expected = "(source_file (expr_term_braces (comment) (comment) (seq_stmt (stmt_let ident: (ident) type: (type_apply name: (type_term (ident)) args: (type_term (ident))) value: (expr_import (string (string_double)))) (seq_stmt (stmt_assert condition: (expr_call function: (expr_field inner: (ident) field: (ident)) args: (string (string_double))) message: (string (string_double))) (seq_stmt (stmt_let ident: (ident) value: (expr_function args: (function_args) body: (expr_term_brackets (seq_elem (string (string_double))) (seq_elem (string (string_double))) (seq_elem (string (string_double)))))) (seq_assoc_ident field: (ident) value: (expr_term_brackets (seq_for idents: (ident) collection: (ident) body: (seq_elem (ident))) (seq_for idents: (ident) collection: (expr_call function: (ident)) body: (seq_elem (string (fstring_double (string_hole (ident))))))))))) (seq_assoc_ident field: (ident) value: (string (string_double)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), rcl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
