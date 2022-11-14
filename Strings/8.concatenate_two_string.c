//concatenate two string
#include<stdio.h>
int main()
{
	char string1[20],string2[20];
	int i,j,length=0,temp;
	printf("enter string\n");
	scanf("%s %s",string1,string2);

	for(i=0;string1[i];i++)
		length++;

	for(i=length,j=0;string2[j];j++,i++)
		string1[i]=string2[j];

	//adding null at the end
	string1[i]='\0';
	printf("%s\n",string1);


}
