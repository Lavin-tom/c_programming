//display_prime.c

#include"myheader.h"
void display_prime(struct student *ptr)
{
	int count=0,k;
	if(ptr==NULL)
		{
			printf("List is empty\n");
		}
	else
	{
		while(ptr)
		{
			k=ptr->roll;
			count=0;
			for(int i=2;i<=k/2;i++)
			{
				if(k%i==0)
					count++;
			}
			if(count==0)
			{
			printf("\n%d %s\n",ptr->roll,ptr->name);
			}
			ptr=ptr->link;
		}
	}

}

