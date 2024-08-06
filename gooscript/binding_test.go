//go:build !plugin

package gooscript_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gooscript"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `let N = 100;

var n = 0;

while n < N {
  let fizz = n mod 3;
  let buzz = n mod 5;


  if fizz + buzz == 0 {
    print(n);
  } 
  else if fizz + buzz == fizz {
    print("Fizz");
  }
  else if fizz + buzz == buzz {
    print("Buzz");
  } else {
    print("FizzBuzz");
  }

  n = n + 1;
}
`
	expected = "(source_file (variable_declare (variable_declare_ident name: (identifier)) initial: (number)) (ERROR) (variable_declare (variable_declare_ident name: (identifier)) initial: (number)) (ERROR) (while_statement (binary_expression (identifier) (identifier)) (block (variable_declare (variable_declare_ident name: (identifier)) initial: (binary_expression (identifier) (number))) (variable_declare (variable_declare_ident name: (identifier)) initial: (binary_expression (identifier) (number))) (if_statement (binary_expression (binary_expression (identifier) (identifier)) (number)) (block (function_call name: (identifier) (identifier))) (if_statement (binary_expression (binary_expression (identifier) (identifier)) (identifier)) (block (function_call name: (identifier) (string char: (char)))) (if_statement (binary_expression (binary_expression (identifier) (identifier)) (identifier)) (block (function_call name: (identifier) (string char: (char)))) (block (function_call name: (identifier) (string char: (char))))))) (binary_expression (identifier) (binary_expression (identifier) (number))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), gooscript.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
