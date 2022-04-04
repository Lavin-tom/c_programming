//if def

#include<stdio.h>
#define flag
int main()
{

	int a=10,b=20;
#ifdef flag 			//if flag is defined then following statement execute
	a=a*5;
	b=b*5;
#endif
	printf("value of a:%d and b:%d\n",a,b);
}
