//count alphabet numbers special characters from a string
#include<stdio.h>
#include<string.h>
int main()
{
	char string[10];
	int str_length,count_alpha=0,count_no=0,count_spcl=0;

	printf("enter string\n");
	scanf("%s",string);

	str_length=strlen(string);

	for(int i=0;i<str_length;i++)
	{
		if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122))
			count_alpha++;
		else if(string[i]>=48 && string[i]<=57)
			count_no++;
		else
			count_spcl++;
	}
	printf("total characters: %d\n",str_length);
	printf("alphabets: %d\n",count_alpha);
	printf("numbers: %d\n",count_no);
	printf("special characters: %d\n",count_spcl);
}
