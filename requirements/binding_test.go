package requirements_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/requirements"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
# This is a comment, to show how #-prefixed lines are ignored.
# <- @comment

pytest

docopt == 0.6.1

requests [security] >= 2.8.1, == 2.8.* ; python_version < "2.7"

urllib3 @ https://github.com/urllib3/urllib3/archive/refs/tags/1.26.8.zip

-c constraints.txt

./downloads/numpy-1.9.2-cp34-none-win32.whl

http://wxpython.org/Phoenix/snapshot-builds/wxPython_Phoenix-3.0.3.dev1820+49a8884-cp34-none-win_amd64.whl

git+https://${GITHUB_USER}:${GITHUB_TOKEN}@github.com/user/project.git

FooProject >= 1.2 --global-option="--no-user-cfg"
`
	expected = "(file (comment) (comment) (requirement (package)) (requirement (package) (version_spec (version_cmp) (version))) (requirement (package) (extras (package)) (version_spec (version_cmp) (version) (version_cmp) (version)) (marker_spec (marker_var) (version_cmp) (quoted_string))) (requirement (package) (url_spec (url))) (global_opt (option) (path)) (path) (url) (url (env_var) (env_var)) (requirement (package) (version_spec (version_cmp) (version)) (requirement_opt (option) (quoted_string))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), requirements.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
