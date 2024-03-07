package gnuplot_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/gnuplot"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
x1(u,v)=cos(u)+.5*cos(u)*cos(v)
y1(u,v)=sin(u)+.5*sin(u)*cos(v)
#
set style line 100 lw 0.1 lc rgb "navy"
set pm3d depthorder hidden3d ls 100
set palette defined (0 "dark-green", 1 "white")
unset key
set ticslevel 0
splot x1(u,v), y1(u,v), z1(u,v) w pm3d,\
      x2(u,v), y2(u,v), z2(u,v) w pm3d 
pause 3
set term pngcairo size 480,480 
set output "tori.png"
replot
`
	expected = "(source_file (func_def (function name: (identifier) parameters: (parameter_list (identifier) (identifier))) body: (binary_expression (function name: (identifier) parameters: (parameter_list (identifier))) (binary_expression (binary_expression (number) (function name: (identifier) parameters: (parameter_list (identifier)))) (function name: (identifier) parameters: (parameter_list (identifier)))))) (func_def (function name: (identifier) parameters: (parameter_list (identifier) (identifier))) body: (binary_expression (function name: (identifier) parameters: (parameter_list (identifier))) (binary_expression (binary_expression (number) (function name: (identifier) parameters: (parameter_list (identifier)))) (function name: (identifier) parameters: (parameter_list (identifier)))))) (comment) (c_set (style (line_style tag: (number) (number) (colorspec (string_literal))))) (c_set (pm3d)) (ERROR (identifier) (number)) (c_set (palette gray: (number) namehex: (string_literal) gray: (number) namehex: (string_literal))) (c_set) (c_set (tics (tics_opts (identifier) (number)))) (c_splot (plot_element data: (function name: (identifier) parameters: (parameter_list (identifier) (identifier)))) (plot_element data: (function name: (identifier) parameters: (parameter_list (identifier) (identifier)))) (plot_element data: (function name: (identifier) parameters: (parameter_list (identifier) (identifier))) with: (plot_style)) (plot_element data: (function name: (identifier) parameters: (parameter_list (identifier) (identifier)))) (plot_element data: (function name: (identifier) parameters: (parameter_list (identifier) (identifier)))) (plot_element data: (function name: (identifier) parameters: (parameter_list (identifier) (identifier))) with: (plot_style))) (c_pause time: (number)) (c_set (terminal (t_pngcairo (canvas_size x: (number) y: (number))))) (c_set (output name: (string_literal))) (c_replot))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gnuplot.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
