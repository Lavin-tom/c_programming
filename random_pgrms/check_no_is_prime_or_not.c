//check no is prime or not
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter n\n");
	scanf("%d",&n);
	i=n/2;
	while(i>=2)
	{
		if(n%i==0)
			count++;
		i--;
	}
	if(count==0)
		printf("no is prime\n");
	else
		printf("no is not prime\n");
}
