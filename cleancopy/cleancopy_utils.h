#include <stdarg.h>
#include <stdio.h>


size_t debug(
        char *msg,
        ...
) {
    size_t ret = 0;

    if(getenv("CC_DEBUG")) {
        va_list star_args;
        va_start(star_args, msg);
        ret = vprintf(msg, star_args);
        va_end(star_args);
    }

    return ret;
}
