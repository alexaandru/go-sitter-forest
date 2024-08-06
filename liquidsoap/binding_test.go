//go:build !plugin

package liquidsoap_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/liquidsoap"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
#!/usr/bin/liquidsoap
# Log dir
log.file.path.set("/tmp/basic-radio.log")

# Music
myplaylist = playlist("~/radio/music.m3u")
# Some jingles
jingles = playlist("~/radio/jingles.m3u")
# If something goes wrong, we'll play this
security = single("~/radio/sounds/default.ogg")

# Start building the feed with music
radio = myplaylist
# Now add some jingles
radio = random(weights = [1, 4],[jingles, radio])
# And finally the security
radio = fallback(track_sensitive = false, [radio, security])

# Stream it out
output.icecast(%vorbis,
  host = "localhost", port = 8000,
  password = "hackme", mount = "basic-radio.ogg",
  radio)
`
	expected = "(source_file (comment) (invoke (invoke (invoke (var) (method)) (method)) (method_app name: (var) (anonymous_arg (string)))) (comment) (binding defined: (var) (definition (app name: (var) (anonymous_arg (string))))) (comment) (binding defined: (var) (definition (app name: (var) (anonymous_arg (string))))) (comment) (binding defined: (var) (definition (app name: (var) (anonymous_arg (string))))) (comment) (binding defined: (var) (definition (var))) (comment) (binding defined: (var) (definition (app name: (var) (named_arg name: (var) value: (list (integer) (integer))) (anonymous_arg (list (var) (var)))))) (comment) (binding defined: (var) (definition (app name: (var) (named_arg name: (var) value: (bool)) (anonymous_arg (list (var) (var)))))) (comment) (invoke (var) (method_app name: (var) (anonymous_arg (encoder (encoder_name))) (named_arg name: (var) value: (string)) (named_arg name: (var) value: (integer)) (named_arg name: (var) value: (string)) (named_arg name: (var) value: (string)) (anonymous_arg (var)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), liquidsoap.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
