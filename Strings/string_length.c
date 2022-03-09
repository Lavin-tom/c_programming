//wap to find the length of string without predefined functions

#include<stdio.h>
int main()
{
	char a[10];
	int i;
	printf("enter the string\n");
	scanf("%s",a);

	for(i=0;a[i];i++);  //for loop repeat until the a[i]=0, every string is end with '\0'
				//ascii value of \0 is 0, condition fail
	printf("length of string %s is %d\n",a,i);
}
