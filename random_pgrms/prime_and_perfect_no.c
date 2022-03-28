//prime and perfect no 

#include<stdio.h>
void print_id(char *id);
void prime_3(int*);
void perfect_no_2(int *);
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	print_id("V21OE3L1\n");
	printf("first 3 prime no starting from 5\n");
	prime_3(&n);
	printf("\nfirst 2 prime no starting from 5\n");
	perfect_no_2(&n);
}

//printing id using do while loop
void print_id(char *id)
{
	int i=0;
	do
	{
		printf("%c",id[i]);
		i++;
	}
	while(id[i]);
}

//code for print first 3 prime nos
void prime_3(int *num)
{
	int n=*num;
	int i,j,count=0,c=0;
	for(i=n;i<100;i++)
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
void perfect_no_2(int *num)
{
	int n=*num;
	int i,j,sum,count=0;

	for(i=n;i<50;i++)
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

