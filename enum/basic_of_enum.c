//enum - Enumeration

#include<stdio.h>
int main()
{
	enum day {sun,mon,tue,wed=7,thu,fri,sat};
	printf("%d\n",sun); //by default first value take 0 and next value is 0+1
	printf("%d\n",thu);
}
