//go:build !plugin

package blade_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/blade"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `<x-layout>
  <x-slot name="title">
    Home | Example Website
  </x-slot>
  <ul>
    @foreach ($todos as $todo)
      <li>{{ $todo }}</li>
    @endforeach
  </ul>     
</x-layout>
`
	expected = "(document (element (start_tag (tag_name)) (element (start_tag (tag_name) (attribute (attribute_name) (quoted_attribute_value (attribute_value)))) (text) (end_tag (tag_name))) (element (start_tag (tag_name)) (directive (directive_argument (raw_text))) (element (start_tag (tag_name)) (text (echo_statement (escaped_echo_statement (raw_text)))) (end_tag (tag_name))) (directive) (end_tag (tag_name))) (end_tag (tag_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), blade.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
