//go:build !plugin

package make_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/make"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# Define variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Define targets and dependencies
all: program
`
	expected = "(makefile (comment) (variable_assignment name: (word) value: (text)) (variable_assignment name: (word) value: (text)) (comment) (rule (targets (word)) normal: (prerequisites (word))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), make.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
