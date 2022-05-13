//wap to evaluate the postfix expression
//not yet completed
//still under development

#include<stdio.h>
#include<stdlib.h>
#define max 20
int top=-1;
int op1,op2,op;
int stack[max];
void push(char);
void pop(char);
int main()
{
	char exp[20];
	printf("enter the expression\n");
	scanf("%s",exp);

	for(int i=0;exp[i];i++)
	{
		if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
		{
					op1=exp[0];
					op2=exp[1];
					pop(exp[i]);
		}
		else
		{
			push(exp[i]);
		}
	}
	printf("%c\n",exp[0]);
}

//push
void push(char exp)
{
	stack[++top]=exp;
}

//pop
void pop(char exp)
{
	if(exp=='+')
		op=op1+op2;
	if(exp=='-')
		op=op1-op2;
	if(exp=='*')
		op=op1*op2;
	if(exp=='/')
		op=op1/op2;
		top--;
		push(op);
}
