Problem 17 Division and Right Shifting
===

Note
---
- Remember, in C, the integer division rounds towards zero
    - [Reference](https://stackoverflow.com/questions/3602827/what-is-the-behavior-of-integer-division)
- 2's complement = flip all bits + 1
- output explained
```c
// ...00001101 ----2's complement------> ...11110011 ---shift----> ....111001
// .....111001 ----2's complement-----> ...000111 = -7
```
Output
---

```sh
no # i >> 1 = -7, i / 2 = -6
```