// File 1: main.c

#include <stdio.h>

// Declare global variable count
extern int count;

int main() {
  // Access the global variable count
  printf("The value of count is: %d\n", count);
  return 0;
}
