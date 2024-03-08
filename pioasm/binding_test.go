package pioasm_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pioasm"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
.program hello

loop:
    pull
    out pins, 1
    jmp loop

% c-sdk {
static inline void hello_program_init(PIO pio, uint sm, uint offset, uint pin) {
    pio_sm_config c = hello_program_get_default_config(offset);
    sm_config_set_out_pins(&c, pin, 1);
    pio_gpio_init(pio, pin);
    pio_sm_set_consecutive_pindirs(pio, sm, pin, 1, true);

    // Load our configuration, and jump to the start of the program
    pio_sm_init(pio, sm, offset, &c);
    // Set the state machine running
    pio_sm_set_enabled(pio, sm, true);
}
%}
`
	expected = "(source_file (directive directive: (MISSING \".wrap_target\")) (directive (identifier)) (label_decl (symbol_def (identifier))) (instruction) (instruction (out_target) (value (integer))) (instruction (expression (value (identifier)))) (code_block (code_block_language) (code_block_body)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), pioasm.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
