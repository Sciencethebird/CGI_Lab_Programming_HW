#include <stdio.h>
#include <string.h>
int main(void) {
    char *start = "this is a string"; // assign a string constant to ptr
    start[4] = '\0'; // this causes segmentation fault since *ptr is a string contant 
    printf("char %c\n", start[2]);
    printf("%s\n", start);
}