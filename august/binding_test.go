//go:build !plugin

package august_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/august"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `unit Build {
    depends_on(Test, Clean)

    print_file("Cargo.toml")
    ~(cargo build)
}

unit Test {
    depends_on(Clean)    

    ~(cargo fmt)
    ~(cargo clippy)
    ~(cargo test) 
}

unit Clean {
    ~(cargo clean)
}
`
	expected = "(source_file (unit name: (ident) (cmd_call name: (ident) (cmd_arg (ident)) (cmd_arg (ident))) (cmd_call name: (ident) (cmd_arg (str_lit))) (cmd_call (cmd_arg (ident)) (cmd_arg (ident)))) (unit name: (ident) (cmd_call name: (ident) (cmd_arg (ident))) (cmd_call (cmd_arg (ident)) (cmd_arg (ident))) (cmd_call (cmd_arg (ident)) (cmd_arg (ident))) (cmd_call (cmd_arg (ident)) (cmd_arg (ident)))) (unit name: (ident) (cmd_call (cmd_arg (ident)) (cmd_arg (ident)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), august.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
