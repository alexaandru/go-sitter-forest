package sparql_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/sparql"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
  SELECT ?protein ?organism ?isoform ?sequence
  WHERE
  {
      ?protein a up:Protein .
      ?protein up:organism ?organism .
      # Taxon subclasses are materialized, do not use rdfs:subClassOf+
      ?organism rdfs:subClassOf taxon:83333 .
      ?protein up:sequence ?isoform .
      ?isoform rdf:value ?sequence .
  }
`
	expected = "(unit (select_query (select_clause bound_variable: (var) bound_variable: (var) bound_variable: (var) bound_variable: (var)) (where_clause (group_graph_pattern (triples_block (triples_same_subject subject: (var) (property_list (property (path_element) (object_list (prefixed_name (namespace (pn_prefix)) (pn_local)))))) (triples_same_subject subject: (var) (property_list (property (path_element (prefixed_name (namespace (pn_prefix)) (pn_local))) (object_list (var))))) (comment) (triples_same_subject subject: (var) (property_list (property (path_element (prefixed_name (namespace (pn_prefix)) (pn_local))) (object_list (prefixed_name (namespace (pn_prefix)) (pn_local)))))) (triples_same_subject subject: (var) (property_list (property (path_element (prefixed_name (namespace (pn_prefix)) (pn_local))) (object_list (var))))) (triples_same_subject subject: (var) (property_list (property (path_element (prefixed_name (namespace (pn_prefix)) (pn_local))) (object_list (var))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), sparql.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
