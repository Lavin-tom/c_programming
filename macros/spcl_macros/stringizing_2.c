//stringizing 
//example 2

#include<stdio.h>
//#define print(k) printf("value of a= %d\n",k);
#define print(k) printf("value of "#k"=%d\n",k);
int main()
{
	int a=10,b=20,c=30;

	print(a);	//printf("value of a= %d\n",a);
	print(b);	//printf("value of a= %d\n",b);	
	print(c);	//printf("value of a= %d\n",c);
}

//our expected output 
//printf("value of a=%d\n",a);
//printf("value of b=%d\n",b);
//printf("value of c=%d\n",c);

//to get change the define value 
