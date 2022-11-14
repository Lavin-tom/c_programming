//copy string in reverse order
#include<stdio.h>
int main()
{
	char string1[20],string2[20];
	int length=0,i,j;
	printf("enter string\n");
	scanf("%s",string1);

	for(i=0;string1[i];i++)
		length++;

	for(i=length-1,j=0;i>=0;i--,j++){
		string2[j]=string1[i];
	}
	string2[length]='\0';
	printf("string2: %s\n",string2);


}
