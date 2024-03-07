package kconfig_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/kconfig"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
config MODVERSIONS
      bool "Set version information on all module symbols"
      depends on MODULES
      help
        Usually, modules have to be recompiled whenever you switch to a new
        kernel.
`
	expected = "(configuration (config name: (symbol) (type_definition (prompt)) (dependencies (symbol)) (help_text (text))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), kconfig.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
