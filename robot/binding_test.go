//go:build !plugin

package robot_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/robot"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
*** Test Cases ***
Verify Google Search
    Open Browser    https://www.google.com    chrome
    Input Text    name=q    Robot Framework
    Click Button    name=btnK
    Page Should Contain    Robot Framework
    Close Browser
`
	expected = "(source_file (section (test_cases_section (section_header) (test_case_definition (name) (body (statement (keyword_invocation (keyword) (arguments (argument (text_chunk)) (argument (text_chunk))))) (statement (keyword_invocation (keyword) (arguments (argument (text_chunk)) (argument (text_chunk))))) (statement (keyword_invocation (keyword) (arguments (argument (text_chunk))))) (statement (keyword_invocation (keyword) (arguments (argument (text_chunk))))) (statement (keyword_invocation (keyword))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), robot.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
