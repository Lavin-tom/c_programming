//store value 4321 in 1234 location 

#include <stdio.h>
typedef int integer;
int main() 
{
    integer *ptr;           // Declare a pointer variable
    ptr = (integer *)1234;  // Assign the memory location 1234 to the pointer variable
    *ptr = 4321;            // Store the value 4321 in the memory location pointed to by ptr
    return 0;
}
