//reverse a string without using a second string
#include<stdio.h>
int main()
{
	char string[20];
	int i,j,length=0,temp;
	printf("enter string\n");
	scanf("%s",string);

	for(i=0;string[i];i++)
		length++;

	for(i=0,j=length-1;i<=length/2;i++,j--){

		//swapping using temp variable
		temp=string[j];
		string[j]=string[i];
		string[i]=temp;
	}
		printf("%s\n",string);


}
