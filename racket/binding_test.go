//go:build !plugin

package racket_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/racket"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
#lang racket

(require racket/extflonum)

;; all characters that can appear in a valid number/exflonum
;; remove some insignificant parts to improve performance
;; (define alphabet-char "abdefilnost")
(define alphabet-char "abdefilnostx")
(define special-char "#./@+-")
;; (define numeric-char "0123456789")
(define numeric-char "0179")
(define all-char
  (string-append alphabet-char
                 special-char
                 numeric-char))

(define cnt 0)
(define max-len 5)

(define case-port (open-output-file "case.txt" #:exists 'replace))
(define expect-port (open-output-file "expect.txt" #:exists 'replace))

(define (gen i case)
  (with-handlers ([exn:fail? (lambda _ (void))])
    (when (< i max-len)
      (for ([c all-char])
        (gen (add1 i) (cons c case))))))
`
	expected = "(program (extension (lang_name)) (list (symbol) (symbol)) (comment) (comment) (comment) (list (symbol) (symbol) (string)) (list (symbol) (symbol) (string)) (comment) (list (symbol) (symbol) (string)) (list (symbol) (symbol) (list (symbol) (symbol) (symbol) (symbol))) (list (symbol) (symbol) (number)) (list (symbol) (symbol) (number)) (list (symbol) (symbol) (list (symbol) (string) (keyword) (quote (symbol)))) (list (symbol) (symbol) (list (symbol) (string) (keyword) (quote (symbol)))) (list (symbol) (list (symbol) (symbol) (symbol)) (list (symbol) (list (list (symbol) (list (symbol) (symbol) (list (symbol))))) (list (symbol) (list (symbol) (symbol) (symbol)) (list (symbol) (list (list (symbol) (symbol))) (list (symbol) (list (symbol) (symbol)) (list (symbol) (symbol) (symbol))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), racket.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
