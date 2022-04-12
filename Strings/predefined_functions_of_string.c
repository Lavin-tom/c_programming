//predefined functions of string
//some of the predefined function of strings

#include<stdio.h>
//headerfile of string
#include<string.h>
int main()
{
	char str[15],temp[15],temp2[15],l;
	printf("enter the string\n");
	scanf("%s",str);

	//strlen function used to find the length of string
	l=strlen(str);
	printf("\nstring length using strlen: %d\n",l);
	
	//strcpy function used for copy the content of one string to another
	strcpy(temp,str);
	printf("\nstring copied using strcpy: %s\n",temp);

	//strncpy function for copy the n no of element from the source string
	strncpy(temp2,str,4);
	printf("\n4 element is copied from source string using strncpy: %s\n",temp2);

	//strcmp for compare two string.if both are same return 0, otherwise either 1 or -1 depends on ascii value
	printf("\ncompare two strings using strcmp\n");
	int r=strcmp(str,temp);
	if(r==0)
		printf("strings are same\n");
	else
		printf("strings are not same\n");

	//strncmp for compare n element of both the string. if same return 0,otherwise either 1 or -1 depends on ascii value
	printf("\ncompare n elements of two strings using strncmp\n");
	int m=strncmp(str,temp2,4);
	if(m==0)
		printf("first 4 elements of strings are same\n");
	else
		printf("first 4 elements of strings are different\n");

	//strchr for find the first occurance of character in the string.if not present return 0
	char a;
        printf("enter the character to compare\n");
        scanf(" %c",&a);
	printf("\nfirst character presence using strchr\n");
	unsigned int k=strchr(str,a);
	if(k>0)
		printf("character %c first present in %s at %u\n",a,str,k);
	else
		printf("character %c is not present in the string %s\n",a,str);

	//strrchr for find the last occurance of character in the string.if not present return 0.if character present only one time both strchr and strrchr shows same 
	printf("\nlast occurance of character using strrchr\n");
	unsigned int x=strrchr(str,a);
	if(x>0)
		printf("character %c last present in %s at %u\n",a,str,x);
	else
		printf("character %c is not present in the string %s\n",a,str);

	//strcat for adding source string to the end of destination string.
	printf("\nconcatination of string using strcat\n");
	//strcat(destination,source);
	strcat(temp,str);
	printf("string will be %s\n",temp);

	//strncat for adding n no element to the destination string
	strncat(temp,str,2);
	printf("adding 2 elements to the end of string %s\n",temp);
}
