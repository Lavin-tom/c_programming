//multiplication using macros
//grouping in macros is nedded to get exact result

#include<stdio.h>
//#define mul(a,b) a*b
#define mul(a,b) (a)*(b) //change to get actual result
int main()
{
	int a=8,b=5,c;

	c=mul(a+2,b+3); //expected output is 80 but actual output is 21.because of not grouping
	printf("product is %d\n",c);
}
