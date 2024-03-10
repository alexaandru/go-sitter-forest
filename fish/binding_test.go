//go:build !plugin

package fish_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/fish"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
set -g IFS \n\ \t
set -qg __fish_added_user_paths
or set -g __fish_added_user_paths

function __fish_default_command_not_found_handler
    printf (_ "fish: Unknown command: %s\n") (string escape -- $argv[1]) >&2
end

if not status --is-interactive
    # Hook up the default as the command_not_found handler
    # if we are not interactive to avoid custom handlers.
    function fish_command_not_found --on-event fish_command_not_found
        __fish_default_command_not_found_handler $argv
    end
end
`
	expected = "(program (command name: (word) argument: (word) argument: (word) argument: (concatenation (escape_sequence) (escape_sequence) (escape_sequence))) (command name: (word) argument: (word) argument: (word)) (conditional_execution (command name: (word) argument: (word) argument: (word))) (function_definition name: (word) (command name: (word) argument: (command_substitution (command name: (word) argument: (double_quote_string (escape_sequence)))) argument: (command_substitution (command name: (word) argument: (word) argument: (word) argument: (variable_expansion (variable_name) (list_element_access (index (integer)))))) redirect: (stream_redirect))) (if_statement condition: (negated_statement (command name: (word) argument: (word))) (comment) (comment) (function_definition name: (word) option: (word) option: (word) (command name: (word) argument: (variable_expansion (variable_name))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), fish.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
