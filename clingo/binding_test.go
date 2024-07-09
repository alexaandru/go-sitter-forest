//go:build !plugin

package clingo_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/clingo"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `#include <incmode>.

% if set to one, permits consecutive moves in one time step
% this will not provide optimal plans but usually finds solutions much faster
#const consecutive = 0.

#program base.

% neighborhood relation
d(1,0;0,1;-1,0;0,-1).
n((X,Y),(X+DX,Y+DY)) :- dim((X,Y)), dim((X+DX,Y+DY)), d(DX,DY).

% positions at time step zero
at(0,(X,Y),N) :- in(X,Y,N).

#program step(t).

% guess moves
1 { move(t,A,B) : n(A,B) } 1 :- dim(B), not at(t-1,B,_).
0 { move(t,A,B) : n(A,B) } 1 :- move(t,B,_), consecutive == 1.

% check moves
 :- 2 { move(t,A,B) }, dim(A).

% state transition
at(t,A,N) :- at(t-1,A,N), not move(t,A,_).
at(t,B,N) :- at(t-1,A,N),     move(t,A,B).

% some redundant constraints
 :- move(t,A,_), not at(t-1,A,_).
 :- move(t,A,B), move(t-1,B,A), consecutive != 1.

#program check(t).

% check domain knowledge
 :- not 1 { not at(t,A,_) : dim(A) } 1.
 :- 2 { at(t,A,N) }, dim(A).

% check goal
 :- go(X,Y,N), not at(t,(X,Y),N), query(t).

