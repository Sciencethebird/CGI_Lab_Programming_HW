#include <stdio.h>
int *bar(int t) {
  int i = t;
  int *temp = &i;
  printf("mem loc of t : %p\n", &t);
  printf("mem loc of i : %p\n", &i);
  //printf("mem loc of t : %p\n", &t);
  //printf("temp is %p, (*temp) is %d\n", temp, *temp);
  return temp;
}

void foo(int a, int b) {
  int i;
  int *temp = &i;
  printf("mem loc of a : %p\n", &a);
  printf("mem loc of b : %p\n", &b);
  printf("mem loc of i : %p\n", &i);
  *temp = a + b; 
}

int main() {
  int *a;
  a = bar(10);
  printf("a is %p, (*a) is %d \n", a, *a);
  foo(10, 20);
  printf("a is %p, (*a) is %d \n", a, *a);
}
