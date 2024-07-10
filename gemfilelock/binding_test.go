//go:build !plugin

package gemfilelock_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gemfilelock"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
GIT
  remote: https://github.com/rails/turbolinks.git
  revision: 80216ce9d89920bf073709405e3fce6d0a3ccd9a
  specs:
    turbolinks (3.0.0)
      coffee-rails

GEM
  remote: https://rubygems.org/
  specs:
    actioncable (5.2.6)
      actionpack (= 5.2.6)
      nio4r (~> 2.0)
      websocket-driver (>= 0.6.1)
    actionmailer (5.2.6)
      actionpack (= 5.2.6)
      actionview (= 5.2.6)
      activejob (= 5.2.6)
      mail (~> 2.5, >= 2.5.4)
      rails-dom-testing (~> 2.0)
    actionpack (5.2.6)
      actionview (= 5.2.6)
      activesupport (= 5.2.6)
      rack (~> 2.0, >= 2.0.8)
      rack-test (>= 0.6.3)
      rails-dom-testing (~> 2.0)
      rails-html-sanitizer (~> 1.0, >= 1.0.2)
    xpath (3.2.0)
      nokogiri (~> 1.8)

PLATFORMS
  ruby

DEPENDENCIES
  capybara (~> 3.35)
  coffee-rails
  turbolinks!
  uglifier

RUBY VERSION
   ruby 2.4.5p335

BUNDLED WITH
   2.1.2
`
	expected = "(document (git_section (section_content (key_value key: (identifier) value: (string)) (key_value key: (identifier) value: (string)) (specs (gem_entry_with_dependencies (gem_entry name: (gem_name) value: (version (number) (number) (number))) (dependency name: (gem_name)))))) (gem_section (section_content (key_value key: (identifier) value: (string)) (specs (gem_entry_with_dependencies (gem_entry name: (gem_name) value: (version (number) (number) (number))) (dependency name: (gem_name) value: (constraint (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (tilde (version (number) (number))))) (dependency name: (gem_name) value: (constraint (comparison (version (number) (number) (number)))))) (gem_entry_with_dependencies (gem_entry name: (gem_name) value: (version (number) (number) (number))) (dependency name: (gem_name) value: (constraint (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (tilde (version (number) (number))) (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (tilde (version (number) (number)))))) (gem_entry_with_dependencies (gem_entry name: (gem_name) value: (version (number) (number) (number))) (dependency name: (gem_name) value: (constraint (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (tilde (version (number) (number))) (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (comparison (version (number) (number) (number))))) (dependency name: (gem_name) value: (constraint (tilde (version (number) (number))))) (dependency name: (gem_name) value: (constraint (tilde (version (number) (number))) (comparison (version (number) (number) (number)))))) (gem_entry_with_dependencies (gem_entry name: (gem_name) value: (version (number) (number) (number))) (dependency name: (gem_name) value: (constraint (tilde (version (number) (number))))))))) (platforms (platform_name)) (dependencies (dependency name: (gem_name) value: (constraint (tilde (version (number) (number))))) (dependency name: (gem_name)) (dependency name: (gem_name)) (dependency name: (gem_name))) (ruby_version (ruby_version_entry (version (number) (number) (number)) (ruby_patch (number)))) (bundled_with (bundled_with_entry (version (number) (number) (number)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), gemfilelock.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
