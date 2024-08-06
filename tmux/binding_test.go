//go:build !plugin

package tmux_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/tmux"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
# https://github.com/tmux-plugins/tpm
set -g @plugin tmux-plugins/tpm
set -g word-separators ' -_@'
set -g set-titles-string "#S:#I \
#W#{session_alerts}\
#W#{session_alerts}\
#{==:#{battery_percentage},}\
"
set -g window-status-current-format \
"#{window-status-current-format-left:black,#ffb86c,#[bold,fg=#ffb86c,noreverse]#I\
#W\
#{?window_bigger,,}}"
set -g status-right \
"#{status-right:%s;\
white,colour04,#{prefix_highlight}#[bg=colour04];\
black,yellow,#{pomodoro_status};\
\
black,#87ceeb,%F%H:%M%a}"
bind -Tcopy-mode-vi M-v send-keys -X rectangle-toggle
bind -Tcopy-mode-vi C-v send-keys v M-v
`
	expected = "(file (comment) (set_option_directive (command) (command_line_option) (option) (value)) (set_option_directive (command) (command_line_option) (option) (value (raw_string content: (__string)))) (set_option_directive (command) (command_line_option) (option) (value (string (variable (variable_name)) (variable (variable_name)) (variable (variable_name)) (variable (variable_name)) (variable (variable_name)) (variable (variable_name)) (variable (function_name) (variable (variable_name)))))) (set_option_directive (command) (command_line_option) (option) (value (string (variable (function_name) (variable (variable_name)) (variable (attribute) (attribute) (variable (variable_name)) (attribute)) (variable (variable_name)) (variable (variable_name)) (variable (variable_name)))))) (set_option_directive (command) (command_line_option) (option) (value (string (variable (function_name) (variable (variable_name)) (variable (attribute) (variable_name)) (variable (variable_name)) (variable (variable_name)))))) (bind_key_directive (command) (command_line_option) (key) (send_keys_directive (command) (command_line_option) (key))) (bind_key_directive (command) (command_line_option) (key) (send_keys_directive (command) (key) (key))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), tmux.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
