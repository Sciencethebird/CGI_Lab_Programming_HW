Problem 1: Array vs Pointer
===
- string array vs string pointer
    - https://overiq.com/c-programming-101/character-array-and-character-pointer-in-c/
    - https://stackoverflow.com/questions/3207286/c-strings-pointer-vs-arrays
- The main issue of problem 1 is you're assigning a string constant to a string ptr,
  this means the ptr points to a memory section which is not modifiable, causing 
  segmentation fault 
  
```c
/** (X) modification on string pointer **/
char *start = "this is a string"; // assign a string constant to ptr.
start[4] = '\0'; // this causes segmentation fault since *ptr is a string contant, 
                 // which is a not modifiable memory spcae

/** (O) modification on string array **/
char start[] = "this is a string" // this is fine since array init allocates a modifiable memory space and
                                  // copies the string data to there.
start[4] = '\0';
```

output
---
```
# array version
this

# pointer version
segmentation fault

```
