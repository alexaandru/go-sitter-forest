//go:build !plugin

package elsa_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/elsa"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
let one  = \f x -> f x
let two  = \f x -> f (f x)
let incr = \n f x -> f (n f x)

eval succ_one :
  incr one
  =d> (\n f x -> f (n f x)) (\f x -> f x)
  =b> \f x -> f ((\f x -> f x) f x)
  =b> \f x -> f ((\x -> f x) x)
  =b> \f x -> f (f x)                 -- beta-reduce the above
  =d> two                             -- optional
`
	expected = "(source_file (definition (function) (term (abstraction parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (identifier))))))) (definition (function) (term (abstraction parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (term (application abstraction: (term (identifier)) argument: (term (identifier)))))))))) (definition (function) (term (abstraction parameters: (parameter) parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (term (application abstraction: (term (application abstraction: (term (identifier)) argument: (term (identifier)))) argument: (term (identifier)))))))))) (reduction (method) (term (application abstraction: (term (identifier)) argument: (term (identifier)))) (step) (term (application abstraction: (term (term (abstraction parameters: (parameter) parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (term (application abstraction: (term (application abstraction: (term (identifier)) argument: (term (identifier)))) argument: (term (identifier)))))))))) argument: (term (term (abstraction parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (identifier))))))))) (step) (term (abstraction parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (term (application abstraction: (term (application abstraction: (term (term (abstraction parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (identifier))))))) argument: (term (identifier)))) argument: (term (identifier))))))))) (step) (term (abstraction parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (term (application abstraction: (term (term (abstraction parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (identifier))))))) argument: (term (identifier))))))))) (step) (term (abstraction parameters: (parameter) parameters: (parameter) body: (term (application abstraction: (term (identifier)) argument: (term (term (application abstraction: (term (identifier)) argument: (term (identifier))))))))) (comment) (step) (term (identifier))) (comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), elsa.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
