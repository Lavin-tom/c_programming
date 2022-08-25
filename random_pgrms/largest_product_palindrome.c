//largest product palindrome
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);

	int ln=n;
	int length=n*n,s;
	//find largest no if 2 is input 2*2=4 4-1=3 
	n=pow(10,n)-1;
	int m=n;
	
	//printf("%d %d\n",n,m);

	//loop start from higher no
	for(int i=n;i>0;i--)
	{
		for(int j=m;j>0;j--)
		{
			int sum=i*j;
			int k=sum,l;
			s=0;
			length=ln;
			//reverse no logic
			while(k>0)
			{
				l=k%10;
				length--;
				s=s*10+l;
				k=k/10;
			}
			//if reversed no and sum is same print the i and j value
			if(s==sum)
			{
			printf("i: %d j: %d\n",i,j);
			printf("sum: %d s: %d\n",sum,s);
			//break;
			//we want largest no, after printing just exit
			exit(0);
			}
		}
	}
}
