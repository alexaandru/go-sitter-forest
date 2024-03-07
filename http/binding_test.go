package http_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-tree-sitter-parsers/http"
	sitter "github.com/smacker/go-tree-sitter"
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
	expected = "(document (comment) (variable_declaration identifier: (identifier)) (comment) (comment) (ERROR (method (const_spec))) (variable (identifier)) (ERROR (identifier)) (comment) (ERROR (method (const_spec))) (variable (identifier)) (variable (identifier)) (comment) (ERROR (method (const_spec))) (variable (identifier)) (ERROR (identifier) (identifier)) (header name: (name) value: (value)) (json_body (MISSING \"json_body_token2\")))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), http.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
