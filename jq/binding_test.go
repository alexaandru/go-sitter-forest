package jq_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/jq"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code     = `.[] | select(.color=="yellow")`
	expected = "(program (programbody (query chained_query: (query array_access: (suffix)) chained_query: (query function: (funcname) function: (args (query compare: (query term: (index (identifier))) compare: (query term: (string))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), jq.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
