//go:build !plugin

package dbml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/dbml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
// Enums
enum enum_name {
  foo [note: "foobar"]
  bar
  baz [note: "foobaz"]
}

/* Table with indexes */
Table bookings {
    id integer
    country varchar
    booking_date date
    created_at timestamp

    indexes {
        (id, country) [pk] // composite primary key
        created_at [name: 'created_at_index', note: 'Date']
        booking_date
        (country, booking_date) [unique]
        booking_date [type: hash]
    }
}
`
	expected = "(schema (comment) (enum (enum_name) (variant (variant_notes (note (note_text (string))))) (variant) (variant (variant_notes (note (note_text (string)))))) (ERROR))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), dbml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
