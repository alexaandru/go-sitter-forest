package tablegen_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/tablegen"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
multiclass ro_signed_pats<string T, string Rm, dag Base, dag Offset, dag Extend,
                        dag address, ValueType sty> {
def : Pat<(i32 (!cast<SDNode>("sextload" # sty) address)),
          (!cast<Instruction>("LDRS" # T # "w_" # Rm # "_RegOffset")
            Base, Offset, Extend)>;

def : Pat<(i64 (!cast<SDNode>("sextload" # sty) address)),
          (!cast<Instruction>("LDRS" # T # "x_" # Rm # "_RegOffset")
            Base, Offset, Extend)>;
}

defm : ro_signed_pats<"B", Rm, Base, Offset, Extend,
                      !foreach(decls.pattern, address,
                               !subst(SHIFT, imm_eq0, decls.pattern)),
                      i8>;
`
	expected = "(tablegen_file (multiclass name: (identifier) (template_args (template_arg (primitive_type) (identifier)) (template_arg (primitive_type) (identifier)) (template_arg (primitive_type) (identifier)) (template_arg (primitive_type) (identifier)) (template_arg (primitive_type) (identifier)) (template_arg (primitive_type) (identifier)) (template_arg (class_identifier) (identifier))) (multiclass_body (multiclass_statement (def (record_body (parent_class_list (identifier) (value (dag_initializer (dag_arg (value (identifier))) (dag_arg_list (dag_arg (value (dag_initializer (dag_arg (value (operator (bang_operator) (class_identifier) (value_list (value (paste_value (value (string (string_content))) (value (identifier)))))))) (dag_arg_list (dag_arg (value (identifier)))))))))) (value (dag_initializer (dag_arg (value (operator (bang_operator) (class_identifier) (value_list (value (paste_value (value (string (string_content))) (value (paste_value (value (identifier)) (value (paste_value (value (string (string_content))) (value (paste_value (value (identifier)) (value (string (string_content))))))))))))))) (dag_arg_list (dag_arg (value (identifier))) (dag_arg (value (identifier))) (dag_arg (value (identifier))))))) (body)))) (multiclass_statement (def (record_body (parent_class_list (identifier) (value (dag_initializer (dag_arg (value (identifier))) (dag_arg_list (dag_arg (value (dag_initializer (dag_arg (value (operator (bang_operator) (class_identifier) (value_list (value (paste_value (value (string (string_content))) (value (identifier)))))))) (dag_arg_list (dag_arg (value (identifier)))))))))) (value (dag_initializer (dag_arg (value (operator (bang_operator) (class_identifier) (value_list (value (paste_value (value (string (string_content))) (value (paste_value (value (identifier)) (value (paste_value (value (string (string_content))) (value (paste_value (value (identifier)) (value (string (string_content))))))))))))))) (dag_arg_list (dag_arg (value (identifier))) (dag_arg (value (identifier))) (dag_arg (value (identifier))))))) (body)))))) (defm (parent_class_list (identifier) (value (string (string_content))) (value (identifier)) (value (identifier)) (value (identifier)) (value (identifier)) (value (operator (bang_operator) (value_list (value (identifier) (value_suffix (identifier))) (value (identifier)) (value (operator (bang_operator) (value_list (value (identifier)) (value (identifier)) (value (identifier) (value_suffix (identifier))))))))) (value (identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), tablegen.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
