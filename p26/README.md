Problem 26 Macros and Function Pointer
===

Note
---
- Function Pointer
    - [example](https://www.geeksforgeeks.org/function-pointer-in-c/)
    ```c
    #include <stdio.h>
    // A normal function with an int parameter
    // and void return type
    void fun(int a)
    {
    	printf("Value of a is %d\n", a);
    }

    int main()
    {
    	// fun_ptr is a pointer to function fun()
    	void (*fun_ptr)(int) = &fun;

    	/* The above line is equivalent of following two
    	void (*fun_ptr)(int);
    	fun_ptr = &fun;
    	*/

    	// Invoking fun() using fun_ptr
    	(*fun_ptr)(10);

    	return 0;
    }

    ```
- Macro '#' and "##"
    - '#' means replace target with "string" (with double quote)
    ```c
    #define mkstr(s) #s
    printf(mkstr(geeksforgeeks)); // printf("geeksforgeeks");
    ```
    - "##" means replace target with str (plain text replacement)
    ```c
    #define concat(a, b) a##b
    int xy = 30;
    printf("%d", concat(x, y)); // concat(x, y) = xy
    ```
Output
---
- the translated output is:
```c
std::map<std::string, void(*)()> m;
void cmd_quit() { printf("cmd: ""quit""\n"); };
void cmd_help() { printf("cmd: ""help""\n"); };
int main() {
  m["quit"] = cmd_quit;;
  m["help"] = cmd_help;;
  std::string cmd;
  while (getline(std::cin, cmd)) {
    if (m.count(cmd)) (*m[cmd])();
    else printf("Not support %s\n", cmd.c_str());
  }
}
```
- program output
```c
> quit
cmd: quit
> help
cmd: help
> test
Not support test
```

- When to use it
    -   this is useful when you have a lot of similar functions and they varies a little from each other. 
        
