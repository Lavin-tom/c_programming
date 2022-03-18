//wap to compare two string

#include<stdio.h>
int string_length(char *n);
int compare(char *a,int length_one,char *b,int length_two);
int main()
{
	char a[10],b[10];
	int length_one,length_two,result;
	printf("enter first string\n");
	scanf("%s",a);
	
	printf("enter second string\n");
	scanf("%s",b);

	//find the length of two strings
	length_one=string_length(a);
	length_two=string_length(b);	

	//compare two strings
	result=compare(a,length_one,b,length_two);
	if(result==1)
		printf("%s and %s are same\n",a,b);
	else
		printf("%s and %s are different\n",a,b);
}

//length of string find using function
int string_length(char *n)
{
	int count=0,i;
	for(i=0;i<'\0';i++)
		count++;
	return count;
}

//compare two strings here
int compare(char *a,int length_one,char *b,int length_two)
{
	int i,j,count=0;
	if(length_one==length_two)
	{
		for(i=0;i<'\0';i++)
		{
			if(*(a+i)==*(b+i))
				count++;
		}
	}
	if(count==length_one)
	return 1;
}
