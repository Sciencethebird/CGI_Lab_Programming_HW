#include <stdio.h>
#include <assert.h>
#include <string.h>
int main() {
  char filename[80];
  //char *fn = strtok(filename, "\n");
  printf("input file name: ");
  fgets(filename, 79, stdin);
  
  // to avoid error, you need to remove the '\n' in the end of your input string
  char *fn = strtok(filename, "\n");

  FILE *fp = fopen(filename, "r");
  assert(fp != NULL); // fp == NULL if file reading fails, or simply, file not found
  // try assert(fp != NULL);, there's no try catch in C btw
  fclose(fp);
}