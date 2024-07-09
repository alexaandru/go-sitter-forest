//go:build !plugin

package ConTeXt_test

import (
	"context"
	"testing"

	ConTeXt "github.com/alexaandru/go-sitter-forest/context"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
Preamble nonsense

\%

% Beefs.

\starttext

\testcommand[foo=bar]

\testcommand[foo=bar, cow=whee]

\testcommand[foo=bar, boar={Snorty snorty}]

\testcommand[foo=bar, bee=\buzz]

\testcommand[foo=bar, bee={\whee}]

% Hello!

\%

How are you?

\startcow[vast]

\startcow[vast,unrelenting]

\stoptext

Bees.

\%

% Postamble nonsense

{ foo }

{ { foo } }
`
	expected = "(ERROR (preamble (text_block (text) (paragraph_mark)) (escaped) (line_comment) (content_start)) (command cmd_name: (command_name) (settings_block (setting (key) (value value_content_text: (value_text))))) (text_block (text)) (command cmd_name: (command_name) (settings_block (setting (key) (value value_content_text: (value_text))) (setting (key) (value value_content_text: (value_text))))) (text_block (text)) (command cmd_name: (command_name) (settings_block (setting (key) (value value_content_text: (value_text))) (setting (key) (value (value_brace_group (value_brace_group_text)))))) (text_block (text)) (command cmd_name: (command_name) (settings_block (setting (key) (value value_content_text: (value_text))) (setting (key) (value (command cmd_name: (command_name)))))) (text_block (text)) (command cmd_name: (command_name) (settings_block (setting (key) (value value_content_text: (value_text))) (setting (key) (value (value_brace_group (command cmd_name: (command_name))))))) (text_block (text)) (line_comment) (escaped) (text_block (text) (paragraph_mark)) (start_environment_name) (option_block (keyword)) (text_block (text)) (environment env_name: (start_environment_name) (option_block (keyword) (keyword)) (text_block (text)) (stop_environment_name)) (text_block (text) (paragraph_mark)) (escaped) (line_comment) (brace_group (text_block (text))) (brace_group (text_block (text)) (brace_group (text_block (text))) (text_block (text))) (text))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), ConTeXt.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
