//go:build !plugin

package cg_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cg"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# Firstly, we need to define what tags should be considered sentence delimiters. For this example, only full stop is set as delimiter.
DELIMITERS = "<.>" ;

# We can define sets for common tag clusters
LIST Case = (n s) (n p) ; # A set that matches either a Noun Singular or a Noun Plural

SECTION

# If there is a singular noun to the right, I cannot be a verb or noun.
REMOVE (n) OR (v) IF (1 (n s)) ;

# If there is a conjunction followed by a certain cohort of the same CASE as me, choose me.
SELECT $$Case IF (1 (cnjcoo) LINK 1C $$Case) ;
`
	expected = "(source_file (comment) (set_special_list name: (special_list_name) (eq) value: (taglist (tag (qtag))) (semicolon)) (comment) (list (LIST) name: (setname) (eq) value: (taglist (compotag (tag (ntag)) (tag (ntag))) (compotag (tag (ntag)) (tag (ntag)))) (semicolon)) (comment) (section_header) (comment) (rule type: (ruletype) target: (rule_target target: (inlineset (inlineset_single (taglist (tag (ntag)))) (set_op) (inlineset_single (taglist (tag (ntag)))))) (IF) context: (contexttest pos: (contextpos (ctx_number)) set: (inlineset (inlineset_single (taglist (tag (ntag)) (tag (ntag)))))) (semicolon)) (comment) (rule type: (ruletype) target: (rule_target target: (inlineset (inlineset_single (setname)))) (IF) context: (contexttest pos: (contextpos (ctx_number)) set: (inlineset (inlineset_single (taglist (tag (ntag))))) (LINK) link: (contexttest pos: (contextpos (ctx_number) (ctx_careful)) set: (inlineset (inlineset_single (setname))))) (semicolon)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), cg.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
