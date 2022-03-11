//memcpy 

#include<stdio.h>
#include<string.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int b[5],i;

	//predefined function of string
	memcpy(b,a,sizeof(a));

	for(i=0;i<5;i++)
 		printf("%d ",b[i]);
}
