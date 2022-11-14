//convert every letter into uppercase
#include<stdio.h>
int main()
{
	char string[20];
	int i;
	printf("enter string\n");
	scanf("%s",string);

	for(i=0;string[i];i++){
		if(string[i]>=97 && string[i]<=122)
			string[i]-=32;
	}
	printf("%s\n",string);


}
