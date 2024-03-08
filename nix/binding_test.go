package nix_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/nix"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
{
  or = { or = 1; }.or or 42;
  the-question = if builtins.true then "to be" else "not to be";
  null = if null then true else false;
  pkgs' = { inherit (pkgs) stdenv lib; };
  thing' =
    let inherit (pkgs) stdenv lib;
    in derivation rec {
      pname = "thing";
      version = "v1.2.3";
      name = "${pname}-${version}";
      buildInputs = with pkgs; [ thing_a thing_b ];
    };
  assert_bool = bool: assert lib.isBool bool; bool;
  import = import ./overlays.nix { inherit pkgs; };
  uri = https://github.com;
}
`
	expected = "(source_code expression: (attrset_expression (binding_set binding: (binding attrpath: (attrpath attr: (identifier)) expression: (select_expression expression: (attrset_expression (binding_set binding: (binding attrpath: (attrpath attr: (identifier)) expression: (integer_expression)))) attrpath: (attrpath attr: (identifier)) default: (integer_expression))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (if_expression condition: (select_expression expression: (variable_expression name: (identifier)) attrpath: (attrpath attr: (identifier))) consequence: (string_expression (string_fragment)) alternative: (string_expression (string_fragment)))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (if_expression condition: (variable_expression name: (identifier)) consequence: (variable_expression name: (identifier)) alternative: (variable_expression name: (identifier)))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (attrset_expression (binding_set binding: (inherit_from expression: (variable_expression name: (identifier)) attrs: (inherited_attrs attr: (identifier) attr: (identifier)))))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (let_expression (binding_set binding: (inherit_from expression: (variable_expression name: (identifier)) attrs: (inherited_attrs attr: (identifier) attr: (identifier)))) body: (apply_expression function: (variable_expression name: (identifier)) argument: (rec_attrset_expression (binding_set binding: (binding attrpath: (attrpath attr: (identifier)) expression: (string_expression (string_fragment))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (string_expression (string_fragment))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (string_expression (interpolation expression: (variable_expression name: (identifier))) (string_fragment) (interpolation expression: (variable_expression name: (identifier))))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (with_expression environment: (variable_expression name: (identifier)) body: (list_expression element: (variable_expression name: (identifier)) element: (variable_expression name: (identifier)))))))))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (function_expression universal: (identifier) body: (assert_expression condition: (apply_expression function: (select_expression expression: (variable_expression name: (identifier)) attrpath: (attrpath attr: (identifier))) argument: (variable_expression name: (identifier))) body: (variable_expression name: (identifier))))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (apply_expression function: (apply_expression function: (variable_expression name: (identifier)) argument: (path_expression (path_fragment))) argument: (attrset_expression (binding_set binding: (inherit attrs: (inherited_attrs attr: (identifier))))))) binding: (binding attrpath: (attrpath attr: (identifier)) expression: (uri_expression)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), nix.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
