Problem 24 Scanf and Stack 
===

Note
---
- How to print binary in C
    - https://stackoverflow.com/questions/111928/is-there-a-printf-converter-to-print-in-binary-format

- Output Explained

```c
#include <stdio.h>
int main() {
  char a = 69, b = 2, c = 3, d = 4, e = 5;
  scanf("%d", &e); // read an int to a char
  printf("%d, %d, %d, %d, %d\n", a, b, c, d, e); // 69, 0, 0, 0, 4
  // you can see scanf read a 4 byte int, but place it at the location of 'e', which is 1 byte. 

  // here's the graph demonstrating the problem
  // stack
  // high              low
  // +---+---+---+---+---+
  // | a | b | c | d | e |
  // +---+---+---+---+---+

  // after entering 257 (00000000,00000000,00000001,00000001)

  // +---+---+---+---+---+
  // | a | 0 | 0 | 1 | 1 |
  // +---+---+---+---+---+
  // the scanf puts a whole 4 byte int onto the stack, overwriting the content of b, c, d

}


```
Output
---
```sh
no. # since the content of i is overwritten by scanf, i becomes 0
```