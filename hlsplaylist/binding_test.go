package hlsplaylist_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/hlsplaylist"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
#EXTM3U
# https://developer.apple.com/documentation/http-live-streaming/creating-a-multivariant-playlist#Define-variants
#EXT-X-STREAM-INF:BANDWIDTH=150000,RESOLUTION=416x234,CODECS="avc1.42e00a,mp4a.40.2"
#EXT-X-TARGETDURATION:3
#EXT-X-PLAYLIST-TYPE:EVENT
#EXT-X-PROGRAM-DATE-TIME:2024-02-11T15:30:30.500Z
#EXT-X-BYTERANGE:1@10
http://example.com/low/index.hlsplaylist8

# https://iptv-org.github.io/iptv/languages/zho.hlsplaylist
#EXTINF:-1 ,CCTV-2 (1080p)
http://39.134.24.162/dbiptv.sn.chinamobile.com/PLTV/88888890/224/3221226195/index.hlsplaylist8
#EXTINF:-1 tvg-id="CCTV1.cn" tvg-logo="https://i.imgur.com/TpA3cUl.png" group-title="General",CCTV-1 (1080p)
http://39.134.24.162/dbiptv.sn.chinamobile.com/PLTV/88888890/224/3221225804/index.hlsplaylist8
`
	expected = "(file (tag (tag_name)) (comment) (tag (tag_name) (attribute_list (attribute (attribute_name) (dec)) (attribute (attribute_name) (resolution)) (attribute (attribute_name) (string)))) (tag (tag_name) (dec)) (tag (tag_name) (enum)) (tag (tag_name) (date_time_msec)) (tag (tag_name) (range)) (uri) (comment) (tag (tag_name) (float) (title)) (uri) (tag (tag_name) (float) (attributes (attribute (attribute_name) (string)) (attribute (attribute_name) (string)) (attribute (attribute_name) (string))) (title)) (uri))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), hlsplaylist.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
