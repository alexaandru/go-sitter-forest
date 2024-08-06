//go:build !plugin

package rnoweb_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/rnoweb"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
\documentclass{article}

\begin{document}

<<initialize>>=
count = 0
sum = 0
@

\title{Example Rnoweb Document}
\author{Your Name}

\maketitle

\section{Introduction}

<<sum of a and b>>=
a + b
@
`
	expected = "(source_file (latex) (rchunk (renv_sig_options label: (renv_label)) (renv_content)) (latex) (ERROR (renv_key) (renv_key)) (latex))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), rnoweb.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
