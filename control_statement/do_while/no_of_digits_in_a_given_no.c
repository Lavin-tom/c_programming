//wap to find no of digits in a given no
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter n\n");
	scanf("%d",&n);
	do
	{
		count++;
		n/=10;
	}while(n>0);
	printf("count:%d\n",count);
}
