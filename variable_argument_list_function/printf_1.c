//variable argument list function 
//printf

#include<stdio.h>
int main()
{
	int ret1,ret2;
	float x=7.5; 				
	ret1=printf("x=%f\n",x);		//x=7.500000\n 11
	ret2=printf("ret1=%d\n",ret1); 		//ret1=11\n   8
	
	printf("%d %d\n",ret1,ret2);		//11 8 
}
