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
	expected = `(source_file (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (line_comment) (use_declaration (aliased alias: (identifier) path: (scoped_type_identifier path: (identifier) name: (identifier)))) (use_declaration (aliased alias: (identifier) path: (scoped_type_identifier path: (identifier) name: (identifier)))) (use_declaration (aliased alias: (identifier) path: (scoped_type_identifier path: (identifier) name: (identifier)))) (function_declaration name: (identifier) parameters: (parameters) (return_type (single_return_type type: (primitive_type)))) (block (let_declaration name: (identifier) value: (call_expression function: (field_expression value: (scoped_identifier path: (identifier) name: (identifier)) field: (field_identifier)) arguments: (arguments (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments))))) (if_expression condition: (parenthesized_expression (ERROR (call_expression function: (field_expression value: (identifier) field: (field_identifier)) arguments: (arguments)) (identifier)) (map_expression (ERROR (identifier) (identifier)))) consequence: (block (return_expression values: (call_expression function: (field_expression value: (identifier) field: (field_identifier)) arguments: (arguments))))) (MISSING "source_file_token1") (return_expression values: (string_literal))) (MISSING "source_file_token1") (function_declaration name: (identifier) parameters: (parameters (parameter name: (identifier) type: (primitive_type)))) (unary_expression operator: (unary_operator) (ERROR (primitive_type)) operand: (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (identifier)))) (let_declaration name: (identifier) value: (call_expression function: (identifier) arguments: (arguments))) (return_expression values: (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (identifier) (integer_literal)))) (MISSING "source_file_token1") (struct_expression name: (identifier) body: (struct_expr_body (struct_expr_field (call_expression function: (identifier) arguments: (arguments (boolean_literal)))))) (ERROR) (function_declaration name: (identifier) parameters: (parameters)) (block (for_expression body: (block (let_declaration name: (identifier) value: (call_expression function: (identifier) arguments: (arguments (string_literal)))) (struct_expression name: (identifier) body: (struct_expr_body (struct_expr_field (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (string_literal)))) (ERROR (identifier)))) (let_declaration name: (identifier) value: (call_expression function: (identifier) arguments: (arguments (string_literal)))) (struct_expression name: (identifier) body: (struct_expr_body (struct_expr_field (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (string_literal)))) (ERROR (identifier)))) (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (string_literal))) (let_declaration name: (identifier) value: (call_expression function: (identifier) arguments: (arguments))) (match_expression value: (identifier) body: (match_block (match_arm patterns: (match_pattern (string_literal)) value: (match_arm_body (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (binary_expression left: (identifier) operator: (binary_operator) right: (identifier)))))) (match_arm patterns: (match_pattern (string_literal)) value: (match_arm_body (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (binary_expression left: (identifier) operator: (binary_operator) right: (identifier)))))) (match_arm patterns: (match_pattern (string_literal)) value: (match_arm_body (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (binary_expression left: (identifier) operator: (binary_operator) right: (identifier)))))) (match_arm patterns: (match_pattern (string_literal)) value: (match_arm_body (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (binary_expression left: (identifier) operator: (binary_operator) right: (identifier)))))) (last_match_arm value: (match_arm_body (call_expression function: (scoped_identifier path: (identifier) name: (identifier)) arguments: (arguments (string_literal))))))))) (MISSING "source_file_token1")) (MISSING "source_file_token1"))`
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
