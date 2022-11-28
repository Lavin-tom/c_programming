//wap to find no is power of two
#include<stdio.h>
int main()
{
	int n,r=0;
	printf("enter n\n");
	scanf("%d",&n);
	
	if(n&n-1==0)
		r=1;
	(r)?(printf("power of two\n")):(printf("not power of two\n"));
}
