Problem 7 array and pointer
===

Note
---

- Problem
    ```c
    int a[10];

    if (a == &a)
        printf("yes\n"); // same address, but different type
    else
        printf("no\n");
    
    if (a + 1 == &a + 1)
        printf("yes\n"); 
    else
        printf("no\n"); // different since one is offset by an array element, one is offset by whole array
    ```
- `array` == `&array` ?!
    - https://stackoverflow.com/questions/58514342/c-ampersand-operator-applied-to-an-array-vs-pointer
    - https://stackoverflow.com/questions/1641957/is-an-array-name-a-pointer

- Difference between `array` and `&array`
    - You can see the answer in the warning message

    ```sh
    p7.c:7:9: warning: comparison of distinct pointer types ('int *' and 'int (*)[10]')
    ```

    - `array` is a pointer points to the first element of the array (an int), which has type int *
    - `&array` is a pointer points to the array, which has type int (*) [10]

- Pointer: `+1` behavior in C/C++

    -   https://stackoverflow.com/questions/7886196/c-pointer-1-meaning/7886232
    -   `+1` means offset by the size of the datatype
    ```c
    int *e;
    char *b;
    long long *c;
    char d[100];
    printf("%p, %p\n", e, e+1);
    printf("%p, %p\n", b, b+1);
    printf("%p, %p\n", c, c+1);
    printf("%p, %p\n", d, d+1);
    printf("%p, %p\n", &d, &d+1);
    ```

Output
---
```sh
yes
no // different since one is offset by an array element, one is offset by whole array
```