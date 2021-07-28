Problem 13 include & static
===

Note
---
- Compile C program with multiple souce file
    -   basically you need to compile all *.c files
    - `gcc -o a.out impl.c main.c && ./a.out `
    - [Reference](https://www.linuxtopia.org/online_books/an_introduction_to_gcc/gccintro_11.html)

- Why we need `static`
    -   [Reference](https://www.itread01.com/content/1547705175.html)
    -   Two important properties of `static`
        1. static keep a variable/function in scope
            -   if you create a static var/func in function, it's only visible in that function
            -   if you create a static var/func in other source file, it's only visible in that file
        2. static keeps the value
            -   I think you know this property pretty well

- How include "xxx.h" works
    - remember in cherno's video, including header files are literally copying and pasting header files into target files.

- How to use the variable in other file (`extern`)
    - like above, if you want to keep a var/func to a certain scope, you use `static`, but what if you want to use the variable in other scope/file?
        - in this case, you use the keyword `extern`, for example, your main.c want to access `int A` in A.c, simply add `extern int A` into your main.c to tell the compiler variable `A` is from another file.
    - [Reference](https://stackoverflow.com/questions/12728426/how-to-use-a-static-c-variable-across-multiple-files)
    

- Output Explained
    - the original file look like this   
    ```c
    // header.h
    #include <stdio.h>
    static int val = 0;
    void set(int x);

    // impl.c
    #include "header.h"
    void set(int x) { 
      val = x;
    }

    // main.c
    #include "header.h"
    int main() {
      set(100);
      if (val == 100) 
        printf("val == 100\n");
      else
        printf("val != 100\n");
    }
    ```
    - but the files can be translated into (after copy paste of including header files):
    ```c
    // impl.c
    #include <stdio.h>
    static int val = 0;
    void set(int x);

    void set(int x) { 
      val = x;
    }

    // main.c
    #include <stdio.h>
    static int val = 0;
    void set(int x);

    int main() {
      set(100);
      if (val == 100) 
        printf("val == 100\n");
      else
        printf("val != 100\n");
    }

    ```
    - See? there are two `val`, declared in different c file, one in impl.c, one in main. If you remove the `static` keyword, the compiler will find two declaration of `val`, and redeclaration error occurs.
    - `set(100)` does change the value of `val`, but it's the `val` in the impl.c, not the one in the main.c.
    -  The reason why `val != 100`  is because the `val` in the `printf` is the `val` in the main.c, not the `val` in the `set()`.


- How to make this code work?
    - If you want to access the `val` in `set()`, you need to chage to code to this:
    ```c
    // header.h
    #include <stdio.h>
    void set(int x);

    // impl.c
    #include "header.h"
    int val = 0; // move val declaration from hearer.h to here
    void set(int x) { 
      val = x;
    }

    // main.c
    #include "header.h"
    extern int val = 0;
    int main() {
      set(100);
      if (val == 100) 
        printf("val == 100\n");
      else
        printf("val != 100\n");
    }

    ```
    - First, you can't keep val declaration in header.h anymore, since if you remove the `static`, after preprocessor done with copy&past, the compiler will see the same variable declared in two different places, which is now allowed in C/C++. So the only way is to move the `val` into impl.c file
    - Second, in order to let the main.c file using the `val` in the impl.c, you need to add the keyword `extern`, in that way, compiler know the variable `val` comes from other source files.
    - the final output will be `val == 100` 

Output
---
```sh
val != 100 // since set() changes the val in impl.c, not the val in main.c
```