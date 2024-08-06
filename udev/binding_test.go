//go:build !plugin

package udev_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/udev"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
KERNEL=="sd[a-z]", ATTR{queue/rotational}!="0", ATTR{queue/scheduler}="bfq"
KERNEL=="sd[a-z]|mmcblk[0-9]*", ATTR{queue/rotational}=="0", \
    ATTR{queue/scheduler}="mq-deadline"
KERNEL=="nvme[0-9]n[0-9]", ATTR{queue/scheduler}="none"
`
	expected = "(rules (rule (match (match_op) (value (content (pattern)))) (match (attribute) (match_op) (value (content))) (assignment (attribute) (assignment_op) (value (content)))) (rule (match (match_op) (value (content (pattern) (pattern) (pattern) (pattern)))) (match (attribute) (match_op) (value (content))) (linebreak) (assignment (attribute) (assignment_op) (value (content)))) (rule (match (match_op) (value (content (pattern) (pattern)))) (assignment (attribute) (assignment_op) (value (content)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), udev.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
