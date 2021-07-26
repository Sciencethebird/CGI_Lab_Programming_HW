#include <stdio.h>
struct csie {
  char c;   // 1
  short s;  // 2
  int i;    // 4
  double e; // 8
};  
struct ceis {
  char c;   // 1
  double e; // 8
  int i;    // 4
  short s;  // 2
};  
int main() {
  printf("csie = %d\n", sizeof(struct csie));
  printf("ceis = %d\n", sizeof(struct ceis));
}
