//go:build !plugin

package bluespec_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bluespec"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = "//`define KONATA_ENABLE\n" +
		"//`define DEBUG_ENABLE\n\n" +

		`import FIFO::*;
import FIFOF::*;
import SpecialFIFOs::*;
import RegFile::*;
import RVUtil::*;
import Vector::*;
` +
		"`ifdef KONATA_ENABLE\n" +
		"import KonataHelper::*;\n" +
		"`endif\n" +
		`import Printf::*;
import Ehr::*;


typedef struct { Bit#(4) byte_en; Bit#(32) addr; Bit#(32) data; } Mem deriving (Eq, FShow, Bits);


interface RVIfc#(numeric type n);
    method ActionValue#(Mem) getIReq();
    method Action getIResp(Mem a);
    method ActionValue#(Mem) getDReq();
    method Action getDResp(Mem a);
    method ActionValue#(Mem) getMMIOReq();
    method Action getMMIOResp(Mem a);
endinterface

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

    method Action remove(Bit#(5) dst);
        ready[dst][0] <= True;
    endmethod

    method ActionValue#(Bool) search(Bit#(5) src);
        return ready[src][0];
    endmethod
endmodule
`
	expected = "(source_file (comment) (comment) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (ERROR (UNEXPECTED '`') (lValue (identifier)) (identifier)) (importDecl (importItem (packageIde (packageIde)))) (ERROR (UNEXPECTED '`') (lValue (identifier))) (importDecl (importItem (packageIde (packageIde)))) (importDecl (importItem (packageIde (packageIde)))) (ERROR (lValue (identifier)) (identifier) (UNEXPECTED '{') (identifier) (UNEXPECTED '#') (identifier) (identifier) (UNEXPECTED '#') (identifier) (identifier) (UNEXPECTED '#') (identifier) (UNEXPECTED '}') (identifier) (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (identifier) (UNEXPECTED '#') (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (identifier) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (identifier) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (identifier) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (identifier) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (lValue (lValue (lValue (identifier)) (expression (exprPrimary (identifier)))) (expression (exprPrimary (intLiteral)))) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (identifier) (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (lValue (lValue (lValue (identifier)) (expression (exprPrimary (identifier)))) (expression (exprPrimary (intLiteral)))) (lValue (identifier)) (lValue (identifier)) (identifier) (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (lValue (identifier)) (UNEXPECTED '#') (lValue (identifier)) (lValue (identifier)) (lValue (lValue (lValue (identifier)) (expression (exprPrimary (identifier)))) (expression (exprPrimary (intLiteral)))) (lValue (identifier)) (identifier)))"
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
