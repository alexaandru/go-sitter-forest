//go:build !plugin

package poe_filter_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/poe_filter"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
#------------------------------------
#   [2704] Generic Jewels
#------------------------------------
# !! Waypoint c7.jewels.generic.all : "Jewels - Generic Jewels"

Show # %HS3 $type->jewels->generic $tier->anyrare
	Rarity Rare
	BaseType == "Cobalt Jewel" "Crimson Jewel" "Viridian Jewel"
	SetFontSize 35
	SetTextColor 220 220 0 255
	SetBorderColor 220 220 0 255
	SetBackgroundColor 20 20 0 255
	PlayEffect Grey Temp
	MinimapIcon 2 Grey Diamond
`
	expected = "(filter (comment) (comment) (comment) (comment) (block (comment) (condition (name) (rarity)) (condition (name) (operator) type: (string) type: (string) type: (string)) (action (name) size: (number)) (action (name) red: (number) green: (number) blue: (number) alpha: (number)) (action (name) red: (number) green: (number) blue: (number) alpha: (number)) (action (name) red: (number) green: (number) blue: (number) alpha: (number)) (action (name) (colour)) (action (name) size: (number) (colour) (shape))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), poe_filter.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
