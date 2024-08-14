package forest_test

import (
	"context"
	"fmt"

	forest "github.com/alexaandru/go-sitter-forest"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

// This is still an example for GetLanguage, but I cannot have two
// ExampleGetLanguage in the same package.
func ExampleInfo() {
	content := []byte("print('It works!')")
	parser := sitter.NewParser()
	parser.SetLanguage(forest.GetLanguage("lua"))

	tree, err := parser.ParseString(context.TODO(), nil, content)
	if err != nil {
		panic(err)
	}

	// Do something interesting with the parsed tree...
	fmt.Println(tree.RootNode())
	// Output: (chunk (function_call name: (identifier) arguments: (arguments (string content: (string_content)))))
}
