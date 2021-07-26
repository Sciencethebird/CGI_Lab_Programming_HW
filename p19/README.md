Problem 19 __FILE__
===

Note
---
- `gcc -E *.c`
    - https://debrouxl.github.io/gcc4ti/comopts.html
    - allows you to see the result of preprocessor stage

- About C Preprocessor
    - https://gcc.gnu.org/onlinedocs/gcc-2.95.3/cpp_1.html
    - basically it deals with macros/header files etc.

Output
---
- the output of gcc -E
    -   you can see `__FILE__` is replaced by `p19.c`
```c
int main() {
  printf("file: %s \n", "p19.c");
  FILE *fp = fopen("p19.c", "r");
  (__builtin_expect(!(fp != ((void *)0)), 0) ? __assert_rtn(__func__, "p19.c", 6, "fp != NULL") : (void)0);
  int c;
  while ((c = fgetc(fp)) != (-1))
    putchar(c);
  fclose(fp);
}
```
- the output prints out the code itself 
```c
#include <stdio.h>
#include <assert.h>
int main() {
  printf("file: %s \n", __FILE__);
  FILE *fp = fopen(__FILE__, "r");
  assert(fp != NULL);
  int c;
  while ((c = fgetc(fp)) != EOF)
    putchar(c);
  fclose(fp);
}
```