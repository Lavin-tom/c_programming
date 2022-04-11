//wap to print 1 to n using do while loop
//do while loop is an exit control loop 
//which means even if the condition is not true. we got atleast one output

#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter the no\n");
	scanf("%d",&n);

	do
	{
		printf("%d ",i);
		i++;
	}
	while(i<=n);
}
