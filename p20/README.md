Problem 20 XOR swap algorithm
===

Note
---
- this is a black magic algorithm
    - [see wiki](https://en.wikipedia.org/wiki/XOR_swap_algorithm)
    - ![](https://upload.wikimedia.org/wikipedia/commons/thumb/8/8f/XOR_Swap.svg/880px-XOR_Swap.svg.png)

- `x ^= y ^= x ^= y`
    - ![](https://i.imgur.com/29l40Se.png)
- The downside of this algorithm is you can't swap yourself
    - since xor with yourself is zero

Output
---
```sh
3 5
5 3
0
```