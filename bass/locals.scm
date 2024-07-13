; Scopes

[
  (list)
  (scope)
] @scope

; References

(symbol) @reference

; Definitions

((list
  . (symbol) @_fnkw
  . (symbol) @definition.function
  (symbol)? @definition.parameter)
  (#any-of? @_fnkw "def" "defop" "defn"))
