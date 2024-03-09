//go:build !plugin

package bicep_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/bicep"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
@maxValue(6)
param storageCount int = 3

param rgLocation string = resourceGroup().location

resource storageAcct 'Microsoft.Storage/storageAccounts@2021-02-01' = [for i in range(0, storageCount): {
  name: '${i}storage${uniqueString(resourceGroup().id)}'
  location: rgLocation
  sku: {
    name: 'Standard_LRS'
  }
  kind: 'Storage'
}]`
	expected = "(infrastructure (decorators (decorator (call_expression function: (identifier) arguments: (arguments (number))))) (parameter_declaration (identifier) (type (primitive_type)) (number)) (parameter_declaration (identifier) (type (primitive_type)) (member_expression object: (call_expression function: (identifier) arguments: (arguments)) property: (property_identifier))) (resource_declaration (identifier) (string (string_content)) (for_statement initializer: (identifier) (call_expression function: (identifier) arguments: (arguments (number) (identifier))) body: (object (object_property (identifier) (string (interpolation (identifier)) (string_content) (interpolation (call_expression function: (identifier) arguments: (arguments (member_expression object: (call_expression function: (identifier) arguments: (arguments)) property: (property_identifier))))))) (object_property (identifier) (identifier)) (object_property (identifier) (object (object_property (identifier) (string (string_content))))) (object_property (identifier) (string (string_content)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), bicep.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
