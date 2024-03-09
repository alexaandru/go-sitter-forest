//go:build !plugin

package ocamllex_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ocamllex"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
        (* File lexer.mll *)
        {
        open Parser        (* The type token is defined in parser.mli *)
        exception Eof
        }
        rule token = parse
            [' ' '\t']     { token lexbuf }     (* skip blanks *)
          | ['\n' ]        { EOL }
          | ['0'-'9']+ as lxm { INT(int_of_string lxm) }
          | '+'            { PLUS }
          | '-'            { MINUS }
          | '*'            { TIMES }
          | '/'            { DIV }
          | '('            { LPAREN }
          | ')'            { RPAREN }
          | eof            { raise Eof }
`
	expected = "(lexer_definition (comment) (action (ocaml)) (lexer_entry name: (lexer_entry_name) (lexer_case (character_set (character) (character (escape_sequence))) (action (ocaml))) (comment) (lexer_case (character_set (character (escape_sequence))) (action (ocaml))) (lexer_case (aliased_regexp (regexp_repetition (character_set (character_range (character) (character)))) (regexp_name)) (action (ocaml))) (lexer_case (character) (action (ocaml))) (lexer_case (character) (action (ocaml))) (lexer_case (character) (action (ocaml))) (lexer_case (character) (action (ocaml))) (lexer_case (character) (action (ocaml))) (lexer_case (character) (action (ocaml))) (lexer_case (eof) (action (ocaml)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ocamllex.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
