//wap to find the binary value of float using pointers
//indirectly use bitwise operator for printing the binary

#include<stdio.h>
int main()
{
	float f;
	int *p;
	printf("enter the float value\n");
	scanf("%f",&f);
	p=&f;

	for(int i=(sizeof(int)*8-1);i>=0;i--)  
	{
		printf("%d",(*p)>>i&1);
	}
}
