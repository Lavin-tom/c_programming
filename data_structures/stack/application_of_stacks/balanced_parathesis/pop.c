//pop.c

#include"myheader.h"
struct stack *pop(int l,char d,struct stack *ptr)
{
	if(l>1)
	{
	struct stack *temp=NULL;
		temp=ptr;
		if((temp->data=='{' && d=='}')|| (temp->data=='(' && d==')')||(temp->data=='[' && d==']'))
		{
			ptr=temp->link;
			free(temp);
			temp=NULL;
		}
		//else
		//	printf("not valid input\n");
	}
	return ptr;
}