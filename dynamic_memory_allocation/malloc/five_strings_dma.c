//by using dynamic memory allocation adding 5 string 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p[5];
	int i,n;

	printf("enter the maximum character in a string\n");
	scanf("%d",&n);

	for(i=0;i<5;i++)
	p[i]=(char*)malloc(n*sizeof(char));  

	printf("enter the string\n");
	for(i=0;i<5;i++)
	scanf("%s",p[i]);

	printf("strings are \n");
        for(i=0;i<5;i++)
	printf("%s\n",p[i]);	

}
