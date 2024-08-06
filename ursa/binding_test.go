//go:build !plugin

package ursa_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/ursa"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `// From https://gitlab.com/nonreviad/advent-of-code-2023/-/tree/main/day_25

// The answer may not be right! See https://gitlab.com/nonreviad/advent-of-code-2023/-/issues/1

use jslib.fs

let read_graph = fn(filename) {
    let data = fs.readFileSync(filename, "utf-8")
    let adjacency_list = {}
    let regex = RegExp("(?<node>[a-z]{3}): (?<children>([a-z]{3} ?)+)(\\n|$)", "ug")
    loop {
        let lines_match = regex.exec(data)
        if lines_match == null {
            break
        }
        let node = lines_match.get(1)
        let children_str = lines_match.get(2)
        let children_regex = RegExp("[a-z]{3}", "ug")
        loop {
            let children_match = children_regex.exec(children_str)
            if children_match == null {
                break
            }
            let child = children_match.get(0)
            if adjacency_list.get(node) == null {
                adjacency_list.set(node, [])
            }
            adjacency_list.get(node).push(child)
            if adjacency_list.get(child) == null {
                adjacency_list.set(child, [])
            }
            adjacency_list.get(child).push(node)
        }
    }
    return adjacency_list
}

let clone_graph_without_edges = fn(graph, edges) {
    let ret = {}
    for key of graph.keys() {
        ret.set(key, [])
        let is_empty = true
        for val of graph.get(key).iter() {
            let should_add = true
            for edge of edges.iter() {
                if (key == edge.get(0) and val == edge.get(1)) or (key == edge.get(1) and val == edge.get(0)) {
                    should_add := false
                    break
                }
            }
            if should_add == true {
                ret.get(key).push(val)
                is_empty := false
            }
        }
        if is_empty == true {
            ret.delete(key)
        }
    }
    return ret
}

let dfs = fn(node, graph, visited) {
    if visited.get(node) == true {
        return 0
    }
    let new_nodes = 1
    visited.set(node, true)
    for child of graph.get(node).iter() {
        if visited.get(child) == null {
            new_nodes := new_nodes + dfs(child, graph, visited)
        }
    }
    return new_nodes
}

let component_sizes = fn(graph) {
    let visited = {}
    let sizes = []
    for node of graph.keys() {
        let new_component_size = dfs(node, graph, visited)
        if new_component_size > 0 {
            sizes.push(new_component_size)
        }
    }
    return sizes
}

let graph = read_graph(argv.get(1))
let new_graph = clone_graph_without_edges(graph, [["sqh", "jbz"], ["nvg", "vfj"], ["fvh", "fch"]])
let sizes = component_sizes(new_graph)
print(sizes.get(0) * sizes.get(1))
`
	expected = "(module (line_comment) (line_comment) (use (identifier) (identifier)) (let identifier: (identifier) value: (lambda (identifier) (block (let identifier: (identifier) value: (call function: (property_exp (identifier) (property_identifier)) (identifier) (string))) (let identifier: (identifier) value: (map)) (let identifier: (identifier) value: (call function: (identifier) (string) (string))) (loop (block (let identifier: (identifier) value: (call function: (property_exp (identifier) (property_identifier)) (identifier))) (if (binary_exp (identifier) (null)) (block (break))) (let identifier: (identifier) value: (call function: (property_exp (identifier) (property_identifier)) (number))) (let identifier: (identifier) value: (call function: (property_exp (identifier) (property_identifier)) (number))) (let identifier: (identifier) value: (call function: (identifier) (string) (string))) (loop (block (let identifier: (identifier) value: (call function: (property_exp (identifier) (property_identifier)) (identifier))) (if (binary_exp (identifier) (null)) (block (break))) (let identifier: (identifier) value: (call function: (property_exp (identifier) (property_identifier)) (number))) (if (binary_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (null)) (block (call function: (property_exp (identifier) (property_identifier)) (identifier) (list)))) (call function: (property_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (property_identifier)) (identifier)) (if (binary_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (null)) (block (call function: (property_exp (identifier) (property_identifier)) (identifier) (list)))) (call function: (property_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (property_identifier)) (identifier)))))) (return (identifier))))) (let identifier: (identifier) value: (lambda (identifier) (identifier) (block (let identifier: (identifier) value: (map)) (for identifier: (identifier) iterator: (call function: (property_exp (identifier) (property_identifier))) (block (call function: (property_exp (identifier) (property_identifier)) (identifier) (list)) (let identifier: (identifier) value: (bool)) (for identifier: (identifier) iterator: (call function: (property_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (property_identifier))) (block (let identifier: (identifier) value: (bool)) (for identifier: (identifier) iterator: (call function: (property_exp (identifier) (property_identifier))) (block (if (binary_exp (binary_exp (binary_exp (identifier) (call function: (property_exp (identifier) (property_identifier)) (number))) (binary_exp (identifier) (call function: (property_exp (identifier) (property_identifier)) (number)))) (binary_exp (binary_exp (identifier) (call function: (property_exp (identifier) (property_identifier)) (number))) (binary_exp (identifier) (call function: (property_exp (identifier) (property_identifier)) (number))))) (block (assignment (identifier) (bool)) (break))))) (if (binary_exp (identifier) (bool)) (block (call function: (property_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (property_identifier)) (identifier)) (assignment (identifier) (bool)))))) (if (binary_exp (identifier) (bool)) (block (call function: (property_exp (identifier) (property_identifier)) (identifier)))))) (return (identifier))))) (let identifier: (identifier) value: (lambda (identifier) (identifier) (identifier) (block (if (binary_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (bool)) (block (return (number)))) (let identifier: (identifier) value: (number)) (call function: (property_exp (identifier) (property_identifier)) (identifier) (bool)) (for identifier: (identifier) iterator: (call function: (property_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (property_identifier))) (block (if (binary_exp (call function: (property_exp (identifier) (property_identifier)) (identifier)) (null)) (block (assignment (identifier) (binary_exp (identifier) (call function: (identifier) (identifier) (identifier) (identifier)))))))) (return (identifier))))) (let identifier: (identifier) value: (lambda (identifier) (block (let identifier: (identifier) value: (map)) (let identifier: (identifier) value: (list)) (for identifier: (identifier) iterator: (call function: (property_exp (identifier) (property_identifier))) (block (let identifier: (identifier) value: (call function: (identifier) (identifier) (identifier) (identifier))) (if (binary_exp (identifier) (number)) (block (call function: (property_exp (identifier) (property_identifier)) (identifier)))))) (return (identifier))))) (let identifier: (identifier) value: (call function: (identifier) (call function: (property_exp (identifier) (property_identifier)) (number)))) (let identifier: (identifier) value: (call function: (identifier) (identifier) (list (list (string) (string)) (list (string) (string)) (list (string) (string))))) (let identifier: (identifier) value: (call function: (identifier) (identifier))) (call function: (identifier) (binary_exp (call function: (property_exp (identifier) (property_identifier)) (number)) (call function: (property_exp (identifier) (property_identifier)) (number)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.Parse(context.Background(), []byte(code), ursa.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
