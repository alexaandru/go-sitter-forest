(module_def
  body: (expressions) @context.end
) @context

(lib_def
  body: (expressions) @context.end
) @context

(class_def
  body: (expressions) @context.end
) @context

(struct_def
  body: (expressions) @context.end
) @context

(enum_def
  body: (expressions) @context.end
) @context

(c_struct_def
  body: (expressions) @context.end
) @context

(union_def
  body: (expressions) @context.end
) @context

(method_def
  body: (expressions) @context.end
) @context

(fun_def
  body: (expressions) @context.end
) @context

(macro_def
  body: (expressions) @context.end
) @context

(block
  body: (expressions) @context.end
) @context

(if
  then: (then) @context.end
) @context

(unless
  then: (then) @context.end
) @context

(case
  (when) @context.end
) @context

(select
  (when) @context.end
) @context

(case
  (in) @context.end
) @context

(when
  body: (expressions) @context.end
) @context

(in
  body: (expressions) @context.end
) @context

(while
  body: (expressions) @context.end
) @context

(until
  body: (expressions) @context.end
) @context
