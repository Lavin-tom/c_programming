//compare two strings
#include<stdio.h>
int main()
{
	char string1[20],string2[20];
	int i,length=0,count=0;
	printf("enter string\n");
	scanf("%s %s",string1,string2);

	for(i=0;string1[i];i++)
		length++;

	for(i=0;string1[i];i++){
		if(string1[i]==string2[i])
			count++;
	}
	if(length==count)
		printf("%s and %s are same\n",string1,string2);
	else
		printf("%s and %s are not same\n",string1,string2);


}
