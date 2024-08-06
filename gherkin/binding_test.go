//go:build !plugin

package gherkin_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/gherkin"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `Feature: Guess the word

  # The first example has two steps
  Scenario: Maker starts a game
    When the Maker starts a game
    Then the Maker waits for a Breaker to join

  # The second example has three steps
  Scenario: Breaker joins a game
    Given the Maker has started a game with the word "silky"
    When the Breaker joins the Maker's game
    Then the Breaker must guess a word with 5 characters
`
	expected = "(feature (feature_keyword) (title) (comment) (scenarios (scenario (scenario_keyword) (title) (steps (when_step (when_keyword) (step_definition)) (then_steps (then_step (then_keyword) (step_definition))))) (comment) (scenario (scenario_keyword) (title) (steps (given_steps (given_step (given_keyword) (step_definition))) (when_step (when_keyword) (step_definition)) (then_steps (then_step (then_keyword) (step_definition)))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), gherkin.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
