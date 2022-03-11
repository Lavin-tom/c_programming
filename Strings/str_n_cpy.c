//predefined function for copy a content of string upto n values
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	int n;
	printf("enter the first string\n");
	scanf("%s",a);
	printf("enter the no\n");
	scanf("%d",&n);

	//predefined function for copy the string value upto n 
	strncpy(b,a,n);

	printf("after copying the string will be %s\n",b);
}
