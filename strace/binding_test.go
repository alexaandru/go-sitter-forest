//go:build !plugin

package strace_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/strace"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
execve("/usr/bin/ls", ["ls"], 0x7ffdcc909270 /* 84 vars */) = 0
brk(NULL)                               = 0x559677d5a000
arch_prctl(0x3001 /* ARCH_??? */, 0x7ffc7f287280) = -1 EINVAL (Argument invalide)
newfstatat(1, "", {st_mode=S_IFCHR|0620, st_rdev=makedev(0x88, 0), ...}, AT_EMPTY_PATH) = 0
poll([{fd=0, events=0}, {fd=1, events=0}, {fd=2, events=0}], 3, 0) = 0 (Timeout)
read(9, "{\n  \"name\": \"tree-sitter-strace\""..., 527) = 527
fcntl(0, F_GETFL)                       = 0x402 (flags O_RDWR|O_APPEND)
ioctl(9, TCGETS, 0x7ffd9a3205d0)        = -1 ENOTTY (Ioctl() inappropré pour un périphérique)
374673 rseq(0x7f8f38516fe0, 0x20, 0, 0x53053053 <unfinished ...>
34724 <... rt_sigprocmask resumed>NULL, 8) = 0
`
	expected = "(source_file (line (syscall) (parameters (parameter (string (string_content))) (parameter (list (parameter (string (string_content))))) (parameter (values (value (pointer))) (comment))) (returnValue (integer))) (line (syscall) (parameters (parameter)) (returnValue (pointer))) (line (syscall) (parameters (parameter (values (value (pointer))) (comment)) (parameter (values (value (pointer))))) (returnValue (integer) (errorName) (errorDescription (errorContent)))) (line (syscall) (parameters (parameter (values (value (integer)))) (parameter (string)) (parameter (dict (dictElem (dictKey) (parameter (values (value) (value (integer))))) (dictElem (dictKey) (syscall) (parameters (parameter (values (value (pointer)))) (parameter (values (value (integer)))))))) (parameter (values (value)))) (returnValue (integer))) (line (syscall) (parameters (parameter (list (parameter (dict (dictElem (dictKey) (parameter (values (value (integer))))) (dictElem (dictKey) (parameter (values (value (integer))))))) (parameter (dict (dictElem (dictKey) (parameter (values (value (integer))))) (dictElem (dictKey) (parameter (values (value (integer))))))) (parameter (dict (dictElem (dictKey) (parameter (values (value (integer))))) (dictElem (dictKey) (parameter (values (value (integer))))))))) (parameter (values (value (integer)))) (parameter (values (value (integer))))) (returnValue (integer) (errorDescription (errorContent)))) (line (syscall) (parameters (parameter (values (value (integer)))) (parameter (string (string_content) (string_content) (string_content) (string_content) (string_content))) (parameter (values (value (integer))))) (returnValue (integer))) (line (syscall) (parameters (parameter (values (value (integer)))) (parameter (values (value)))) (returnValue (pointer) (errorDescription (errorContent)))) (line (syscall) (parameters (parameter (values (value (integer)))) (parameter (values (value))) (parameter (values (value (pointer))))) (returnValue (integer) (errorName) (errorDescription (errorContent) (errorContent)))) (pid (integer)) (line (syscall) (parameters (parameter (values (value (pointer)))) (parameter (values (value (pointer)))) (parameter (values (value (integer)))) (parameter (values (value (pointer)))))) (pid (integer)) (line (syscall) (parameters (parameter) (parameter (values (value (integer))))) (returnValue (integer))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), strace.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
