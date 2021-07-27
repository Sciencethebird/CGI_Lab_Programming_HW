#include <stdio.h>
int *bar(int t) {
  int i = t;
  int *temp = &i;
  printf("temp is %d, (*temp) is %d\n", temp, *temp);
  return temp;
}

void foo(int a, int b) {
  int i;
  int *temp = &i;
  *temp = a + b; 
}

int main() {
  int *a;
  a = bar(10);
  printf("a is %d, (*a) is %d \n", a, *a);
  foo(10, 20);
  printf("a is %d, (*a) is %d \n", a, *a);
}
