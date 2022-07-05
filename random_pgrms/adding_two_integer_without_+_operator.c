//adding two integers without + operator

#include<stdio.h>
int main()
{
	int s,f;
	printf("enter first digit\n");
	scanf("%d",&f);
	printf("enter second digit\n");
	scanf("%d",&s);

	for(int i=1;i<=f;i++)
	s++;

	printf("sum: %d\n",s);
}
