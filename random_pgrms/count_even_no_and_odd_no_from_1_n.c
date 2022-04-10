//count how many even and odd no in 1 to n range

#include<stdio.h>
int main()
{
	int n,l,count_e=0,count_o=0;
	printf("enter the no\n");
	scanf("%d",&n);
	int temp=n;
	
	if(n%2==0){
		count_e=n/2;
		count_o=n/2;
	}
	else
	{
		n=n-1;
		count_e=n/2;
		count_o=count_e+1;
	}
	printf("total no of odd nos from 1 to  %d : %d\n",temp,count_o);
	printf("total no of even nos from 1 to  %d : %d\n",temp,count_e);
}
