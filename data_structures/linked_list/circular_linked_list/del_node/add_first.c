//add first
#include"myheader.h"
struct student *add_first(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;
	newnode=(struct student*)calloc(1,sizeof(struct student));

	if(newnode==NULL)
		printf("node not created\n");
	else
	{
		printf("enter roll no\n");
		scanf("%d",&newnode->roll);
		printf("enter name\n");
		scanf("%s",newnode->name);
		//forward linking
		newnode->link=ptr;
		if(ptr)
			//backward linking
		ptr->prev=newnode;
		ptr=newnode;
		}
	return ptr;
}
