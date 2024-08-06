//go:build !plugin

package angular_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/angular"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
@if (user$ | async; as user) {
  <h1>Hi {{ user.name }}</h1>
  <div class="authenticated">
    @for (link of links; track link.id) {
      <a [routerLink]="link.url">{{ link.label }}</a>
    } @empty {
      <p>No links</p>
    }
  </div>
  <router-outlet />
} @else {
  <div class="unauthenticated">
    <p>Please login</p>
    <button (click)="login()">Login</button>

    @switch (error$ | async) {
      @case (ErrorType.InvalidCredentials) {
        <p>Invalid credentials</p>
      }
      @case (ErrorType.ServerError) {
        <p>Server error</p>
      }
      @default {
        <p>Unknown error</p>
      }
    }
  </div>
}
`
	expected = "(document (if_statement (control_keyword) condition: (if_condition (expression (identifier) pipes: (pipe_sequence (pipe_operator) (pipe_call name: (identifier))))) reference: (if_reference (special_keyword) (identifier)) consequence: (statement_block (element (start_tag (tag_name)) (text) (interpolation (expression (member_expression object: (identifier) property: (identifier)))) (end_tag (tag_name))) (element (start_tag (tag_name) (attribute (attribute_name) (quoted_attribute_value (attribute_value)))) (for_statement (control_keyword) declaration: (for_declaration name: (identifier) (special_keyword) value: (expression (identifier)) (special_keyword) track: (expression (member_expression object: (identifier) property: (identifier)))) body: (statement_block (element (start_tag (tag_name) (attribute (property_binding (binding_name (identifier)) (expression (member_expression object: (identifier) property: (identifier)))))) (interpolation (expression (member_expression object: (identifier) property: (identifier)))) (end_tag (tag_name)))) (empty_statement (control_keyword) body: (statement_block (element (start_tag (tag_name)) (text) (end_tag (tag_name)))))) (end_tag (tag_name))) (element (self_closing_tag (tag_name)))) alternative: (else_statement (control_keyword) (statement_block (element (start_tag (tag_name) (attribute (attribute_name) (quoted_attribute_value (attribute_value)))) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (element (start_tag (tag_name) (attribute (event_binding (binding_name (identifier)) (expression (call_expression function: (identifier)))))) (text) (end_tag (tag_name))) (switch_statement (control_keyword) value: (expression (identifier) pipes: (pipe_sequence (pipe_operator) (pipe_call name: (identifier)))) body: (switch_body (case_statement (control_keyword) value: (member_expression object: (identifier) property: (identifier)) body: (statement_block (element (start_tag (tag_name)) (text) (end_tag (tag_name))))) (case_statement (control_keyword) value: (member_expression object: (identifier) property: (identifier)) body: (statement_block (element (start_tag (tag_name)) (text) (end_tag (tag_name))))) (default_statement (control_keyword) body: (statement_block (element (start_tag (tag_name)) (text) (end_tag (tag_name))))))) (end_tag (tag_name)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), angular.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
