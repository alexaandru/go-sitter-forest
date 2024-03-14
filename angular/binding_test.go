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
	expected = "(document (if_statement (if_start_expression (control_keyword) (if_condition (expression (identifier) pipes: (pipe_sequence (pipe_operator) (pipe_call name: (identifier))))) reference: (if_reference (special_keyword) (identifier))) (element (start_tag (tag_name)) (text) (interpolation (expression (member_expression object: (identifier) property: (identifier)))) (end_tag (tag_name))) (element (start_tag (tag_name) (attribute (attribute_name) (quoted_attribute_value (attribute_value)))) (for_statement (for_start_expression (control_keyword) (for_declaration name: (identifier) (special_keyword) value: (expression (identifier)) (special_keyword) value: (expression (member_expression object: (identifier) property: (identifier))))) (element (start_tag (tag_name) (attribute (property_binding (binding_name (identifier)) (expression (member_expression object: (identifier) property: (identifier)))))) (interpolation (expression (member_expression object: (identifier) property: (identifier)))) (end_tag (tag_name))) (empty_statement (empty_expression (control_keyword)) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (for_end_expression))) (end_tag (tag_name))) (element (self_closing_tag (tag_name))) (else_statement (else_expression (control_keyword)) (element (start_tag (tag_name) (attribute (attribute_name) (quoted_attribute_value (attribute_value)))) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (element (start_tag (tag_name) (attribute (event_binding (binding_name (identifier)) (expression (call_expression function: (identifier)))))) (text) (end_tag (tag_name))) (switch_statement (switch_start_expression (control_keyword) value: (expression (identifier) pipes: (pipe_sequence (pipe_operator) (pipe_call name: (identifier))))) (case_statement (case_expression (control_keyword) value: (member_expression object: (identifier) property: (identifier))) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (case_end_expression)) (case_statement (case_expression (control_keyword) value: (member_expression object: (identifier) property: (identifier))) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (case_end_expression)) (default_statement (default_expression (control_keyword)) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (default_end_expression)) (switch_end_expression)) (end_tag (tag_name))) (if_end_expression))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), angular.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
