//total decording messages
//not yet complete
#include<stdio.h>
int main()
{
	int n,count=0,m;
	printf("enter n\n");
	scanf("%d",&n);

	while(n>0)
	{
		if(n>26 && n<100)
		{
			count++;
			break;
		}
		else
		{
		n=n/10;
		count++;
		}
	}
	printf("%d\n",count);
}
