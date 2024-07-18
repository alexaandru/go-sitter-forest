//go:build !plugin

package move_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/move"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `// Copyright (c) Mysten Labs, Inc.
// SPDX-License-Identifier: Apache-2.0

/// Coin<SUI> is the token used to pay for gas in Sui.
/// It has 9 decimals, and the smallest unit (10^-9) is called "mist".
module sui::sui {
    use std::option;
    use sui::tx_context::{Self, TxContext};
    use sui::balance::{Self, Balance};
    use sui::transfer;
    use sui::coin;

    const EAlreadyMinted: u64 = 0;
    /// Sender is not @0x0 the system address.
    const ENotSystemAddress: u64 = 1;

    #[allow(unused_const)]
    /// The amount of Mist per Sui token based on the the fact that mist is
    /// 10^-9 of a Sui token
    const MIST_PER_SUI: u64 = 1_000_000_000;

    #[allow(unused_const)]
    /// The total supply of Sui denominated in whole Sui tokens (10 Billion)
    const TOTAL_SUPPLY_SUI: u64 = 10_000_000_000;

    /// The total supply of Sui denominated in Mist (10 Billion * 10^9)
    const TOTAL_SUPPLY_MIST: u64 = 10_000_000_000_000_000_000;

    /// Name of the coin
    struct SUI has drop {}

    #[allow(unused_function)]
    /// Register the SUI Coin to acquire its Supply.
    /// This should be called only once during genesis creation.
    fun new(ctx: &mut TxContext): Balance<SUI> {
        assert!(tx_context::sender(ctx) == @0x0, ENotSystemAddress);
        assert!(tx_context::epoch(ctx) == 0, EAlreadyMinted);

        let (treasury, metadata) = coin::create_currency(
            SUI {},
            9,
            b"SUI",
            b"Sui",
            // TODO: add appropriate description and logo url
            b"",
            option::none(),
            ctx
        );
        transfer::public_freeze_object(metadata);
        let supply = coin::treasury_into_supply(treasury);
        let total_sui = balance::increase_supply(&mut supply, TOTAL_SUPPLY_MIST);
        balance::destroy_supply(supply);
        total_sui
    }

    public entry fun transfer(c: coin::Coin<SUI>, recipient: address) {
        transfer::public_transfer(c, recipient)
    }
}
`
	expected = "(source_file (line_comment) (newline) (line_comment) (newline) (newline) (line_comment) (newline) (line_comment) (newline) (module_definition module_identity: (module_identity address: (module_identifier) module: (module_identifier)) module_body: (module_body (newline) (use_declaration (use_module (module_identity address: (module_identifier) module: (module_identifier)))) (newline) (use_declaration (use_module_members (module_identity address: (module_identifier) module: (module_identifier)) use_member: (use_member member: (identifier)) use_member: (use_member member: (identifier)))) (newline) (use_declaration (use_module_members (module_identity address: (module_identifier) module: (module_identifier)) use_member: (use_member member: (identifier)) use_member: (use_member member: (identifier)))) (newline) (use_declaration (use_module (module_identity address: (module_identifier) module: (module_identifier)))) (newline) (use_declaration (use_module (module_identity address: (module_identifier) module: (module_identifier)))) (newline) (newline) (constant name: (constant_identifier) type: (primitive_type) expr: (num_literal)) (newline) (line_comment) (newline) (constant name: (constant_identifier) type: (primitive_type) expr: (num_literal)) (newline) (newline) (annotation (annotation_item annotation_list: (annotation_list name: (identifier) (annotation_item annotation_expr: (annotation_expr name: (identifier)))))) (newline) (line_comment) (newline) (line_comment) (newline) (constant name: (constant_identifier) type: (primitive_type) expr: (num_literal)) (newline) (newline) (annotation (annotation_item annotation_list: (annotation_list name: (identifier) (annotation_item annotation_expr: (annotation_expr name: (identifier)))))) (newline) (line_comment) (newline) (constant name: (constant_identifier) type: (primitive_type) expr: (num_literal)) (newline) (newline) (line_comment) (newline) (constant name: (constant_identifier) type: (primitive_type) expr: (num_literal)) (newline) (newline) (line_comment) (newline) (struct_definition name: (struct_identifier) ability_declarations: (ability_decls (ability)) struct_fields: (datatype_fields (named_fields))) (newline) (newline) (annotation (annotation_item annotation_list: (annotation_list name: (identifier) (annotation_item annotation_expr: (annotation_expr name: (identifier)))))) (newline) (line_comment) (newline) (line_comment) (newline) (function_definition name: (function_identifier) parameters: (function_parameters (function_parameter name: (variable_identifier) type: (ref_type (apply_type (module_access member: (identifier)))))) return_type: (ret_type (apply_type (module_access member: (identifier)) type_arguments: (type_arguments (apply_type (module_access member: (identifier)))))) body: (block (newline) (block_item (macro_call_expression access: (macro_module_access access: (module_access member: (identifier))) args: (arg_list (binary_expression lhs: (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list (name_expression access: (module_access member: (identifier))))) operator: (binary_operator) rhs: (address_literal)) (name_expression access: (module_access member: (identifier)))))) (newline) (block_item (macro_call_expression access: (macro_module_access access: (module_access member: (identifier))) args: (arg_list (binary_expression lhs: (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list (name_expression access: (module_access member: (identifier))))) operator: (binary_operator) rhs: (num_literal)) (name_expression access: (module_access member: (identifier)))))) (newline) (newline) (block_item (let_statement binds: (bind_list (bind_var (variable_identifier)) (bind_var (variable_identifier))) expr: (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list (newline) (pack_expression access: (module_access member: (identifier)) body: (field_initialize_list)) (newline) (num_literal) (newline) (byte_string_literal) (newline) (byte_string_literal) (newline) (line_comment) (newline) (byte_string_literal) (newline) (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list)) (newline) (name_expression access: (module_access member: (identifier))) (newline))))) (newline) (block_item (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list (name_expression access: (module_access member: (identifier)))))) (newline) (block_item (let_statement binds: (bind_list (bind_var (variable_identifier))) expr: (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list (name_expression access: (module_access member: (identifier))))))) (newline) (block_item (let_statement binds: (bind_list (bind_var (variable_identifier))) expr: (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list (borrow_expression expr: (name_expression access: (module_access member: (identifier)))) (name_expression access: (module_access member: (identifier))))))) (newline) (block_item (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list (name_expression access: (module_access member: (identifier)))))) (newline) (name_expression access: (module_access member: (identifier))) (newline))) (newline) (newline) (function_definition (modifier) (modifier) name: (function_identifier) parameters: (function_parameters (function_parameter name: (variable_identifier) type: (apply_type (module_access module: (module_identifier) member: (identifier)) type_arguments: (type_arguments (apply_type (module_access member: (identifier)))))) (function_parameter name: (variable_identifier) type: (primitive_type))) body: (block (newline) (call_expression access: (module_access module: (module_identifier) member: (identifier)) args: (arg_list (name_expression access: (module_access member: (identifier))) (name_expression access: (module_access member: (identifier))))) (newline))) (newline))) (newline))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), move.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
