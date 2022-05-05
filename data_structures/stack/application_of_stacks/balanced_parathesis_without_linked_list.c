#include<stdio.h>
#include<stdlib.h>

#define max 100
char stack[max];
int top=-1;

void push(char);
char pop();
int main()
{
	int i=0;
	char data[max];
	printf("enter the data\n");
	scanf("%s",data);
	while(data[i])
	{
		if(data[i]=='{' || data[i]=='(' || data[i]=='[')
		{
			push(data[i]);
		}
		else if(data[i]==')')
		{
			if(pop()!='(' )
			{
				break;
			}
		}
		else if(data[i]=='}')
                {
                        if(pop()!='{' )
                        {
                                break;
                        }
                }
		else if(data[i]==']')
                {
                        if(pop()!='[' )
                        {
                                break;
                        }
                }
		i++;
	}
	if(data[i]=='\0' && top==-1)
		printf("%s is balanced parathesis\n",data);
	else
		printf("%s is not a balanced parathesis\n",data);
}
char pop()
{
	if(top==-1)
	{
		return -1;
	}
	return stack[top--];
}
void push (char ch)
{
	if(top==max-1)
	{
		printf("stack is full\n");
	}
	else
	{
		stack[++top]=ch;
	}
}
