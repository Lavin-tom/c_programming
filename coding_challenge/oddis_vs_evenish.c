//oddish vs evenish
//if sum of all the digits is odd it is oddish
//else evenish
#include<stdio.h>
int main()
{
	int n,sum=0,d;
	printf("enter n\n");
	scanf("%d",&n);

	while(n>0){
		d=n%10;
		sum=sum+d;
		n/=10;
	}
	if(sum%2==0)
		printf("evenish\n");
	else
		printf("oddish\n");
}
