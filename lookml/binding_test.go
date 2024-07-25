//go:build !plugin

package lookml_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/lookml"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `## STRUCTURAL PARAMETERS
project_name: "Current Project Name"
new_lookml_runtime: yes 
local_dependency: {
  project: "project_name"
  override_constant: constant_name {
    value: "string value" 
  }
}
## Possibly more local_dependency statements

remote_dependency: remote_project_name {
  url: "remote_project_url"
  ref: "remote_project_ref"
  override_constant: constant_name {
    value: "string value" 
  }
}
# Possibly more remote_dependency statements

constant: constant_name {
  value: "string value"
  export: none | override_optional | override_required
}
# Possibly more constant statements

## LOCALIZATION PARAMETERS
localization_settings: {
  localization_level: strict | permissive
  default_locale: locale_name
}

## EXTENSION FRAMEWORK PARAMETERS
application: application_name {
  label: "Application Label" 
  url: "application_url" 
  file: "application_file_path" 
  mount_points: {
    # Desired mount points (described on application page)
  }
  entitlements: {
    # Desired entitlements (described on application page)
  }
}
## Possibly more application statements

## CUSTOM VISUALIZATION PARAMETERS
visualization:{
  id: "unique-id" 
  label: "Visualization Label" 
  url: "visualization_url" 
  sri_hash: "SRI hash" 
  dependencies: ["dependency_url_1","dependency_url_2"]
  file: "visualization_file_path" 
}
## Possibly more visualization statements
`
	expected = "(object (comment) (statement (key) (string)) (statement (key) (bool)) (statement (key) (ERROR (UNEXPECTED '{')) (string)) (statement (key) (ERROR (UNEXPECTED 'c')) (string)) (ERROR (UNEXPECTED '}')) (comment) (statement (key) (ERROR (UNEXPECTED 'r')) (string)) (statement (key) (string)) (statement (key) (ERROR (UNEXPECTED 'c')) (string)) (ERROR (UNEXPECTED '}')) (comment) (statement (key) (ERROR (UNEXPECTED 'c')) (string)) (statement (key) (bool)) (ERROR (key) (UNEXPECTED '|')) (comment) (comment) (ERROR (key) (UNEXPECTED '{') (UNEXPECTED 's') (UNEXPECTED 'l')) (comment) (statement (key) (ERROR (UNEXPECTED 'a')) (string)) (statement (key) (string)) (statement (key) (string)) (ERROR (key) (UNEXPECTED '{')) (comment) (ERROR (UNEXPECTED '}') (UNEXPECTED '{')) (comment) (ERROR (UNEXPECTED '}')) (comment) (comment) (statement (key) (ERROR (UNEXPECTED '{')) (string)) (statement (key) (string)) (statement (key) (string)) (statement (key) (string)) (statement (key) (ERROR (UNEXPECTED '[') (UNEXPECTED 'd')) (number)) (ERROR (UNEXPECTED ',') (UNEXPECTED 'd') (UNEXPECTED ']') (UNEXPECTED 'v') (UNEXPECTED '}')) (comment))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), lookml.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
