//go:build !plugin

package http_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/http"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
### 
@host = http://httpbin.org/

###
# @name captcha
GET {{host}}/captcha

###
GET {{host}}{{captcha.response.body.data.captcha_url}}

### test
POST {{host}}/captcha/test
Content-Type: application/json

{
	"captcha_id": "{{captcha.response.body.data.captcha_id}}",
	"captcha": "{{captcha.response.body.data.captcha_val}}",
	"id": 3
}
`
	expected = "(document (comment) (variable_declaration name: (identifier) value: (text)) (comment) (comment) (request (method) (target_url (variable name: (identifier)) (path (identifier)))) (comment) (request (method) (ERROR (variable name: (identifier))) (target_url (variable name: (identifier)))) (comment) (request (method) (target_url (variable name: (identifier)) (path (identifier) (identifier))) (header name: (name) value: (value)) (json_body)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), http.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
