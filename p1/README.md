Problem 1: Array v. Pointer
===
    - string array vs string pointer
        - https://overiq.com/c-programming-101/character-array-and-character-pointer-in-c/
        - https://stackoverflow.com/questions/3207286/c-strings-pointer-vs-arrays
    - the main problem of problem 1 is you assign a string constant to a string ptr,
      this means the ptr points to a memory section which is not modifiable, this causing 
      segmentation fault 
      
    ```c
    /** modification on string pointer (X) **/
    char *start = "this is a string"; // assign a string constant to ptr.
    start[4] = '\0'; // this causes segmentation fault since *ptr is a string contant, 
                     // which is a not modifiable memory location

    /** modification on string array (O) **/
    char start[] = "this is a string" // this is fine since array init copies the string data into 
                                      // modifiable allocated memory.
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
