//go:build !plugin

package tup_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/tup"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `include_rules
include test.tup
preload test1
run ./test.sh

VAR1 := hi
VAR2 = hi2
VAR2 += hi3


# preserve
: foreach *.c |> !tup_preserve |>

import CC=gcc
export CC
.gitignore
!cc = |> gcc -c %f -o %o |>
!test = | orderonlyinputs |> command |> outputs

: test.c |> !cc |> test.o

: |> echo "foo" | cat - > test.foo |> test.foo
: foreach *.c | test.foo |> cat %f > %o |> %B.bas
: |> echo "yeet" > yeet && echo "yeet2" > yeet2 |> yeet | yeet2 <main> {yeet}
# test comment
: {yeet} |> |>
: {yeet} |>^b %f^ echo "b" |>
: {yeet} | yeet2 |>^c %i^ echo "c" |>
: {yeet} |>^j %b %B^ echo "j" |>
: {yeet} |>^o %o %O^ echo "o" > o |> o
: {yeet} |>^s %d^ echo "s" |>
: {yeet} |>^t %d %<main>^ echo "t" |>
: {yeet} |> ^t $(VAR1) $(TUP_CWD) $(TUP_VARIANTDIR) $(TUP_VARIANT_OUTPUTDIR) @(TUP_ARCH) @(TUP_PLATFORM) hello string %% <- actual precent^ echo "t with text" |>
: foreach *.c |> cat %f > %e.d |> %e.d

&o := Tupfile.ini
&c = Tupfile
&c += Tupfile.ini
: |> echo "&(o)&(c)" > %o |> o2

ifeq (d,d)
else
error impossible
endif

ifneq (d,d)
error impossible
endif

ifdef test
error impossible
endif
ifndef test
endif
import TEST = hi
`
	expected = "(tupfile (include_rules) (include (filename)) (preload (filename)) (run (string)) (variable_statement (identifier (normal)) (operators) (string)) (variable_statement (identifier (normal)) (operators) (string)) (variable_statement (identifier (normal)) (operators) (string)) (comment) (rule (input_statement (foreach) inputs: (files (filename))) (arrow) (command) (arrow)) (import (normal) (string)) (export (normal)) (gitignore) (macro_decleration (arrow) (command) (array_percent_flag) (command) (array_percent_flag) (arrow)) (macro_decleration order_only_inputs: (piped_files (files (filename))) (arrow) (command) (arrow) outputs: (files (filename))) (rule (input_statement inputs: (files (filename))) (arrow) (command) (arrow) outputs: (files (filename))) (rule (arrow) (command) (arrow) outputs: (files (filename))) (rule (input_statement (foreach) inputs: (files (filename))) order_only_inputs: (piped_files (files (filename))) (arrow) (command) (array_percent_flag) (command) (array_percent_flag) (arrow) outputs: (files (filename (array_percent_flag)) (filename))) (rule (arrow) (command) (ERROR (string)) (comment) (command) (ERROR (arrow) (string)) (command) (ERROR (arrow) (files (filename) (filename (array_percent_flag)) (filename) (filename) (filename)) (string) (command) (string) (command) (string) (command) (string) (command) (string) (command) (string)) (command) (arrow) outputs: (files (filename) (filename) (filename) (filename) (filename) (filename) (filename) (filename) (filename) (filename (percent_flag))) (ERROR (string) (command) (string))) (variable_statement (identifier (reference)) (operators) (string)) (variable_statement (identifier (reference)) (operators) (string)) (variable_statement (identifier (reference)) (operators) (string)) (rule (arrow) (command) (variable_reference (normal)) (variable_reference (normal)) (command) (array_percent_flag) (arrow) outputs: (files (filename))) (if_compare (ifeq) (string) (string) (else (error (string))) (endif)) (if_compare (ifneq) (string) (string) (error (string)) (endif)) (if (ifdef) (error (string)) (endif)) (if (ifndef) (endif)) (import (normal) (string)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), tup.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
