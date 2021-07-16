#include <stdio.h>
#include <string.h>
int main(void) {
    char start[] = "this is a string";
    start[4] = '\0';
    printf("%s\n", start);
}