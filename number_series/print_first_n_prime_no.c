#include<stdio.h>
void print_prime(int n);
int main()
{
	int n;
	printf("enter the range\n");
	scanf("%d",&n);

	print_prime(n);
	printf("\n");
}
void print_prime(int n)
{
	int i,j,count=0;
	for(j=2;j<n;j++)
	{
		count=0;
		for(i=2;i<n;i++)
		{
			if(j%i==0)
				count++;
		}
		if(count==1)
		printf("%d ",j);

	}
}
