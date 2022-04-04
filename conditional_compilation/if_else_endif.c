//if else endif

#include<stdio.h>
#define flag 4
int main()
{

	int a=10,b=20;
#if flag>5 			//if value of flag is less than 5.then following statement execute
	a=a*5;
	b=b*5;
	printf("value of flag is greater than 5. a: %d,b: %d\n",a,b);
#else
	a=a*10;
	b=b*10;
	printf("value of flag is less than 5. a:%d and b:%d\n",a,b);
#endif
}
