//wap to compare two strings upto an n value
//predefined function and user defined functions

#include<stdio.h>
//we use predefined functions of string so string.h header file is needed
#include<string.h>
int str_n_cmp_user(char *a,char *b,int n);
int main()
{
	char a[10],b[10];
	int r,res,n;
	printf("enter the first string\n");
	scanf("%s",a);
	printf("enter the second string\n");
	scanf("%s",b);
	printf("enter the no\n");
	scanf("%d",&n);

	//predifined function for compare two strings
	r=strncmp(b,a,n);
	if(r==0)
		printf("after compare string using predefined funcitons, first %d characters of string %s and %s are equal\n",n,a,b);
	else
		printf("after compare string using predefined functions,first %d characters of  string %s and %s are not equal\n",n,a,b); 
	
	//user defined function to check the string is equal of not 
	//function call 
	res=str_n_cmp_user(a,b,n);
	if(res==0)
		printf("after compare string using user defined functions,first %d characters of  string %s and %s are equal\n",n,a,b);
	else
	printf("after compare string using user defined functions,first %d characters of string %s and %s are not equal\n",n,a,b);
}
//user defined function body 
int str_n_cmp_user(char *a,char *b,int n)
{
	int i,count=0;

	//checking each  value from a[i] and b[i] using a for loop
 
	for(i=0;count<n;i++)
	{
		if(b[i]!=a[i])
			count++;
		break;
	}
	if(a[i]>b[i])         //if string not equal it return with ascii value if ascii value of a is high it return 1
		return 1;

	else if(a[i]<b[i])	//if ascii value is lower then it return -1
		return -1;

	else			//if both strings are same it return 0
		return 0;

}
