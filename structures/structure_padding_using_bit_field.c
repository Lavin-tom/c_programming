//avoiding structure padding using bit-field
#include <stdio.h>
struct Student {
    unsigned int a : 1;  // 1 bit
    unsigned int b : 4;  // 4 bits
    unsigned int c : 3;  // 3 bits
};

int main() {
    struct Student s1 = {0, 5, 3}; // a=0, b=5, c=3

    printf("Initial values: a: %u, b: %u, c: %u\n", s1.a, s1.b, s1.c);

    s1.a = 2; // Trying to assign a value greater than 1
    printf("After assigning 2 to a: a: %u\n", s1.a); // This will print 0 because binary 1 0

    s1.a = 3; // Trying to assign a value greater than 1
    printf("After assigning 2 to a: a: %u\n", s1.a); // This will print 1 because binary 1 1

    s1.a = 1; // Valid assignment
    printf("After assigning 1 to a: a: %u\n", s1.a); // This will print 1

    printf("Size of structure : %zu\n",sizeof(struct Student));

    return 0;
}
