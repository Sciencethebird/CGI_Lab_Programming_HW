#include <stdio.h>
int main() {
  unsigned int ui = 2147483647; //4294967295

  unsigned int neg = -1;
  printf("%u\n", neg);

  if (ui + 1 > 0)
    printf("ui + 1 > 0\n"); 
  if (ui + 1 < -1)
    printf("ui + 1 < -1\n");
}
