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
	expected = "(source_file (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (comment (line_comment)) (ERROR (identifier) (identifier) (identifier) (identifier)) (identifier) (ERROR (identifier) (identifier) (identifier) (identifier)) (identifier) (ERROR (identifier) (identifier) (identifier) (identifier)) (identifier) (ERROR (identifier) (identifier) (UNEXPECTED '{')) (let_declaration name: (identifier) (ERROR (identifier) (identifier) (identifier)) value: (expression_list (parenthesized_expression (ERROR (identifier)) (identifier) (ERROR)))) (identifier) (MISSING \"\n\") (ERROR (parenthesized_expression (identifier) (ERROR (identifier) (identifier) (UNEXPECTED '{') (identifier) (UNEXPECTED '}'))) (UNEXPECTED '{') (identifier) (identifier) (identifier) (parenthesized_expression (ERROR (UNEXPECTED '}') (identifier)) (string_literal (ERROR (identifier) (identifier)))) (identifier) (UNEXPECTED '{') (identifier) (identifier)) (parenthesized_expression (string_literal)) (identifier) (ERROR (UNEXPECTED '}')) (let_declaration name: (identifier) value: (expression_list (identifier))) (MISSING \"\n\") (ERROR (parenthesized_expression (string_literal)) (identifier) (UNEXPECTED '{') (identifier)) (identifier) (MISSING \"\n\") (parenthesized_expression (string_literal)) (identifier) (ERROR (UNEXPECTED '}') (identifier)) (identifier) (MISSING \"\n\") (parenthesized_expression (string_literal)) (let_declaration name: (identifier) (ERROR (identifier) (identifier) (identifier) (UNEXPECTED '{') (string_literal) (identifier) (identifier)) value: (expression_list (parenthesized_expression (identifier) (ERROR (identifier))))) (ERROR (UNEXPECTED '|') (string_literal) (identifier) (identifier) (identifier) (identifier) (UNEXPECTED '|') (string_literal) (identifier) (identifier) (identifier) (UNEXPECTED '*') (identifier) (UNEXPECTED '|') (string_literal) (identifier) (identifier) (identifier) (UNEXPECTED ' ') (identifier) (UNEXPECTED '|') (identifier)) (identifier) (MISSING \"\n\") (parenthesized_expression (string_literal)) (ERROR (UNEXPECTED '}')))"
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
