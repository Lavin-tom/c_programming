// File 1: main.c

#include <stdio.h>
#include "extern_storage_second.c"

// Declare global variable count
extern int count;

int main() {
  // Access the global variable count
  printf("The value of count is: %d\n", count);
  return 0;
}
