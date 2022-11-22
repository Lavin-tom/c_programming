//swap 4 bytes 
#include<stdio.h>
int main()
{
	long int a=0xabababab;
	long int b=0xf0f0f0f0;
	long int c=a-b;
	//convert into hexadecimal
	printf("%x\n",c);
}
