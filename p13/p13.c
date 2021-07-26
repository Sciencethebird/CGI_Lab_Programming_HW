// header.h
#include <stdio.h>
static int val = 0;
void set(int x);

// impl.c
#include "header.h"
void set(int x) { 
  val = x;
}

// main.c
#include "header.h"
int main() {
  set(100);
  if (val == 100) 
    printf("val == 100\n");
  else
    printf("val != 100\n");
}
