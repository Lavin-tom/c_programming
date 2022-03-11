//wap to find the given string is substring or not 
//using predefind function and user defined functions
//using strrstr it gives starting address of substring 

#include<stdio.h>
//we use predefined functions of string so string.h header file is needed
#include<string.h>
int strlen_user(char *a);
void strstr_user(char *a,char *b,int length);
int main()
{
	char a[10],b[10];
	int value,start,r,i,length,lengthofb;
	printf("enter the string a\n");
	scanf("%s",a);
	printf("enter the second string\n");
	scanf("%s",b);

	//predefined function for find the occurance of chara in a string
	r=strstr(a,b);
	start=a;
	value=((r-start)/sizeof(a[0]));
	if(r==0)
		printf("using predefined function %s is not a substring of %s\n",b,a);
	else
	printf("using predefined function %s is a substring of %s\n",b,a);
	lengthofb=strlen_user(b);
	strstr_user(a,b,lengthofb);
}

//user function for find the length of string
int strlen_user(char *a)
{
	int i;
	for(i=0;a[i];i++);
	return i;
}

//user function for find the last occurance
void strstr_user(char *a,char *b,int lengthofb)
{
	int i,count=0,j;

	//compare the value of a[i] to b[i] using a for loop
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
		{
			if(a[i]==b[j])
				count++;
		}
	}

	//checking the count value to length of string b
	if(count==lengthofb)
		printf("using user defined function %s is a substring of %s\n",b,a);
	else
		printf("using user defined function %s is not a substring of %s\n",b,a);
}
