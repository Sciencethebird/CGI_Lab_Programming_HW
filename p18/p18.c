#include <stdio.h>
#include <stdlib.h>

// -2,147,483,647 ~ 2,147,483,647
int compare(const void *a, const void *b) {
  printf("%d, %d, %d \n", *(int *)a , *(int *)b, (*(int *)a - *(int *)b));
  return (*(int *)a - *(int *)b);
}

int main() {
  int values[] = {-2147483640, 50, 100};
  qsort(values, 3, sizeof(int), compare);
  for (int n = 0; n < 3 ; n++)
     printf("%d ", values[n]);
}
