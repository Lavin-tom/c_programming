//by default all global variable storage class is static 
#include <stdio.h>

// Global variable
int globalVar = 0;

void func1() {
  // Modifying the global variable
  globalVar++;
  printf("Inside func1: globalVar = %d\n", globalVar);
}

void func2() {
  // Modifying the global variable
  globalVar++;
  printf("Inside func2: globalVar = %d\n", globalVar);
}

void func3() {
  // Static variable
  static int staticVar = 0;
  // Modifying the static variable
  staticVar++;
  printf("Inside func3: staticVar = %d\n", staticVar);
}

int main() {
  func1(); // Output: Inside func1: globalVar = 1
  func2(); // Output: Inside func2: globalVar = 2
  func3(); // Output: Inside func3: staticVar = 1
  func3(); // Output: Inside func3: staticVar = 2
  return 0;
}