//jumping numbers
#include<stdio.h>
int main()
{
	int n,sum,j,k,l;
	printf("enter n\n");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		j=i;
		while(j>0)
		{
			k=j%10;
			l=j/10;
		//	while(l>9)
		//	{

		//		m=l%10;
		//		l=l/10;
		//	}
			if(k==(l%10)+1|| k==(l%10)-1)
			       sum=i;	
			j=j/10;
		}
	}
	printf("%d\n",sum);
}
