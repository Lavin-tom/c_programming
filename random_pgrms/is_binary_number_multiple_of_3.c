//is binary no multiple of 3
#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,k=2,m,i=0,b=0,flag=0;
	printf("enter n\n");
	scanf("%d",&n);

	while(n>0)
	{
		m=n%10;
		if(m==0 || m==1)
		{
		b=pow(k,i);
		sum=sum+(m*b);
		i++;
		n=n/10;
		}
		else
		{
			printf("not a proper binary no\n");
			flag=1;
			break;
		}
	}
	if(sum%3==0 && flag==0)
	{
		printf("equalent decimal value: %d\n",sum);
		printf("yes it is divisible by 3\n");
	}
	else if(flag==0 && sum%3!=0)
		printf("not divisible by 3\n");
	return 0;
}
