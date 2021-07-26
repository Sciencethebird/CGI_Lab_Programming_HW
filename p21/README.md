Problem 21 i++ ++i
===

Note
---
- C is left to right or right to left?
    - https://stackoverflow.com/questions/12685329/in-c-language-execution-of-function-is-from-right-to-left-or-left-to-right
    - it depands on the compiler

- Output Explained
    - in my environment, it works left to right, so the `i++ + ++i` work like this:
        - init: i = 3
        - first,  (i++) + , means 3 + ?, i becomes 4
        - then, 3 + (++i), means i becomes 5, this 3 + 5 = 8


Output
---
```sh
8 # output of i++ + ++i
```