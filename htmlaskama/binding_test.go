//go:build !plugin

package htmlaskama_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/htmlaskama"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `<-- extends statement -->
{% extends "layout.html" %}

<-- include statement -->
{% include "carrousel.html" %}

{# Template Comment #}

{#
A Comment
{# A nested comment #}
#}

<p>sanity check for comments</p>

<-- Html comment -->
<-- Multiline
Html
comment -->

{{ 10 * count.upper() }}

<-- https://djc.github.io/askama/template_syntax.html#assignments -->
{% let thing = mything.call() %}
{% let other_thing = user.name %}

<-- https://djc.github.io/askama/template_syntax.html#macros -->
{% macro heading(arg, bold) %}
  <p>this is my macro content</p>
  <p>Some other content</p>
{% endmacro %}

{% import "macros.html" %}
{% import "macros.html" as scope %}

{% macro sqrt(num) %}
  {{ num ** 0.5 }}
{% endmacro %}

<-- block definition -->
{% block myblock %}
<p>this is my block content</p>
{% endblock %}

{% call crate::mything(hello, thing) %}
{% set thing = mything.call() %}

<-- https://djc.github.io/askama/template_syntax.html#if -->
{% if thing %}
  <p>hello</p>
{% elif thingy.upper().map(|x| x.ok())|safe %}
  <p>otherhello</p>
{% else %}
  <p>goodbye</p>
{% endif %}

<-- https://djc.github.io/askama/template_syntax.html#if-let -->
{% if let Some(user) =user %}
  <p>hello {{ user.name }}</p>
{% else %}
  No user
{% endif %}

<-- https://djc.github.io/askama/template_syntax.html#match -->
{% match item.ok() %}
  {% when Some with ("foo") %}
    <p>foo</p>
  {% when Some with ("bar") %}
    <p>bar</p>
  {% when None %}
    <p>none</p>
{% endmatch %}

<-- https://djc.github.io/askama/template_syntax.html#filter-blocks -->
{% filter format(name|escape) %}
    {{ t }}
    <p>my_text</p>
    {{ u }}
{% endfilter %}

<-- https://djc.github.io/askama/template_syntax.html#for -->
{% for user in users.map(|x| x.ok()) %}
  <li>{{ user.name }}</li>
{% endfor %}

<-- Edge case: statements inside of html tags -->
<section
  {% if !monitor.paused %}
    hx-get="/monitor/{{ monitor.id }}/uptime-graph" hx-swap="innerHTML"
    hx-trigger="every {{ monitor.interval }}s"
  {% else %}
    hx-post="/monitor/{{ monitor.id }}/uptime-graph/start"
  {% endif %}
>
  {{ uptime_graph |safe }}
</section>
`
	expected = "(document (comment (comment) (comment)) (statement (unpaired_statement (extends_statement (start_statement) (keyword) (path) (end_statement)))) (comment (comment) (comment)) (statement (unpaired_statement (include_statement (start_statement) (keyword) (path) (end_statement)))) (comment (comment) (comment)) (comment (comment) (comment)) (element (start_tag (tag_name)) (text) (text) (text) (text) (end_tag (tag_name))) (comment (comment) (comment)) (comment (comment) (comment)) (expression (start_expression) (expression_content) (end_expression)) (comment (comment) (comment)) (statement (unpaired_statement (let_statement (start_statement) (keyword) (identifier) (operator) (statement_content) (end_statement)))) (statement (unpaired_statement (let_statement (start_statement) (keyword) (identifier) (operator) (statement_content) (end_statement)))) (comment (comment) (comment)) (statement (paired_statement (macro_statement (macro_start_statement (start_statement) (keyword) (identifier) (open_parent) (arguments (argument (identifier)) (argument) (argument (identifier))) (close_parent) (end_statement)) (ERROR (element (start_tag (tag_name)) (text) (text) (text) (text) (text) (end_tag (tag_name)))) (element (start_tag (tag_name)) (text) (text) (text) (end_tag (tag_name))) (macro_end_statement (start_statement) (keyword) (end_statement))))) (statement (unpaired_statement (import_statement (start_statement) (keyword) (path) (end_statement)))) (statement (unpaired_statement (import_statement (start_statement) (keyword) (path) (keyword) (identifier) (end_statement)))) (statement (paired_statement (macro_statement (macro_start_statement (start_statement) (keyword) (identifier) (open_parent) (arguments (argument (identifier))) (close_parent) (end_statement)) (expression (start_expression) (expression_content) (end_expression)) (macro_end_statement (start_statement) (keyword) (end_statement))))) (comment (comment) (comment)) (statement (paired_statement (block_statement (block_start_statement (start_statement) (keyword) (identifier) (end_statement)) (element (start_tag (tag_name)) (text) (text) (text) (text) (text) (end_tag (tag_name))) (block_end_statement (start_statement) (keyword) (end_statement))))) (statement (unpaired_statement (call_statement (start_statement) (keyword) (statement_content) (end_statement)))) (statement (unpaired_statement (let_statement (start_statement) (keyword) (identifier) (operator) (statement_content) (end_statement)))) (comment (comment) (comment)) (statement (paired_statement (if_statement (start_statement) (keyword) (statement_content) (end_statement) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (branch_statement (start_statement) (keyword) (statement_content) (end_statement)) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (branch_statement (start_statement) (keyword) (end_statement)) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (endif_statement (keyword))))) (comment (comment) (comment)) (statement (paired_statement (if_statement (start_statement) (keyword) (statement_content) (end_statement) (element (start_tag (tag_name)) (text) (expression (start_expression) (expression_content) (end_expression)) (end_tag (tag_name))) (branch_statement (start_statement) (keyword) (end_statement)) (text) (text) (endif_statement (keyword))))) (comment (comment) (comment)) (statement (paired_statement (match_statement (match_start_statement (start_statement) (keyword) (statement_content) (end_statement)) (match_statement_branch (start_statement) (keyword) (statement_content) (end_statement) (element (start_tag (tag_name)) (text) (end_tag (tag_name)))) (match_statement_branch (start_statement) (keyword) (statement_content) (end_statement) (element (start_tag (tag_name)) (text) (end_tag (tag_name)))) (match_statement_branch (start_statement) (keyword) (statement_content) (end_statement) (element (start_tag (tag_name)) (text) (end_tag (tag_name)))) (match_end_statement (start_statement) (keyword) (end_statement))))) (comment (comment) (comment)) (statement (paired_statement (filter_block_statement (start_statement) (keyword) (filter (filter_call (identifier) (open_parent) (ERROR (identifier) (operator)) (identifier) (close_parent))) (end_statement) (expression (start_expression) (expression_content) (end_expression)) (element (start_tag (tag_name)) (text) (end_tag (tag_name))) (expression (start_expression) (expression_content) (end_expression)) (endfilter_statement (start_statement) (keyword) (end_statement))))) (comment (comment) (comment)) (statement (paired_statement (for_statement (start_statement) (keyword) (identifier) (keyword) (statement_content) (end_statement) (element (start_tag (tag_name)) (expression (start_expression) (expression_content) (end_expression)) (end_tag (tag_name))) (endfor_statement (start_statement) (keyword) (end_statement))))) (comment (comment) (comment)) (element (start_tag (tag_name) (statement (paired_statement (if_statement (start_statement) (keyword) (statement_content) (end_statement) (attribute (attribute_name) (quoted_attribute_value (attribute_value))) (attribute (attribute_name) (quoted_attribute_value (attribute_value))) (attribute (attribute_name) (quoted_attribute_value (attribute_value))) (branch_statement (start_statement) (keyword) (end_statement)) (attribute (attribute_name) (quoted_attribute_value (attribute_value))) (endif_statement (keyword)))))) (expression (start_expression) (expression_content) (end_expression)) (end_tag (tag_name))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), htmlaskama.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