#show move/3.
#show at/3.
`
	expected = "(source_file (statement (INCLUDE) (LT) (identifier) (GT) (DOT)) (single_comment) (single_comment) (statement (CONST) (identifier) (EQ) (constterm (NUMBER (dec))) (DOT)) (statement (BLOCK) (identifier) (DOT)) (single_comment) (statement (head (literal (atom (identifier) (LPAREN) (argvec (argvec (argvec (argvec (termvec (termvec (term (NUMBER (dec)))) (COMMA) (term (NUMBER (dec))))) (SEM) (termvec (termvec (term (NUMBER (dec)))) (COMMA) (term (NUMBER (dec))))) (SEM) (termvec (termvec (term (SUB) (term (NUMBER (dec))))) (COMMA) (term (NUMBER (dec))))) (SEM) (termvec (termvec (term (NUMBER (dec)))) (COMMA) (term (SUB) (term (NUMBER (dec)))))) (RPAREN)))) (DOT)) (statement (head (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (term (LPAREN) (tuplevec (tuple (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE))))) (RPAREN))) (COMMA) (term (LPAREN) (tuplevec (tuple (termvec (termvec (term (term (VARIABLE)) (ADD) (term (VARIABLE)))) (COMMA) (term (term (VARIABLE)) (ADD) (term (VARIABLE)))))) (RPAREN)))) (RPAREN)))) (IF) (bodydot (bodycomma (bodycomma (literal (atom (identifier) (LPAREN) (argvec (termvec (term (LPAREN) (tuplevec (tuple (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE))))) (RPAREN)))) (RPAREN))) (COMMA)) (literal (atom (identifier) (LPAREN) (argvec (termvec (term (LPAREN) (tuplevec (tuple (termvec (termvec (term (term (VARIABLE)) (ADD) (term (VARIABLE)))) (COMMA) (term (term (VARIABLE)) (ADD) (term (VARIABLE)))))) (RPAREN)))) (RPAREN))) (COMMA)) (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (DOT))) (single_comment) (statement (head (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (NUMBER (dec)))) (COMMA) (term (LPAREN) (tuplevec (tuple (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE))))) (RPAREN))) (COMMA) (term (VARIABLE)))) (RPAREN)))) (IF) (bodydot (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (DOT))) (statement (BLOCK) (identifier) (LPAREN) (idlist (identifier)) (RPAREN) (DOT)) (single_comment) (statement (head (luheadaggregate (term (NUMBER (dec))) (headaggregate (LBRACE) (altheadaggrelemvec (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (optcondition (COLON) (litvec (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN)))))) (RBRACE)) (upper (term (NUMBER (dec)))))) (IF) (bodydot (bodycomma (literal (atom (identifier) (LPAREN) (argvec (termvec (term (VARIABLE)))) (RPAREN))) (COMMA)) (literal (NOT) (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (term (identifier)) (SUB) (term (NUMBER (dec))))) (COMMA) (term (VARIABLE))) (COMMA) (term (ANONYMOUS)))) (RPAREN))) (DOT))) (statement (head (luheadaggregate (term (NUMBER (dec))) (headaggregate (LBRACE) (altheadaggrelemvec (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (optcondition (COLON) (litvec (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN)))))) (RBRACE)) (upper (term (NUMBER (dec)))))) (IF) (bodydot (bodycomma (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (ANONYMOUS)))) (RPAREN))) (COMMA)) (literal (term (identifier)) (rellitvec (cmp) (term (NUMBER (dec))))) (DOT))) (single_comment) (statement (IF) (bodydot (bodycomma (lubodyaggregate (term (NUMBER (dec))) (bodyaggregate (LBRACE) (altbodyaggrelemvec (altbodyaggrelem (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))))) (RBRACE))) (COMMA)) (literal (atom (identifier) (LPAREN) (argvec (termvec (term (VARIABLE)))) (RPAREN))) (DOT))) (single_comment) (statement (head (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN)))) (IF) (bodydot (bodycomma (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (term (identifier)) (SUB) (term (NUMBER (dec))))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (COMMA)) (literal (NOT) (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (ANONYMOUS)))) (RPAREN))) (DOT))) (statement (head (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN)))) (IF) (bodydot (bodycomma (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (term (identifier)) (SUB) (term (NUMBER (dec))))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (COMMA)) (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (DOT))) (single_comment) (statement (IF) (bodydot (bodycomma (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (ANONYMOUS)))) (RPAREN))) (COMMA)) (literal (NOT) (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (term (identifier)) (SUB) (term (NUMBER (dec))))) (COMMA) (term (VARIABLE))) (COMMA) (term (ANONYMOUS)))) (RPAREN))) (DOT))) (statement (IF) (bodydot (bodycomma (bodycomma (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (COMMA)) (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (term (identifier)) (SUB) (term (NUMBER (dec))))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (COMMA)) (literal (term (identifier)) (rellitvec (cmp (NEQ)) (term (NUMBER (dec))))) (DOT))) (statement (BLOCK) (identifier) (LPAREN) (idlist (identifier)) (RPAREN) (DOT)) (single_comment) (statement (IF) (bodydot (NOT) (lubodyaggregate (term (NUMBER (dec))) (bodyaggregate (LBRACE) (altbodyaggrelemvec (altbodyaggrelem (literal (NOT) (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (ANONYMOUS)))) (RPAREN))) (optcondition (COLON) (litvec (literal (atom (identifier) (LPAREN) (argvec (termvec (term (VARIABLE)))) (RPAREN))))))) (RBRACE)) (upper (term (NUMBER (dec))))) (DOT))) (statement (IF) (bodydot (bodycomma (lubodyaggregate (term (NUMBER (dec))) (bodyaggregate (LBRACE) (altbodyaggrelemvec (altbodyaggrelem (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))))) (RBRACE))) (COMMA)) (literal (atom (identifier) (LPAREN) (argvec (termvec (term (VARIABLE)))) (RPAREN))) (DOT))) (single_comment) (statement (IF) (bodydot (bodycomma (bodycomma (literal (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE))) (COMMA) (term (VARIABLE)))) (RPAREN))) (COMMA)) (literal (NOT) (atom (identifier) (LPAREN) (argvec (termvec (termvec (termvec (term (identifier))) (COMMA) (term (LPAREN) (tuplevec (tuple (termvec (termvec (term (VARIABLE))) (COMMA) (term (VARIABLE))))) (RPAREN))) (COMMA) (term (VARIABLE)))) (RPAREN))) (COMMA)) (literal (atom (identifier) (LPAREN) (argvec (termvec (term (identifier)))) (RPAREN))) (DOT))) (statement (SHOW) (identifier) (SLASH) (NUMBER (dec)) (DOT)) (statement (SHOW) (identifier) (SLASH) (NUMBER (dec)) (DOT)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), clingo.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
