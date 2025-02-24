(
 (comment)* @doc
 .
 [
  (routing_block
    route: (predef_route)
    route_name: (_) @name
    ) @definition.function
  ]

 (#strip! @doc "^/\*\\s*")
 (#select-adjacent! @doc @definition.method)
 )
