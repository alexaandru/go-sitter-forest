//go:build !plugin

package crystal_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/crystal"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
require "http/server"

server = HTTP::Server.new do |context|
  context.response.content_type = "text/plain"
  context.response.print "Hello world! The time is #{Time.local}"
end`
	expected = "(source_file (require (quoted_string)) (ERROR (identifier) (UNEXPECTED 'H') (constant) (identifier) (binary_operation (binary_operation (identifier) (operator) (identifier)) (operator) (identifier)) (identifier) (identifier)) (string (quoted_string)) (ERROR (identifier) (identifier) (identifier)) (string (quoted_string)) (identifier))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), crystal.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
