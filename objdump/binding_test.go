package objdump_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/objdump"
	sitter "github.com/smacker/go-tree-sitter"
)

const (
	code = `
0000000000000000 <engine::world::World::createEntity()> (File Offset: 0x70):

_ZN6engine5world5World12createEntityEv():

/home/selecaoone/repositories/jumpy/engine/src/lib/world.cpp:14
   0:	48 89 f8                                              	mov    rax,rdi
   # <- number
   #    ^ field
   #       ^ field

_ZNKSt15__uniq_ptr_implIN6engine13entityManager13EntityManagerESt14default_deleteIS2_EE6_M_ptrEv():
   23:	74 12                                                 	je     37 <engine::world::World::initialize()+0x25> (File Offset: 0xa7)
   23:	00 00                                                 	(bad)
`
	expected = "(source (disassembly_section (section_address) (identifier) (file_offset (hexadecimal)) (label_line (label)) (source_location (file_path) (integer)) (memory_offset (address) (machine_code_bytes (byte) (byte) (byte)) (instruction)) (ERROR (identifier) (UNEXPECTED '^') (file_path) (UNEXPECTED '^') (file_path) (UNEXPECTED '_')) (source_location (file_path) (ERROR (integer)) (integer))) (ERROR (address) (UNEXPECTED 'j') (address) (address) (identifier) (file_offset (hexadecimal))) (memory_offset (address) (machine_code_bytes (byte) (byte)) (bad_instruction)))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), objdump.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
