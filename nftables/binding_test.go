//go:build !plugin

package nftables_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/nftables"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `#!/usr/sbin/nft -f
flush ruleset # Reset configuration
# This is also a comment

define wandev = "enp0s3"
define lan = 192.168.178.0/24
define vpn = { 10.0.0.0/8, 172.16.0.0/12 }

table inet filter {
	chain forward {
		type filter hook forward priority 0; policy drop;
		iif $wandev ip daddr $lan accept
	}
}

table nat {
	chain postrouting {
		type nat hook postrouting priority srcnat;
		ip daddr $vpn return
		oif $wandev masquerade
	}
}
`
	expected = "(config_file (comment) (flush_command) (comment) (comment) (variable_definition (identifier) (string)) (variable_definition (identifier) (ip_address)) (variable_definition (identifier) (set (ip_address) (ip_address))) (table_declaration (table_family) (identifier) (block (chain_declaration (identifier) (block (chain_definition (chain_type (chain_type_value)) (chain_hook (chain_hook_value)) (chain_priority (number)) (chain_policy (default_policy))) (rule_definition (packet_criteria (variable)) (packet_criteria (variable)) (rule_action)))))) (table_declaration (identifier) (block (chain_declaration (identifier) (block (chain_definition (chain_type (chain_type_value)) (chain_hook (chain_hook_value)) (chain_priority (chain_priority_value))) (rule_definition (packet_criteria (variable)) (rule_action)) (rule_definition (packet_criteria (variable)) (rule_action)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), nftables.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
