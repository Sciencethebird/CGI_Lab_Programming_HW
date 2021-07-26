#include <stdio.h>
#include <string.h>
int main() {
  char source[] = "This is a string.";
  char destination[4];
  int i = 5;
  strcpy(destination, source);
  printf("i is %d\n", i);
  printf("source is [%s]\n", source);
  printf("destination is [%s]\n", destination);
}
