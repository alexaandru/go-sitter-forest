//go:build !plugin

package pdxinfo_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/pdxinfo"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `name=b360
author=Panic Inc.
bundleID=com.panic.b360
buildNumber=123
imagePath=path/to/launcher/assets
launchSoundPath=path/to/launch/sound/file
contentWarning=This game contains mild realistic violence and bloodshed.
contentWarning2=This game contains flashing content that may not be suitable for photosensitive epilepsy.
`
	expected = "(document (statement (name (string))) (statement (author (string))) (statement (bundleID (reverse_dns))) (statement (buildNumber (integer))) (statement (imagePath (string))) (statement (launchSoundPath (string))) (statement (contentWarning (string))) (statement (contentWarning2 (string))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), pdxinfo.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
