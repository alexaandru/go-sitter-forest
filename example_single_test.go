package forest_test

import (
	"context"
	"fmt"

	"github.com/alexaandru/go-sitter-forest/lua"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

func ExampleGetLanguage() {
	content := []byte("print('It works!')\n")
	node, err := sitter.ParseCtx(context.TODO(), content, lua.GetLanguage())
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(node)
	// Output: (chunk (function_call name: (identifier) arguments: (arguments (string content: (string_content)))))
}
