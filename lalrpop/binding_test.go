package lalrpop_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/lalrpop"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
use string_cache::DefaultAtom as Atom;
use grammar::parse_tree::*;
use grammar::pattern::*;
use std::iter::once;
use tok::{self, Tok};
use util::strip;

grammar<'input>(text: &'input str);

pub Grammar: Grammar =
    <module_attributes:ShebangAttribute*>
    <uses:Use*>
    <annotations:Annotation*>
    <lo:@L> "grammar" <hi:@R>
    <tps:GrammarTypeParameters?>
    <parameters:GrammarParameters?>
    <where_clauses:GrammarWhereClauses?>
    ";"
    <items:GrammarItem*> => {
        Grammar { prefix: format!("__"), // adjusted by 'parse_grammar'
                  span: Span(lo, hi),
                  type_parameters: tps.unwrap_or(vec![]),
                  parameters: parameters.unwrap_or(vec![]),
                  where_clauses: where_clauses.unwrap_or(vec![]),
                  items: uses.into_iter().chain(items).collect(),
                  annotations: annotations,
                  module_attributes: module_attributes}
    };
`
	expected = "(source_file (use) (use) (use) (use) (use) (use) (grammar (grammar_type_params (type_parameter (lifetime (identifier)))) (grammar_parameter (identifier) (type_ref (reference (lifetime (identifier)) (type_ref (parametrized_type (path (identifier))))))) (grammar_item (nonterminal (visibility) (nonterminal_name (identifier)) (type_ref (parametrized_type (path (identifier)))) (alternative (symbol (binding_symbol name: (identifier) item: (bare_symbol (bare_symbol (identifier)) (repeat)))) (symbol (binding_symbol name: (identifier) item: (bare_symbol (bare_symbol (identifier)) (repeat)))) (symbol (binding_symbol name: (identifier) item: (bare_symbol (bare_symbol (identifier)) (repeat)))) (symbol (binding_symbol name: (identifier) item: (bare_symbol (lookahead)))) (symbol (bare_symbol (string_literal))) (symbol (binding_symbol name: (identifier) item: (bare_symbol (lookbehind)))) (symbol (binding_symbol name: (identifier) item: (bare_symbol (bare_symbol (identifier)) (repeat)))) (symbol (binding_symbol name: (identifier) item: (bare_symbol (bare_symbol (identifier)) (repeat)))) (symbol (binding_symbol name: (identifier) item: (bare_symbol (bare_symbol (identifier)) (repeat)))) (symbol (bare_symbol (string_literal))) (symbol (binding_symbol name: (identifier) item: (bare_symbol (bare_symbol (identifier)) (repeat)))) (action (normal_action)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), lalrpop.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
