#include <stdio.h>
#include <assert.h>
int main() {
  printf("file: %s \n", __FILE__);
  FILE *fp = fopen(__FILE__, "r");
  assert(fp != NULL);
  int c;
  while ((c = fgetc(fp)) != EOF)
    putchar(c);
  fclose(fp);
}
