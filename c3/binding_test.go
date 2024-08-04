//go:build !plugin

package c3_test

import (
	"context"
	"testing"

	"github.com/alexaandru/go-sitter-forest/c3"
	sitter "github.com/alexaandru/go-tree-sitter-bare"
)

const (
	code = `
const uint OFFSET = 8;
const uint BIN_COUNT = 9;
const uint BIN_MAX_IDX = BIN_COUNT - 1;
const uint OVERHEAD = Footer.sizeof + Node.sizeof;
const usz MIN_WILDERNESS = 0x2000;
const usz MAX_WILDERNESS = 0x1000000;
const usz HEAP_INIT_SIZE = 0x10000;
const usz HEAP_MAX_SIZE = 0xF0000;
const usz HEAP_MIN_SIZE = 0x10000;
const uint MIN_ALLOC_SZ = 4;

struct Node
{
    uint hole;
    uint size;
    Node* next;
    Node* prev;
}

struct Footer
{
    Node *header;
}

struct Bin
{
    Node* head;
}

struct Heap
{
    uptr start;
    uptr end;
    Bin*[BIN_COUNT] bins;
}


/**
 * @require start > 0
 */
fn void Heap.init(&heap, uptr start)
{
    Node* init_region = (Node*)start;
    init_region.hole = 1;
    init_region.size = HEAP_INIT_SIZE - Node.sizeof - Footer.sizeof;

    init_region.create_foot();

    heap.bins[get_bin_index(init_region.size)].add_node(init_region);

    heap.start = start;
    heap.end = start + HEAP_INIT_SIZE;
}

fn void* Heap.alloc(&heap, uint size)
{
    uint index = get_bin_index(size);
    Bin* temp = heap.bins[index];
    Node* found = temp.get_best_fit(size);

    while (!found)
    {
        temp = heap.bins[++index];
        found = temp.get_best_fit(size);
    }

    if (found.size - size > OVERHEAD + MIN_ALLOC_SZ)
    {
        Node* split = (Node*)((void*)found + Node.sizeof + Footer.sizeof) + size;
        split.size = found.size - size - (uint)Node.sizeof - (uint)Footer.sizeof;
        split.hole = 1;

        split.create_foot();

        uint new_idx = get_bin_index(split.size);

        heap.bins[new_idx].add_node(split);

        found.size = size;
        found.create_foot();
    }

    found.hole = 0;
    heap.bins[index].remove_node(found);

    Node* wild = heap.get_wilderness();
    if (wild.size < MIN_WILDERNESS)
    {
        if (!heap.expand(0x1000)) return null;
    }
    else if (wild.size > MAX_WILDERNESS)
    {
        heap.contract(0x1000);
    }

    found.prev = null;
    found.next = null;
    return &found.next;
}

/**
 * @param [&inout] p
 */
fn void Heap.free(&heap, void* p)
{

    Node* head = (void*)p - OFFSET;
    if (head == (Node*)heap.start)
    {
        head.hole = 1;
        heap.bins[get_bin_index(head.size)].add_node(head);
        return;
    }

    Node* next = (void*)head.get_foot() + Footer.sizeof;
    Footer* f = (void*)head - Footer.sizeof;
    Node* prev = f.header;

    Bin* list;
    Footer* new_foot;
    if (prev.hole)
    {
        list = heap.bins[get_bin_index(prev.size)];
        list.remove_node(prev);

        prev.size += OVERHEAD + head.size;
        new_foot = head.get_foot();
        new_foot.header = prev;

        head = prev;
    }

    if (next.hole)
    {
        list = heap.bins[get_bin_index(next.size)];
        list.remove_node(next);

        head.size += OVERHEAD + next.size;

        Footer* old_foot = next.get_foot();
        old_foot.header = null;
        next.size = 0;
        next.hole = 0;

        new_foot = head.get_foot();
        new_foot.header = head;
    }

    head.hole = 1;
    heap.bins[get_bin_index(head.size)].add_node(head);
}

fn uint Heap.expand(&heap, usz sz)
{
    return 0;
}

fn void Heap.contract(&heap, usz sz)
{
    return;
}

fn uint get_bin_index(usz sz)
{
    uint index = 0;
    sz = sz < 4 ? 4 : sz;

    while (sz >>= 1) index++;
    index -= 2;

    if (index > BIN_MAX_IDX) index = BIN_MAX_IDX;
    return index;
}

fn void Node.create_foot(&head)
{
    Footer* foot = head.get_foot();
    foot.header = head;
}

fn Footer* Node.get_foot(&node)
{
    return (void*)node + Node.sizeof + node.size;
}

fn Node* Heap.get_wilderness(&heap)
{
    Footer* wild_foot = (void*)heap.end - Footer.sizeof;
    return wild_foot.header;
}

fn void Bin.remove_node(&bin, Node* node)
{
  if (!bin.head) return;
    if (bin.head == node)
    {
        bin.head = bin.head.next;
        return;
    }

    Node* temp = bin.head.next;
    while (temp)
    {
        if (temp == node)
        {
            if (!temp.next)
            {
                temp.prev.next = null;
            }
            else
            {
                temp.prev.next = temp.next;
                temp.next.prev = temp.prev;
            }
            return;
        }
        temp = temp.next;
    }
}

fn void Bin.add_node(&bin, Node* node)
{
    node.next = null;
    node.prev = null;

    Node* temp = bin.head;

    if (!bin.head)
    {
        bin.head = node;
        return;
    }

    Node* current = bin.head;
    Node* previous = null;

    while (current != null && current.size <= node.size)
    {
        previous = current;
        current = current.next;
    }

    if (!current)
    {
        previous.next = node;
        node.prev = previous;
    }
    else
    {
        if (previous)
        {
            node.next = current;
            previous.next = node;

            node.prev = previous;
            current.prev = node;
        }
        else
        {
            node.next = bin.head;
            bin.head.prev = node;
            bin.head = node;
        }
    }
}

fn Node* Bin.get_best_fit(&bin, usz size)
{
    if (!bin.head) return null;

    Node* temp = bin.head;

    while (temp)
    {
        if (temp.size >= size) return temp;
        temp = temp.next;
    }
    return null;
}
`
	expected = "(source_file (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (integer_literal)) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (integer_literal)) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (binary_expr left: (const_ident) right: (integer_literal))) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (binary_expr left: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident))) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident))))) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (integer_literal)) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (integer_literal)) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (integer_literal)) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (integer_literal)) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (integer_literal)) (const_declaration type: (type (base_type (base_type_name))) name: (const_ident) right: (integer_literal)) (struct_declaration name: (type_ident) body: (struct_body (struct_member_declaration type: (type (base_type (base_type_name))) (identifier_list (ident))) (struct_member_declaration type: (type (base_type (base_type_name))) (identifier_list (ident))) (struct_member_declaration type: (type (base_type (type_ident)) (type_suffix)) (identifier_list (ident))) (struct_member_declaration type: (type (base_type (type_ident)) (type_suffix)) (identifier_list (ident))))) (struct_declaration name: (type_ident) body: (struct_body (struct_member_declaration type: (type (base_type (type_ident)) (type_suffix)) (identifier_list (ident))))) (struct_declaration name: (type_ident) body: (struct_body (struct_member_declaration type: (type (base_type (type_ident)) (type_suffix)) (identifier_list (ident))))) (struct_declaration name: (type_ident) body: (struct_body (struct_member_declaration type: (type (base_type (base_type_name))) (identifier_list (ident))) (struct_member_declaration type: (type (base_type (base_type_name))) (identifier_list (ident))) (struct_member_declaration type: (type (base_type (type_ident)) (type_suffix) (type_suffix (const_ident))) (identifier_list (ident))))) (doc_comment (doc_comment_text)) (func_definition (func_header return_type: (type (base_type (base_type_name))) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident)) (parameter type: (type (base_type (base_type_name))) name: (ident))) body: (macro_func_body (compound_stmt (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (cast_expr type: (type (base_type (type_ident)) (type_suffix)) value: (ident)))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (integer_literal))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (binary_expr left: (binary_expr left: (const_ident) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident)))) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident)))))) (expr_stmt (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation))) (expr_stmt (call_expr function: (field_expr argument: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (call_expr function: (ident) arguments: (call_invocation (arg (field_expr argument: (ident) field: (access_ident (ident))))))) field: (access_ident (ident))) arguments: (call_invocation (arg (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (binary_expr left: (ident) right: (const_ident))))))) (func_definition (func_header return_type: (type (base_type (base_type_name)) (type_suffix)) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident)) (parameter type: (type (base_type (base_type_name))) name: (ident))) body: (macro_func_body (compound_stmt (declaration_stmt type: (type (base_type (base_type_name))) (local_decl_after_type name: (ident) right: (call_expr function: (ident) arguments: (call_invocation (arg (ident)))))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (ident)))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation (arg (ident)))))) (while_stmt condition: (paren_cond (unary_expr argument: (ident))) body: (compound_stmt (expr_stmt (assignment_expr left: (ident) right: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (unary_expr argument: (ident))))) (expr_stmt (assignment_expr left: (ident) right: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation (arg (ident)))))))) (if_stmt condition: (paren_cond (binary_expr left: (binary_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident)) right: (binary_expr left: (const_ident) right: (const_ident)))) body: (compound_stmt (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (binary_expr left: (cast_expr type: (type (base_type (type_ident)) (type_suffix)) value: (paren_expr (binary_expr left: (binary_expr left: (cast_expr type: (type (base_type (base_type_name)) (type_suffix)) value: (ident)) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident)))) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident)))))) right: (ident)))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (binary_expr left: (binary_expr left: (binary_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident)) right: (cast_expr type: (type (base_type (base_type_name))) value: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident))))) right: (cast_expr type: (type (base_type (base_type_name))) value: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident))))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (integer_literal))) (expr_stmt (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation))) (declaration_stmt type: (type (base_type (base_type_name))) (local_decl_after_type name: (ident) right: (call_expr function: (ident) arguments: (call_invocation (arg (field_expr argument: (ident) field: (access_ident (ident)))))))) (expr_stmt (call_expr function: (field_expr argument: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (ident)) field: (access_ident (ident))) arguments: (call_invocation (arg (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) (expr_stmt (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (integer_literal))) (expr_stmt (call_expr function: (field_expr argument: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (ident)) field: (access_ident (ident))) arguments: (call_invocation (arg (ident))))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation)))) (if_stmt condition: (paren_cond (binary_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (const_ident))) body: (compound_stmt (if_stmt condition: (paren_cond (unary_expr argument: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation (arg (integer_literal)))))) body: (return_stmt))) (else_part (if_stmt condition: (paren_cond (binary_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (const_ident))) body: (compound_stmt (expr_stmt (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation (arg (integer_literal))))))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))))) (return_stmt (unary_expr argument: (field_expr argument: (ident) field: (access_ident (ident)))))))) (doc_comment (doc_comment_text)) (func_definition (func_header return_type: (type (base_type (base_type_name))) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident)) (parameter type: (type (base_type (base_type_name)) (type_suffix)) name: (ident))) body: (macro_func_body (compound_stmt (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (binary_expr left: (cast_expr type: (type (base_type (base_type_name)) (type_suffix)) value: (ident)) right: (const_ident)))) (if_stmt condition: (paren_cond (binary_expr left: (ident) right: (cast_expr type: (type (base_type (type_ident)) (type_suffix)) value: (field_expr argument: (ident) field: (access_ident (ident)))))) body: (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (integer_literal))) (expr_stmt (call_expr function: (field_expr argument: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (call_expr function: (ident) arguments: (call_invocation (arg (field_expr argument: (ident) field: (access_ident (ident))))))) field: (access_ident (ident))) arguments: (call_invocation (arg (ident))))) (return_stmt))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (binary_expr left: (cast_expr type: (type (base_type (base_type_name)) (type_suffix)) value: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation))) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident)))))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (binary_expr left: (cast_expr type: (type (base_type (base_type_name)) (type_suffix)) value: (ident)) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident)))))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (field_expr argument: (ident) field: (access_ident (ident))))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident))) (if_stmt condition: (paren_cond (field_expr argument: (ident) field: (access_ident (ident)))) body: (compound_stmt (expr_stmt (assignment_expr left: (ident) right: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (call_expr function: (ident) arguments: (call_invocation (arg (field_expr argument: (ident) field: (access_ident (ident))))))))) (expr_stmt (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation (arg (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (binary_expr left: (const_ident) right: (field_expr argument: (ident) field: (access_ident (ident)))))) (expr_stmt (assignment_expr left: (ident) right: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation)))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) (expr_stmt (assignment_expr left: (ident) right: (ident))))) (if_stmt condition: (paren_cond (field_expr argument: (ident) field: (access_ident (ident)))) body: (compound_stmt (expr_stmt (assignment_expr left: (ident) right: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (call_expr function: (ident) arguments: (call_invocation (arg (field_expr argument: (ident) field: (access_ident (ident))))))))) (expr_stmt (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation (arg (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (binary_expr left: (const_ident) right: (field_expr argument: (ident) field: (access_ident (ident)))))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation)))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (integer_literal))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (integer_literal))) (expr_stmt (assignment_expr left: (ident) right: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation)))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (integer_literal))) (expr_stmt (call_expr function: (field_expr argument: (subscript_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) index: (call_expr function: (ident) arguments: (call_invocation (arg (field_expr argument: (ident) field: (access_ident (ident))))))) field: (access_ident (ident))) arguments: (call_invocation (arg (ident)))))))) (func_definition (func_header return_type: (type (base_type (base_type_name))) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident)) (parameter type: (type (base_type (base_type_name))) name: (ident))) body: (macro_func_body (compound_stmt (return_stmt (integer_literal))))) (func_definition (func_header return_type: (type (base_type (base_type_name))) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident)) (parameter type: (type (base_type (base_type_name))) name: (ident))) body: (macro_func_body (compound_stmt (return_stmt)))) (func_definition (func_header return_type: (type (base_type (base_type_name))) name: (ident)) (fn_parameter_list (parameter type: (type (base_type (base_type_name))) name: (ident))) body: (macro_func_body (compound_stmt (declaration_stmt type: (type (base_type (base_type_name))) (local_decl_after_type name: (ident) right: (integer_literal))) (expr_stmt (assignment_expr left: (ident) right: (ternary_expr condition: (binary_expr left: (ident) right: (integer_literal)) consequence: (integer_literal) alternative: (ident)))) (while_stmt condition: (paren_cond (assignment_expr left: (ident) right: (integer_literal))) body: (expr_stmt (update_expr argument: (ident)))) (expr_stmt (assignment_expr left: (ident) right: (integer_literal))) (if_stmt condition: (paren_cond (binary_expr left: (ident) right: (const_ident))) body: (expr_stmt (assignment_expr left: (ident) right: (const_ident)))) (return_stmt (ident))))) (func_definition (func_header return_type: (type (base_type (base_type_name))) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident))) body: (macro_func_body (compound_stmt (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (call_expr function: (field_expr argument: (ident) field: (access_ident (ident))) arguments: (call_invocation)))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident)))))) (func_definition (func_header return_type: (type (base_type (type_ident)) (type_suffix)) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident))) body: (macro_func_body (compound_stmt (return_stmt (binary_expr left: (binary_expr left: (cast_expr type: (type (base_type (base_type_name)) (type_suffix)) value: (ident)) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident)))) right: (field_expr argument: (ident) field: (access_ident (ident)))))))) (func_definition (func_header return_type: (type (base_type (type_ident)) (type_suffix)) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident))) body: (macro_func_body (compound_stmt (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (binary_expr left: (cast_expr type: (type (base_type (base_type_name)) (type_suffix)) value: (field_expr argument: (ident) field: (access_ident (ident)))) right: (type_access_expr argument: (type (base_type (type_ident))) field: (access_ident (ident)))))) (return_stmt (field_expr argument: (ident) field: (access_ident (ident))))))) (func_definition (func_header return_type: (type (base_type (base_type_name))) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident)) (parameter type: (type (base_type (type_ident)) (type_suffix)) name: (ident))) body: (macro_func_body (compound_stmt (if_stmt condition: (paren_cond (unary_expr argument: (field_expr argument: (ident) field: (access_ident (ident))))) body: (return_stmt)) (if_stmt condition: (paren_cond (binary_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) body: (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (field_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) field: (access_ident (ident))))) (return_stmt))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (field_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) field: (access_ident (ident))))) (while_stmt condition: (paren_cond (ident)) body: (compound_stmt (if_stmt condition: (paren_cond (binary_expr left: (ident) right: (ident))) body: (compound_stmt (if_stmt condition: (paren_cond (unary_expr argument: (field_expr argument: (ident) field: (access_ident (ident))))) body: (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) field: (access_ident (ident)))))) (else_part body: (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) field: (access_ident (ident))) right: (field_expr argument: (ident) field: (access_ident (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) field: (access_ident (ident))) right: (field_expr argument: (ident) field: (access_ident (ident)))))))) (return_stmt))) (expr_stmt (assignment_expr left: (ident) right: (field_expr argument: (ident) field: (access_ident (ident)))))))))) (func_definition (func_header return_type: (type (base_type (base_type_name))) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident)) (parameter type: (type (base_type (type_ident)) (type_suffix)) name: (ident))) body: (macro_func_body (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (field_expr argument: (ident) field: (access_ident (ident))))) (if_stmt condition: (paren_cond (unary_expr argument: (field_expr argument: (ident) field: (access_ident (ident))))) body: (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) (return_stmt))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (field_expr argument: (ident) field: (access_ident (ident))))) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident))) (while_stmt condition: (paren_cond (binary_expr left: (binary_expr left: (ident)) right: (binary_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (field_expr argument: (ident) field: (access_ident (ident)))))) body: (compound_stmt (expr_stmt (assignment_expr left: (ident) right: (ident))) (expr_stmt (assignment_expr left: (ident) right: (field_expr argument: (ident) field: (access_ident (ident))))))) (if_stmt condition: (paren_cond (unary_expr argument: (ident))) body: (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident)))) (else_part body: (compound_stmt (if_stmt condition: (paren_cond (ident)) body: (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident)))) (else_part body: (compound_stmt (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (field_expr argument: (ident) field: (access_ident (ident))))) (expr_stmt (assignment_expr left: (field_expr argument: (field_expr argument: (ident) field: (access_ident (ident))) field: (access_ident (ident))) right: (ident))) (expr_stmt (assignment_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident)))))))))))) (func_definition (func_header return_type: (type (base_type (type_ident)) (type_suffix)) method_type: (type (base_type (type_ident))) name: (ident)) (fn_parameter_list (parameter name: (ident)) (parameter type: (type (base_type (base_type_name))) name: (ident))) body: (macro_func_body (compound_stmt (if_stmt condition: (paren_cond (unary_expr argument: (field_expr argument: (ident) field: (access_ident (ident))))) body: (return_stmt)) (declaration_stmt type: (type (base_type (type_ident)) (type_suffix)) (local_decl_after_type name: (ident) right: (field_expr argument: (ident) field: (access_ident (ident))))) (while_stmt condition: (paren_cond (ident)) body: (compound_stmt (if_stmt condition: (paren_cond (binary_expr left: (field_expr argument: (ident) field: (access_ident (ident))) right: (ident))) body: (return_stmt (ident))) (expr_stmt (assignment_expr left: (ident) right: (field_expr argument: (ident) field: (access_ident (ident))))))) (return_stmt)))))"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte(code), c3.GetLanguage())
	if err != nil {
		t.Fatalf("Expected no error got %v", err)
	}

	if act := n.String(); act != expected {
		t.Fatalf("Expected %q got %q", expected, act)
	}
}
