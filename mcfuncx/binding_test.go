//go:build !plugin

package mcfuncx_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/mcfuncx"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `cmd {
  "rawtext": [
    {
      "translate": "§l§oChapter %%s",
      "with": [ "I" ]
    }
  ]
}

cmd {
  "rawtext": [
    {
      "translate": "Hello %%s and %%s",
      "with": [ "Steve", "Alex" ]
    }
  ]
}

cmd {
  "rawtext": [
    {
      "translate": "Hello %%s and %%s",
      "with": {
        "rawtext": [
          {
            "text": "Steve"
          },
          {
            "translate": "item.apple.name"
          }
        ]
      }
    }
  ]
}

# comment text
cmd with keyword objectives and run cmd something
cmd with str "str §5\"str\" qwq" and number 123.456

cmd with obj_like {
  key1: "str value",
  key2: 123,
  key3: ~123,
  nest: [
    key4 = 4..7,
    key5 = { sth = ..7 }
  ]
}

cmd with selector like @sth and @sth[
  key1 = id,
  key2 = "str",
  namespace = minecraft:apple
]

execute
  as @a
  if data entity @s Inventory[{Slot:0b}].tag.Enchantments[{id:"minecraft:efficiency"}]
  run
    tp @s 0 64 0

execute
  as @a
  at @s
  anchored eyes
  run
    particle smoke ^ ^ ^3

execute
  as @a
  unless score @s test = @s test
  run
    say "Score is reset"

execute
  at @p
  as @e[type=pig,distance=..3]
  run
    data merge entity @s {Motion:[0.0,2.0,0.0]}

cmd abc123 abc123abc _abc123 abc_123 @abc123 @123 @_34abc5 #abc #abc123 #123abc
cmd abc.abc.abc abc.abc123[2].abc abc.abc123abc abc.123.def.456

cmd §1abcdef§r§2123abc

cmd VillagerData{profession:"minecraft:nitwit"}.VillagerData{}
cmd Pos[0].Inventory[-1].ActiveEffects[]
cmd Inventory[{Count:25b}].Foo[{}]
cmd foo[][{}].foo.bar[0][0].baz
cmd foo.bar[0]."A [crazy name]!".baz Items[1].tag.pages[3]
`
	expected = "(root (command (command_name) (object_like key: (string) value: (array_like item: (object_like key: (string) value: (string (escape_sequence) (escape_sequence) (escape_sequence)) key: (string) value: (array_like item: (string)))))) (command (command_name) (object_like key: (string) value: (array_like item: (object_like key: (string) value: (string (escape_sequence) (escape_sequence)) key: (string) value: (array_like item: (string) item: (string)))))) (command (command_name) (object_like key: (string) value: (array_like item: (object_like key: (string) value: (string (escape_sequence) (escape_sequence)) key: (string) value: (object_like key: (string) value: (array_like item: (object_like key: (string) value: (string)) item: (object_like key: (string) value: (string)))))))) (comment) (command (command_name) (subcommand_keyword) (identifier) (subcommand_keyword) (identifier) (subcommand_keyword) (command_name) (identifier)) (command (command_name) (subcommand_keyword) (identifier) (string (escape_sequence) (escape_sequence) (escape_sequence)) (identifier) (identifier) (float)) (command (command_name) (subcommand_keyword) (identifier) (object_like key: (identifier) value: (string) key: (identifier) value: (integer) key: (identifier) value: (axis (integer)) key: (identifier) value: (object_like key: (identifier) value: (range (integer) (integer)) key: (identifier) value: (object_like key: (identifier) value: (range (integer)))))) (command (command_name) (subcommand_keyword) (identifier) (identifier) (identifier) (identifier) (identifier_composite (identifier) (object_like key: (identifier) value: (identifier) key: (identifier) value: (string) key: (identifier) value: (identifier namespace: (identifier))))) (command (command_name) (subcommand_keyword) (identifier) (subcommand_keyword) (subcommand_keyword) (subcommand_keyword) (identifier) (nbt_path (identifier_composite (identifier) (array_like item: (object_like key: (identifier) value: (nbt_byte)))) (identifier) (identifier_composite (identifier) (array_like item: (object_like key: (identifier) value: (string))))) (subcommand_keyword) (command_name) (identifier) (integer) (integer) (integer)) (command (command_name) (subcommand_keyword) (identifier) (subcommand_keyword) (identifier) (subcommand_keyword) (identifier) (subcommand_keyword) (command_name) (identifier) (axis) (axis) (axis (integer))) (command (command_name) (subcommand_keyword) (identifier) (subcommand_keyword) (subcommand_keyword) (identifier) (subcommand_keyword) (operator) (identifier) (subcommand_keyword) (subcommand_keyword) (command_name) (string)) (command (command_name) (subcommand_keyword) (identifier) (subcommand_keyword) (identifier_composite (identifier) (object_like key: (identifier) value: (identifier) key: (identifier) value: (range (integer)))) (subcommand_keyword) (command_name) (identifier) (subcommand_keyword) (identifier) (object_like key: (identifier) value: (array_like item: (float) item: (float) item: (float)))) (command (command_name) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier) (identifier)) (command (command_name) (identifier) (nbt_path (identifier) (identifier_composite (identifier) (array_like item: (integer))) (identifier)) (identifier) (identifier)) (command (command_name) (identifier (escape_sequence) (escape_sequence) (escape_sequence))) (command (command_name) (nbt_path (identifier_composite (identifier) (object_like key: (identifier) value: (string))) (identifier_composite (identifier) (object_like)))) (command (command_name) (nbt_path (identifier_composite (identifier) (array_like item: (integer))) (identifier_composite (identifier) (array_like item: (integer))) (identifier_composite (identifier) (object_like)))) (command (command_name) (nbt_path (identifier_composite (identifier) (array_like item: (object_like key: (identifier) value: (nbt_byte)))) (identifier_composite (identifier) (array_like item: (object_like))))) (command (command_name) (nbt_path (identifier_composite (identifier) (object_like) (array_like item: (object_like))) (identifier) (identifier_composite (identifier) (array_like item: (integer)) (array_like item: (integer))) (identifier))) (command (command_name) (nbt_path (identifier) (identifier_composite (identifier) (array_like item: (integer))) (string) (identifier)) (nbt_path (identifier_composite (identifier) (array_like item: (integer))) (identifier) (identifier_composite (identifier) (array_like item: (integer))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), mcfuncx.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
