//go:build !plugin

package goctl_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/goctl"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `syntax = "v1"

type (
    // Define the request body of the login interface
    LoginReq {
        Username string
        Password string
    }
    // Define the response body of the login interface
    LoginResp {
        Id       int64
        Name     string
        Token    string
        ExpireAt string
    }
)

// Define an HTTP service
// The name of the microservice is user, and the generated code directory and configuration file will be related to the value of user
service user {
    // Define the name and method of the go file converted by http.HandleFunc
    @handler Login
    post /user/login (LoginReq) returns (LoginResp)
}`
	expected = "(api (syntaxLit (VALUE)) (apiBody (typeStatement (typeGroupSpec (comment) (structType (structNameId (IDENT)) (typeFiled (normalField (fieldName (IDENT)) (fieldType (normalFieldType (GOTYPE))))) (typeFiled (normalField (fieldName (IDENT)) (fieldType (normalFieldType (GOTYPE)))))) (comment) (structType (structNameId (IDENT)) (typeFiled (normalField (fieldName (IDENT)) (fieldType (normalFieldType (GOTYPE))))) (typeFiled (normalField (fieldName (IDENT)) (fieldType (normalFieldType (GOTYPE))))) (typeFiled (normalField (fieldName (IDENT)) (fieldType (normalFieldType (GOTYPE))))) (typeFiled (normalField (fieldName (IDENT)) (fieldType (normalFieldType (GOTYPE))))))))) (comment) (comment) (apiBody (serviceStatement (serviceSpec (serviceName (IDENT)) (comment) (serviceBody (serviceHandlerNew (handlerValue (IDENT))) (serviceRoute (httpRoute (HTTPMETHOD) (PATH (COMMON_PATH (IDENT)) (COMMON_PATH (IDENT)))) (body (IDENT)) (body (IDENT))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), goctl.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
