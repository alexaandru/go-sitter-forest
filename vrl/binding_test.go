//go:build !plugin

package vrl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/vrl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `. |= parse_regex!(.message, r'^(?P<timestamp>\d+/\d+/\d+ \d+:\d+:\d+ \+\d+) \[(?P<severity>\w+)\] (?P<pid>\d+)#(?P<tid>\d+):(?: \*(?P<connid>\d+))? (?P<message>.*)$')

# Coerce parsed fields
.timestamp = parse_timestamp(.timestamp, "%Y/%m/%d %H:%M:%S %z") ?? now()
.pid = to_int!(.pid)
.tid = to_int!(.tid)

# Extract structured data
message_parts = split(.message, ", ", limit: 2)
structured = parse_key_value(message_parts[1], key_value_delimiter: ":", field_delimiter: ",") ?? {}
.message = message_parts[0]
. = merge(., structured)
`
	expected = "(program (assignment left: (assign_target (query (event))) right: (term (function_call (ident) arguments: (argument (term (query (event) (path field: (field))))) arguments: (argument (term (regex)))))) (comment) (assignment left: (assign_target (query (event) (path field: (field)))) right: (binary_expression left: (term (function_call (ident) arguments: (argument (term (query (event) (path field: (field))))) arguments: (argument (term (string))))) right: (term (function_call (ident))))) (assignment left: (assign_target (query (event) (path field: (field)))) right: (term (function_call (ident) arguments: (argument (term (query (event) (path field: (field)))))))) (assignment left: (assign_target (query (event) (path field: (field)))) right: (term (function_call (ident) arguments: (argument (term (query (event) (path field: (field)))))))) (comment) (assignment left: (assign_target (ident)) right: (term (function_call (ident) arguments: (argument (term (query (event) (path field: (field))))) arguments: (argument (term (string))) arguments: (argument (ident) (term (integer)))))) (assignment left: (assign_target (ident)) right: (binary_expression left: (term (function_call (ident) arguments: (argument (term (query (ident) (path index: (integer))))) arguments: (argument (ident) (term (string))) arguments: (argument (ident) (term (string))))) right: (term (object)))) (assignment left: (assign_target (query (event) (path field: (field)))) right: (term (query (ident) (path index: (integer))))) (assignment left: (assign_target (query (event))) right: (term (function_call (ident) arguments: (argument (term (query (event)))) arguments: (argument (term (ident)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), vrl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
