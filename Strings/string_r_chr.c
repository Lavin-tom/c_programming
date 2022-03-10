//wap to locate a character in the string
//using predefind function and user defined functions
//using strrchr it gives last occurance 

#include<stdio.h>
//we use predefined functions of string so string.h header file is needed
#include<string.h>
int strlen_user(char *a);
void strrchr_user(char *a,char b,int length);
int main()
{
	char a[10],ch;
	int value,start,r,i,length;
	printf("enter the string a\n");
	scanf("%s",a);
	printf("enter the character\n");
	scanf(" %c",&ch);

	//predifined function for find the occurance of chara in a string
	r=strrchr(a,ch);
	start=a;
	value=((r-start)/sizeof(a[0]));
	if(r==0)
		printf("using predefined function %c not found! in %s\n",ch,a);
	else
	printf("by using predefined function last occurance of %c is in %s at the index positon of %d\n",ch,a,value);
	length=strlen_user(a);
	strrchr_user(a,ch,length);
}
int strlen_user(char *a)
{
	int i;
	for(i=0;a[i];i++);
	return i;
}
void strrchr_user(char *a,char b,int length)
{
	int i;
	//checking the value of a[i] to b[i] using a for loop
	for(i=length-1;a[0];i--)
	{
		if(a[i]==b)
		{
			printf("%c %c ",a[i],b);
			printf("by using userdefined function last occurance of %c is in %s at the index position %d\n",b,a,i);
			break;
		}
	}

	//every string is end with /0
	//if(a[i]=='\0')
	if(i==0)
	printf("using user defined function %c not found! in %s\n",b,a);
}
