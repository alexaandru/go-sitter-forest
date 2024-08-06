//go:build !plugin

package powershell_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/powershell"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

if(-not (Test-Path -Path ..\Polaris.psd1)) {
    Write-Error -Message "Cannot find Polaris.psd1"
    return
}

# Import Polaris
Import-Module -Name ..\Polaris.psd1

$Hey = "What what!"
# Hello World passing in the Path, Method & Scriptblock
New-PolarisRoute -Path /helloworld -Method GET -Scriptblock {
    $Response.Send($Hey)
} -Force

# Query Parameters are supported
New-PolarisRoute -Path /hellome -Method GET -Scriptblock {
    if ($Request.Query['name']) {
        $Response.Send('Hello ' + $Request.Query['name'])
    } else {
        $Response.Send('Hello World')
    }
}

$sbWow = {
    $json = @{
        wow = $true
    }

    # .Json helper function that sets content type
    $Response.Json(($json | ConvertTo-Json))
}

# Supports helper functions for Get, Post, Put, Delete
New-PolarisPostRoute -Path /wow -Scriptblock $sbWow

# Body Parameters are supported if you use the -UseJsonBodyParserMiddleware
New-PolarisPostRoute -Path /hello -Scriptblock {
    if ($Request.Body.Name) {
        $Response.Send('Hello ' + $Request.Body.Name)
    } else {
        $Response.Send('Hello World')
    }
}

# Pass in script file
New-PolarisRoute -Path /example -Method GET -ScriptPath .\script.ps1

# Also support static serving of a directory
New-PolarisStaticRoute -FolderPath ./static -RoutePath /public -EnableDirectoryBrowser $True

# Start the server
$app = Start-Polaris -Port 8082 -MinRunspaces 1 -MaxRunspaces 5 -UseJsonBodyParserMiddleware -Verbose # all params are optional

while($app.Listener.IsListening){
    Wait-Event callbackcomplete
}

# Stop the server
#Stop-Polaris
`
	expected = "(program (comment) (comment) (statement_list (if_statement condition: (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (expression_with_unary_operator (unary_expression (parenthesized_expression (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token))))))))))))))))) (statement_block statement_list: (statement_list (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (string_literal (expandable_string_literal))))))) (flow_control_statement)))) (comment) (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token)))) (pipeline (assignment_expression (left_assignment_expression (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (variable))))))))))) (assignement_operator) value: (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (string_literal (expandable_string_literal)))))))))))))) (comment) (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (script_block_expression (script_block script_block_body: (script_block_body statement_list: (statement_list (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (invokation_expression (variable) (member_name (simple_name)) (argument_list argument_expression_list: (argument_expression_list (argument_expression (logical_argument_expression (bitwise_argument_expression (comparison_argument_expression (additive_argument_expression (multiplicative_argument_expression (format_argument_expression (range_argument_expression (unary_expression (variable))))))))))))))))))))))))))))) (command_argument_sep) (command_parameter)))) (comment) (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (script_block_expression (script_block script_block_body: (script_block_body statement_list: (statement_list (if_statement condition: (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (element_access (member_access (variable) (member_name (simple_name))) (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (string_literal (verbatim_string_characters)))))))))))))))))))))) (statement_block statement_list: (statement_list (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (invokation_expression (variable) (member_name (simple_name)) (argument_list argument_expression_list: (argument_expression_list (argument_expression (logical_argument_expression (bitwise_argument_expression (comparison_argument_expression (additive_argument_expression (additive_argument_expression (multiplicative_argument_expression (format_argument_expression (range_argument_expression (unary_expression (string_literal (verbatim_string_characters))))))) (multiplicative_argument_expression (format_argument_expression (range_argument_expression (unary_expression (element_access (member_access (variable) (member_name (simple_name))) (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (string_literal (verbatim_string_characters)))))))))))))))))))))))))))))))))))) else_clause: (else_clause (statement_block statement_list: (statement_list (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (invokation_expression (variable) (member_name (simple_name)) (argument_list argument_expression_list: (argument_expression_list (argument_expression (logical_argument_expression (bitwise_argument_expression (comparison_argument_expression (additive_argument_expression (multiplicative_argument_expression (format_argument_expression (range_argument_expression (unary_expression (string_literal (verbatim_string_characters))))))))))))))))))))))))))))))))))))) (pipeline (assignment_expression (left_assignment_expression (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (variable))))))))))) (assignement_operator) value: (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (script_block_expression (script_block script_block_body: (script_block_body statement_list: (statement_list (pipeline (assignment_expression (left_assignment_expression (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (variable))))))))))) (assignement_operator) value: (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (hash_literal_expression (hash_literal_body (hash_entry (key_expression (simple_name)) (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (variable)))))))))))))))))))))))))) (comment) (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (invokation_expression (variable) (member_name (simple_name)) (argument_list argument_expression_list: (argument_expression_list (argument_expression (logical_argument_expression (bitwise_argument_expression (comparison_argument_expression (additive_argument_expression (multiplicative_argument_expression (format_argument_expression (range_argument_expression (unary_expression (parenthesized_expression (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (variable)))))))))) (command command_name: (command_name)))))))))))))))))))))))))))))))))))))))))) (comment) (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (variable)))))) (comment) (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (script_block_expression (script_block script_block_body: (script_block_body statement_list: (statement_list (if_statement condition: (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (member_access (member_access (variable) (member_name (simple_name))) (member_name (simple_name))))))))))))) (statement_block statement_list: (statement_list (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (invokation_expression (variable) (member_name (simple_name)) (argument_list argument_expression_list: (argument_expression_list (argument_expression (logical_argument_expression (bitwise_argument_expression (comparison_argument_expression (additive_argument_expression (additive_argument_expression (multiplicative_argument_expression (format_argument_expression (range_argument_expression (unary_expression (string_literal (verbatim_string_characters))))))) (multiplicative_argument_expression (format_argument_expression (range_argument_expression (unary_expression (member_access (member_access (variable) (member_name (simple_name))) (member_name (simple_name))))))))))))))))))))))))))) else_clause: (else_clause (statement_block statement_list: (statement_list (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (invokation_expression (variable) (member_name (simple_name)) (argument_list argument_expression_list: (argument_expression_list (argument_expression (logical_argument_expression (bitwise_argument_expression (comparison_argument_expression (additive_argument_expression (multiplicative_argument_expression (format_argument_expression (range_argument_expression (unary_expression (string_literal (verbatim_string_characters))))))))))))))))))))))))))))))))))))) (comment) (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token)))) (comment) (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (generic_token) (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (variable)))))) (comment) (pipeline (assignment_expression (left_assignment_expression (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (variable))))))))))) (assignement_operator) value: (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (integer_literal (decimal_integer_literal)))) (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (integer_literal (decimal_integer_literal)))) (command_argument_sep) (command_parameter) (command_argument_sep) (array_literal_expression (unary_expression (integer_literal (decimal_integer_literal)))) (command_argument_sep) (command_parameter) (command_argument_sep) (command_parameter) (command_argument_sep)))) (comment))) (while_statement condition: (while_condition (pipeline (logical_expression (bitwise_expression (comparison_expression (additive_expression (multiplicative_expression (format_expression (range_expression (array_literal_expression (unary_expression (member_access (member_access (variable) (member_name (simple_name))) (member_name (simple_name)))))))))))))) (statement_block statement_list: (statement_list (pipeline (command command_name: (command_name) command_elements: (command_elements (command_argument_sep) (generic_token)))))))) (comment) (comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), powershell.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
