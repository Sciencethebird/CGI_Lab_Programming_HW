#include <stdio.h>
#define inc(x) ((x)++)
#define square(x) (x * x)
int main() {
  int i = 3, j = 4;
  printf("%d\n", square(i + j));
  printf("%d %d\n", square(inc(i)), i);
}
