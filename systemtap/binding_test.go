//go:build !plugin

package systemtap_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/systemtap"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
global count_jiffies, count_ms
probe timer.jiffies(100) { count_jiffies ++ }
probe timer.ms(100) { count_ms ++ }
probe timer.ms(12345)
{
  hz=(1000*count_jiffies) / count_ms
  printf ("jiffies:ms ratio %d:%d => CONFIG_HZ=%d\n",
    count_jiffies, count_ms, hz)
  exit ()
}
`
	expected = "(program (variable_declaration (identifier) (identifier)) (probe_point_definition probe_point: (probe_point component: (probe_point_component) component: (probe_point_component parameter: (literal (number)))) body: (statement_block (expression_statement (update_expression argument: (identifier))))) (probe_point_definition probe_point: (probe_point component: (probe_point_component) component: (probe_point_component parameter: (literal (number)))) body: (statement_block (expression_statement (update_expression argument: (identifier))))) (probe_point_definition probe_point: (probe_point component: (probe_point_component) component: (probe_point_component parameter: (literal (number)))) body: (statement_block (expression_statement (assignment_expression left: (identifier) right: (binary_expression left: (grouping_expression (binary_expression left: (literal (number)) right: (identifier))) right: (identifier)))) (expression_statement (call_expression function: (identifier) argument: (literal (string (escape_sequence))) argument: (identifier) argument: (identifier) argument: (identifier))) (expression_statement (call_expression function: (identifier))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), systemtap.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
