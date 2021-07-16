# CGI_Lab_Programming_HW
- 新生訓練作業
- For the following problems, answer the output message of the program unless they are specified differently. If there are any exceptions (or segmentation faults), indicate the location in the source code. Most importantly, you need to explain the reason.

# Problem List

1. Problem 1: Array v. Pointer
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

# Note 

1. compile and run

    - g++/gcc -o a.out foo.cpp
    - .a.out

2. What is segmentation fault?

    -   記憶體錯誤