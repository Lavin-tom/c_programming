//wap to find the length of string with user defined functions and predifined functions

#include<stdio.h>
#include<string.h> 		
//here we use predefined functions so must include string.h header file
int strlen_user(char *a);
int main()
{
	char a[10];
	int i,k;
	printf("enter the string\n");
	scanf("%s",a);

	//strlen is a predefined functio for get the length of string
	k=strlen(a);		
	printf("length of string %s using predefined function is %d\n",a,k); 
	
	//user defined function to print the string length
	i=strlen_user(a);      
	printf("length of string %s using userdefined function is %d\n",a,i);

}
	int strlen_user(char *a)
	{
		int i;
		for(i=0;a[i];i++);  
		//for loop repeat until the a[i]=0, every string is end with '\0'
		//ascii value of \0 is 0, condition fail
		return i;
	}

