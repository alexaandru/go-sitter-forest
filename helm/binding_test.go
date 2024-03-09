//go:build !plugin

package helm_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/helm"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
apiVersion: v1
kind: ConfigMap
metadata:
  name: {{ printf "%s-%s" .Chart.Name .Release.Name | trunc 63 | trimSuffix "-" }}
  namespace: {{ .Release.Namespace }}
  labels:
    {{- with .Values.labels -}}
    {{ toYaml . | nindent 4 }}
    {{- end }}
data:
  something: something
`
	expected = "(template (text) (chained_pipeline (chained_pipeline (function_call function: (identifier) arguments: (argument_list (interpreted_string_literal) (selector_expression operand: (field name: (identifier)) field: (field_identifier)) (selector_expression operand: (field name: (identifier)) field: (field_identifier)))) (function_call function: (identifier) arguments: (argument_list (int_literal)))) (function_call function: (identifier) arguments: (argument_list (interpreted_string_literal)))) (text) (selector_expression operand: (field name: (identifier)) field: (field_identifier)) (text) (with_action condition: (selector_expression operand: (field name: (identifier)) field: (field_identifier)) consequence: (text) consequence: (chained_pipeline (function_call function: (identifier) arguments: (argument_list (dot))) (function_call function: (identifier) arguments: (argument_list (int_literal)))) consequence: (text)) (text))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), helm.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
