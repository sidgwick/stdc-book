#include <stdio.h>
#include <stdlib.h>

#include "assert.h"

/* This function, when passed a string containing an asserted
   expression, a filename, and a line number, prints a message
   on the standard error stream of the form:
   a.c:10: foobar: Assertion `a == b' failed.
   It then aborts program execution via a call to `abort'.  */
void __assert_fail(const char *assertion, const char *file,
                   unsigned int line, const char *function)
{
    /* Print the message.  */
    fprintf(stderr, "%s:%u: %s: Assertion `%s' failed.\n",
            file, line, function, assertion);
    fflush(stderr);

    abort ();
}
