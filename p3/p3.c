#include <stdio.h>
#include <string.h>
int main() {
  char string[] = "this is a string";
  char *start;
  start = string;
  start = strtok(start, " ");
  //printf("string: %s\n", string);
  while (start != NULL) {
    printf("%s\n", start);
    start = strtok(NULL, " ");
  }
  start = string;
  printf("string: %s\n", string);
  start = strtok(start, " ");
  while (start != NULL) {
    printf("%s\n", start);
    start = strtok(NULL, " ");
  }
  //printf("%s\n", string);
}