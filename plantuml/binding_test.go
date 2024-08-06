//go:build !plugin

package plantuml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/plantuml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `@startuml

!theme C4_brown from https://raw.githubusercontent.com/plantuml-stdlib/C4-PlantUML/master/themes
!include https://raw.githubusercontent.com/plantuml-stdlib/C4-PlantUML/master/C4_Container.puml
!include <C4/C4_Context>
!include ./include.puml

rectangle r

node "with text" as n

interface "i" as int

System(system, "system", "desc")

System_Boundary(sys, "boundary") {
    Container(con, "container", "tech", "descriptiion")
}

Rel(system, con, "text")

together {
  circle "circle text" as c
  hexagon h
}

@enduml
`
	expected = "(document (keyword) (theme name: (identifier) url: (url)) (include url: (url)) (include library: (include_open) library: (non_breakable_identifier) library: (include_close)) (include filepath: (filepath)) (component method: (identifier) tag: (attribute (identifier))) (component method: (identifier) tag: (attribute (string)) alias: (identifier)) (component method: (identifier) tag: (attribute (string)) alias: (identifier)) (component method: (identifier) tag: (attribute (MISSING identifier)) (attribute_list (attribute_list_open) (attribute (identifier)) (attribute_sep) (attribute (string)) (attribute_sep) (attribute (string)) (attribute_list_close))) (block component: (component method: (identifier) tag: (attribute (MISSING identifier)) (attribute_list (attribute_list_open) (attribute (identifier)) (attribute_sep) (attribute (string)) (attribute_list_close))) (block_open) (component method: (identifier) tag: (attribute (MISSING identifier)) (attribute_list (attribute_list_open) (attribute (identifier)) (attribute_sep) (attribute (string)) (attribute_sep) (attribute (string)) (attribute_sep) (attribute (string)) (attribute_list_close))) (block_close)) (component method: (identifier) tag: (attribute (MISSING identifier)) (attribute_list (attribute_list_open) (attribute (identifier)) (attribute_sep) (attribute (identifier)) (attribute_sep) (attribute (string)) (attribute_list_close))) (block object: (identifier) (block_open) (component method: (identifier) tag: (attribute (string)) alias: (identifier)) (component method: (identifier) tag: (attribute (identifier))) (block_close)) (keyword) (ERROR (UNEXPECTED '\\0')))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), plantuml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
