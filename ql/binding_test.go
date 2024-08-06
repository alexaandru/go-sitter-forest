//go:build !plugin

package ql_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ql"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
import TaintTracking::Global<UnsafeDeserializationConfig>

from PathNode source, PathNode sink
  
where flowPath(source, sink)
  
select sink.getNode().(UnsafeDeserializationSink).getMethodAccess(), source, sink,
  "Unsafe deserialization of $@.", source.getNode(), "user input"
`
	expected = "(ql (moduleMember (importDirective (importModuleExpr (moduleExpr (moduleExpr (simpleId)) name: (moduleInstantiation name: (moduleName (simpleId)) (signatureExpr type_expr: (typeExpr name: (className)))))))) (moduleMember (select (varDecl (typeExpr name: (className)) (varName (simpleId))) (varDecl (typeExpr name: (className)) (varName (simpleId))) (call_or_unqual_agg_expr (aritylessPredicateExpr name: (literalId)) (call_body (variable (varName (simpleId))) (variable (varName (simpleId))))) (asExprs (asExpr (qualified_expr (qualified_expr (qualified_expr (variable (varName (simpleId))) (qualifiedRhs name: (predicateName))) (qualifiedRhs (typeExpr name: (className)))) (qualifiedRhs name: (predicateName)))) (asExpr (variable (varName (simpleId)))) (asExpr (variable (varName (simpleId)))) (asExpr (literal (string))) (asExpr (qualified_expr (variable (varName (simpleId))) (qualifiedRhs name: (predicateName)))) (asExpr (literal (string)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), ql.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
