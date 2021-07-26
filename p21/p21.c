#include <stdio.h>
int main() {
  int i = 3;
  i = i++ + ++i;
  printf("%d\n", i);
}
