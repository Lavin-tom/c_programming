//find length of string
#include<stdio.h>
int main()
{
	char string1[20],string2[2];
	int length=0,i;
	printf("enter string\n");
	scanf("%s",string1);

	for(i=0;string1[i];i++){
		string2[i]=string1[i];
	}
	string2[i]='\0';
	printf("string2: %s\n",string2);


}
