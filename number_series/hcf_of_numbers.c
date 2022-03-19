//wap to find the hcf of two nos

#include<stdio.h>
int main()
{
	int f,s,hcf,i;
	printf("enter the numbers\n");
	scanf("%d %d",&f,&s);

	
	for(i=1;i<=f && i<=s;i++)
	{
		if(f%i==0 && s%i==0)
			hcf=i;
	}
	printf("HCF of %d and %d is %d\n",f,s,hcf);
}
