//combination of increment in printf
#include<stdio.h>
int main()
{
	int a=5;
	//in post increment operated from right to left
	printf("%d %d %d %d\n",++a,a++,++a,a++);		//9 , 7 , 9 , 5
	int b=10;
	//in pre increment latest value is assigned to all 
	printf("%d %d %d %d\n",b++,++b,++b,b++);			//13 14 14 10
}
