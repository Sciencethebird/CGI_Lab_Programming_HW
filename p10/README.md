Problem 10 `define` in C (Macros)
===

Note
---
- What Macros do
    - macros finds keywords/phases and literally replaced the code by something you wanna replace.
    - form of `define`
        - `#define`, `code_you_wanna_replace`, `replace_code`  

-   Output Explained
```c
#define inc(x) ((x)++)
#define square(x) (x * x)
square(3 + 4);
// the output is 19 since x is replace by 3 + 4,
// thus the replaced code is 3 + 4 * 3 + 4, resulting in 19

i = 3;
square(inc(i)); // 12
i; // 5
// output is 3 * 4 = 12 since the actual code is (i)++ * (i)++
// thus value of i is 5 eventually
```
Output
---
```sh
19
12 5
```