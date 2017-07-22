#ifdef	_ASSERT_H
#  undef	_ASSERT_H
#  undef	assert
#endif /* assert.h	*/

#define	_ASSERT_H	1

/* void assert (int expression);

   If NDEBUG is defined, do nothing.
   If not, and EXPRESSION is zero, print an error message and abort.  */

#ifdef	NDEBUG

#define	assert(expr)		((void) 0)

#else /* Not NDEBUG.  */

/* This prints an "Assertion failed" message and aborts.  */
extern void __assert_fail(const char *__assertion,
                          const char *__file,
                          unsigned int __line,
                          const char *__function);

#define	assert(expr)							      \
    ((void) ((expr) ||							      \
             (__assert_fail(__STRING(expr),				      \
                            __FILE__, __LINE__, __PRETTY_FUNCTION__), 0)))

#endif /* NDEBUG.  */
