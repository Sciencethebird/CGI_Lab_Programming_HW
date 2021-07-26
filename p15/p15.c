#include <stdio.h>
int main() {
    
  int i = 2147483647; //range = [-2147483647, 2147483647]
  unsigned int ui = 2147483647; // range = [0, 4294967295]

  //printf("%d\n", 2147483647 +1);
  //printf("%u\n", 2147483647 +1);

  if (i + 1 < 0)     
    printf("i + 1 < 0\n");   
  if (ui + 1 > 0)
    printf("ui + 1 > 0\n");
  if (ui + 1 > i + 1)
    printf("ui + 1 > i + 1\n");
}
