Problem 23 Stack Memory
===

Note
---

-   This problem demonstrates how stack memory works
    -   [Reference](https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/)
-   This problem use pointer to directly access the content on stack memory, 
    it's not a good practice, but it shows how stack works.

- Stack Review
    ![](https://blog.gtwang.org/wp-content/uploads/2017/03/memory-layout-of-c-program-diagram-20170301-1024x962.png)
    - When a function is called, the stack is used, for example:
    ```c
    foo(int a, int b){
        int c;
    }
    ```
    - the stack will look something like this:
    ```
    +-----+ 
    |  a  | <-- 0x7ffee226233c
    +-----+
    |  b  | <-- 0x7ffee2262338
    +-----+
    |  c  | <-- 0x7ffee2262334
    +-----+ 
    |     | <-- stack pointer
    +-----+
    ```
    - after the function is finished (return), the stack pointer points back to the starting location. The memory will look something like this:
    ```
    +-----+ 
    |  a  | <-- stack pointer
    +-----+
    |  b  | <-- 0x7ffee2262338
    +-----+
    ```
    - it just moves the stack pointer, the content of the memory will remain the same if there's no other function call or something that allocates the stack memory. So technically, you can access "function variables" by directly dereferecing the stack memory location.



- Output Explained
    ```c
    #include <stdio.h>
    int *bar(int t) {
      int i = t; // copies the value of t
      int *temp = &i; // temp points to the second place of stack
      printf("temp is %d, (*temp) is %d\n", temp, *temp);
      // temp is -400977096, (*temp) is 10
      return temp;
    }

    void foo(int a, int b) {
      int i; 
      int *temp = &i;
      *temp = a + b; 
    }

    int main() {
      int *a;

      a = bar(10); // 'a' now points to the second place of stack
      printf("a is %d, (*a) is %d \n", a, *a); // a is -400977096, (*a) is 10 

      foo(10, 20); 
      // since 'a' still points to the second place of stack, the value of *a becomes 20 after the function call.
      // since the value of 2nd place on stack is replace by value of the arg "int b" after calling "foo()"
      printf("a is %d, (*a) is %d \n", a, *a); // a is -487238856, (*a) is 20 
    }

    ```

Output
---
```sh
temp is -374549704, (*temp) is 10
a is -374549704, (*a) is 10 
a is -374549704, (*a) is 20 
```