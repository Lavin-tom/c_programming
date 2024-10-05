//By default compiler consider structure padding, we can use pragma pack to avoid
//if we add #pragma pack(push,1) -> it will consider as a multiple of 1
//#pragma pack(push, 2) -> it will be multiple of 2
#include <stdio.h>

#pragma pack(push, 1) // Align members on 1-byte boundaries
struct StudentPacked1 {
    char a;      // 1 byte
    int b;       // 4 bytes
    float c;     // 4 bytes
};
#pragma pack(pop) // Restore previous packing alignment

#pragma pack(push, 2) // Align members on 2-byte boundaries
struct StudentPacked2 {
    char a;      // 1 byte
    int b;       // 4 bytes
    float c;     // 4 bytes
};
#pragma pack(pop) // Restore previous packing alignment

#pragma pack(push, 4) // Align members on 4-byte boundaries
struct StudentPacked4 {
    char a;      // 1 byte
    int b;       // 4 bytes
    float c;     // 4 bytes
};
#pragma pack(pop) // Restore previous packing alignment

int main() {
    printf("Size of structure with 1-byte packing: %zu bytes\n", sizeof(struct StudentPacked1)); //9
    printf("Size of structure with 2-byte packing: %zu bytes\n", sizeof(struct StudentPacked2)); //10
    printf("Size of structure with 4-byte packing: %zu bytes\n", sizeof(struct StudentPacked4)); //12

    return 0;
}
