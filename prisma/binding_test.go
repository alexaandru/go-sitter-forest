package prisma_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/prisma"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
datasource db {
  provider = "postgresql"
  url      = "postgresql://johndoe:mypassword@localhost:5432/mydb?schema=public"
}
`
	expected = "(program (datasource_declaration (identifier) (statement_block (assignment_expression (variable) (string)) (assignment_expression (variable) (string)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), prisma.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
