//go:build !plugin

package swift_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/swift"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
/**
 This struct represents a point in 2D space.
 */
struct Point {
    /// The x-coordinate of the point.
    var x: Double
    
    /// The y-coordinate of the point.
    var y: Double
    
    /**
     Initializes a new Point with the given coordinates.
     
     - Parameters:
        - x: The x-coordinate of the point.
        - y: The y-coordinate of the point.
     */
    init(x: Double, y: Double) {
        self.x = x
        self.y = y
    }
    
    /**
     Calculates the distance between this point and another point.
     
     - Parameter other: The other point.
     - Returns: The distance between the two points.
     */
    func distance(to other: Point) -> Double {
        let dx = other.x - self.x
        let dy = other.y - self.y
        return sqrt(dx * dx + dy * dy)
    }
}

// Usage example
let point1 = Point(x: 0, y: 0)
let point2 = Point(x: 3, y: 4)
let distance = point1.distance(to: point2)
print("Distance between point1 and point2: \(distance)")
`
	expected = "(source_file (multiline_comment) (class_declaration name: (type_identifier) body: (class_body (comment) (property_declaration (value_binding_pattern) name: (pattern bound_identifier: (simple_identifier)) (type_annotation name: (user_type (type_identifier)))) (comment) (property_declaration (value_binding_pattern) name: (pattern bound_identifier: (simple_identifier)) (type_annotation name: (user_type (type_identifier)))) (multiline_comment) (init_declaration (parameter name: (simple_identifier) name: (user_type (type_identifier))) (parameter name: (simple_identifier) name: (user_type (type_identifier))) body: (function_body (statements (assignment target: (directly_assignable_expression (navigation_expression target: (self_expression) suffix: (navigation_suffix suffix: (simple_identifier)))) result: (simple_identifier)) (assignment target: (directly_assignable_expression (navigation_expression target: (self_expression) suffix: (navigation_suffix suffix: (simple_identifier)))) result: (simple_identifier))))) (multiline_comment) (function_declaration name: (simple_identifier) (parameter external_name: (simple_identifier) name: (simple_identifier) name: (user_type (type_identifier))) name: (user_type (type_identifier)) body: (function_body (statements (property_declaration (value_binding_pattern) name: (pattern bound_identifier: (simple_identifier)) value: (navigation_expression target: (additive_expression lhs: (navigation_expression target: (simple_identifier) suffix: (navigation_suffix suffix: (simple_identifier))) rhs: (self_expression)) suffix: (navigation_suffix suffix: (simple_identifier)))) (property_declaration (value_binding_pattern) name: (pattern bound_identifier: (simple_identifier)) value: (navigation_expression target: (additive_expression lhs: (navigation_expression target: (simple_identifier) suffix: (navigation_suffix suffix: (simple_identifier))) rhs: (self_expression)) suffix: (navigation_suffix suffix: (simple_identifier)))) (control_transfer_statement result: (call_expression (simple_identifier) (call_suffix (value_arguments (value_argument value: (additive_expression lhs: (multiplicative_expression lhs: (simple_identifier) rhs: (simple_identifier)) rhs: (multiplicative_expression lhs: (simple_identifier) rhs: (simple_identifier))))))))))))) (comment) (property_declaration (value_binding_pattern) name: (pattern bound_identifier: (simple_identifier)) value: (call_expression (simple_identifier) (call_suffix (value_arguments (value_argument name: (value_argument_label (simple_identifier)) value: (integer_literal)) (value_argument name: (value_argument_label (simple_identifier)) value: (integer_literal)))))) (property_declaration (value_binding_pattern) name: (pattern bound_identifier: (simple_identifier)) value: (call_expression (simple_identifier) (call_suffix (value_arguments (value_argument name: (value_argument_label (simple_identifier)) value: (integer_literal)) (value_argument name: (value_argument_label (simple_identifier)) value: (integer_literal)))))) (property_declaration (value_binding_pattern) name: (pattern bound_identifier: (simple_identifier)) value: (call_expression (navigation_expression target: (simple_identifier) suffix: (navigation_suffix suffix: (simple_identifier))) (call_suffix (value_arguments (value_argument name: (value_argument_label (simple_identifier)) value: (simple_identifier)))))) (call_expression (simple_identifier) (call_suffix (value_arguments (value_argument value: (line_string_literal text: (line_str_text) interpolation: (interpolated_expression value: (simple_identifier))))))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), swift.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
