Problem 3
===

## Note
1. `strtok()`

    -   used to split string, by delimiters (you can use multiple character for delimiters)
    -   [Reference](https://www.cplusplus.com/reference/cstring/strtok/)
    -   [Why input null](https://blog.wu-boy.com/2010/04/cc-%E5%88%87%E5%89%B2%E5%AD%97%E4%B8%B2%E5%87%BD%E6%95%B8%EF%BC%9Astrtok-network-mac-address-%E5%88%86%E5%89%B2/)

## Source Code of strtok()

### version 1
---
```c
__strtok_r(char *s, const char *delim, char **last)
{
    char *spanp, *tok;
    int c, sc;

    if (s == NULL && (s = *last) == NULL)
        return (NULL);

    /*
     * Skip (span) leading delimiters (s += strspn(s, delim), sort of).
     */
cont:
    c = *s++;
    for (spanp = (char *)delim; (sc = *spanp++) != 0;) {
        if (c == sc)
            goto cont;
    }

    if (c == 0) {       /* no non-delimiter characters */
        *last = NULL;
        return (NULL);
    }
    tok = s - 1; // since s = s+1 now (from s++), tok is the start of the token

    /*
     * Scan token (scan for delimiters: s += strcspn(s, delim), sort of).
     * Note that delim must have one NUL; we stop if we see that, too.
     */
    for (;;) {
        c = *s++; // c = *s, then s = s + 1
        spanp = (char *)delim;
        do {
            if ((sc = *spanp++) == c) {
                if (c == 0)
                    s = NULL;
                else
                    s[-1] = '\0'; // delimiter is replaced by the '\0'
                *last = s;
                return (tok);
            }
        } while (sc != 0);
    }
    /* NOTREACHED */
}
```
### version 2
---
```c
/* Copyright (c) Microsoft Corporation. All rights reserved. */

#include <string.h>

/* ISO/IEC 9899 7.11.5.8 strtok. DEPRECATED.
 * Split string into tokens, and return one at a time while retaining state
 * internally.
 *
 * WARNING: Only one set of state is held and this means that the
 * WARNING: function is not thread-safe nor safe for multiple uses within
 * WARNING: one thread.
 *
 * NOTE: No library may call this function.
 */

char * __cdecl strtok(char *s1, const char *delimit)
{
    static char *lastToken = NULL; /* UNSAFE SHARED STATE! */
    char *tmp;

    /* Skip leading delimiters if new string. */
    if ( s1 == NULL ) {
        s1 = lastToken;
        if (s1 == NULL)         /* End of story? */
            return NULL;
    } else {
        s1 += strspn(s1, delimit);
    }

    /* Find end of segment */
    tmp = strpbrk(s1, delimit);
    if (tmp) {
        /* Found another delimiter, split string and save state. */
        *tmp = '\0';
        lastToken = tmp + 1;
    } else {
        /* Last segment, remember that. */
        lastToken = NULL;
    }

    return s1;
}
```

- Here's why you can use `strtok(NULL, delimiter)` to split a string:
    - lastToken is static, so the end of previous token will be remembered
    - The end of token will be replaced by a NULL character, so the end of a token will be the start of next token

- Here's why the second 'strtok()' only output ""this
    - you can see the code, the place of delimiter is replaced by '\0'
    - The string is modified by the pointer, so the modification applies to the origianl string too.
    
## Output

```shell
this
is
a
string
this # the original string is spilt due to the previous operation
```


