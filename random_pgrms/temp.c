//wap in if else condition
#include<stdio.h>
int main()
{
	int num;
	printf("enter num\n");
	scanf("%d",&num);
	
	if(num>0)
		printf("%d: is a positive integer\n",num);
	else
		printf("%d: is a negative integer\n",num);
}
