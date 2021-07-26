#include <stdio.h>
#define SWAP(x, y) x ^= y ^= x ^= y
int main() {
  int i = 3, j = 5;
  printf("%d %d\n", i, j);
  SWAP(i, j);
  printf("%d %d\n", i, j);
  SWAP(i, i);
  printf("%d\n", i);
}
