//dynamic memory allocation of a string
//malloc

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	char *p;
	printf("enter the no of characters\n");
	scanf("%d",&n);
	
	//size of array is depends on the n value entered
	p=(char*)malloc(n*sizeof(char));  //p=n*1
	
	printf("enter the string\n");
	scanf("%s",p);
	printf("your string is :%s\n",p);
	

}
