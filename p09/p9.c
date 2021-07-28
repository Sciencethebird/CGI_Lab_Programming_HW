#include <stdio.h>
int main() {
  FILE *fp = fopen("file", "wb");
  char temp = 255;
  printf("%d\n", temp+1);
  for (char c = 0; c < 256; c++) {
    printf("%d\n", c);
    //fputc(c, fp);
  }
  fclose(fp);
}
