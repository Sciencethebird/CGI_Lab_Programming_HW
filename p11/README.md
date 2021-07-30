Problem 11 Size of Struct
===

Note
---
- This problem demonstrates the padding mechanism of C struct
    - https://stackoverflow.com/questions/1841863/size-of-struct-in-c
    - [padding in C](https://www.javatpoint.com/structure-padding-in-c)
    - Basically, your computer read memory word by word, for 32 bit system, it's 4 byte, for 64 bit system, it's 8 byte. The compiler will optimize the memory reading cycle, thus avoid separating same memory space into two words (since in that case you need extra cycles to read a single memory block)
    - bad memory placement, you need extra cycle to read `c`
    - ![](https://static.javatpoint.com/cpages/images/structure-padding-in-c1.png)
    - with memory padding
    - ![](https://static.javatpoint.com/cpages/images/structure-padding-in-c2.png)

- Output Explained
    - my computer is 64 bit, thus the padding is 8 base.
    - first struct is [1 + 2 + 4 + 1 padding] + 8 = 16
    - second struct is [1 + 7 padding] + 8 + [4 + 2 + 2 padding] = 24

Output
---

```sh
csie = 16
ceis = 24
```
