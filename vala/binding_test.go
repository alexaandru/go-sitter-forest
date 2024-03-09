//go:build !plugin

package vala_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/vala"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
public class AdvancedSample : Object {
    public string name { get; set; }   // Property
    public signal void foo ();         // Signal

    public AdvancedSample (string name) {
        this.name = name;
    }

    public void run () {
        // Assigning anonymous function as signal handler
        this.foo.connect ((s) => {
            stdout.printf ("Lambda expression: Argument is %s!\n", this.name);
        });

        // Emitting the signal
        this.foo ();
    }
}

void main (string[] args) {
    foreach (string arg in args) {
        var sample = new AdvancedSample (arg);
        sample.run ();
    }
}
`
	expected = "(source_file (namespace_member (class_declaration (access_modifier) (unqualified_type (symbol (identifier))) (type (symbol (identifier))) (class_member (property_declaration (access_modifier) (type (symbol (identifier))) (symbol (identifier)) (property_accessor) (property_accessor))) (comment) (class_member (signal_declaration (access_modifier) (type) (symbol (identifier)))) (comment) (class_member (creation_method_declaration (access_modifier) (symbol (identifier)) (parameter (type (symbol (identifier))) (identifier)) (block (expression_statement (assignment_expression (member_access_expression (this_access) (identifier)) (member_access_expression (identifier))))))) (class_member (method_declaration (access_modifier) (type) (symbol (identifier)) (block (comment) (expression_statement (method_call_expression (member_access_expression (member_access_expression (this_access) (identifier)) (identifier)) (argument (lambda_expression (identifier) (block (expression_statement (method_call_expression (member_access_expression (member_access_expression (identifier)) (identifier)) (argument (literal (string (string_formatter) (escape_sequence)))) (argument (member_access_expression (this_access) (identifier)))))))))) (comment) (expression_statement (method_call_expression (member_access_expression (this_access) (identifier))))))))) (namespace_member (method_declaration (type) (symbol (identifier)) (parameter (type (symbol (identifier)) (array_type)) (identifier)) (block (foreach_statement (type (symbol (identifier))) (identifier) (member_access_expression (identifier)) (block (local_declaration (type) (assignment (identifier) (object_creation_expression (type (symbol (identifier))) (argument (member_access_expression (identifier)))))) (expression_statement (method_call_expression (member_access_expression (member_access_expression (identifier)) (identifier))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), vala.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
