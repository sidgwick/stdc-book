#include <stdio.h>

int main()
{
#define NDEBUG
#include "../include/assert.h"
    assert(0 == 0);
    printf("OK\n");
    assert(0 == 1);
    printf("OK\n");

#undef NDEBUG
#include "../include/assert.h"
    assert(0 == 0);
    printf("OK\n");
    printf("Err\n");
    assert(0 == 1);

    return 0;
}
