//float binary using union

#include<stdio.h>
union test 
{
	int x;
	float y;
}v;
int main()
{
	float n;
	printf("enter the no to find the binary\n");
	scanf("%f",&n);
v.y=n;
for(int i=31;i>=0;i--)
{
	printf("%d",v.x>>i&1);
}
printf("\n");
}
