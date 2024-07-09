//go:build !plugin

package clarity_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/clarity"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `;; Multiplayer Counter contract

(define-map counters principal uint)

(define-read-only (get-count (who principal))
	(default-to u0 (map-get? counters who))
)

(define-public (count-up)
	(ok (map-set counters tx-sender (+ (get-count tx-sender) u1)))
)
`
	expected = "(source (comment) (mapping_definition (identifier) key_type: (native_type) value_type: (native_type)) (function_definition (read_only_function (function_signature (identifier) (function_parameter (identifier) (parameter_type (native_type)))) (basic_native_form operator: (native_identifier) (uint_lit) (basic_native_form operator: (native_identifier) (identifier) (identifier))))) (function_definition (public_function (function_signature (identifier)) (contract_function_call operator: (identifier) (basic_native_form operator: (native_identifier) (identifier) (global) (basic_native_form operator: (native_identifier) (contract_function_call operator: (identifier) (global)) (uint_lit)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), clarity.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
