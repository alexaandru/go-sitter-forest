package latex_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/latex"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
\documentclass{article}
\usepackage[utf8]{inputenc}
\usepackage{hyperref}

\date{\today}
\author{Eric Förster \and Patrick Förster}
\title{\TeX{}Lab}

\begin{document}

\maketitle{}

\section{Introduction}

TexLab is a cross-platform implementation of the
\href{https://microsoft.github.io/language-server-protocol/specifications/specification-current/}{Language Server Protocol}
for the \LaTeX{} typesetting system.
It aims to produce high quality code completion results.
The server may be used with any editor that implements the Language Server Protocol.
It is written in Rust, a blazingly fast systems programming language.
`
	expected = "(source_file (class_include path: (curly_group_path path: (path))) (package_include options: (brack_group_key_value pair: (key_value_pair key: (text word: (word)))) paths: (curly_group_path_list path: (path))) (package_include paths: (curly_group_path_list path: (path))) (generic_command command: (command_name) arg: (curly_group (generic_command command: (command_name)))) (author_declaration authors: (curly_group_author_list (author (text word: (word) word: (word))) (command_name) (author (text word: (word) word: (word))))) (title_declaration text: (curly_group (generic_command command: (command_name) arg: (curly_group)) (text word: (word)))) (ERROR (begin name: (curly_group_text text: (text word: (word)))) (generic_command command: (command_name) arg: (curly_group)) (section text: (curly_group (text word: (word))) (text word: (word) word: (word) word: (word) word: (word) word: (operator) word: (word) word: (word) word: (word) word: (word) word: (generic_command command: (command_name) arg: (curly_group (text word: (word) word: (operator) word: (operator) word: (word) word: (operator) word: (word) word: (operator) word: (word) word: (operator) word: (word) word: (operator) word: (word) word: (operator) word: (word) word: (operator) word: (word) word: (operator))) arg: (curly_group (text word: (word) word: (word) word: (word)))) word: (word) word: (word) word: (generic_command command: (command_name) arg: (curly_group)) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word) word: (word)) (text word: (word) word: (word) word: (word) word: (word) word: (word) word: (word)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), latex.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
