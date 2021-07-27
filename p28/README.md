Problem 28 `std::accumulate`
===

Note
---
- about vector init
    - you need to add `-std=c++17` to your g++ otherwise the old C++ may not able to handle vector init.
- `std::accumulate`
    -   sums up the value of container
    -   type problem:
        -   the data type is determined by the third argument (init value), if you wanna sums up a float vector, the init value needs to be float too, like `0.0`


Output
---
```sh
6 // since init value is 0 (int), std::accumulate takes all value as int
```