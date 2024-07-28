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
	expected = "(program (assignment left: (assign_target (query (event))) right: (function_call function_name: (ident) arguments: (argument (query (event) (path (field)))) arguments: (argument (regex)))) (comment) (assignment left: (assign_target (query (event) (path (field)))) right: (binary_expression left: (function_call function_name: (ident) arguments: (argument (query (event) (path (field)))) arguments: (argument (string))) right: (function_call function_name: (ident)))) (assignment left: (assign_target (query (event) (path (field)))) right: (function_call function_name: (ident) arguments: (argument (query (event) (path (field)))))) (assignment left: (assign_target (query (event) (path (field)))) right: (function_call function_name: (ident) arguments: (argument (query (event) (path (field)))))) (comment) (assignment left: (assign_target (ident)) right: (function_call function_name: (ident) arguments: (argument (query (event) (path (field)))) arguments: (argument (string)) arguments: (argument (ident) (integer)))) (assignment left: (assign_target (ident)) right: (binary_expression left: (function_call function_name: (ident) arguments: (argument (query (ident) (path (index)))) arguments: (argument (ident) (string)) arguments: (argument (ident) (string))) right: (object))) (assignment left: (assign_target (query (event) (path (field)))) right: (query (ident) (path (index)))) (assignment left: (assign_target (query (event))) right: (function_call function_name: (ident) arguments: (argument (query (event))) arguments: (argument (ident)))))"
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
