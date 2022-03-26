//prime and perfect no 

#include<stdio.h>
void prime_3();
void perfect_no_2();
int main()
{
	int n;
	printf("V21OE3L1\n");

	printf("first 3 prime no starting from 5\n");
	prime_3();
	printf("\nfirst 3 prime no starting from 5\n");
	perfect_no_2();
}
//code for print first 3 prime nos
void prime_3()
{
	int i,j,count=0,c=0;
	for(i=5;i<100;i++)
	{
		if(count<3)
		{
			c=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				c++;
			}
			if(c==0)	
			{
				count++;
				printf("%d ",i);	
			}
		}
		else
			break;	
	}
}
//code for print first 3 no of perfect no
void perfect_no_2()
{
	int i,j,sum,count=0;

	for(i=5;i<50;i++)
	{
		if(count<2)
		{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
		printf("%d ",i);
		count++;
		}
		}
	}
	printf("\n");
}

