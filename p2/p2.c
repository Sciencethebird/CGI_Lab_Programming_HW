#include <stdio.h>
int division_v1(int *a, int *b) {
  return *a/*b /* a simple division v1 */;
}

int division_v2(int *a, int *b) {
  return *a/*b/*a *a/*b simple division v2 */;
}
int main(void) {
  int a = 6, b = 2;
  printf("%d\n", division_v1(&a, &b));
  printf("%d\n", division_v2(&a, &b));
}