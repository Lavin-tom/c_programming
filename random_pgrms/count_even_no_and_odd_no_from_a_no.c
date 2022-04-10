//count how many even and odd no in a no

#include<stdio.h>
int main()
{
	int n,l,count_e=0,count_o=0;
	printf("enter the no\n");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		l=n%10;
		if(l%2==0)
			count_e++;
		else
			count_o++;
		n=n/10;
	}
	printf("odd nos in %d : %d\n",temp,count_o);
	printf("even nos in %d : %d\n",temp,count_e);
}
