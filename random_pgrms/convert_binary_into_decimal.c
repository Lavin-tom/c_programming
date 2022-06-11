//convert binary to decimal no

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,k=1,sum=0;
	printf("enter the binary no\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		int l=n%10;
		if(l==0 || l==1)
		{
			int m=l*k;
			sum=sum+m;
			n=n/10;
			k=k*2;
		}
		else
		{
			printf("enter valid binary no\n");
			exit(0);
		}
	}
	printf("equalent decimal: %d\n",sum);
	printf("equalent hexadecimal: %x\n",sum);
	printf("equalent octal: %o\n",sum);
}
