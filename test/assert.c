#include <stdio.h>

int main()
{
#define NDEBUG
#include "../include/assert.h"
    assert(0 == 0);
    assert(0 == 1);

#undef NDEBUG
#include "../include/assert.h"
    assert(0 == 0);
    assert(0 == 1);

    return 0;
}
