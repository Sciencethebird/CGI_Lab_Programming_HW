#include <stdio.h>

// #define concat(a, b) a#b // a"b"
// #define concat(a, b) a##b // ab
// #define concat(a, b) #a#b // "a""b"
// #define concat(a, b) ##ab // error, ## cannot appear at start of macro
// #define concat(a, b) ab // error

int main(void)
{
    int xy = 30;
    printf(concat(a, b));
    return 0;
}