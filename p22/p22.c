#include <stdio.h>
int main() {
  int type = 10;
  int i = 10;
  switch (type) {
  case 1:
    i = 0;
    printf("i = %d\n", i);
    break;
  case 2:
    i = 4;
    printf("i = %d\n", i);
    break;
  default:
    i = 5;
    printf("i = %d\n", i);
    break;
  }
}
