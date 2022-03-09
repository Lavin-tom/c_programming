#include<stdio.h>
//we use predefined functions of string so string.h header file is needed
#include<string.h>
void strcpy_user(char *a,char *b);
int main()
{
	char a[10],b[10];
	printf("enter the string a\n");
	scanf("%s",a);

	//predifined function for copying one string to another string
	strcpy(b,a);
	printf("after copying string b using predefined function %s\n",b);
	strcpy_user(a,b);
	printf("after copying string b using userdefined function %s\n",b);
}
void strcpy_user(char *a,char *b)
{
	int i;

	//copying the value of a[i] to b[i] using a for loop
 
	for(i=0;a[i];i++)
		b[i]=a[i];

	//every string end with '\0'
	b[i]='\0'; 

}
