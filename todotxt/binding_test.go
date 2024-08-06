//go:build !plugin

package todotxt_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/todotxt"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
(A) 2022-02-02 This is a task with +project and @context due:2022-02-02   
2022-02-02 This is a task with +project and @context due:2022-02-02
x 2022-01-01 2022-02-02 Done task +project pri:A
x 2022-01-01 Done task with one date
Write tree-sitter parser
this is legal (A)
this is legal(A) +project
xlegal task @home
`
	expected = "(source_file (task (priority) (date) (project) (context) (kv)) (task (date) (project) (context) (kv)) (done_task (date) (date) (project) (kv)) (done_task (date)) (task) (task) (task (project)) (task (context)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), todotxt.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
