package ungrammar_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/ungrammar"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
Grammar =
  Node*

Node =
  name:'ident' '=' Rule

Rule =
  'ident'                // Alphabetic identifier
| 'token_ident'          // Single quoted string
| Rule*                  // Concatenation
| Rule ('|' Rule)*       // Alternation
| Rule '?'               // Zero or one repetition
| Rule '*'               // Kleene star
| '(' Rule ')'           // Grouping
| label:'ident' ':' Rule // Labeled rule
`
	expected = "(grammar (node (definition) (rule (alternation (sequence (repetition (node_rule (identifier))))))) (node (definition) (rule (alternation (sequence (label (label_name) (token (token_identifier))) (token (token_identifier)) (node_rule (identifier)))))) (node (definition) (rule (alternation (sequence (token (token_identifier))) (comment) (sequence (token (token_identifier))) (comment) (sequence (repetition (node_rule (identifier)))) (comment) (sequence (node_rule (identifier)) (repetition (rule (alternation (sequence (token (token_identifier)) (node_rule (identifier))))))) (comment) (sequence (node_rule (identifier)) (token (token_identifier))) (comment) (sequence (node_rule (identifier)) (token (token_identifier))) (comment) (sequence (token (token_identifier)) (node_rule (identifier)) (token (token_identifier))) (comment) (sequence (label (label_name) (token (token_identifier))) (token (token_identifier)) (node_rule (identifier)))))) (comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ungrammar.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
