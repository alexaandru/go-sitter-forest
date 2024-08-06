//go:build !plugin

package vim_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/vim"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
for i in foo
  if i.bar
    break
  endif
  continue
endfor

while v:false
endwhile
`
	expected = "(script_file (for_loop variable: (identifier) iter: (identifier) (body (if_statement condition: (field_expression value: (identifier) field: (identifier)) (body (break_statement))) (continue_statement))) (while_loop condition: (scoped_identifier (scope) (identifier))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), vim.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
