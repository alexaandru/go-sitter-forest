//go:build !plugin

package yang_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/yang"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
module example-module {
  namespace "urn:example:module";
  prefix "ex";

  // Define a container for device configuration
  container device-configuration {
    description "Configuration parameters for the network device";

    // Define leaf nodes for specific configuration parameters
    leaf hostname {
      type string;
      description "Hostname of the device";
    }

    leaf ip-address {
      type inet:ipv4-address;
      description "IP address of the device";
    }

    leaf-list interfaces {
      type string;
      description "List of interface names";
    }
  }

  // Define a container for device operational state
  container device-state {
    description "Operational state information for the network device";

    // Define leaf nodes for operational state parameters
    leaf uptime {
      type uint32;
      description "Uptime of the device in seconds";
    }

    leaf-list active-interfaces {
      type string;
      description "List of active interface names";
    }
  }
}
`
	expected = "(yang (module module_name: (identifier) module_block: (block (statement (statement_keyword) (argument (string (string_fragment)))) (statement (statement_keyword) (argument (string (string_fragment)))) (comment) (statement (statement_keyword) (argument (node_identifier)) (block (statement (statement_keyword) (argument (string (string_fragment)))) (comment) (statement (statement_keyword) (argument (node_identifier)) (block (statement (statement_keyword) (argument (built_in_type))) (statement (statement_keyword) (argument (string (string_fragment)))))) (statement (statement_keyword) (argument (node_identifier)) (block (statement (statement_keyword) (argument (node_identifier))) (statement (statement_keyword) (argument (string (string_fragment)))))) (statement (statement_keyword) (argument (node_identifier)) (block (statement (statement_keyword) (argument (built_in_type))) (statement (statement_keyword) (argument (string (string_fragment)))))))) (comment) (statement (statement_keyword) (argument (node_identifier)) (block (statement (statement_keyword) (argument (string (string_fragment)))) (comment) (statement (statement_keyword) (argument (node_identifier)) (block (statement (statement_keyword) (argument (built_in_type))) (statement (statement_keyword) (argument (string (string_fragment)))))) (statement (statement_keyword) (argument (node_identifier)) (block (statement (statement_keyword) (argument (built_in_type))) (statement (statement_keyword) (argument (string (string_fragment)))))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), yang.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
