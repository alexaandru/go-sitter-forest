//go:build !plugin

package cds_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/cds"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `using { Currency, managed, sap } from '@sap/cds/common';
namespace sap.capire.bookshop; 

entity Books : managed { 
  key ID : Integer;
  title  : localized String(111);
  descr  : localized String(1111);
  author : Association to Authors;
  genre  : Association to Genres;
  stock  : Integer;
  price  : Decimal(9,2);
  currency : Currency;
}

entity Authors : managed { 
  key ID : Integer;
  name   : String(111);
  books  : Association to many Books on books.author = $self;
}

/** Hierarchically organized Code List for Genres */
entity Genres : sap.common.CodeList { 
  key ID   : Integer;
  parent   : Association to Genres;
  children : Composition of many Genres on children.parent = $self;
}
`
	expected = "(cds (using imports: (artifact_import (definition_reference (identifier))) imports: (artifact_import (definition_reference (identifier))) imports: (artifact_import (definition_reference (identifier))) file: (single_quote_string)) (namespace path: (simple_path (identifier) (identifier) (identifier))) (entity_definition name: (name (identifier)) (include_list (simple_path (identifier))) (element_definitions (element_definition name: (name) type: (simple_path (identifier))) (element_definition name: (name) (type_reference name: (simple_path (identifier)) parameter: (type_argument value: (number)))) (element_definition name: (name) (type_reference name: (simple_path (identifier)) parameter: (type_argument value: (number)))) (element_definition name: (name) (association_to (simple_path (identifier)))) (element_definition name: (name) (association_to (simple_path (identifier)))) (element_definition name: (name) type: (simple_path (identifier))) (element_definition name: (name) type: (simple_path (identifier)) (type_argument value: (number)) (type_argument value: (number))) (element_definition name: (name) type: (simple_path (identifier))))) (entity_definition name: (name (identifier)) (include_list (simple_path (identifier))) (element_definitions (element_definition name: (name) type: (simple_path (identifier))) (element_definition name: (name) type: (simple_path (identifier)) (type_argument value: (number))) (element_definition name: (name) (association_to (simple_path (identifier)) (binary_condition left: (value_path (identifier) (identifier)) right: (value_path (identifier))))))) (comment) (entity_definition name: (name (identifier)) (include_list (simple_path (identifier) (identifier) (identifier))) (element_definitions (element_definition name: (name) type: (simple_path (identifier))) (element_definition name: (name) (association_to (simple_path (identifier)))) (element_definition name: (name) (composition_of (simple_path (identifier)) (binary_condition left: (value_path (identifier) (identifier)) right: (value_path (identifier))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), cds.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
