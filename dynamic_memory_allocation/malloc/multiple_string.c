//by using dynamic memory allocation adding n no of strings 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **dp;
	int i,n,max;

	printf("enter the no of strings to be added\n");
	scanf("%d",&n);

	printf("enter the maximum character in an array\n");
	scanf("%d",&max);

	dp=(char**)malloc(n*sizeof(char*));
      	for(i=0;i<n;i++)
	dp[i]=(char*)malloc(max*sizeof(char));	

	printf("\nenter the string\n");
	for(i=0;i<n;i++)
	scanf("%s",dp[i]);

	printf("\nstrings are \n");
        for(i=0;i<n;i++)
	printf("%s\n",dp[i]);	

}
