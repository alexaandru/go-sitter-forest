package cmake_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cmake"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
cmake_minimum_required(VERSION 3.1...3.28)

project(
  ModernCMakeExample
  VERSION 1.0
  LANGUAGES CXX)`
	expected = "(source_file (normal_command (identifier) (argument_list (argument (unquoted_argument)) (argument (unquoted_argument)))) (normal_command (identifier) (argument_list (argument (unquoted_argument)) (argument (unquoted_argument)) (argument (unquoted_argument)) (argument (unquoted_argument)) (argument (unquoted_argument)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), cmake.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
