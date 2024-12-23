#include "parser.h"
#include "array.h"
#include <string.h>

typedef Array(char) String;

typedef struct {
    String tag_name;
} Tag;

static inline Tag tag_new() {
    Tag tag;
    tag.tag_name = (String) array_new();
    return tag;
}

static inline Tag tag_for_name(String name) {
    Tag tag = tag_new();
    tag.tag_name = name;
    return tag;
}

static inline void tag_free(Tag *tag) {
    array_delete(&tag->tag_name);
}

static inline bool tag_eq(const Tag *self, const Tag *other) {
    if (self->tag_name.size != other->tag_name.size) {
        return false;
    }
    if (memcmp(
        self->tag_name.contents,
        other->tag_name.contents,
        self->tag_name.size
    ) != 0) {
        return false;
    }
    return true;
}
