#include<stdio.h>
char_remove(char *a,char ch);
int main()
{
	char a[10],ch;
	printf("enter the string\n");
	scanf("%s",a);
	printf("enter the character to remove\n");
	scanf(" %c",&ch);

	//function call to remove character
	char_remove(a,ch);
	printf("after removing string will be %s\n",a);
}
char_remove(char *a,char ch)
{
	int i,j;
	for(i=0;a[i];i++)
	{
		if(a[i]==ch)
		{
			for(j=i;a[j];j++)
				a[j]=a[j+1];
		i--;
		}

	}
}
