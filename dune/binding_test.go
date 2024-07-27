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
	expected = "(source_file (stanza (stanza_name) (field_name) (field_name) (file_name_target (file_name)) (field_name) (action (action_name) (file_name_dep (file_name)) (file_name_target (file_name)))) (stanza (stanza_name) (field_name) (file_name_target (file_name)) (field_name) (file_name) (file_name) (field_name) (action (action_name) (file_name_dep (file_name)))))"
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
