//go:build !plugin

package bluespec_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bluespec"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `import FIFO::*;
import FIFOF::*;
import SpecialFIFOs::*;
import RegFile::*;
import RVUtil::*;
import Vector::*;
import Ehr::*;

interface Scoreboard;
    method Action insert(Bit#(5) dst);
    method Action remove(Bit#(5) dst);
    method ActionValue#(Bool) search(Bit#(5) src);
endinterface

module mkScoreboardBoolFlags(Scoreboard); 
    Vector#(32,Ehr#(2, Bool)) ready <- replicateM(mkEhr(True));

    method Action insert(Bit#(5) dst);
        ready[dst][1] <= False;
    endmethod
endmodule
`
	expected = "(source_file (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (packageStmt (interfaceDecl (typeDefType (typeIde (typeIde))) (interfaceMemberDecl (methodProto (type (typePrimary (typeIde (typeIde)))) (identifier) (methodProtoFormals (methodProtoFormal (type (typePrimary (typeIde (typeIde)) (type (typePrimary (typeNat))))) (identifier))))) (interfaceMemberDecl (methodProto (type (typePrimary (typeIde (typeIde)))) (identifier) (methodProtoFormals (methodProtoFormal (type (typePrimary (typeIde (typeIde)) (type (typePrimary (typeNat))))) (identifier))))) (interfaceMemberDecl (methodProto (type (typePrimary (typeIde (typeIde)) (type (typePrimary (typeIde (typeIde)))))) (identifier) (methodProtoFormals (methodProtoFormal (type (typePrimary (typeIde (typeIde)) (type (typePrimary (typeNat))))) (identifier))))))) (packageStmt (moduleDef (moduleProto (identifier) (moduleFormalArgs (type (typePrimary (typeIde (typeIde)))))) (moduleStmt (varDeclDo (type (typePrimary (typeIde (typeIde)) (type (typePrimary (typeNat))) (type (typePrimary (typeIde (typeIde)) (type (typePrimary (typeNat))) (type (typePrimary (typeIde (typeIde)))))))) (identifier) (exprPrimary (functionCall (exprPrimary (identifier)) (exprPrimary (functionCall (exprPrimary (identifier)) (exprPrimary (Identifier)))))))) (moduleStmt (methodDef (type (typePrimary (typeIde (typeIde)))) (identifier) (methodFormals (methodFormal (type (typePrimary (typeIde (typeIde)) (type (typePrimary (typeNat))))) (identifier))) (ERROR (lValue (lValue (lValue (identifier)) (exprPrimary (identifier))) (exprPrimary (intLiteral))) (Identifier)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), bluespec.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
