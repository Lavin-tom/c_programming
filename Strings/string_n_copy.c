//wap to copy the content of string a to string b,upto n value

#include<stdio.h>
//we use predefined functions of string so string.h header file is needed
#include<string.h>
void strcpy_n_user(char *a,char *b,int n);
int main()
{
	char a[10],b[10];
	int n;
	printf("enter the string a\n");
	scanf("%s",a);
	printf("enter the no\n");
	scanf("%d",&n);

	//predifined function for copying one string to another string
	strncpy(b,a,n);
	printf("after copying string b taken %d as value using predefined function %s\n",n,b);
	strcpy_n_user(a,b,n);
	printf("after copying string b taken %d as value using userdefined function %s\n",n,b);
}
void strcpy_n_user(char *a,char *b,int n)
{
	int i,count=0;

	//copying the value of a[i] to b[i] using a for loop
 
	for(i=0;count<n;i++)
	{
		b[i]=a[i];
		count++;
	}
	//every string end with '\0'
	b[n]='\0'; 

}
