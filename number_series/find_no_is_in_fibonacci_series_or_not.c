//wap to find the input value is in fibonacci series 
//if value not in series print not in the series

#include<stdio.h>
void fibonacci(int n);
int main()
{
	int n;
	printf("enter the no\n");
	scanf("%d",&n);

	fibonacci(n);
}

void fibonacci(int n)
{
	int a=0,b=1,f=0,i,flag=0,count=2;

	//already printing 0 and 1 so we need to print only remaining
	for(i=0;i<=f;i++)
	{
		f=a+b;
		count++;
		if(f==n)
		{
			flag=1;
			printf("%d is in this series at position %d\n",n,count);
		}
		a=b;
		b=f;
	}
	if(flag==0)
	printf("%d is not in the series\n",n);

}
