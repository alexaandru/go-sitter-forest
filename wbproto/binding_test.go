//go:build !plugin

package wbproto_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/wbproto"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `#VRML_SIM R2023b utf8
# license: Creative Commons Attribution 4.0 International License.
# license url: https://creativecommons.org/licenses/by/4.0/legalcode
# documentation url: https://www.cyberbotics.com/doc/guide/object-chairs
# A two-color chair

PROTO TwoColorChair [
  field SFVec3f    translation       0 0 0.91
  field SFRotation rotation          0 0 1 0
  field SFString   name              "two-color chair"
  field SFColor    legColor          1 1 0
  field SFColor    seatColor         1 0.65 0
  field SFNode     seatGeometry      NULL
  field MFNode     seatExtensionSlot []
]
{
  Solid {
    translation IS translation
    rotation IS rotation
    children [
      Pose {
        translation 0.27 0 0
        children IS seatExtensionSlot
      }
      Pose {
        translation 0 0 -0.35
        children [
          Shape {
            appearance Appearance {
              material Material { diffuseColor IS seatColor }
            }
            geometry IS seatGeometry
          }
        ]
      }
      Pose {
        translation 0.23 -0.25 -0.65
        children [
          DEF LEG_SHAPE Shape {
            appearance Appearance {
              material Material { diffuseColor IS legColor }
            }
            geometry Box { size 0.075 0.075 0.52 }
          }
        ]
      }
      Pose {
        translation 0.23 0.25 -0.65
        children [ USE LEG_SHAPE ]
      }
      Pose {
        translation -0.2 -0.25 -0.65
        children [ USE LEG_SHAPE ]
      }
      Pose {
        translation -0.2 0.25 -0.65
        children [ USE LEG_SHAPE ]
      }
    ]
    name IS name
  }
}
`
	expected = "(source_file (comment) (comment) (comment) (comment) (comment) (proto proto: (identifier) (field (identifier) (type (identifier)) name: (identifier) (vector (number) (number) (number))) (field (identifier) (type (identifier)) name: (identifier) (vector (number) (number) (number) (number))) (field (identifier) (type (identifier)) name: (identifier) (string)) (field (identifier) (type (identifier)) name: (identifier) (vector (number) (number) (number))) (field (identifier) (type (identifier)) name: (identifier) (vector (number) (number) (number))) (field (identifier) (type (identifier)) name: (identifier) (null)) (field (identifier) (type (identifier)) name: (identifier) (vector)) (node (identifier) (property (identifier) (identifier)) (property (identifier) (identifier)) (property (identifier) (vector (node (identifier) (property (identifier) (vector (number) (number) (number))) (property (identifier) (identifier))) (node (identifier) (property (identifier) (vector (number) (number) (number))) (property (identifier) (vector (node (identifier) (property (identifier) (node (identifier) (property (identifier) (node (identifier) (property (identifier) (identifier)))))) (property (identifier) (identifier)))))) (node (identifier) (property (identifier) (vector (number) (number) (number))) (property (identifier) (vector (node (identifier) (identifier) (property (identifier) (node (identifier) (property (identifier) (node (identifier) (property (identifier) (identifier)))))) (property (identifier) (node (identifier) (property (identifier) (vector (number) (number) (number))))))))) (node (identifier) (property (identifier) (vector (number) (number) (number))) (property (identifier) (vector (node (identifier))))) (node (identifier) (property (identifier) (vector (number) (number) (number))) (property (identifier) (vector (node (identifier))))) (node (identifier) (property (identifier) (vector (number) (number) (number))) (property (identifier) (vector (node (identifier))))))) (property (identifier) (identifier)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), wbproto.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
