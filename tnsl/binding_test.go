//go:build !plugin

package tnsl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/tnsl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `import "asdf"

asm "asdf"

# asdf

/; module ASDF
	import "asdf.tnsl"
;; export module ASDJ
;/

/; method Token
;/

/; main (uint argc, ~~uint8 argv) [int]

	/; if (a)
	;/

;/

/#
	comment
#/
`
	expected = "(top_level (import (string_literal)) (newline) (asm (string_literal)) (newline) (comment) (block (module (identifier) (newline) (import (string_literal)) (newline)) (module (identifier) (newline))) (block (method (user_type) (newline))) (block (function name: (identifier) (param_list (type (builtin_type)) (identifier) (type (builtin_type)) (identifier)) (output_list (type (builtin_type))) (newline) (block (if (stmt_list (expr (pointer_val (identifier)))) (newline))))) (comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), tnsl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
