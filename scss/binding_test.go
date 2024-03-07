package scss_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/scss"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
@mixin renderGridStyles($settings) {
  .container {
    padding-right: map-get($settings, "margin");
    padding-left: map-get($settings, "margin");
    margin-right: auto;
    margin-left: auto;
    max-width: map-get($settings, "maxWidth");
  }

  .row {
    margin-right: map-get($settings, "margin") * -1;
    margin-left: map-get($settings, "margin") * -1;
  }

  $breakpoints: map-get($settings, "breakpoints");

  @each $key, $breakpoint in $breakpoints {
    @include media($breakpoint) {
      @include renderGrid($key, $settings);
    }
  }
}
`
	expected = "(stylesheet (mixin_statement (name) (parameters (parameter (variable_name))) (block (rule_set (selectors (class_selector (class_name))) (block (declaration (property_name) (call_expression (function_name) (arguments (variable_value) (string_value)))) (declaration (property_name) (call_expression (function_name) (arguments (variable_value) (string_value)))) (declaration (property_name) (plain_value)) (declaration (property_name) (plain_value)) (declaration (property_name) (call_expression (function_name) (arguments (variable_value) (string_value)))))) (rule_set (selectors (class_selector (class_name))) (block (declaration (property_name) (binary_expression (call_expression (function_name) (arguments (variable_value) (string_value))) (integer_value))) (declaration (property_name) (binary_expression (call_expression (function_name) (arguments (variable_value) (string_value))) (integer_value))))) (declaration (variable_name) (call_expression (function_name) (arguments (variable_value) (string_value)))) (each_statement (key) (value) (variable_value) (block (include_statement (identifier) (arguments (argument (argument_value (variable_value)))) (block (include_statement (identifier) (arguments (argument (argument_value (variable_value))) (argument (argument_value (variable_value))))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), scss.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
