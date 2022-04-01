//typedef with structure

#include<stdio.h>
typedef struct A
{
	int x;
	int y;
}st;  //st is not a structure variable. it is the alias name for structure A

int main()
{
	st v={10,20};
	printf("%d %d\n",v.x,v.y);
}
