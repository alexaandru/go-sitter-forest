cmd {
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
