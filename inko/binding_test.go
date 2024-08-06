//go:build !plugin

package inko_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/inko"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `import std.test.Tests

class async Main {
  fn async main {
    let tests = Tests.new

    tests.test('Adding two integers') fn (t) {
      t.equal(10 + 5, 15)
      t.equal(1 + -1, 0)
    }

    tests.run
  }
}
`
	expected = "(source_file (import path: (path (identifier) (identifier))) (ERROR) (constant) (class modifier: (modifier) name: (constant) body: (class_body (method modifier: (modifier) name: (identifier) body: (block (define_variable name: (identifier) value: (call receiver: (constant) name: (name))) (call receiver: (identifier) name: (name) arguments: (arguments (string (string_content)))) (closure arguments: (arguments (argument name: (identifier))) body: (block (call receiver: (identifier) name: (name) arguments: (arguments (binary left: (integer) right: (integer)) (integer))) (call receiver: (identifier) name: (name) arguments: (arguments (binary left: (integer) right: (integer)) (integer))))) (call receiver: (identifier) name: (name)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), inko.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
