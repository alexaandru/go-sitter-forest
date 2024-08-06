//go:build !plugin

package tact_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/tact"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `message (0x123123) TransferMsg {
  to: Address;
  text: String;
}

contract SimpleContract {
  init() {}
  receive() {}
  receive(msg: TransferMsg) {
      send(SendParameters{
          to: msg.to,
          value: 0,
          mode: SendRemainingValue,
          body: msg.text.asComment()
      });
  }
}
`
	expected = "(source_file (message value: (message_value (integer)) name: (type_identifier) body: (message_body (field name: (identifier) type: (type_identifier)) (field name: (identifier) type: (type_identifier)))) (contract name: (identifier) body: (contract_body (init_function parameters: (parameter_list) body: (function_body)) (receive_function body: (function_body)) (receive_function parameter: (parameter name: (identifier) type: (type_identifier)) body: (function_body (expression_statement (static_call_expression name: (identifier) arguments: (argument_list (argument value: (instance_expression name: (identifier) arguments: (instance_argument_list (instance_argument name: (identifier) value: (field_access_expression object: (identifier) name: (identifier))) (instance_argument name: (identifier) value: (integer)) (instance_argument name: (identifier) value: (identifier)) (instance_argument name: (identifier) value: (method_call_expression object: (field_access_expression object: (identifier) name: (identifier)) name: (identifier) arguments: (argument_list))))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), tact.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
