//go:build !plugin

package supercollider_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/supercollider"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
{
  var snare, bdrum, hihat;
  var tempo = 4;

  tempo = Impulse.ar(tempo); // for a drunk drummer replace Impulse with Dust !!!
  snare = WhiteNoise.ar(Decay2.ar(PulseDivider.ar(tempo, 4, 2), 0.005, 0.5));
  bdrum = SinOsc.ar(Line.ar(120,60, 1), 0, Decay2.ar(PulseDivider.ar(tempo, 4, 0), 0.005, 0.5));
  hihat = HPF.ar(WhiteNoise.ar(1), 10000) * Decay2.ar(tempo, 0.005, 0.5);

  Out.ar(0, (snare + bdrum + hihat) * 0.4 ! 2)
}.play;
`
	expected = "(source_file (function_call (receiver (function_block (variable_definition_sequence (variable (local_var name: (identifier))) (variable (local_var name: (identifier))) (variable (local_var name: (identifier)))) (variable_definition name: (variable (local_var name: (identifier))) value: (literal (number (integer)))) (variable_definition name: (variable (local_var name: (identifier))) value: (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (variable (local_var name: (identifier))))))))) (line_comment) (variable_definition name: (variable (local_var name: (identifier))) value: (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (variable (local_var name: (identifier))))) (argument_calls (unnamed_argument (literal (number (integer))))) (argument_calls (unnamed_argument (literal (number (integer)))))))))) (argument_calls (unnamed_argument (literal (number (float))))) (argument_calls (unnamed_argument (literal (number (float)))))))))))))) (variable_definition name: (variable (local_var name: (identifier))) value: (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (literal (number (integer))))) (argument_calls (unnamed_argument (literal (number (integer))))) (argument_calls (unnamed_argument (literal (number (integer)))))))))) (argument_calls (unnamed_argument (literal (number (integer))))) (argument_calls (unnamed_argument (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (variable (local_var name: (identifier))))) (argument_calls (unnamed_argument (literal (number (integer))))) (argument_calls (unnamed_argument (literal (number (integer)))))))))) (argument_calls (unnamed_argument (literal (number (float))))) (argument_calls (unnamed_argument (literal (number (float)))))))))))))) (variable_definition name: (variable (local_var name: (identifier))) value: (function_call (receiver (binary_expression left: (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (literal (number (integer)))))))))) (argument_calls (unnamed_argument (literal (number (integer)))))))) right: (class))) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (variable (local_var name: (identifier))))) (argument_calls (unnamed_argument (literal (number (float))))) (argument_calls (unnamed_argument (literal (number (float))))))))) (function_call (receiver (class)) (method_call name: (method_name) (parameter_call_list (argument_calls (unnamed_argument (literal (number (integer))))) (ERROR (binary_expression left: (code_block (binary_expression left: (binary_expression left: (variable (local_var name: (identifier))) right: (variable (local_var name: (identifier)))) right: (variable (local_var name: (identifier))))) right: (literal (number (float))))) (argument_calls (unnamed_argument (literal (number (integer)))))))))) (method_call name: (method_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), supercollider.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
