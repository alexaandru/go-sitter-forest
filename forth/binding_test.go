package forth_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/forth"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
INCLUDE ran4.seq

100      constant #drawers

create drawers  #drawers cells allot                    \ index 0..#drawers-1

: drawer[]                              ( n -- addr )   \ return address of drawer n
    cells drawers +
;

s" Hello world!" cr
`
	expected = "(source_file (builtin (core)) (word) (number) (builtin (core)) (word) (builtin (core)) (word) (word) (builtin (core)) (builtin (core)) (comment) (word_definition (start_definition) (word) (comment) (comment) (builtin (core)) (word) (builtin (operator)) (end_definition)) (string) (builtin (core)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), forth.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
