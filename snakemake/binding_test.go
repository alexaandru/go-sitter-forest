package snakemake_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/snakemake"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
rule bwa_map:
    input:
        "data/genome.fa",
        "data/samples/A.fastq"
    output:
        "mapped_reads/A.bam"
    shell:
        "bwa mem {input} | samtools view -Sb - > {output}"
`
	expected = "(module (rule_definition name: (identifier) body: (rule_body (directive arguments: (directive_parameters (string (string_start) (string_content) (string_end)) (string (string_start) (string_content) (string_end)))) (directive arguments: (directive_parameters (string (string_start) (string_content) (string_end)))) (directive arguments: (directive_parameters (string (string_start) (wildcard (identifier)) (wildcard (identifier)) (string_end)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), snakemake.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
