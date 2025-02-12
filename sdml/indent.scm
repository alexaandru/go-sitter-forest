[
 "is"
 "of"
 ] @indent

[
 "end"
 ] @indent.end

[
 (string)
 (line_comment)
 (function_body)
 ] @indent.auto

(datatype_def_restriction "{" @indent "}" @indent.end)

(source_entity "[" @indent "]" @indent.end)

(constraint_environment
 "with" @indent
 ) @indent.end

(function_signature "(" @indent ")" @indent.end)

(constraint_sentence "(" @indent ")" @indent.end)

(sequence_builder "{" @indent "}" @indent.end)

(actual_arguments "(" @indent ")" @indent.end)

(sequence_of_predicate_values "[" @indent "]" @indent.end)

(sequence_of_values "[" @indent "]" @indent.end)

(sequence_builder (set_op_builder) @indent.branch)

(method_def
 (annotation_only_body "is" @indent.branch))
