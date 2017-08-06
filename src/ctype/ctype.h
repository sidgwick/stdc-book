#ifndef _CTYPE_H
#define _CTYPE_H

enum
{
    _ISupper = 1 << 0,            /* UPPERCASE.  */
    _ISlower = 1 << 1,            /* lowercase.  */
    _IScntrl = 1 << 2,            /* Control character.  */
    _ISdigit = 1 << 3,            /* Numeric.  */
    _ISspace = 1 << 4,            /* Whitespace.  */
    _IShex = 1 << 5,            /* A - F, a - f.  */
    _ISpunct = 1 << 6,            /* Punctuation.  */
    _NOgraph = 1 << 7,            /* Printing but nongraphical.  */
    _ISblank = 1 << 8,            /* Blank (usually SPC and TAB).  */
    _ISalpha = 1 << 9,            /* Alphabetic.  */
    _ISalnum = _ISalpha | _ISdigit,    /* Alphanumeric.  */
    _ISxdigit = _ISdigit | _IShex,    /* Hexadecimal numeric.  */
    _ISgraph = _ISalnum | _ISpunct,    /* Graphical.  */
    _ISprint = _ISgraph | _NOgraph    /* Printing.  */
};

/* character table */
extern const unsigned short int *__ctype_b;    /* Characteristics.  */
extern const short int *__ctype_tolower;    /* Case conversions.  */
extern const short int *__ctype_toupper;    /* Case conversions.  */

#define isalnum(c) ((int) __ctype_b[(int) c] & _ISalnum)
#define isalpha(c) ((int) __ctype_b[(int) c] & _ISalpha)
#define iscntrl(c) ((int) __ctype_b[(int) c] & _IScntrl)
#define isdigit(c) ((int) __ctype_b[(int) c] & _ISdigit)
#define islower(c) ((int) __ctype_b[(int) c] & _ISlower)
#define isgraph(c) ((int) __ctype_b[(int) c] & _ISgraph)
#define isprint(c) ((int) __ctype_b[(int) c] & _ISprint)
#define ispunct(c) ((int) __ctype_b[(int) c] & _ISpunct)
#define isspace(c) ((int) __ctype_b[(int) c] & _ISspace)
#define isupper(c) ((int) __ctype_b[(int) c] & _ISupper)
#define isxdigit(c) ((int) __ctype_b[(int) c] & _ISxdigit)

#define	tolower(c) ((int) __ctype_tolower[(int) (c)])
#define	toupper(c) ((int) __ctype_toupper[(int) (c)])

#endif
