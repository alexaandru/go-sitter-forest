//go:build !plugin

package jule_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/jule"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
// Copyright 2022-2024 The Jule Programming Language.
// Use of this source code is governed by a BSD 3-Clause
// license that can be found here:
//
// BSD 3-Clause License
//
// Copyright (c) 2022-2024, Mertcan DAVULCU
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

use fmt for std::fmt
use conv for std::conv
use io for std::io

fn readln(): str {
    let scanner = io::Scanner.New(io::Stdin())
    if (scanner.Scan() else { use false }) {
        ret scanner.Text()
    }
    ret ""
}

fn numericInput(msg: str)!: f64 {
    fmt::Print(msg)
    let input = readln()
    ret conv::ParseFloat(input, 64) else { error(false) }
}

fn main() {
    for {
        let l = numericInput("Input left: ") else {
            fmt::Println("Invalid left!")
            continue
        }
        let r = numericInput("Input right: ") else {
            fmt::Println("Invalid right!")
            continue
        }
        fmt::Print("Choose your op: + - / *\nYour op: ")
        let input = readln()
        match input {
        | "+":
            fmt::Println(l + r)
        | "-":
            fmt::Println(l - r)
        | "*":
            fmt::Println(l * r)
        | "/":
            fmt::Println(l / r)
        |:
            fmt::Println("Invalid operation!")
        }
    }
}
`
	expected = `(source_file (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (use_declaration (aliased alias: (identifier) path: (scoped_type_identifier path: (identifier) name: (identifier)))) (use_declaration (aliased alias: (identifier) path: (scoped_type_identifier path: (identifier) name: (identifier)))) (use_declaration (aliased alias: (identifier) path: (scoped_type_identifier path: (identifier) name: (identifier)))) (function_declaration name: (identifier) parameters: (parameters) (return_type (single_return_type type: (primitive_type)))) (ERROR (let_declaration name: (identifier) value: (field_expression value: (scoped_identifier path: (identifier) name: (identifier)) field: (call_expression function: (identifier) arguments: (arguments (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments)))))) (ERROR (field_expression value: (identifier) field: (call_expression function: (identifier) arguments: (arguments))) (identifier)) (ERROR (type_identifier) (identifier) (return_expression values: (field_expression value: (identifier) field: (call_expression function: (identifier) arguments: (arguments))))) (return_expression values: (string_literal)) (ERROR (identifier) (type_identifier)) (ERROR (primitive_type) (exception_flag) (primitive_type)) (ERROR (call_expression function: (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (identifier))) (ERROR (identifier) (identifier)) arguments: (arguments))) (return_expression (ERROR (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (identifier) (integer_literal))) (identifier) (map_expression (ERROR (call_expression function: (identifier) arguments: (arguments (boolean_literal)))))) values: (function_literal name: (identifier) parameters: (parameters) body: (block (for_expression body: (block (let_declaration name: (identifier) value: (call_expression function: (identifier) arguments: (arguments (string_literal)))) (struct_expression name: (identifier) body: (struct_expr_body (struct_expr_field (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (string_literal)))) (ERROR (identifier)))) (let_declaration name: (identifier) value: (call_expression function: (identifier) arguments: (arguments (string_literal)))) (struct_expression name: (identifier) body: (struct_expr_body (struct_expr_field (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (string_literal)))) (ERROR (identifier)))) (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (string_literal))) (let_declaration name: (identifier) value: (call_expression function: (identifier) arguments: (arguments))) (match_expression (match_value (identifier)) (match_case (case_expression_list (case (string_literal))) (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (binary_expression left: (identifier) operator: (binary_operator) right: (identifier))))) (match_case (case_expression_list (case (string_literal))) (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (binary_expression left: (identifier) operator: (binary_operator) right: (identifier))))) (match_case (case_expression_list (case (string_literal))) (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (binary_expression left: (identifier) operator: (binary_operator) right: (identifier))))) (match_case (case_expression_list (case (string_literal))) (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (binary_expression left: (identifier) operator: (binary_operator) right: (identifier))))) (default_case (cast_expression (simple_cast type: (scoped_type_identifier path: (identifier) name: (identifier)) value: (string_literal))))))))))))`
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), jule.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
