#include<unistd.h>
#include<stdlib.h>
int randomNoGen()
{
	int n;
	for(int i=1;i<=1000;i++)
        {
				//predef function for generate random no
                n=rand()%1000+1;
        }
	return n;
}