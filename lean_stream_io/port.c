#include <stdio.h>
#include "pico/stdio.h"

int _write(int fd, const void * buffer, size_t length) {
    // support 1 handler: the pico printf()
    if (fd != 1) {
        return -1;
    }
    return printf(buffer);
}