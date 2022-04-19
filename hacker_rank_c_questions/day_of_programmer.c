//day of programmer
//hackerrank question

#include<stdio.h>
int main()
{
	int n,e=0,v=243,f=256;
	printf("enter the no\n");
	scanf("%d",&n);

	if(((n%4==0) && (n%100!=0)) || (n%400==0)){
		e=1;}
	int m=v+e;
	int c=f-m;
	printf("%d.09.%d\n",c,n);

}
