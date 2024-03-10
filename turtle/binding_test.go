//go:build !plugin

package turtle_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/turtle"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
@base <http://one.example/> .
BASE <http://one.example/>
@prefix p: <http://two.example/> .
PREFIX p: <http://two.example/>

# Seperate triples by highlight
<s> <o> <http://www.example.org/\u0020bar> .
<s>  <p> foo:o .
_:s <p> <0> .
<s>
  # a != :a
  a <o> ;
  :a <o> ;
  # Types in one highlight
  <p> 'foo'@foo-bar ;
  <p> 'foo'^^<http://example.org/foo> ;
  <p> 'foo'^^foo:bar .
`
	expected = "(turtle_doc (statement (directive (base (iri_reference)))) (statement (directive (sparql_base (iri_reference)))) (statement (directive (prefix_id (namespace (pn_prefix)) (iri_reference)))) (statement (directive (sparql_prefix (namespace (pn_prefix)) (iri_reference)))) (comment) (statement (triples (subject (iri_reference)) (property_list (property (predicate (iri_reference)) (object_list (iri_reference)))))) (statement (triples (subject (iri_reference)) (property_list (property (predicate (iri_reference)) (object_list (prefixed_name (namespace (pn_prefix)) (pn_local))))))) (statement (triples (subject (blank_node_label)) (property_list (property (predicate (iri_reference)) (object_list (iri_reference)))))) (statement (triples (subject (iri_reference)) (comment) (property_list (property (predicate) (object_list (iri_reference))) (property (predicate (prefixed_name (namespace) (pn_local))) (object_list (iri_reference))) (comment) (property (predicate (iri_reference)) (object_list (rdf_literal value: (string) (lang_tag)))) (property (predicate (iri_reference)) (object_list (rdf_literal value: (string) datatype: (iri_reference)))) (property (predicate (iri_reference)) (object_list (rdf_literal value: (string) datatype: (prefixed_name (namespace (pn_prefix)) (pn_local)))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), turtle.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
