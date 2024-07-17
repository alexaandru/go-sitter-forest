//go:build !plugin

package magik_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/magik"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# New method
_method person.new(name, age)
  _return _clone.init(name, age)
_endmethod

# Initialise method.
_private _method person.init(name, age)
   # Call the parent implementation.
   _super.init(name, age)
   # Initialise the slots.
   .name << name
   .age << age
  _return _self
_endmethod

_block
	_local s << 0 
	_local i << 0
	_while i <= 100
	_loop 
		s +<< i 
		i +<< 1 
	_endloop
>> s
_endblock

my_procedure << _proc @my_procedure(a, b, c)
  _return a + b + c
_endproc

x << my_procedure(1, 2, 3) # x = 6

_if /Hello\,\s(\w)+!/.matches?("Hello, Magik!") _then
    write("Got a match!")
_endif
`
	expected = "(source_file (comment) (fragment (method exemplarname: (identifier) name: (identifier) (argument) (argument) (return (call receiver: (clone) message: (identifier) (variable) (variable))))) (comment) (fragment (method exemplarname: (identifier) name: (identifier) (argument) (argument) (comment) (call receiver: (super) message: (identifier) (variable) (variable)) (comment) (assignment (slot_accessor) (variable)) (assignment (slot_accessor) (variable)) (return (self)))) (fragment (block (local (identifier) (number)) (local (identifier) (number)) (while condition: (relational_operator left: (variable) right: (number)) (assignment (variable) (variable)) (assignment (variable) (number))) (return (variable)))) (fragment (assignment (variable) (procedure (label) (argument) (argument) (argument) (return (arithmetic_operator left: (arithmetic_operator left: (variable) right: (variable)) right: (variable)))))) (fragment (assignment (variable) (invoke receiver: (variable) (number) (number) (number))) (comment)) (fragment (if condition: (call receiver: (regex_literal) message: (identifier) (string_literal)) (invoke receiver: (variable) (string_literal)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), magik.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
