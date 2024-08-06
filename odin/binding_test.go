//go:build !plugin

package odin_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/odin"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
package main

import "core:fmt"

main :: proc() {
	program := "+ + * 😃 - /"
	accumulator := 0

	for token in program {
		switch token {
		case '+': accumulator += 1
		case '-': accumulator -= 1
		case '*': accumulator *= 2
		case '/': accumulator /= 2
		case '😃': accumulator *= accumulator
		case: // Ignore everything else
		}
	}

	fmt.printf("The program \"%s\" calculates the value %d\n",
	           program, accumulator)
}
`
	expected = "(source_file (package_declaration (identifier)) (import_declaration (string (string_content))) (procedure_declaration (identifier) (procedure (parameters) (block (assignment_statement (identifier) (string (string_content))) (assignment_statement (identifier) (number)) (for_statement (identifier) (identifier) consequence: (block (switch_statement condition: (identifier) (switch_case condition: (character) (update_statement (identifier) (number))) (switch_case condition: (character) (update_statement (identifier) (number))) (switch_case condition: (character) (update_statement (identifier) (number))) (switch_case condition: (character) (update_statement (identifier) (number))) (switch_case condition: (character) (update_statement (identifier) (identifier))) (switch_case) (comment)))) (member_expression (identifier) (call_expression function: (identifier) argument: (string (string_content) (escape_sequence) (string_content) (escape_sequence) (string_content) (escape_sequence)) argument: (identifier) argument: (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), odin.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
