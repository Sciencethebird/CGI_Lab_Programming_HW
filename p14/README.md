Problem 14 File Operation
===

Note
---

-   C assert
    - [Reference](http://tw.gitbook.net/c_standard_library/c_macro_assert.html)
    - if expression is `false`, assert a error message.
    - remember to `#include <assert.h>`
    - there's no try/catch in C btw.

- Output Explained
    - The reason why you can't read the file successfully it's because there's '\n' character in the end of your input file name string, thus `fopen()` can't find a file with the name `test.txt\n`
    - you can use `strtok()` to solve this problem.


Output
---
```sh
file pointer = NULL due the the '\n' in the end of your input file name string
```