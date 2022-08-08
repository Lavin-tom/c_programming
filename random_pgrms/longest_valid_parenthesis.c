//find longest valid parenthesis
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter string\n");
	scanf("%s",str);
	int stack[10],top=-1;

	int l,open=0,close=0,count=0;
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
		{
			stack[top++]==str[i];
			if(count==0)
				open=i;
			count++;
		}
		else
		{
			top--;
			close=i;
		}
	}
	if(top==-1)
		printf("balanced parenthesis\n");
	else
		printf("unbalanced parenthesis\n");
	for(int i=open;i<=close;i++)
	{
		printf("%c ", str[i]);
	}
	printf("\n");
}
