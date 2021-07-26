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

Output
---
```sh
50 100 -2147483640
```