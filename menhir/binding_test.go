package menhir_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/menhir"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
%token <int> INT
%token PLUS MINUS TIMES DIV
%token LPAREN RPAREN
%token SEMICOLON
%token EOF

%left PLUS MINUS        /* lowest precedence */
%left TIMES DIV         /* medium precedence */
%nonassoc UMINUS        /* highest precedence */

/* changed the type, because the script does not return one value, but all
 * results which are calculated in the file */
%start <int list> main

%%

/* the calculated results are accumalted in an OCaml int list */
main:
| stmt = statement EOF { [stmt] }
| stmt = statement m = main { stmt :: m}
`
	expected = "(source_file (declaration (type (ocaml_type)) (terminal_alias_attrs (uid))) (declaration (terminal_alias_attrs (uid)) (terminal_alias_attrs (uid)) (terminal_alias_attrs (uid)) (terminal_alias_attrs (uid))) (declaration (terminal_alias_attrs (uid)) (terminal_alias_attrs (uid))) (declaration (terminal_alias_attrs (uid))) (declaration (terminal_alias_attrs (uid))) (declaration (priority_keyword) (symbol (uid)) (symbol (uid))) (comment) (declaration (priority_keyword) (symbol (uid)) (symbol (uid))) (comment) (declaration (priority_keyword) (symbol (uid))) (comment) (comment) (declaration (type (ocaml_type)) (non_terminal (lid))) (comment) (old_rule (symbol (lid)) (production_group (producer (lid) (actual (symbol (lid)))) (producer (actual (symbol (uid)))) (action (ocaml))) (production_group (producer (lid) (actual (symbol (lid)))) (producer (lid) (actual (symbol (lid)))) (action (ocaml)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), menhir.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
