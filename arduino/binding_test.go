//go:build !plugin

package arduino_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/arduino"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
const int ledPin = LED_BUILTIN;

int ledState = LOW;

unsigned long previousMillis = 0;

const long interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}
`
	expected = "(translation_unit (declaration (type_qualifier) type: (primitive_type) declarator: (init_declarator declarator: (identifier) value: (identifier))) (declaration type: (primitive_type) declarator: (init_declarator declarator: (identifier) value: (identifier))) (declaration type: (sized_type_specifier) declarator: (init_declarator declarator: (identifier) value: (number_literal))) (declaration (type_qualifier) type: (sized_type_specifier) declarator: (init_declarator declarator: (identifier) value: (number_literal))) (function_definition type: (primitive_type) declarator: (function_declarator declarator: (identifier) parameters: (parameter_list)) body: (compound_statement (expression_statement (call_expression function: (identifier) arguments: (argument_list (identifier) (identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), arduino.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
