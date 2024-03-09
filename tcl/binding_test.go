//go:build !plugin

package tcl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/tcl"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
if { $a > 0 } { puts "The value is positive"
} elseif { $a < 0 } {
	puts "The value is negative"
} else {
	puts "The value is zero"
}

set a { 1 2 3 }
for { set i 0 } { $i < [llength $a] } { incr i } {
	puts "The list element at index $i is [lindex $a $i]"
}
`
	expected = "(source_file (conditional condition: (expr (binop_expr (variable_substitution (id)) (simple_word))) (braced_word (command name: (simple_word) arguments: (word_list (quoted_word)))) (elseif condition: (expr (binop_expr (variable_substitution (id)) (simple_word))) (braced_word (command name: (simple_word) arguments: (word_list (quoted_word))))) (else (braced_word (command name: (simple_word) arguments: (word_list (quoted_word)))))) (set (simple_word) (braced_word (command name: (simple_word) arguments: (word_list (simple_word) (simple_word))))) (command name: (simple_word) arguments: (word_list (braced_word (set (simple_word) (simple_word))) (braced_word (command name: (variable_substitution (id)) arguments: (word_list (simple_word) (command_substitution (command name: (simple_word) arguments: (word_list (variable_substitution (id)))))))) (braced_word (command name: (simple_word) arguments: (word_list (simple_word)))) (braced_word (command name: (simple_word) arguments: (word_list (quoted_word (variable_substitution (id)) (command_substitution (command name: (simple_word) arguments: (word_list (variable_substitution (id)) (variable_substitution (id))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), tcl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
