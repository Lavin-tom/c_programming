//wap to find the lcm of two nos

#include<stdio.h>
int lcm(int f,int s);
int main()
{
	int f,s,max;
	printf("enter the numbers\n");
	scanf("%d %d",&f,&s);

	max= (f>s) ? f : s;
	
	while(1)
	{
		if(max % f ==0 && max %s==0)
		{
			printf("LCM of %d and %d is %d\n",f,s,max);
			break;
		}
		++max;
	}
}
