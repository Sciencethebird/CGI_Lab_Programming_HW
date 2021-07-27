#include <stdio.h>
int main() {
  char i = 1;
  char j;
  scanf("%d", &j); // scanf puts a 4 byte int into 1 byte char, causing stack memory overwrite
  if (i & j)
    printf("yes.\n");
  else
    printf("no.\n");
}
