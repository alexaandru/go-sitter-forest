//go:build !plugin

package tort_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/tort"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ -> ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ ㅂ
ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ -> ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ ㅈ
ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ -> ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ ㄷ
ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ -> ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ ㄱ
ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ -> ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ ㅅ
ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ -> ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ ㅁ
ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ -> ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ ㄴ
ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ -> ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ ㅇ
ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ -> ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ ㄹ
ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ -> ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ ㅎ
ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ -> ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ ㅋ
ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ -> ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ ㅌ
ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ -> ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ ㅊ
ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ -> ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ ㅍ
ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ -> ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ ㅃ
ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ -> ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ ㅉ
ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ -> ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ ㄸ
ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ -> ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ ㄲ
ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ -> ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ ㅆ
ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ -> ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ ㅛ
ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ -> ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ ㅕ
ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ -> ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ ㅑ
ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ -> ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ ㅐ
ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ -> ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ ㅔ
ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ -> ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ ㅗ
ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ -> ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ ㅓ
ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ -> ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ ㅏ
ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ -> ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ ㅣ
ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ -> ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ ㅠ
ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ -> ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ ㅜ
ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ -> ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ ㅡ
ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ -> ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ ㅒ
ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ -> ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ ㅖ
`
	expected = "(source_file (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)) (stmt_translation original: (text) translation: (text)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), tort.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}