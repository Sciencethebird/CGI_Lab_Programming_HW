#include <stdio.h>
int main() {
  int a[10];
  printf("%p\n", a);    // 0x7ffeedfa4330
  printf("%p\n", a+3);  // 0x7ffeedfa4334
  printf("%p\n", &a+1); // 0x7ffeedfa4358
  if (a == &a)
    printf("yes\n");
  else
    printf("no\n");

  if (a + 1 == &a + 1)
    printf("yes\n"); 
  else
    printf("no\n"); 

  int *e;
  char *b;
  long long *c;
  char d[100];
  printf("%p, %p\n", e, e+1);
  printf("%p, %p\n", b, b+1);
  printf("%p, %p\n", c, c+1);
  printf("%p, %p\n", d, d+1);
  printf("%p, %p\n", &d, &d+1);
}
