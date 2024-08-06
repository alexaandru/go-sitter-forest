//go:build !plugin

package http2_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/http2"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `POST http://localhost/

{
  "json_key": [{
    "name": "json_value"
  }, {
    "name": "json_value"
  }]
}

`
	expected = "(source_file (request (start_line (method) (url (rest_of_line))) (body (json_body (json_object (json_key_value key: (identifier) value: (json_list (json_body (json_object (json_key_value key: (identifier) value: (string)))) (json_body (json_object (json_key_value key: (identifier) value: (string)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), http2.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
