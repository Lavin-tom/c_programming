//structure padding
#include<stdio.h>
struct student 
{
	int x; //4 bytes
	char y;//1 bytes + 3 holes
	int z; //4 bytes 
	char a;//1 bytes + 3 holes
};
int main()
{
	struct student v;
	printf("size of structure is %ld\n",sizeof(v));
}


