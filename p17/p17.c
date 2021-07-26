#include <stdio.h>
int main() {
  int i = -13; 
  // ...00001101 ----2's complement------> ...11110011 ---shift----> ....111001
  // .....111001 ----2's complement-----> ...000111 = -7
  printf("%d\n", i >> 1);
  printf("%d\n", i / 2);
  if ((i / 2) == (i >> 1))
    printf("yes\n");
  else
    printf("no\n");
}
