//go:build !plugin

package cedar_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cedar"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `@hello("world")
// a comment here
permit (
    // another comment here
    principal == Demo::User::"test",
    action in [Action::"demo", Action::"other"],
    resource == Thing::"foo"
)
when { context.device_properties.contains({"os": "Windows", "version": 11}) };
`
	expected = "(source_file (policy (annotation (identifier) (str)) (comment) (effect (permit)) (comment) (scope (principal_constraint (principal_eq_constraint (ERROR (path (identifier))) right: (entity type: (path (identifier)) id: (str)))) (action_constraint (action_in_list_constraint right: (entlist (entity type: (path (identifier)) id: (str))))) (resource_constraint (resource_eq_constraint right: (entity type: (path (identifier)) id: (str))))) (condition (when) (contains_expression operand: (selector_expression operand: (context) field: (field_identifier)) field: (record_literal (record_attribute key: (str) value: (int)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), cedar.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
