//go:build !plugin

package awa5_rs_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/awa5_rs"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `; fib.awasm
;
; calculate n fibonacci numbers
; starting at 1 1, given n >= 2

;fib vars
blo 1
blo 1

;read n (>=2)
r3d

;print first 2 vals
blo 1
pr1
blo 1
pr1

;remove first two from count
blo 2
sbm 1
sub

;init iter
blo 0

;start loop
lbl 5

;bring fib vars to top
sbm 0
sbm 0

;calc fib
dpl
sbm 2
4dd

;print new fib
dpl
pr1

;bring iter vars back to top
sbm 0
sbm 0

;iterate
pop
blo 1
sbm 1
sub
;dpl
;pr1
blo 0

;exit loop
eql
jmp 2
jmp 5

;end prgm
lbl 2
blo 63
prn
trm
`
	expected = "(source_file (comment) (comment) (comment) (comment) (comment) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism) argument: (value (number))) (comment) (instruction kind: (awatism)) (comment) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism)) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism)) (comment) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism)) (comment) (instruction kind: (awatism) argument: (value (number))) (comment) (label (number)) (comment) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism) argument: (value (number))) (comment) (instruction kind: (awatism)) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism)) (comment) (instruction kind: (awatism)) (instruction kind: (awatism)) (comment) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism) argument: (value (number))) (comment) (instruction kind: (awatism)) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism)) (comment) (comment) (instruction kind: (awatism) argument: (value (number))) (comment) (instruction kind: (awatism)) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism) argument: (value (number))) (comment) (label (number)) (instruction kind: (awatism) argument: (value (number))) (instruction kind: (awatism)) (instruction kind: (awatism)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), awa5_rs.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
