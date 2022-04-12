#include<stdio.h>
void print_id(char *a,int i);
char *delete_fun(char*);
void main()
{
	int i=0,j;
	char a[30]="abcdabcdabcd",*p;
	print_id("v21oe3l1\n",i);
	p=delete_fun(a);
	printf("res=%s\n",p);
}
void print_id(char*a,int i)
{
	printf("%c",a[i]);
	i++;
	if(a[i]!='\0')
	print_id("v21oe3l1\n",i);
}	
char *delete_fun(char*p)
{
	int k,count=0,j,i;
	for(i=0;p[i];i++)
	{
		for(j=0;p[j];j++)
		{
			if(p[i]==p[j])
			{
				count++;
				printf("inside the if i:%c j:%c\n",p[i],p[j]);
				if(count==2)
				{
				for(k=j;p[k];k++)
				{
					p[k]=p[k+1];
				}
				p[k]='\0';
				printf("%s\n",p);
				count=0;
				}
			}
		}
	}
	return p;
}
