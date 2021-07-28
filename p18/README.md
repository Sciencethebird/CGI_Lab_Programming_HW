Problem 18 
===

Note
---
-   qsort reference
    - [doc](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/qsort?view=msvc-160)

    - qsort sorts in increasing order according to the return value of comp function, if:
        - comp > 0, means n1 > n2
        - comp = 0, means n1 == n2
        - comp < 0, means n1 < n2
- Output Explained

    - the comparison function overflows
    - `-2147483640 - 50` should be negative, but it overflows and becomes positive, thus affecting the result of qsort()
    ```c
    // int range: -2,147,483,647 ~ 2,147,483,647
    int compare(const void *a, const void *b) {
      printf("%d, %d, %d \n", *(int *)a , *(int *)b, (*(int *)a - *(int *)b));
      return (*(int *)a - *(int *)b); // -2,147,483,640 - 50 overflows
    }
    ```
Output
---
```sh
50 100 -2147483640
```