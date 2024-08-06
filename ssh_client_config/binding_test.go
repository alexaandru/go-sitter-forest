//go:build !plugin

package ssh_client_config_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ssh_client_config"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `# file comment

Host *
    AddKeysToAgent yes
    BatchMode no
    CanonicalDomains no
    Ciphers +chacha20-poly1305@openssh.com
    ConnectTimeout 300
    IdentityFile ~/.ssh/id_ed25519

Host other
    AddKeysToAgent no
    AddressFamily inet6
    CanonicalDomains yes
    CanonicalizeFallbackLocal no
    CASignatureAlgorithms +rsa-sha2-256
    IdentityFile /Users/someone/.ssh/id_ed25519

Match test
    AddKeysToAgent no
    AddressFamily inet
    CanonicalDomains none
    CASignatureAlgorithms -ssh-ed25519
    CheckHostIP no
    CertificateFile /Users/certs/priv.pem
    Ciphers -aes128-ctr
    ClearAllForwardings no
    Compression no
    ConnectionAttempts 123
    IdentityFile /Users/other/.ssh/id_ed25519

hOst lower
    AddKeysToAgent no
    AddressFamily any
    BatchMode yes
    BindAddress 0.0.0.0
    BindInterface veth0
    ChallengeResponseAuthentication no
    CanonicalDomains always
    CanonicalizeFallbackLocal yes
    CanonicalizeMaxDots 123
    CanonicalizePermittedCNAMEs *.a.example.com:*.b.example.com,*.c.example.com
    CASignatureAlgorithms ssh-ed25519,ecdsa-sha2-nistp256
    CheckHostIP yes
    Ciphers 3des-cbc
    ClearAllForwardings yes
    Compression yes
    IdentityFile /Users/someone/.ssh/id_ed25519
`
	expected = "(client_config (comment) (host (host_value)) (add_keys_to_agent (add_keys_to_agent_value)) (batch_mode (batch_mode_value)) (canonical_domains (canonical_domains_value)) (ciphers (ciphers_value)) (connect_timeout (connect_timeout_value)) (identity_file (identity_file_value)) (host (host_value)) (add_keys_to_agent (add_keys_to_agent_value)) (address_family (address_family_value)) (canonical_domains (canonical_domains_value)) (canonicalize_fallback_local (canonicalize_fallback_local_value)) (ca_signature_algorithms (ca_signature_algorithms_value)) (identity_file (identity_file_value)) (match (match_value)) (add_keys_to_agent (add_keys_to_agent_value)) (address_family (address_family_value)) (canonical_domains (canonical_domains_value)) (ca_signature_algorithms (ca_signature_algorithms_value)) (check_host_ip (check_host_ip_value)) (certificate_file (certificate_file_value)) (ciphers (ciphers_value)) (clear_all_forwardings (clear_all_forwardings_value)) (compression (compression_value)) (connection_attempts (connection_attempts_value)) (identity_file (identity_file_value)) (host (host_value)) (add_keys_to_agent (add_keys_to_agent_value)) (address_family (address_family_value)) (batch_mode (batch_mode_value)) (bind_address (bind_address_value)) (bind_interface (bind_interface_value)) (challenge_response_authentication (challenge_response_authentication_value)) (canonical_domains (canonical_domains_value)) (canonicalize_fallback_local (canonicalize_fallback_local_value)) (canonicalize_max_dots (canonicalize_max_dots_value)) (canonicalize_permitted_cnames (canonicalize_permitted_cnames_value)) (ca_signature_algorithms (ca_signature_algorithms_value)) (check_host_ip (check_host_ip_value)) (ciphers (ciphers_value)) (clear_all_forwardings (clear_all_forwardings_value)) (compression (compression_value)) (identity_file (identity_file_value)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), ssh_client_config.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
