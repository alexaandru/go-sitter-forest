//go:build !plugin

package hurl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/hurl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
GET https://api.example.org/jobs/{{job_id}}
[Options]
retry: true

HTTP/* 200
[Asserts]
jsonpath "$.state" == "COMPLETED"
`
	expected = "(hurl_file (entry (request (method) (value_string (value_string_content (value_string_text)) (template (expr (variable_name)))) (request_section (options_section (option (retry_option (boolean)))))) (response (version) (status) (response_section (asserts_section (assert (query (jsonpath_query (quoted_string (quoted_string_content (quoted_string_text))))) (predicate (predicate_func (equal_predicate (predicate_value (quoted_string (quoted_string_content (quoted_string_text)))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hurl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
