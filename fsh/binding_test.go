//go:build !plugin

package fsh_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/fsh"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
Alias: $LNC = http://loinc.org
Alias: $SCT = http://snomed.info/sct

Profile:  CancerDiseaseStatus
Parent:   Observation
Id:       mcode-cancer-disease-status
Title:    "Cancer Disease Status"
Description: "A clinician's qualitative judgment on the current trend of the cancer, e.g., whether it is stable, worsening (progressing), or improving (responding)."
* ^status = #draft
* extension contains EvidenceType named evidenceType 0..*
* extension[evidenceType].valueCodeableConcept from CancerDiseaseStatusEvidenceTypeVS (required)
`
	expected = "(doc (alias (alias_name) (sequence (url))) (alias (alias_name) (sequence (url))) (profile (name (sequence)) (sd_metadata (parent (name (sequence)))) (sd_metadata (id (name (sequence)))) (sd_metadata (title (string (double_quote_string_fragment)))) (sd_metadata (description (string (double_quote_string_fragment)))) (sd_rule (caret_value_rule (caret_path (sequence)) (value (code_string (code (code_value)))))) (sd_rule (contains_rule (path (sequence)) (item (name (sequence)) (name (sequence)) (cardinality)))) (sd_rule (valueset_rule (path (sequence)) (name (sequence)) (strength (strength_value))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), fsh.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
