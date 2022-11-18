//extracting no from a string

#include<stdio.h>
int main()
{
	char string[50];
	int sum=0;
	printf("enter string\n");
	scanf("%[^\n]s",string);
	
	for(int i=0;string[i];i++){
		if(string[i]>=48 && string[i]<=58)
			sum=((string[i]-48)*10)+sum;
	}
	printf("%d\n",sum);
}
