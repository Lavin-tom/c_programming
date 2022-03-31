//typedef
#include<stdio.h>
typedef int integer;  //create alias name for already existing datatype int 
typedef float floatpoint;
typedef char character;
int main()
	{
	integer x=10;
	floatpoint y=7.5;
	character z='a';

	printf("x=%d y=%f z=%c\n",x,y,z);
	}
