//wap to compare size of two array
#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int b[]={6,7,9,10,11};

	printf("size of a %d\n",sizeof(a)/sizeof(int));
	printf("size of b %d\n",sizeof(b)/sizeof(int));

	if(sizeof(a)==sizeof(b))
	printf("both array are same in size\n");
	else
		printf("array are in different size\n");

}
