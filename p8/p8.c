#include <stdio.h>
int main() {
  FILE *fp = fopen("file", "w");
  fputs("hello\n", fp);
  fputs("hello", fp);
  fputs("hello\n", fp);
  fclose(fp);
}
