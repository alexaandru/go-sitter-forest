package org_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/org"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
#+TITLE: Example

Some *marked up* words

* TODO Title
<2020-06-07 Sun>

  - list a
  - [-] list a
    - [ ] list b
    - [x] list b
  - list a

** Subsection :tag:

Text
`
	expected = "(document body: (body directive: (directive name: (expr) value: (value (expr))) (paragraph (expr) (expr) (expr) (expr))) subsection: (section headline: (headline stars: (stars) item: (item (expr) (expr))) plan: (plan (entry timestamp: (timestamp date: (date) day: (day)))) body: (body (list (listitem bullet: (bullet) contents: (paragraph (expr) (expr))) (listitem bullet: (bullet) checkbox: (checkbox status: (expr)) contents: (paragraph (expr) (expr)) contents: (list (listitem bullet: (bullet) checkbox: (checkbox) contents: (paragraph (expr) (expr))) (listitem bullet: (bullet) checkbox: (checkbox status: (expr)) contents: (paragraph (expr) (expr))))) (listitem bullet: (bullet) contents: (paragraph (expr) (expr))))) subsection: (section headline: (headline stars: (stars) item: (item (expr)) tags: (tag_list tag: (tag))) body: (body (paragraph (expr))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), org.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
