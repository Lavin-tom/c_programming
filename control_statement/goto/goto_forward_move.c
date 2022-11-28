//forward move by goto
#include<stdio.h>
int main()
{
	goto abc;
	printf("first statement\n");
abc:
	printf("second statement,first statement skipped\n");
}
