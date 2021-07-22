#include <stdio.h>
int main() {
  FILE *fp = fopen("file", "wb");
  for (int i = 0; i < 256; i++)
    fputc(i, fp);
  fclose(fp);
  fp = fopen("file", "rb");
  int count = 0;
  char c;
  while ((c = fgetc(fp)) != EOF){
    printf("%d, %d\n", c, count);
    count++;
  }
  printf("count = %d\n", count);
  printf("%d\n", EOF);
}