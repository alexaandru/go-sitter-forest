//go:build !plugin

package promql_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/promql"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
(
  topk (
    3,
    sum by (app, proc) (
      rate (
        instance_cpu_time_ns{container!~"(foo|bar).*"}[5m]
      )
    )
  )
) / 1000
`
	expected = "(query (binary_expression (function_call (function_name) (function_args (float_literal) (function_call (function_name) (grouping (label_name) (label_name)) (function_args (function_call (function_name) (function_args (range_vector_selector (metric_name) (label_selectors (label_matcher (label_name) (label_value))) (range_selection)))))))) (float_literal)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), promql.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
