package pascal_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pascal"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
// Function to calculate Fibonacci sequence
function fib(n: Integer): Integer;
begin
  if n <= 1 then
    fib := n
  else
    fib := fib(n - 1) + fib(n - 2);
end;
`
	expected = "(root (comment) (defProc header: (declProc (kFunction) name: (identifier) args: (declArgs (declArg name: (identifier) type: (type (typeref (identifier))))) type: (typeref (identifier))) body: (block (kBegin) (ifElse (kIf) condition: (exprBinary lhs: (identifier) operator: (kLte) rhs: (literalNumber)) (kThen) then: (assignment lhs: (identifier) operator: (kAssign) rhs: (identifier)) (kElse) else: (assignment lhs: (identifier) operator: (kAssign) rhs: (exprBinary lhs: (exprCall entity: (identifier) args: (exprArgs (exprBinary lhs: (identifier) operator: (kSub) rhs: (literalNumber)))) operator: (kAdd) rhs: (exprCall entity: (identifier) args: (exprArgs (exprBinary lhs: (identifier) operator: (kSub) rhs: (literalNumber))))))) (kEnd))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), pascal.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
