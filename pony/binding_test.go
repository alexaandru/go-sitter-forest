package pony_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pony"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
use "collections"

actor Counter
  var _count: U32

  new create() =>
    _count = 0

  be increment() =>
    _count = _count + 1

  be get_and_reset(main: Main) =>
    main.display(_count)
    _count = 0

actor Main
  var _env: Env

  new create(env: Env) =>
    _env = env

    var count: U32 = try env.args(1)?.u32()? else 10 end
    var counter = Counter

    for i in Range[U32](0, count) do
      counter.increment()
    end

    counter.get_and_reset(this)

  be display(result: U32) =>
    _env.out.print(result.string())
`
	expected = "(source_file (use_statement (string (string_content))) (actor_definition (identifier) (members (field name: (identifier) (base_type name: (identifier))) (constructor (identifier) (parameters) (block (assignment_expression (identifier) (block (number))))) (behavior (identifier) (parameters) (block (assignment_expression (identifier) (block (binary_expression left: (identifier) right: (number)))))) (behavior (identifier) (parameters (parameter name: (identifier) (base_type name: (identifier)))) (block (call_expression callee: (member_expression (identifier) (identifier)) (arguments positional: (identifier))) (assignment_expression (identifier) (block (number))))))) (actor_definition (identifier) (members (field name: (identifier) (base_type name: (identifier))) (constructor (identifier) (parameters (parameter name: (identifier) (base_type name: (identifier)))) (block (assignment_expression (identifier) (block (identifier))) (assignment_expression (variable_declaration (identifier) (base_type name: (identifier))) (block (try_statement (block (call_expression callee: (member_expression (call_expression callee: (member_expression (identifier) (identifier)) (arguments positional: (number))) (identifier)) (arguments))) (else_block (block (number)))))) (assignment_expression (variable_declaration (identifier)) (block (identifier))) (for_statement (identifier) collection: (call_expression callee: (generic_expression (identifier) (type_args (base_type name: (identifier)))) (arguments positional: (number) positional: (identifier))) (do_block (block (call_expression callee: (member_expression (identifier) (identifier)) (arguments))))) (call_expression callee: (member_expression (identifier) (identifier)) (arguments positional: (this))))) (behavior (identifier) (parameters (parameter name: (identifier) (base_type name: (identifier)))) (block (call_expression callee: (member_expression (member_expression (identifier) (identifier)) (identifier)) (arguments positional: (call_expression callee: (member_expression (identifier) (identifier)) (arguments)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), pony.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
