//main.c

#include"myheader.h"
int main()
{
	int l;
	char data[20];
	printf("enter the string\n");
	scanf("%s",data);
	
	struct stack *head=NULL;
	l=strlen(data);
	for(int i=0;i<=l-1;i++)
	{
		if(data[i]== '{' || data[i]=='[' || data[i]== '(')
		{
			head=push(data[i],head);
		}
		if(data[i]=='}' || data[i]==']' || data[i]==')')
		{
			head=pop(l,data[i],head);
		}		

	}
	check(head);
}
