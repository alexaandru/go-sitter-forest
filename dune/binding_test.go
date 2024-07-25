//go:build !plugin

package dune_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dune"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `(rule
 (mode fallback)
 (targets config)
 (action  (copy config.defaults %{targets})))

(rule
 (targets config.full)
 (deps    config_common.ml config)
 (action  (run ocaml %{dep:real_configure.ml})))
`
	expected = "(source_file (stanza (stanza_name) (field_rule (field_rule_mode (field_name) (sexp (atom)))) (field_rule (sexp (list (sexp (atom)) (sexp (atom))))) (field_rule (field_rule_action (field_name) (action (sexp (list (sexp (atom)) (sexp (atom)) (sexp (atom)))))))) (stanza (stanza_name) (field_rule (sexp (list (sexp (atom)) (sexp (atom))))) (field_rule (field_rule_deps (field_name) (sexp (atom)) (ERROR (atom)))) (field_rule (field_rule_action (field_name) (action (sexp (list (sexp (atom)) (sexp (atom)) (sexp (atom)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), dune.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
