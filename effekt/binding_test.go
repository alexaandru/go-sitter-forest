//go:build !plugin

package effekt_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/effekt"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
record Position [A, B](line: List[A], col: Int, index: Int)

type Locations = List[SomeLocation]

type List[A] {
  Nil();
  Cons(head: A, tail: List[A])
}

def foo() = {}

interface FileNotFound {
  def FileNotFound(path: String): Unit
}

effect FileNotFound[A](path: String, msg: A): Unit
`
	expected = "(source_file (record (parameter_type (type_identifier) (generic_identifier) (generic_identifier)) members: (parameters (parameter name: (identifier) kind: (parameter_type (type_identifier) (generic_identifier))) (parameter name: (identifier) kind: (parameter_type (type_identifier))) (parameter name: (identifier) kind: (parameter_type (type_identifier))))) (type (parameter_type (type_identifier)) (parameter_type (type_identifier) (generic_identifier))) (type (parameter_type (type_identifier) (generic_identifier)) members: (type_members (type_member member: (type_identifier)) (type_member member: (type_identifier) (parameters (parameter name: (identifier) kind: (parameter_type (type_identifier))) (parameter name: (identifier) kind: (parameter_type (type_identifier) (generic_identifier))))))) (function name: (identifier) body: (block)) (interface (parameter_type (type_identifier)) members: (interface_methods (interface_method name: (identifier) parameters: (parameters (parameter name: (identifier) kind: (parameter_type (type_identifier)))) return_type: (return_type (parameter_type (type_identifier)))))) (effect (parameter_type (type_identifier) (generic_identifier)) parameters: (parameters (parameter name: (identifier) kind: (parameter_type (type_identifier))) (parameter name: (identifier) kind: (parameter_type (type_identifier)))) return_type: (return_type (parameter_type (type_identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), effekt.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
