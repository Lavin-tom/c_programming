//pgrm to print 2d array

#include<stdio.h>
int main()
{
char string[4][10];
int i;
for(i=0;i<4;i++)
{
		scanf("%s",string[i]);
}
for(i=0;i<4;i++)
{
		printf("%s\n",string[i]);
}
}
