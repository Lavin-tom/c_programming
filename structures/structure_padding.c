//structure padding
#include<stdio.h>
struct student1 
{
	int x; 		//4 bytes
	char y;		//1 byte + 3 holes
	int z; 		//4 bytes 
	char a;		//1 byte + 3 holes		size: 16
};

//one of the method to avoid structure padding
struct student2
{
	int x;		//4 bytes
	int z;		//4 bytes
	char y;		//1 byte
	char a;		//1 byte + 2 holes		size: 12 
};
int main()
{
	struct student1 v; 
	struct student2 w;
	printf("size of structure-1 without arrangement is %ld\n",sizeof(v));
	printf("size of structure-2 with proper arrangement of variable: %d\n",sizeof(w));
}