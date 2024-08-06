//go:build !plugin

package earthfile_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/earthfile"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `VERSION 0.8
FROM golang:1.15-alpine3.13
WORKDIR /go-workdir

build:
    COPY main.go .
    RUN go build -o output/example main.go
    SAVE ARTIFACT output/example AS LOCAL local-output/go-example

docker:
    COPY +build/example .
    ENTRYPOINT ["/go-workdir/example"]
    SAVE IMAGE go-example:latest
`
	expected = "(source_file base_target: (block (version_command version: (version_major_minor)) (from_command (image_spec name: (image_name) tag: (image_tag))) (workdir_command (string (unquoted_string)))) (target name: (identifier) (block (copy_command src: (string (unquoted_string)) dest: (string (unquoted_string))) (run_command command: (shell_fragment)) (save_artifact_command src: (string (unquoted_string)) local_dest: (string (unquoted_string))))) (target name: (identifier) (block (copy_command src: (target_artifact (target_ref name: (identifier)) (unquoted_string)) dest: (string (unquoted_string))) (entrypoint_command (string_array (double_quoted_string))) (save_image_command images: (images (image_spec name: (image_name) tag: (image_tag)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), earthfile.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
