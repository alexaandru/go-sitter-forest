//go:build !plugin

package dezyne_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dezyne"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `interface ihello_bool
{
  in void hello ();
  in bool cruel ();
  out void world ();

  behavior
  {
    bool idle = true;
    [idle] on hello: idle = false;
    [!idle]
      {
        on cruel: {idle = true; reply (idle);}
        on cruel: reply (idle);
        on inevitable: {world; idle = true;}
      }
  }
}
`
	expected = "(root (interface name: (scoped_name) body: (interface_body (event direction: (direction) type_name: (type_name) event_name: (event_name) formals: (formals)) (event direction: (direction) type_name: (type_name) event_name: (event_name) formals: (formals)) (event direction: (direction) type_name: (type_name) event_name: (event_name) formals: (formals)) behavior: (behavior body: (behavior_body (variable type_name: (type_name) name: (var_name) expression: (literal)) (guard condition: (compound_name part: (identifier)) body: (on triggers: (triggers trigger: (trigger (event_name))) body: (assign left: (var) right: (literal)))) (guard condition: (unary_expression expression: (compound_name part: (identifier))) body: (compound statement: (on triggers: (triggers trigger: (trigger (event_name))) body: (compound statement: (assign left: (var) right: (literal)) statement: (reply expression: (compound_name part: (identifier))))) statement: (on triggers: (triggers trigger: (trigger (event_name))) body: (reply expression: (compound_name part: (identifier)))) statement: (on triggers: (triggers trigger: (trigger (inevitable))) body: (compound statement: (interface_action) statement: (assign left: (var) right: (literal)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), dezyne.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
